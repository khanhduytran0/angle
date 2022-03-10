// GENERATED FILE - DO NOT EDIT.
// Generated by generate_loader.py using data from egl.xml and egl_angle_ext.xml.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// egl_loader_autogen.h:
//   Simple EGL function loader.

#ifndef LIBEGL_EGL_LOADER_AUTOGEN_H_
#define LIBEGL_EGL_LOADER_AUTOGEN_H_

#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <export.h>

#define EGL_ChooseConfig l_EGL_ChooseConfig
#define EGL_CopyBuffers l_EGL_CopyBuffers
#define EGL_CreateContext l_EGL_CreateContext
#define EGL_CreatePbufferSurface l_EGL_CreatePbufferSurface
#define EGL_CreatePixmapSurface l_EGL_CreatePixmapSurface
#define EGL_CreateWindowSurface l_EGL_CreateWindowSurface
#define EGL_DestroyContext l_EGL_DestroyContext
#define EGL_DestroySurface l_EGL_DestroySurface
#define EGL_GetConfigAttrib l_EGL_GetConfigAttrib
#define EGL_GetConfigs l_EGL_GetConfigs
#define EGL_GetCurrentDisplay l_EGL_GetCurrentDisplay
#define EGL_GetCurrentSurface l_EGL_GetCurrentSurface
#define EGL_GetDisplay l_EGL_GetDisplay
#define EGL_GetError l_EGL_GetError
#define EGL_GetProcAddress l_EGL_GetProcAddress
#define EGL_Initialize l_EGL_Initialize
#define EGL_MakeCurrent l_EGL_MakeCurrent
#define EGL_QueryContext l_EGL_QueryContext
#define EGL_QueryString l_EGL_QueryString
#define EGL_QuerySurface l_EGL_QuerySurface
#define EGL_SwapBuffers l_EGL_SwapBuffers
#define EGL_Terminate l_EGL_Terminate
#define EGL_WaitGL l_EGL_WaitGL
#define EGL_WaitNative l_EGL_WaitNative
#define EGL_BindTexImage l_EGL_BindTexImage
#define EGL_ReleaseTexImage l_EGL_ReleaseTexImage
#define EGL_SurfaceAttrib l_EGL_SurfaceAttrib
#define EGL_SwapInterval l_EGL_SwapInterval
#define EGL_BindAPI l_EGL_BindAPI
#define EGL_QueryAPI l_EGL_QueryAPI
#define EGL_CreatePbufferFromClientBuffer l_EGL_CreatePbufferFromClientBuffer
#define EGL_ReleaseThread l_EGL_ReleaseThread
#define EGL_WaitClient l_EGL_WaitClient
#define EGL_GetCurrentContext l_EGL_GetCurrentContext
#define EGL_CreateSync l_EGL_CreateSync
#define EGL_DestroySync l_EGL_DestroySync
#define EGL_ClientWaitSync l_EGL_ClientWaitSync
#define EGL_GetSyncAttrib l_EGL_GetSyncAttrib
#define EGL_CreateImage l_EGL_CreateImage
#define EGL_DestroyImage l_EGL_DestroyImage
#define EGL_GetPlatformDisplay l_EGL_GetPlatformDisplay
#define EGL_CreatePlatformWindowSurface l_EGL_CreatePlatformWindowSurface
#define EGL_CreatePlatformPixmapSurface l_EGL_CreatePlatformPixmapSurface
#define EGL_WaitSync l_EGL_WaitSync
#define EGL_SetBlobCacheFuncsANDROID l_EGL_SetBlobCacheFuncsANDROID
#define EGL_CreateNativeClientBufferANDROID l_EGL_CreateNativeClientBufferANDROID
#define EGL_GetCompositorTimingANDROID l_EGL_GetCompositorTimingANDROID
#define EGL_GetCompositorTimingSupportedANDROID l_EGL_GetCompositorTimingSupportedANDROID
#define EGL_GetFrameTimestampSupportedANDROID l_EGL_GetFrameTimestampSupportedANDROID
#define EGL_GetFrameTimestampsANDROID l_EGL_GetFrameTimestampsANDROID
#define EGL_GetNextFrameIdANDROID l_EGL_GetNextFrameIdANDROID
#define EGL_GetNativeClientBufferANDROID l_EGL_GetNativeClientBufferANDROID
#define EGL_DupNativeFenceFDANDROID l_EGL_DupNativeFenceFDANDROID
#define EGL_PresentationTimeANDROID l_EGL_PresentationTimeANDROID
#define EGL_CreateDeviceANGLE l_EGL_CreateDeviceANGLE
#define EGL_ReleaseDeviceANGLE l_EGL_ReleaseDeviceANGLE
#define EGL_QueryDisplayAttribANGLE l_EGL_QueryDisplayAttribANGLE
#define EGL_QueryStringiANGLE l_EGL_QueryStringiANGLE
#define EGL_ForceGPUSwitchANGLE l_EGL_ForceGPUSwitchANGLE
#define EGL_HandleGPUSwitchANGLE l_EGL_HandleGPUSwitchANGLE
#define EGL_ReacquireHighPowerGPUANGLE l_EGL_ReacquireHighPowerGPUANGLE
#define EGL_ReleaseHighPowerGPUANGLE l_EGL_ReleaseHighPowerGPUANGLE
#define EGL_PrepareSwapBuffersANGLE l_EGL_PrepareSwapBuffersANGLE
#define EGL_ProgramCacheGetAttribANGLE l_EGL_ProgramCacheGetAttribANGLE
#define EGL_ProgramCachePopulateANGLE l_EGL_ProgramCachePopulateANGLE
#define EGL_ProgramCacheQueryANGLE l_EGL_ProgramCacheQueryANGLE
#define EGL_ProgramCacheResizeANGLE l_EGL_ProgramCacheResizeANGLE
#define EGL_QuerySurfacePointerANGLE l_EGL_QuerySurfacePointerANGLE
#define EGL_CreateStreamProducerD3DTextureANGLE l_EGL_CreateStreamProducerD3DTextureANGLE
#define EGL_StreamPostD3DTextureANGLE l_EGL_StreamPostD3DTextureANGLE
#define EGL_SwapBuffersWithFrameTokenANGLE l_EGL_SwapBuffersWithFrameTokenANGLE
#define EGL_GetMscRateANGLE l_EGL_GetMscRateANGLE
#define EGL_ExportVkImageANGLE l_EGL_ExportVkImageANGLE
#define EGL_GetSyncValuesCHROMIUM l_EGL_GetSyncValuesCHROMIUM
#define EGL_QueryDeviceAttribEXT l_EGL_QueryDeviceAttribEXT
#define EGL_QueryDeviceStringEXT l_EGL_QueryDeviceStringEXT
#define EGL_QueryDisplayAttribEXT l_EGL_QueryDisplayAttribEXT
#define EGL_QueryDmaBufFormatsEXT l_EGL_QueryDmaBufFormatsEXT
#define EGL_QueryDmaBufModifiersEXT l_EGL_QueryDmaBufModifiersEXT
#define EGL_CreatePlatformPixmapSurfaceEXT l_EGL_CreatePlatformPixmapSurfaceEXT
#define EGL_CreatePlatformWindowSurfaceEXT l_EGL_CreatePlatformWindowSurfaceEXT
#define EGL_GetPlatformDisplayEXT l_EGL_GetPlatformDisplayEXT
#define EGL_DebugMessageControlKHR l_EGL_DebugMessageControlKHR
#define EGL_LabelObjectKHR l_EGL_LabelObjectKHR
#define EGL_QueryDebugKHR l_EGL_QueryDebugKHR
#define EGL_ClientWaitSyncKHR l_EGL_ClientWaitSyncKHR
#define EGL_CreateSyncKHR l_EGL_CreateSyncKHR
#define EGL_DestroySyncKHR l_EGL_DestroySyncKHR
#define EGL_GetSyncAttribKHR l_EGL_GetSyncAttribKHR
#define EGL_CreateImageKHR l_EGL_CreateImageKHR
#define EGL_DestroyImageKHR l_EGL_DestroyImageKHR
#define EGL_LockSurfaceKHR l_EGL_LockSurfaceKHR
#define EGL_QuerySurface64KHR l_EGL_QuerySurface64KHR
#define EGL_UnlockSurfaceKHR l_EGL_UnlockSurfaceKHR
#define EGL_SetDamageRegionKHR l_EGL_SetDamageRegionKHR
#define EGL_SignalSyncKHR l_EGL_SignalSyncKHR
#define EGL_CreateStreamKHR l_EGL_CreateStreamKHR
#define EGL_DestroyStreamKHR l_EGL_DestroyStreamKHR
#define EGL_QueryStreamKHR l_EGL_QueryStreamKHR
#define EGL_QueryStreamu64KHR l_EGL_QueryStreamu64KHR
#define EGL_StreamAttribKHR l_EGL_StreamAttribKHR
#define EGL_StreamConsumerAcquireKHR l_EGL_StreamConsumerAcquireKHR
#define EGL_StreamConsumerGLTextureExternalKHR l_EGL_StreamConsumerGLTextureExternalKHR
#define EGL_StreamConsumerReleaseKHR l_EGL_StreamConsumerReleaseKHR
#define EGL_SwapBuffersWithDamageKHR l_EGL_SwapBuffersWithDamageKHR
#define EGL_WaitSyncKHR l_EGL_WaitSyncKHR
#define EGL_PostSubBufferNV l_EGL_PostSubBufferNV
#define EGL_StreamConsumerGLTextureExternalAttribsNV l_EGL_StreamConsumerGLTextureExternalAttribsNV
ANGLE_NO_EXPORT extern PFNEGLCHOOSECONFIGPROC l_EGL_ChooseConfig;
ANGLE_NO_EXPORT extern PFNEGLCOPYBUFFERSPROC l_EGL_CopyBuffers;
ANGLE_NO_EXPORT extern PFNEGLCREATECONTEXTPROC l_EGL_CreateContext;
ANGLE_NO_EXPORT extern PFNEGLCREATEPBUFFERSURFACEPROC l_EGL_CreatePbufferSurface;
ANGLE_NO_EXPORT extern PFNEGLCREATEPIXMAPSURFACEPROC l_EGL_CreatePixmapSurface;
ANGLE_NO_EXPORT extern PFNEGLCREATEWINDOWSURFACEPROC l_EGL_CreateWindowSurface;
ANGLE_NO_EXPORT extern PFNEGLDESTROYCONTEXTPROC l_EGL_DestroyContext;
ANGLE_NO_EXPORT extern PFNEGLDESTROYSURFACEPROC l_EGL_DestroySurface;
ANGLE_NO_EXPORT extern PFNEGLGETCONFIGATTRIBPROC l_EGL_GetConfigAttrib;
ANGLE_NO_EXPORT extern PFNEGLGETCONFIGSPROC l_EGL_GetConfigs;
ANGLE_NO_EXPORT extern PFNEGLGETCURRENTDISPLAYPROC l_EGL_GetCurrentDisplay;
ANGLE_NO_EXPORT extern PFNEGLGETCURRENTSURFACEPROC l_EGL_GetCurrentSurface;
ANGLE_NO_EXPORT extern PFNEGLGETDISPLAYPROC l_EGL_GetDisplay;
ANGLE_NO_EXPORT extern PFNEGLGETERRORPROC l_EGL_GetError;
ANGLE_NO_EXPORT extern PFNEGLGETPROCADDRESSPROC l_EGL_GetProcAddress;
ANGLE_NO_EXPORT extern PFNEGLINITIALIZEPROC l_EGL_Initialize;
ANGLE_NO_EXPORT extern PFNEGLMAKECURRENTPROC l_EGL_MakeCurrent;
ANGLE_NO_EXPORT extern PFNEGLQUERYCONTEXTPROC l_EGL_QueryContext;
ANGLE_NO_EXPORT extern PFNEGLQUERYSTRINGPROC l_EGL_QueryString;
ANGLE_NO_EXPORT extern PFNEGLQUERYSURFACEPROC l_EGL_QuerySurface;
ANGLE_NO_EXPORT extern PFNEGLSWAPBUFFERSPROC l_EGL_SwapBuffers;
ANGLE_NO_EXPORT extern PFNEGLTERMINATEPROC l_EGL_Terminate;
ANGLE_NO_EXPORT extern PFNEGLWAITGLPROC l_EGL_WaitGL;
ANGLE_NO_EXPORT extern PFNEGLWAITNATIVEPROC l_EGL_WaitNative;
ANGLE_NO_EXPORT extern PFNEGLBINDTEXIMAGEPROC l_EGL_BindTexImage;
ANGLE_NO_EXPORT extern PFNEGLRELEASETEXIMAGEPROC l_EGL_ReleaseTexImage;
ANGLE_NO_EXPORT extern PFNEGLSURFACEATTRIBPROC l_EGL_SurfaceAttrib;
ANGLE_NO_EXPORT extern PFNEGLSWAPINTERVALPROC l_EGL_SwapInterval;
ANGLE_NO_EXPORT extern PFNEGLBINDAPIPROC l_EGL_BindAPI;
ANGLE_NO_EXPORT extern PFNEGLQUERYAPIPROC l_EGL_QueryAPI;
ANGLE_NO_EXPORT extern PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC l_EGL_CreatePbufferFromClientBuffer;
ANGLE_NO_EXPORT extern PFNEGLRELEASETHREADPROC l_EGL_ReleaseThread;
ANGLE_NO_EXPORT extern PFNEGLWAITCLIENTPROC l_EGL_WaitClient;
ANGLE_NO_EXPORT extern PFNEGLGETCURRENTCONTEXTPROC l_EGL_GetCurrentContext;
ANGLE_NO_EXPORT extern PFNEGLCREATESYNCPROC l_EGL_CreateSync;
ANGLE_NO_EXPORT extern PFNEGLDESTROYSYNCPROC l_EGL_DestroySync;
ANGLE_NO_EXPORT extern PFNEGLCLIENTWAITSYNCPROC l_EGL_ClientWaitSync;
ANGLE_NO_EXPORT extern PFNEGLGETSYNCATTRIBPROC l_EGL_GetSyncAttrib;
ANGLE_NO_EXPORT extern PFNEGLCREATEIMAGEPROC l_EGL_CreateImage;
ANGLE_NO_EXPORT extern PFNEGLDESTROYIMAGEPROC l_EGL_DestroyImage;
ANGLE_NO_EXPORT extern PFNEGLGETPLATFORMDISPLAYPROC l_EGL_GetPlatformDisplay;
ANGLE_NO_EXPORT extern PFNEGLCREATEPLATFORMWINDOWSURFACEPROC l_EGL_CreatePlatformWindowSurface;
ANGLE_NO_EXPORT extern PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC l_EGL_CreatePlatformPixmapSurface;
ANGLE_NO_EXPORT extern PFNEGLWAITSYNCPROC l_EGL_WaitSync;
ANGLE_NO_EXPORT extern PFNEGLSETBLOBCACHEFUNCSANDROIDPROC l_EGL_SetBlobCacheFuncsANDROID;
ANGLE_NO_EXPORT extern PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC
    l_EGL_CreateNativeClientBufferANDROID;
ANGLE_NO_EXPORT extern PFNEGLGETCOMPOSITORTIMINGANDROIDPROC l_EGL_GetCompositorTimingANDROID;
ANGLE_NO_EXPORT extern PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC
    l_EGL_GetCompositorTimingSupportedANDROID;
ANGLE_NO_EXPORT extern PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC
    l_EGL_GetFrameTimestampSupportedANDROID;
ANGLE_NO_EXPORT extern PFNEGLGETFRAMETIMESTAMPSANDROIDPROC l_EGL_GetFrameTimestampsANDROID;
ANGLE_NO_EXPORT extern PFNEGLGETNEXTFRAMEIDANDROIDPROC l_EGL_GetNextFrameIdANDROID;
ANGLE_NO_EXPORT extern PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC l_EGL_GetNativeClientBufferANDROID;
ANGLE_NO_EXPORT extern PFNEGLDUPNATIVEFENCEFDANDROIDPROC l_EGL_DupNativeFenceFDANDROID;
ANGLE_NO_EXPORT extern PFNEGLPRESENTATIONTIMEANDROIDPROC l_EGL_PresentationTimeANDROID;
ANGLE_NO_EXPORT extern PFNEGLCREATEDEVICEANGLEPROC l_EGL_CreateDeviceANGLE;
ANGLE_NO_EXPORT extern PFNEGLRELEASEDEVICEANGLEPROC l_EGL_ReleaseDeviceANGLE;
ANGLE_NO_EXPORT extern PFNEGLQUERYDISPLAYATTRIBANGLEPROC l_EGL_QueryDisplayAttribANGLE;
ANGLE_NO_EXPORT extern PFNEGLQUERYSTRINGIANGLEPROC l_EGL_QueryStringiANGLE;
ANGLE_NO_EXPORT extern PFNEGLFORCEGPUSWITCHANGLEPROC l_EGL_ForceGPUSwitchANGLE;
ANGLE_NO_EXPORT extern PFNEGLHANDLEGPUSWITCHANGLEPROC l_EGL_HandleGPUSwitchANGLE;
ANGLE_NO_EXPORT extern PFNEGLREACQUIREHIGHPOWERGPUANGLEPROC l_EGL_ReacquireHighPowerGPUANGLE;
ANGLE_NO_EXPORT extern PFNEGLRELEASEHIGHPOWERGPUANGLEPROC l_EGL_ReleaseHighPowerGPUANGLE;
ANGLE_NO_EXPORT extern PFNEGLPREPARESWAPBUFFERSANGLEPROC l_EGL_PrepareSwapBuffersANGLE;
ANGLE_NO_EXPORT extern PFNEGLPROGRAMCACHEGETATTRIBANGLEPROC l_EGL_ProgramCacheGetAttribANGLE;
ANGLE_NO_EXPORT extern PFNEGLPROGRAMCACHEPOPULATEANGLEPROC l_EGL_ProgramCachePopulateANGLE;
ANGLE_NO_EXPORT extern PFNEGLPROGRAMCACHEQUERYANGLEPROC l_EGL_ProgramCacheQueryANGLE;
ANGLE_NO_EXPORT extern PFNEGLPROGRAMCACHERESIZEANGLEPROC l_EGL_ProgramCacheResizeANGLE;
ANGLE_NO_EXPORT extern PFNEGLQUERYSURFACEPOINTERANGLEPROC l_EGL_QuerySurfacePointerANGLE;
ANGLE_NO_EXPORT extern PFNEGLCREATESTREAMPRODUCERD3DTEXTUREANGLEPROC
    l_EGL_CreateStreamProducerD3DTextureANGLE;
ANGLE_NO_EXPORT extern PFNEGLSTREAMPOSTD3DTEXTUREANGLEPROC l_EGL_StreamPostD3DTextureANGLE;
ANGLE_NO_EXPORT extern PFNEGLSWAPBUFFERSWITHFRAMETOKENANGLEPROC
    l_EGL_SwapBuffersWithFrameTokenANGLE;
ANGLE_NO_EXPORT extern PFNEGLGETMSCRATEANGLEPROC l_EGL_GetMscRateANGLE;
ANGLE_NO_EXPORT extern PFNEGLEXPORTVKIMAGEANGLEPROC l_EGL_ExportVkImageANGLE;
ANGLE_NO_EXPORT extern PFNEGLGETSYNCVALUESCHROMIUMPROC l_EGL_GetSyncValuesCHROMIUM;
ANGLE_NO_EXPORT extern PFNEGLQUERYDEVICEATTRIBEXTPROC l_EGL_QueryDeviceAttribEXT;
ANGLE_NO_EXPORT extern PFNEGLQUERYDEVICESTRINGEXTPROC l_EGL_QueryDeviceStringEXT;
ANGLE_NO_EXPORT extern PFNEGLQUERYDISPLAYATTRIBEXTPROC l_EGL_QueryDisplayAttribEXT;
ANGLE_NO_EXPORT extern PFNEGLQUERYDMABUFFORMATSEXTPROC l_EGL_QueryDmaBufFormatsEXT;
ANGLE_NO_EXPORT extern PFNEGLQUERYDMABUFMODIFIERSEXTPROC l_EGL_QueryDmaBufModifiersEXT;
ANGLE_NO_EXPORT extern PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC
    l_EGL_CreatePlatformPixmapSurfaceEXT;
ANGLE_NO_EXPORT extern PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC
    l_EGL_CreatePlatformWindowSurfaceEXT;
ANGLE_NO_EXPORT extern PFNEGLGETPLATFORMDISPLAYEXTPROC l_EGL_GetPlatformDisplayEXT;
ANGLE_NO_EXPORT extern PFNEGLDEBUGMESSAGECONTROLKHRPROC l_EGL_DebugMessageControlKHR;
ANGLE_NO_EXPORT extern PFNEGLLABELOBJECTKHRPROC l_EGL_LabelObjectKHR;
ANGLE_NO_EXPORT extern PFNEGLQUERYDEBUGKHRPROC l_EGL_QueryDebugKHR;
ANGLE_NO_EXPORT extern PFNEGLCLIENTWAITSYNCKHRPROC l_EGL_ClientWaitSyncKHR;
ANGLE_NO_EXPORT extern PFNEGLCREATESYNCKHRPROC l_EGL_CreateSyncKHR;
ANGLE_NO_EXPORT extern PFNEGLDESTROYSYNCKHRPROC l_EGL_DestroySyncKHR;
ANGLE_NO_EXPORT extern PFNEGLGETSYNCATTRIBKHRPROC l_EGL_GetSyncAttribKHR;
ANGLE_NO_EXPORT extern PFNEGLCREATEIMAGEKHRPROC l_EGL_CreateImageKHR;
ANGLE_NO_EXPORT extern PFNEGLDESTROYIMAGEKHRPROC l_EGL_DestroyImageKHR;
ANGLE_NO_EXPORT extern PFNEGLLOCKSURFACEKHRPROC l_EGL_LockSurfaceKHR;
ANGLE_NO_EXPORT extern PFNEGLQUERYSURFACE64KHRPROC l_EGL_QuerySurface64KHR;
ANGLE_NO_EXPORT extern PFNEGLUNLOCKSURFACEKHRPROC l_EGL_UnlockSurfaceKHR;
ANGLE_NO_EXPORT extern PFNEGLSETDAMAGEREGIONKHRPROC l_EGL_SetDamageRegionKHR;
ANGLE_NO_EXPORT extern PFNEGLSIGNALSYNCKHRPROC l_EGL_SignalSyncKHR;
ANGLE_NO_EXPORT extern PFNEGLCREATESTREAMKHRPROC l_EGL_CreateStreamKHR;
ANGLE_NO_EXPORT extern PFNEGLDESTROYSTREAMKHRPROC l_EGL_DestroyStreamKHR;
ANGLE_NO_EXPORT extern PFNEGLQUERYSTREAMKHRPROC l_EGL_QueryStreamKHR;
ANGLE_NO_EXPORT extern PFNEGLQUERYSTREAMU64KHRPROC l_EGL_QueryStreamu64KHR;
ANGLE_NO_EXPORT extern PFNEGLSTREAMATTRIBKHRPROC l_EGL_StreamAttribKHR;
ANGLE_NO_EXPORT extern PFNEGLSTREAMCONSUMERACQUIREKHRPROC l_EGL_StreamConsumerAcquireKHR;
ANGLE_NO_EXPORT extern PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC
    l_EGL_StreamConsumerGLTextureExternalKHR;
ANGLE_NO_EXPORT extern PFNEGLSTREAMCONSUMERRELEASEKHRPROC l_EGL_StreamConsumerReleaseKHR;
ANGLE_NO_EXPORT extern PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC l_EGL_SwapBuffersWithDamageKHR;
ANGLE_NO_EXPORT extern PFNEGLWAITSYNCKHRPROC l_EGL_WaitSyncKHR;
ANGLE_NO_EXPORT extern PFNEGLPOSTSUBBUFFERNVPROC l_EGL_PostSubBufferNV;
ANGLE_NO_EXPORT extern PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALATTRIBSNVPROC
    l_EGL_StreamConsumerGLTextureExternalAttribsNV;

namespace angle
{
using GenericProc = void (*)();
using LoadProc    = GenericProc(KHRONOS_APIENTRY *)(const char *);
ANGLE_NO_EXPORT void LoadEGL_EGL(LoadProc loadProc);
}  // namespace angle

#endif  // LIBEGL_EGL_LOADER_AUTOGEN_H_
