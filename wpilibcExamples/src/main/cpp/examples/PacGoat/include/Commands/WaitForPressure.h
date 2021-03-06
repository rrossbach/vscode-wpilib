/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Command.h>

/**
 * Wait until the pneumatics are fully pressurized. This command does nothing
 * and is intended to be used in command groups to wait for this condition.
 */
class WaitForPressure : public frc::Command {
 public:
  WaitForPressure();
  bool IsFinished() override;
};
