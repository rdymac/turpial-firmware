/**
 * @file BLEPreferences.h
 * @author Locha Mesh Developers (contact@locha.io)
 * @brief 
 * @version 0.1
 * @date 2019-11-25
 * 
 * @copyright Copyright (c) 2019 Locha Mesh project developers
 * @license Apache 2.0, see LICENSE file for details
 * 
 */

#ifndef BLE_PREFERENCES_H
#define BLE_PREFERENCES_H

#include "esp_err.h"

#include "Server.h"

namespace ble_preferences {

void start(ble::ServerParams server_params);
void stop();

} // namespace ble_preferences

#endif // BLE_PREFERENCES_H