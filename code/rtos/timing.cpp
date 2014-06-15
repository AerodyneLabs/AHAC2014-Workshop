#include "mbed.h"
#include "rtos.h"
 
Serial pc(SERIAL_TX, SERIAL_RX);
DigitalOut led2(LED1);
DigitalOut pins[4] = {
    DigitalOut(PB_13), DigitalOut(PB_14), DigitalOut(PB_15), DigitalOut(PB_1)
};

void pulse(void const *n) {
    pins[(int)n] = !pins[(int)n];
}

void led2_thread(void const *args) {
    while (true) {
        led2 = !led2;
        Thread::wait(500);
    }
}
 
int main() {
    Thread thread(led2_thread);
    
    RtosTimer pin0(pulse, osTimerPeriodic, (void *)0);
    RtosTimer pin1(pulse, osTimerPeriodic, (void *)1);
    RtosTimer pin2(pulse, osTimerPeriodic, (void *)2);
    RtosTimer pin3(pulse, osTimerPeriodic, (void *)3);
    
    for(int i = 0; i < 4; i++) {
        pins[i] = 1;
    }
    
    pin0.start(160);
    pin1.start(80);
    pin2.start(40);
    pin3.start(20);
   
    while(1) { 
      wait(1);
       pc.printf("main thread running !\n");
       Thread::wait(1000);
  }
}