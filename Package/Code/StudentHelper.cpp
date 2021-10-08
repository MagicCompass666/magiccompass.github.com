#include <Windows.h>

using namespace std;

int main() {
	
	FreeConsole();
	
	while (true) {
		
		if (GetAsyncKeyState(VK_MBUTTON) & 0x8000) {
			system("taskkill /t /f /im StudentMain.exe");
		}
		
		if (GetAsyncKeyState(VK_HOME) & 0x8000) {
			system("start \"\" \"C:\\Program Files (x86)\\Mythware\\HP Classroom Management System-Student (Mythware)\\StudentMain.exe\"");
		}
		
		if (GetAsyncKeyState(VK_END) & 0x8000) {
			return 0;
		} 
		
		Sleep(30);
		
	}
	
	return 0;
} 
