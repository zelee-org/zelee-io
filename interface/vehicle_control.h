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

namespace zelee {
namespace control {


/**
 * @brief Vehicle gear type
 */
enum class GearType {
  DRIVE,
  REVERSE,
  NEUTRAL,
};

/**
 * @brief Vehicle Signal Type
 */
enum class SignalType {
  LEFT_TURN,
  RIGHT_TURN,
  HAZARD_LIGHTS,  // Emergency Flashers
};

/**
 * @brief Vehicle control interface,
 * used to control vehicle movement and signals, etc.
 */
class VehicleControl {
 public:
  /**
   * @brief Set the Throttle
   *
   * @param percentage Throttle percentage [0.0, 100.0]
   * @return true success
   * @return false fail
   */
  virtual bool SetThrottle(const double &percentage) = 0;

  /**
   * @brief Set the Brake
   *
   * @param percentage Brake percentage [0.0, 100.0]
   * @return true success
   * @return false fail
   */
  virtual bool SetBrake(const double &percentage) = 0;

  /**
   * @brief Set the Steer
   *
   * @param angle Steer angle [-90.0, 90.0]
   * @return true success
   * @return false fail
   */
  virtual bool SetSteer(const double &angle) = 0;

  /**
   * @brief Set the Gear
   *
   * @param state Set geer in gearType
   * @return true success
   * @return false fail
   */
  virtual bool SetGear(const GearType &state) = 0;

  /**
   * @brief Set the Signal
   *
   * @param signal Set signal in SignalType
   * @return true success
   * @return false fail
   */
  virtual bool SetSignal(const SignalType &signal) = 0;

  /**
   * @brief Set the Horn
   *
   * @param volume Set volume [0.0, 100.0]
   * @return true success
   * @return false fail
   */
  virtual bool SetHorn(const double &volume) = 0;
};


}  // namespace control
}  // namespace zelee
