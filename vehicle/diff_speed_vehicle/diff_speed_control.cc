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

#include "vehicle/diff_speed_vehicle/diff_speed_control.h"

namespace zelee {
namespace control {


bool DiffSpeedControl::SetThrottle(const double &percentage) {
  return true;
}

bool DiffSpeedControl::SetBrake(const double &percentage) {
  return true;
}

bool DiffSpeedControl::SetSteer(const double &angle) {
  return true;
}

bool DiffSpeedControl::SetGear(const GearType &state) {
  return true;
}

bool DiffSpeedControl::SetSignal(const SignalType &signal) {
  return true;
}

bool DiffSpeedControl::SetHorn(const double &volume) {
  return true;
}

}  // namespace control
}  // namespace zelee
