#include "api.h"

using namespace pros;

Controller joystick(E_CONTROLLER_MASTER);

Motor dLF(20);
Motor dLM(10);
Motor dLB(9);
Motor dRF(11, true);
Motor dRM(12, true);
Motor dRB(5, true);

Motor driveRight[]{dRB,dRM,dRF};
Motor driveLeft[]{dLB,dLM,dLF};

void tankDrive(int left, int right){
  for(int x=0;x<3;x++){driveLeft[x] = left;}
  for(int x=0;x<3;x++){driveRight[x] = right;}
}

Motor liftLeft(1, true);
Motor liftRight(8);


Motor clampLeft(4);
Motor clampRight(7, true);

Motor fourBarLeft(13, true);
Motor fourBarRight(19);

Motor leftSideArm(3, true);
Motor rightSideArm(18);

Motor claw(13);

//Motor $motorName(PORT_NUMBER, isReversed?);
//Motor $motorGroupName[]{$motorName1, $motorName2};
