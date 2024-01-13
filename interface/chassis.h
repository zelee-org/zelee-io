// Copyright 2024 zelee-org
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


//  Created Date: 2024-1-13
//  Author: daohu527

#pragma once

#include <string>

namespace zelee {
namespace control {

enum class ErrorState {
  LOW_POWER,
  MOTOR_FAILURE,
};


class Chassis {
 public:
  /**
   * @brief Get vehicle speed
   *
   * @return double vehicle speed (m/s)
   */
  virtual double GetSpeed() = 0;

  /**
   * @brief Get vehicle wheel angle
   *
   * @return double wheel angle (radian)
   */
  virtual double GetWheelAngle() = 0;

  /**
   * @brief Get the Battery Level
   *
   * @return double Battery Level [0.0, 100.0]
   */
  virtual double GetBatteryLevel() = 0;

  /**
   * @brief Get the error status of the vehicle
   *
   * @return ErrorState error state in ErrorState
   */
  virtual ErrorState GetErrorState() = 0;

  /**
   * @brief Get the Hardware Info, including chassis type,
   * number and type of sensors, etc.
   *
   * @return std::string Hardware Info
   */
  virtual std::string GetHardwareInfo() = 0;
};


}  // namespace control
}  // namespace zelee
