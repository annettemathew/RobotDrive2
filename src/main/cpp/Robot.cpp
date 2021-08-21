// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

enum JoystickButtons {A_BUTTON = 1, B_BUTTON = 2, X_BUTTON = 3, Y_BUTTON = 4, LEFT_BUMPER = 5, RIGHT_BUMPER = 6, BACK_BUTTON = 7, START_BUTTON = 8, LEFT_JOYSTICK_BUTTON = 9, RIGHT_JOYSTICK_BUTTON = 10};
enum JoystickAxes {L_X_AXIS = 0, L_Y_AXIS = 1, L_TRIGGER = 2, R_TRIGGER = 3, R_X_AXIS = 4, R_Y_AXIS = 5};
  
#include "Robot.h"
#include <iostream>
#include <rev/CANSparkMax.h>
#include <frc/smartdashboard/SmartDashboard.h>

void Robot::RobotInit() {

}
void Robot::RobotPeriodic() {
}

void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic() {
  TeleopPeriodic();
}

void Robot::TeleopInit() {

}
void Robot::TeleopPeriodic() {
  double leftStick = driverStick->GetRawAxis(1);
  double rightStick = driverStick->GetRawAxis(4);
  lMotor->Set(leftStick + rightStick);
  rMotor->Set(leftStick - rightStick);

  
}

void Robot::DisabledInit() {}
void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}
void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif