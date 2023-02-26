#include "Keyboard.h"
#include "Mouse.h"
#include <iostream>
#include <windows.h>

int x;

void gameplay(int leftTimer){
    while(true){
        if(GetAsyncKeyState(0x46)){
            sendKey('1');
            Sleep(leftTimer);
            LeftClick();
        }

        if(GetAsyncKeyState(0x47)){
            sendKey('2');
            Sleep(leftTimer);
            RightClick();
        }
    }

}
