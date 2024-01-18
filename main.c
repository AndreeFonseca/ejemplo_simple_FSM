#include "funciones.h"

tLight estado;
tState evento;


int main(int argc, char const *argv[])
{

  estado=kRedLight;
  evento=kRedState;
  char c = getchar();
  
  while(c != 'q'){

    /* letra q = SALIR, letra s = STOP_COMMAND, 
       letra t = TIMER_TIMEOUT, letra g = GO_COMMAND*/
    //HandleEventGo(stateTable, estado, evento);
    printf("hola");
  }


}
