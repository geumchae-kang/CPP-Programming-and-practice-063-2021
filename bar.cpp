#include <iostream>
#include <conio.h> //getch함수사용
#include <Windows.h>
#include "Screen.h"
using namespace std;

#define LEFT 75
#define RIGHT 77

class bar {
	int x, y = 20, size;
	int level = InitScreen();

public:
	bar() {
		//난이도별
		switch (level) {
		case 49: x = 18; size = 7; break;
		case 50: x = 20; size = 5; break;
		case 51: x = 22; size = 3;
		}
	}

	void print(int size) {
		gotoxy(x, y);
		for (int i = 0; i < size; i++) {
			printf("▣");
		}
	}

	void input() {
		int i = _getch();
		while(1) {
			if (i == 224) {
				i = _getch();
				switch (i) {
				case LEFT: x--; break; //왼쪽으로 이동
				case RIGHT: x++; break; //오른쪽으로 이동
				}
			}
		}
	}

};