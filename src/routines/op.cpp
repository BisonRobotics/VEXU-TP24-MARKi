#include "robot_config.h"

void op_comp(){
  bool drive_reverse = false;
  int left, right;
  while(1){
    liftLeft.set_brake_mode(E_MOTOR_BRAKE_HOLD);
    liftRight.set_brake_mode(E_MOTOR_BRAKE_HOLD);
    clampLeft.set_brake_mode(E_MOTOR_BRAKE_HOLD);
    clampRight.set_brake_mode(E_MOTOR_BRAKE_HOLD);
    fourBarLeft.set_brake_mode(E_MOTOR_BRAKE_HOLD);
    fourBarRight.set_brake_mode(E_MOTOR_BRAKE_HOLD);
    claw.set_brake_mode(E_MOTOR_BRAKE_HOLD);

    if(drive_reverse){
      left = -joystick.get_analog(E_CONTROLLER_ANALOG_RIGHT_Y);
      right = -joystick.get_analog(E_CONTROLLER_ANALOG_LEFT_Y);
    }else{
      left = joystick.get_analog(E_CONTROLLER_ANALOG_LEFT_Y);
      right = joystick.get_analog(E_CONTROLLER_ANALOG_RIGHT_Y);
    }
    tankDrive(left, right);

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_R1)){
      liftLeft = 127;
      liftRight = 127;
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_R2)){
      liftLeft = -127;
      liftRight = -127;
    }else{
      liftLeft = 0;
      liftRight = 0;
    }

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_UP)){
      clampLeft = 127;
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_DOWN)){
      clampLeft = -127;
    }else{
      clampLeft = 0;
    }

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_X)){
      clampRight = 127;
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_B)){
      clampRight = -127;
    }else{
      clampRight = 0;
    }

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_L2)){
      fourBarLeft = 127;
      fourBarRight = 127;
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_L1)){
      fourBarLeft = -127;
      fourBarRight = -127;
    }else{
      fourBarLeft = 0;
      fourBarRight = 0;
    }

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_Y)){
      drive_reverse = true;
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_A)){
      drive_reverse = false;
    }

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_LEFT)){
      claw = 127;
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_RIGHT)){
      claw = -127;
    }else{
      claw = 0;
    }

    delay(2);
  }
}
