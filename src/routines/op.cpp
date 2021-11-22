#include "robot_config.h"

void op_comp(){
  while(1){
    int left = joystick.get_analog(E_CONTROLLER_ANALOG_LEFT_Y);
    int right = joystick.get_analog(E_CONTROLLER_ANALOG_RIGHT_Y);
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

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_L1)){
      clampLeft = 127;
      clampRight = 127;
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_L2)){
      clampLeft = -127;
      clampRight = -127;
    }else{
      clampLeft = 0;
      clampRight = 0;
    }

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_UP)){
      fourBarLeft = 127;
      fourBarRight = 127;
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_DOWN)){
      fourBarLeft = -127;
      fourBarRight = -127;
    }else{
      fourBarLeft = 0;
      fourBarRight = 0;
    }

    delay(2);
  }
}
