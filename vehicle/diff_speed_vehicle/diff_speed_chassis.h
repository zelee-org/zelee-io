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

#include "interface/chassis.h"

namespace zelee {
namespace control {


class DiffSpeedChassis : public Chassis {
 public:
  DiffSpeedChassis() = default;
  ~DiffSpeedChassis() = default;

  double GetSpeed() override;
  double GetWheelAngle() override;
  double GetBatteryLevel() override;

  ErrorState GetErrorState() override;
  std::string GetHardwareInfo() override;
};


}  // namespace control
}  // namespace zelee
