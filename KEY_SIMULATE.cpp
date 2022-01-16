#include <iostream>
#include <Windows.h>
#include <vector>

using namespace std;

void LeftClick ( );
void MouseMove ( int x, int y );
void Q_KEY();
void RightClick ( );
void D_KEY();
void A_KEY();
void E_KEY();


int main(){
    cout << "NUMPAD 0: RESET ALL" <<  endl;
    cout << "KEY Z: " << endl;
    while(true){
        if(GetAsyncKeyState(VK_NUMPAD0)){
            return 0;
        }

        
    //  TRIGGER F
        if(GetAsyncKeyState(0x46)){
            
        }

    //  TRIGGER  Z 
        if(GetAsyncKeyState(0x5A)){
            LeftClick();
            A_KEY();
        }

    }
}



void Q_KEY(){
            SHORT key;
            UINT mappedkey;
            INPUT input = { 0 };
            key = VkKeyScan('q');
            mappedkey = MapVirtualKey(LOBYTE(key), 0);
            input.type = INPUT_KEYBOARD;
            input.ki.dwFlags = KEYEVENTF_SCANCODE;
            input.ki.wScan = mappedkey;
            SendInput(1, &input, sizeof(input));
            Sleep(75);
            input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
            SendInput(1, &input, sizeof(input));
  
}


void E_KEY(){
            SHORT key;
            UINT mappedkey;
            INPUT input = { 0 };
            key = VkKeyScan('e');
            mappedkey = MapVirtualKey(LOBYTE(key), 0);
            input.type = INPUT_KEYBOARD;
            input.ki.dwFlags = KEYEVENTF_SCANCODE;
            input.ki.wScan = mappedkey;
            SendInput(1, &input, sizeof(input));
            Sleep(75);
            input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
            SendInput(1, &input, sizeof(input));
  
}

void A_KEY(){
       SHORT key;
            UINT mappedkey;
            INPUT input = { 0 };
            key = VkKeyScan('a');
            mappedkey = MapVirtualKey(LOBYTE(key), 0);
            input.type = INPUT_KEYBOARD;
            input.ki.dwFlags = KEYEVENTF_SCANCODE;
            input.ki.wScan = mappedkey;
            SendInput(1, &input, sizeof(input));
            Sleep(75);
            input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
            SendInput(1, &input, sizeof(input));
}


void D_KEY(){
         SHORT key;
            UINT mappedkey;
            INPUT input = { 0 };
            key = VkKeyScan('d');
            mappedkey = MapVirtualKey(LOBYTE(key), 0);
            input.type = INPUT_KEYBOARD;
            input.ki.dwFlags = KEYEVENTF_SCANCODE;
            input.ki.wScan = mappedkey;
            SendInput(1, &input, sizeof(input));
            Sleep(75);
            input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
            SendInput(1, &input, sizeof(input));
}



void RightClick ( ){
        INPUT    Input={0};
  // left down
  Input.type      = INPUT_MOUSE;
  Input.mi.dwFlags  = MOUSEEVENTF_RIGHTDOWN;
  ::SendInput(1,&Input,sizeof(INPUT));

  // left up
  ::ZeroMemory(&Input,sizeof(INPUT));
  Input.type      = INPUT_MOUSE;
  Input.mi.dwFlags  = MOUSEEVENTF_RIGHTUP;
  ::SendInput(1,&Input,sizeof(INPUT));
}

// MouseMove function
void MouseMove (int x, int y )
{
    double fScreenWidth    = ::GetSystemMetrics( SM_CXSCREEN )-1;
    double fScreenHeight  = ::GetSystemMetrics( SM_CYSCREEN )-1;
    double fx = x*(65535.0f/fScreenWidth);
    double fy = y*(65535.0f/fScreenHeight);
    INPUT  Input={0};
    Input.type      = INPUT_MOUSE;
    Input.mi.dwFlags  = MOUSEEVENTF_MOVE|MOUSEEVENTF_ABSOLUTE;
    Input.mi.dx = fx;
    Input.mi.dy = fy;
    ::SendInput(1,&Input,sizeof(INPUT));
}

void LeftClick ( )
{
  INPUT    Input={0};
  // left down
  Input.type      = INPUT_MOUSE;
  Input.mi.dwFlags  = MOUSEEVENTF_LEFTDOWN;
  ::SendInput(1,&Input,sizeof(INPUT));

  // left up
  ::ZeroMemory(&Input,sizeof(INPUT));
  Input.type      = INPUT_MOUSE;
  Input.mi.dwFlags  = MOUSEEVENTF_LEFTUP;
  ::SendInput(1,&Input,sizeof(INPUT));
}