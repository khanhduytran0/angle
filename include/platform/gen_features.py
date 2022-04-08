#! /usr/bin/python3

# Copyright 2022 The ANGLE Project Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.
#
# gen_features.py:
#  Code generation for ANGLE features.
#  NOTE: don't run this script directly. Run scripts/run_code_generation.py.

from collections import namedtuple
import json
import os
import sys

feature_files = {
    'd3d_features.json': ('D3D', 'FeaturesD3D.h'),
    'frontend_features.json': ('Frontend', 'FrontendFeatures.h'),
    'gl_features.json': ('OpenGL', 'FeaturesGL.h'),
    'mtl_features.json': ('Metal', 'FeaturesMtl.h'),
    'vk_features.json': ('Vulkan', 'FeaturesVk.h'),
}

template_header = u"""// GENERATED FILE - DO NOT EDIT.
// Generated by {script_name} using data from {input_file_name}.
//
{description}

#ifndef ANGLE_PLATFORM_{NAME}_H_
#define ANGLE_PLATFORM_{NAME}_H_

#include "platform/Feature.h"

namespace angle
{{

struct {name} : FeatureSetBase
{{
    {name}();
    ~{name}();

{features}
}};

inline {name}::{name}()  = default;
inline {name}::~{name}() = default;

}}  // namespace angle

#endif  // ANGLE_PLATFORM_{NAME}_H_
"""

template_feature = u"""Feature {name} = {{
     "{display_name}", FeatureCategory::{category},
     {description},
     &members, {issue}
}};
"""


def main():
    if len(sys.argv) == 2 and sys.argv[1] == 'inputs':
        print(','.join(list(feature_files.keys())))
        return
    if len(sys.argv) == 2 and sys.argv[1] == 'outputs':
        print(','.join([header for (_, header) in feature_files.values()]))
        return

    for src_file, (category_prefix, header_file) in feature_files.items():
        with open(src_file) as fin:
            src = json.loads(fin.read())

        features_json = src['features']
        features = []

        for feature_json in features_json:
            issue = feature_json.get('issue', None)
            feature = template_feature.format(
                name=feature_json['name'],
                display_name=feature_json['display_name'],
                category=category_prefix + feature_json['category'],
                description='\n'.join('"' + line + '"' for line in feature_json['description']),
                issue='' if issue is None else '"' + issue + '"')

            features.append(feature)

        description = '\n'.join(['// ' + line for line in src['description']])
        name = header_file[:-2]

        header = template_header.format(
            script_name=os.path.basename(__file__),
            input_file_name=src_file,
            description=description.replace(src_file, header_file),
            name=name,
            NAME=name.upper(),
            features='\n'.join(features))

        with open(header_file, 'w') as fout:
            fout.write(header)
            fout.close()


if __name__ == '__main__':
    sys.exit(main())
