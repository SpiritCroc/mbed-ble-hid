#ifndef NANO33_BLE_HID_H_
#define NANO33_BLE_HID_H_

#include "Mbed_BLE_HID.h"

/* -------------------------------------------------------------------------- */

/** Use "Nano33" as an alias for Arduino users. */
template<typename T>
using Nano33BleHID = BasicMbedBleHID<T>;

#include "services/HIDMouseService.h"
#include "services/HIDKeyboardService.h"
#include "services/HIDGamepadService.h"

using Nano33BleMouse    = Nano33BleHID<HIDMouseService>;
using Nano33BleKeyboard = Nano33BleHID<HIDKeyboardService>;
using Nano33BleGamepad  = Nano33BleHID<HIDGamepadService>;

// Media key mapping for HIDKeyboardService
const uint8_t MEDIA_KEY_PLAY_PAUSE      = 1 << 0;
const uint8_t MEDIA_KEY_CONFIGURATION   = 1 << 1;
const uint8_t MEDIA_KEY_SCAN_NEXT_TRACK = 1 << 2;
const uint8_t MEDIA_KEY_SCAN_PREV_TRACK = 1 << 3;
const uint8_t MEDIA_KEY_VOLUME_UP       = 1 << 4;
const uint8_t MEDIA_KEY_VOLUME_DOWN     = 1 << 5;
const uint8_t MEDIA_KEY_AC_FORWARD      = 1 << 6;
const uint8_t MEDIA_KEY_AC_BACK         = 1 << 7;

/* -------------------------------------------------------------------------- */

#endif // NANO33_BLE_HID_H_
