#include <fcntl.h>
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

typedef enum { kRedLight = 0, kYellowLight = 1, kGreenLight = 2 } tLight;
typedef enum { kRedState = 0, kYellowState = 1, kGreenState = 2 } tState;

struct sStateTableEntry {
  tLight light;
  tState goEvent;
  tState stopEvent;
  tState timeoutEvent;
};

struct sStateTableEntry stateTable[] = {
    {kRedLight, kGreenState, kRedState, kRedState},        // Rojo
    {kYellowLight, kYellowState, kYellowState, kRedState}, // Amarillo
    {kGreenLight, kGreenState, kYellowState, kGreenState}, // Verde
};

void luz_verde();
void luz_roja();
void luz_amarilla();
void HandleEventGo();
void lightOn();
