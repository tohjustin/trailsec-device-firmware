#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lib/Colours.h"
#include "lib/touchscreen.h"
#include "lib/graphics.h"
#include "lib/OutGraphicsCharFont.h"
#include "lib/wifi.h"
#include "lib/gps.h"
#include "lib/bluetooth.h"
#include "views/views.h"
#include "images/watchframe.h"

int main() {

    printf("Initializing GPS Module... ");
    Init_Touch();
    printf("Done!\n");

    printf("Initializing Touch Screen Module... ");
    init_gps();
    printf("Done!\n");

    printf("Initializing Wifi Module... ");
    init_wifi();
    printf("Done!\n");

    printf("Initializing Bluetooth Module... ");
    init_bluetooth();
    // configure_bluetooth_dongle(); // Setup id & pin for bluetooth module
    printf("Done!\n");

    // drawIntroScreen();
    // ClearScreen(GREEN);
    drawWatchframe(250, 0);

//-----------------------------------------------
    // int i;
    // for (i=0; i<100; i++) {
    //  WriteAPixel(100, i, WHITE);
    //  WriteAPixel(101, i, WHITE);
    //  WriteAPixel(102, i, WHITE);
    //  WriteAPixel(103, i, WHITE);
    //  WriteAPixel(104, i, WHITE);
    // }/
//-----------------------------------------------
    // // char str_buffer[10];
    // while(1){
    //  // ClearScreen(WHITE);
    //  // int userId = 0;
    //  // drawMainScreen(userId);
    //  // mainScreenFunctionality();
    //  //
    //  // if ((BLUETOOTH_STATUS & 0x01) == 0x01) {
    //  //  if (getCommand_bluetooth(str_buffer, 9) != -1) {
    //  //      printf(">>> %s", str_buffer);
    //  //  }
    //  // }
    //  char temp = getchar_bluetooth();
    //   printf("%c", temp);
    // }
//-----------------------------------------------

    printf("Done!!!\n");

    return 0;
}
