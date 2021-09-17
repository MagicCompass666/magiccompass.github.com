#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	
	FreeConsole();

    while (true) {
    	
    	Sleep(30);
    	
    	if (GetAsyncKeyState(VK_HOME) & 0x8000) {
    		system("start \"C:\\Program Files (x86)\\Mythware\\HP Classroom Management System-Student (Mythware)\\StudentMain.exe");
    	}
    	
    	if (GetAsyncKeyState(VK_END) & 0x8000) {
    		return 0;
    	}
    	
    	if (GetAsyncKeyState(VK_MBUTTON) & 0x8000) {
    		system("taskkill /t /f /im StudentMain.exe");
    	}
    }

    return 0;
}
