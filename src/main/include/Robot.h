// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc/TimedRobot.h>   
//#include <frc/smartdashboard/SendableChooser.h>
//#include "SFDrive_SparkMax.h"
#include <frc/Joystick.h>
//#include <SmartSender.h>
#include<rev/CANSparkMax.h>


class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;

  void AutonomousInit() override;
  void AutonomousPeriodic() override;

  void TeleopInit() override;
  void TeleopPeriodic() override;

  void DisabledInit() override;
  void DisabledPeriodic() override;

  void TestInit() override;
  void TestPeriodic() override;




  const int rMotorNum = 1;
  const int lMotorNum = 4;


  rev::CANSparkMax * lMotor = new rev::CANSparkMax(lMotorNum, rev::CANSparkMax::MotorType::kBrushless);
  rev::CANSparkMax * rMotor = new rev::CANSparkMax(rMotorNum, rev::CANSparkMax::MotorType::kBrushless);

  frc::Joystick * driverStick = new frc::Joystick(0);
};
