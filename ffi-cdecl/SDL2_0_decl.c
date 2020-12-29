#include <SDL2/SDL.h>

#include "ffi-cdecl.h"

cdecl_type(Uint64)
cdecl_type(Sint64)
cdecl_type(Uint32)
cdecl_type(Sint32)
cdecl_type(Uint16)
cdecl_type(Sint16)
cdecl_type(Uint8)
cdecl_type(Sint8)

cdecl_struct(SDL_Keysym)
cdecl_func(SDL_StartTextInput)
cdecl_func(SDL_StopTextInput)

cdecl_type(SDL_EventType)

cdecl_struct(_SDL_Joystick)
cdecl_type(SDL_Joystick)
cdecl_type(SDL_JoystickGUID)
cdecl_type(SDL_JoystickID)
cdecl_type(SDL_TouchID)
cdecl_type(SDL_FingerID)
cdecl_struct(SDL_Finger)
cdecl_type(SDL_Finger)

cdecl_struct(SDL_CommonEvent)
cdecl_type(SDL_CommonEvent)
cdecl_struct(SDL_DisplayEvent)
cdecl_type(SDL_DisplayEvent)
cdecl_struct(SDL_WindowEvent)
cdecl_type(SDL_WindowEvent)
cdecl_type(SDL_WindowEventID)
cdecl_struct(SDL_KeyboardEvent)
cdecl_type(SDL_KeyboardEvent)
cdecl_struct(SDL_TextEditingEvent)
cdecl_type(SDL_TextEditingEvent)
cdecl_struct(SDL_TextInputEvent)
cdecl_type(SDL_TextInputEvent)
cdecl_struct(SDL_MouseMotionEvent)
cdecl_type(SDL_MouseMotionEvent)
cdecl_struct(SDL_MouseButtonEvent)
cdecl_type(SDL_MouseButtonEvent)
cdecl_struct(SDL_MouseWheelEvent)
cdecl_type(SDL_MouseWheelEvent)
cdecl_struct(SDL_JoyAxisEvent)
cdecl_type(SDL_JoyAxisEvent)
cdecl_struct(SDL_JoyBallEvent)
cdecl_type(SDL_JoyBallEvent)
cdecl_struct(SDL_JoyHatEvent)
cdecl_type(SDL_JoyHatEvent)
cdecl_struct(SDL_JoyButtonEvent)
cdecl_type(SDL_JoyButtonEvent)
cdecl_struct(SDL_JoyDeviceEvent)
cdecl_type(SDL_JoyDeviceEvent)
cdecl_struct(SDL_ControllerAxisEvent)
cdecl_type(SDL_ControllerAxisEvent)
cdecl_struct(SDL_ControllerButtonEvent)
cdecl_type(SDL_ControllerButtonEvent)
cdecl_struct(SDL_ControllerDeviceEvent)
cdecl_type(SDL_ControllerDeviceEvent)
cdecl_struct(SDL_AudioDeviceEvent)
cdecl_type(SDL_AudioDeviceEvent)
cdecl_struct(SDL_SensorEvent)
cdecl_type(SDL_SensorEvent)
cdecl_struct(SDL_QuitEvent)
cdecl_type(SDL_QuitEvent)
cdecl_struct(SDL_UserEvent)
cdecl_type(SDL_UserEvent)
cdecl_type(SDL_DisplayMode)
//cdecl_struct(SDL_SysWMmsg)	// Platform-dependent
//cdecl_type(SDL_SysWMmsg)
cdecl_struct(SDL_SysWMEvent)
cdecl_type(SDL_SysWMEvent)
cdecl_struct(SDL_TouchFingerEvent)
cdecl_type(SDL_TouchFingerEvent)
cdecl_struct(SDL_MultiGestureEvent)
cdecl_type(SDL_MultiGestureEvent)
cdecl_struct(SDL_DollarGestureEvent)
cdecl_type(SDL_DollarGestureEvent)
cdecl_struct(SDL_DropEvent)
cdecl_type(SDL_DropEvent)
cdecl_union(SDL_Event)

cdecl_struct(SDL_Rect)
cdecl_type(SDL_Rect)
cdecl_struct(SDL_Window)
cdecl_type(SDL_Window)
cdecl_struct(SDL_Renderer)
cdecl_type(SDL_Renderer)
cdecl_struct(SDL_Texture)
cdecl_type(SDL_Texture)
cdecl_struct(SDL_Color)
cdecl_type(SDL_Color)
cdecl_struct(SDL_Palette)
cdecl_type(SDL_Palette)
cdecl_type(SDL_PixelFormat)
cdecl_struct(SDL_PixelFormat)
//cdecl_struct(SDL_BlitMap) // Private
//cdecl_type(SDL_BlitMap)
cdecl_struct(SDL_Surface)
cdecl_type(SDL_Surface)

cdecl_func(SDL_Init)
cdecl_func(SDL_WasInit)
cdecl_func(SDL_SetMainReady)
cdecl_func(SDL_Quit)
cdecl_func(SDL_WaitEvent)
cdecl_func(SDL_WaitEventTimeout)
cdecl_func(SDL_PollEvent)
cdecl_func(SDL_GetTicks)
cdecl_func(SDL_Delay)
cdecl_func(SDL_GetCurrentDisplayMode)
cdecl_func(SDL_EnableScreenSaver)
cdecl_func(SDL_CreateWindow)
cdecl_func(SDL_CreateRenderer)
cdecl_func(SDL_CreateWindowAndRenderer)
cdecl_func(SDL_SetRenderDrawColor)
cdecl_func(SDL_RenderClear)
cdecl_func(SDL_RenderPresent)
cdecl_func(SDL_RenderCopy)
cdecl_func(SDL_CreateTexture)
cdecl_func(SDL_UpdateTexture)
cdecl_func(SDL_DestroyTexture)
cdecl_func(SDL_SetWindowTitle)

cdecl_type(SDL_blit)
cdecl_func(SDL_CreateRGBSurface)
cdecl_func(SDL_CreateRGBSurfaceFrom)
cdecl_func(SDL_CreateRGBSurfaceWithFormatFrom)
cdecl_func(SDL_FreeSurface)
cdecl_func(SDL_SetSurfacePalette)
cdecl_func(SDL_LockSurface)
cdecl_func(SDL_UnlockSurface)
cdecl_func(SDL_SetWindowIcon)

cdecl_func(SDL_GetBasePath)
cdecl_func(SDL_GetPrefPath)
cdecl_type(SDL_PowerState)
cdecl_func(SDL_GetPowerInfo)
cdecl_func(SDL_GetPlatform)

cdecl_type(SDL_bool)
cdecl_func(SDL_HasClipboardText)
cdecl_func(SDL_GetClipboardText)
cdecl_func(SDL_SetClipboardText)
cdecl_func(SDL_GetError)

cdecl_func(SDL_SetHint)

cdecl_func(SDL_NumJoysticks)
cdecl_func(SDL_JoystickNameForIndex)
cdecl_func(SDL_JoystickOpen)
cdecl_func(SDL_JoystickName)
cdecl_func(SDL_JoystickGetDeviceGUID)
cdecl_func(SDL_JoystickGetGUID)
cdecl_func(SDL_JoystickGetGUIDString)
cdecl_func(SDL_JoystickGetGUIDFromString)
cdecl_func(SDL_JoystickGetAttached)
cdecl_func(SDL_JoystickInstanceID)
cdecl_func(SDL_JoystickNumAxes)
cdecl_func(SDL_JoystickNumBalls)
cdecl_func(SDL_JoystickNumHats)
cdecl_func(SDL_JoystickNumButtons)
cdecl_func(SDL_JoystickUpdate)
cdecl_func(SDL_JoystickEventState)
cdecl_func(SDL_JoystickGetAxis)
cdecl_func(SDL_JoystickGetHat)
cdecl_func(SDL_JoystickGetBall)
cdecl_func(SDL_JoystickGetButton)
cdecl_func(SDL_JoystickClose)

cdecl_struct(_SDL_GameController)
cdecl_type(SDL_GameController)
cdecl_type(SDL_GameControllerBindType)
cdecl_struct(SDL_GameControllerButtonBind)
cdecl_type(SDL_GameControllerButtonBind)
cdecl_func(SDL_GameControllerAddMapping)
cdecl_func(SDL_GameControllerMappingForGUID)
cdecl_func(SDL_GameControllerMapping)
cdecl_func(SDL_IsGameController)
cdecl_func(SDL_GameControllerNameForIndex)
cdecl_func(SDL_GameControllerOpen)
cdecl_func(SDL_GameControllerName)
cdecl_func(SDL_GameControllerGetAttached)
cdecl_func(SDL_GameControllerGetJoystick)
cdecl_func(SDL_GameControllerEventState)
cdecl_func(SDL_GameControllerUpdate)
cdecl_func(SDL_GameControllerRumble)

cdecl_type(SDL_GameControllerAxis)
cdecl_func(SDL_GameControllerGetAxisFromString)
cdecl_func(SDL_GameControllerGetStringForAxis)
cdecl_func(SDL_GameControllerGetBindForAxis)
cdecl_func(SDL_GameControllerGetAxis)

cdecl_type(SDL_GameControllerButton)
cdecl_func(SDL_GameControllerGetButtonFromString)
cdecl_func(SDL_GameControllerGetStringForButton)
cdecl_func(SDL_GameControllerGetBindForButton)
cdecl_func(SDL_GameControllerGetButton)
cdecl_func(SDL_GameControllerClose)

cdecl_const(SDL_HAT_CENTERED)
cdecl_const(SDL_HAT_UP)
cdecl_const(SDL_HAT_RIGHT)
cdecl_const(SDL_HAT_DOWN)
cdecl_const(SDL_HAT_LEFT)
cdecl_const(SDL_HAT_RIGHTUP)
cdecl_const(SDL_HAT_RIGHTDOWN)
cdecl_const(SDL_HAT_LEFTUP)
cdecl_const(SDL_HAT_LEFTDOWN)

cdecl_func(SDL_GetNumTouchDevices)
cdecl_func(SDL_GetTouchDevice)
cdecl_func(SDL_GetNumTouchFingers)
cdecl_func(SDL_GetTouchFinger)

cdecl_const(SDL_INIT_TIMER)
cdecl_const(SDL_INIT_AUDIO)
cdecl_const(SDL_INIT_VIDEO)
cdecl_const(SDL_INIT_JOYSTICK)
cdecl_const(SDL_INIT_HAPTIC)
cdecl_const(SDL_INIT_GAMECONTROLLER)
cdecl_const(SDL_INIT_EVENTS)
cdecl_const(SDL_INIT_NOPARACHUTE)
cdecl_const(SDL_INIT_EVERYTHING)
cdecl_const(SDL_WINDOWPOS_UNDEFINED)
cdecl_const(SDL_WINDOW_FULLSCREEN)
cdecl_const(SDL_WINDOW_RESIZABLE)
cdecl_const(SDL_WINDOW_FULLSCREEN_DESKTOP)
cdecl_const(SDL_WINDOW_ALLOW_HIGHDPI)
cdecl_type(SDL_TextureAccess)
//cdecl_const(SDL_TEXTUREACCESS_STREAMING)
cdecl_const(SDL_PIXELFORMAT_ARGB8888)
cdecl_const(SDL_PIXELFORMAT_RGBA8888)
cdecl_const(SDL_PIXELFORMAT_ABGR8888)
cdecl_const(SDL_PIXELFORMAT_BGRA8888)
cdecl_const(SDL_PIXELFORMAT_RGBA32)
cdecl_const(SDL_PIXELFORMAT_ARGB32)
cdecl_const(SDL_PIXELFORMAT_BGRA32)
cdecl_const(SDL_PIXELFORMAT_ABGR32)

cdecl_struct(SDL_version)
cdecl_func(SDL_GetVersion)
