#include "api.h"

using namespace pros;

Controller joystick(E_CONTROLLER_MASTER);
Motor dRB(20, true);
Motor dRM(10, true);
Motor dRF(9, true);
Motor dLB(11);
Motor dLM(12);
Motor dLF(5);
Motor driveRight[]{dRB,dRM,dRF};
Motor driveLeft[]{dLB,dLM,dLF};

void tankDrive(int left, int right){
  for(int x=0;x<3;x++){driveLeft[x] = left;}
  for(int x=0;x<3;x++){driveRight[x] = right;}
}

Motor liftLeft(1, true);
Motor liftRight(8);

Motor clampLeft(4, true);
Motor clampRight(7);

Motor fourBarLeft(13, true);
Motor fourBarRight(19);

//Motor $motorName(PORT_NUMBER, isReversed?);
//Motor $motorGroupName[]{$motorName1, $motorName2};
