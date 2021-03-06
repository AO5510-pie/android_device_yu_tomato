/*
 * Copyright (C) 2020 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <hardware/power.h>
#include <utils.h>

void set_device_specific_feature(feature_t feature, int state) {
    switch (feature) {
        case POWER_FEATURE_DOUBLE_TAP_TO_WAKE:
            sysfs_write("/sys/devices/virtual/touchscreen/touchscreen_dev/gesture_ctrl", state ? "double_click=true" : "double_click=false");
            break;
        default:
            break;
    }
}
