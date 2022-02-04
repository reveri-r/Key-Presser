#include <Windows.h>
#include <vector>
#include <winuser.h>

void LeftClick ( );
void MouseMove ( int x, int y );
void Q_KEY();
void RightClick ( );
void D_KEY();
void A_KEY();
void one_KEY();
void EMPTY_KEY();
void UC_KEY();
void iki_KEY();
void OLTA_KEY();

int main(){

    while(true){
    //  TRIGGER  F
        if(GetAsyncKeyState(0X46)){
      
            Sleep(71);
           one_KEY();
           LeftClick();
          
        }

//trigger G
          if(GetAsyncKeyState(0X47)){
              Sleep(71);
            iki_KEY();
          RightClick();
            
        }

//trigger X
          if(GetAsyncKeyState(0X58)){
              Sleep(71);
              UC_KEY();
              RightClick();
        }
        //combo
         if(GetAsyncKeyState(0X52)){
              Sleep(71);
              UC_KEY();
              RightClick();
              Sleep(15);
              one_KEY();
              LeftClick();
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
            input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
            SendInput(1, &input, sizeof(input));
  
}

void OLTA_KEY(){
            SHORT key;
            UINT mappedkey;
            INPUT input = { 0 };
            key = VkKeyScan('3');
            mappedkey = MapVirtualKey(LOBYTE(key), 0);
            input.type = INPUT_KEYBOARD;
            input.ki.dwFlags = KEYEVENTF_SCANCODE;
            input.ki.wScan = mappedkey;
            SendInput(1, &input, sizeof(input));
            input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
            SendInput(1, &input, sizeof(input));
  
}


void one_KEY(){
            SHORT key;
            UINT mappedkey;
            INPUT input = { 0 };
            key = VkKeyScan('1');
            mappedkey = MapVirtualKey(LOBYTE(key), 0);
            input.type = INPUT_KEYBOARD;
            input.ki.dwFlags = KEYEVENTF_SCANCODE;
            input.ki.wScan = mappedkey;
            SendInput(1, &input, sizeof(input));
            input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
            SendInput(1, &input, sizeof(input));
  
}

void UC_KEY(){
            SHORT key;
            UINT mappedkey;
            INPUT input = { 0 };
            key = VkKeyScan('4');
            mappedkey = MapVirtualKey(LOBYTE(key), 0);
            input.type = INPUT_KEYBOARD;
            input.ki.dwFlags = KEYEVENTF_SCANCODE;
            input.ki.wScan = mappedkey;
            SendInput(1, &input, sizeof(input));
            input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
            SendInput(1, &input, sizeof(input));
  
}

void iki_KEY(){
            SHORT key;
            UINT mappedkey;
            INPUT input = { 0 };
            key = VkKeyScan('2');
            mappedkey = MapVirtualKey(LOBYTE(key), 0);
            input.type = INPUT_KEYBOARD;
            input.ki.dwFlags = KEYEVENTF_SCANCODE;
            input.ki.wScan = mappedkey;
            SendInput(1, &input, sizeof(input));
            input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
            SendInput(1, &input, sizeof(input));
  
}

void EMPTY_KEY(){
            SHORT key;
            UINT mappedkey;
            INPUT input = { 0 };
            key = VkKeyScan(' ');
            mappedkey = MapVirtualKey(LOBYTE(key), 0);
            input.type = INPUT_KEYBOARD;
            input.ki.dwFlags = KEYEVENTF_SCANCODE;
            input.ki.wScan = mappedkey;
            SendInput(1, &input, sizeof(input));
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
