#include "funciones.h"


void luz_roja()
{
  printf("\033[0;31m");
  printf("\rROJO     >");
  printf("\033[0m");
}

void luz_verde()
{
  printf("\033[0;32m");
  printf("\rVERDE    >");
  printf("\033[0m");
}

void luz_amarilla()
{
  printf("\033[0;33m");
  printf("\rAMARILLO >");
  printf("\033[0m");
}

void lightOn(tLight light){

  switch(light){
    case kRedLight:
      luz_roja();
      printf("rojo");
      break;
    case kGreenLight:
      luz_verde();
      printf("verde");
      break;
    case kYellowLight:
      luz_amarilla();
      printf("amarillo");
      break;
    default:
    break;
  }
};



void HandleEventGo(struct sStateTableEntry *stateTable, tLight *lightZero, tState *stateZero) {
    switch (*lightZero) {
        case kRedLight:
            *stateZero = stateTable[*lightZero].goEvent;
            lightOn(*lightZero);
            break;
        case kGreenLight:
            *stateZero = stateTable[*lightZero].stopEvent;
            lightOn(*lightZero);
            break;
        case kYellowLight:
            *stateZero = stateTable[*lightZero].timeoutEvent;
            lightOn(*lightZero);
            break;
        default:
            // Manejar otro evento :3
            break;
    }
}
