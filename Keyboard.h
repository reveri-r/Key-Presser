#include <Windows.h>
#include <vector>
#include <winuser.h>

void sendKey(char keyboardKey){
            SHORT key;
            UINT mappedkey;
            INPUT input = { 0 };
            key = VkKeyScan(keyboardKey);
            mappedkey = MapVirtualKey(LOBYTE(key), 0);
            input.type = INPUT_KEYBOARD;
            input.ki.dwFlags = KEYEVENTF_SCANCODE;
            input.ki.wScan = mappedkey;
            SendInput(1, &input, sizeof(input));
            input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
            SendInput(1, &input, sizeof(input));
  
}