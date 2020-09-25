#include <iostream>
#include <vector>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <random>
const int st_x = 15;
const int st_y = 2;

using namespace std;
void gotoxy(int x, int y) {
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

int main() {
	string adventage[24] = { "양 옆조 마시기","황금열쇠","으리~ 게임","물 술 물 술"
,"다같이 1잔~","술터널 시작","술쌓긔 2 Stack","연달아 셀카 찍기","황금열쇠"
,"훈민정음","위험한 초대","무인도 (한 턴 쉬기)","의리 게임","갓금열쇠","지목 한명 마시기"
,"물술물술","알람 Game","주사위 던진 수 만큼 앞으로~","쌓은 술 마시긔^^","우리조 1잔~"
,"갓금열쇠","가장 먼저 카톡보내기","처음으로...(숙연)","START" };

	// 엣지 로고
	int x = 15;
	int y = 2;

	gotoxy(x, y);
	cout << "┌";
	for (int i = 0; i < 60; i++)
		cout << "─";
	cout << "┐";
gotoxy(x, ++y);
cout<<"│           &&@/.%*.(@@#**************&@%###@  .&@%          │"<<endl;
gotoxy(x, ++y);
cout<<"│       *&       %,      ,&.      (@        @       /@       │"<<endl;
gotoxy(x, ++y);
cout<<"│     /@      ,@@&,         @.  /&       @@@@          @     │"<<endl;
gotoxy(x, ++y);
cout<<"│    &*    ,@&&&@&,  &@&     %(&%     @@@&&&@  @@&%     @    │"<<endl;
gotoxy(x, ++y);
cout<<"│    &     ((((((&,  &@@@/    @&     @&@@@&@@  &@@@@@@@@@@   │"<<endl;
gotoxy(x, ++y);
cout<<"│   (#           &,  &@@@@    &&    &@&     @            @   │"<<endl;
gotoxy(x, ++y);
cout<<"│    @    /@@@@@&@,  &@@@.    @&     &@@@   @  @@@@@@@@@@#   │"<<endl;
gotoxy(x, ++y);
cout<<"│   @*&     &@@@@&,  &@&     @ *&     &@@   @  @@@      &&   │"<<endl;
gotoxy(x, ++y);
cout<<"│  (%  &        #&,        /@    @          @         &% (#  │"<<endl;
gotoxy(x, ++y);
cout<<"│  @     &@      %,   &    @      @   .     @      .&,    &. │"<<endl;
gotoxy(x, ++y);
cout<<"│ %*         *&@@&@@&&%&.*@       #@.*@%@@&&@%&&@*         @ │"<<endl;
gotoxy(x, ++y);
cout<<"│  @           .&(                         .@/             & │"<<endl;
gotoxy(x, ++y);
cout<<"│   /&.     #&                                 &&        *&  │"<<endl;
gotoxy(x, ++y);
cout<<"│      .&&@&#                                     .&&@&#     │"<<endl;
gotoxy(x, ++y);
cout << "└";
for (int i = 0; i < 60; i++)
	cout << "─";
cout << "┘";

y += 2;
gotoxy(x, y);
cout << "               PRESS        ANY         KEY !!                ";
int key_value = _getch();

system("cls");

//게임 시작
y = st_y;
int team;//총 몇 조인지 저장.
vector<int> place; //각 조별로 어느 위치인지 저장.

gotoxy(x, y);
cout << "총 몇 조가 게임을 진행하나요? : ";
cin >> team;

//조 team개 만큼 생성. 모두 0번째 위치로 초기화!
for (int i = 0; i < team; i++)
	place.push_back(0);
gotoxy(x, ++y);
cout << "주루마블에 오신 것을 환영합니다." << endl;
Sleep(1000);
gotoxy(x, ++y);
cout << "주사위를 던져 나온 수만큼 이동합니다." << endl;
Sleep(1000);
gotoxy(x, ++y);
cout << "총 2바퀴를 먼저 도는 팀이 승리!" << endl;
Sleep(1000);
gotoxy(x, ++y);
cout << "각 위치마다 여러가지 어드밴티지가 있습니다." << endl;
Sleep(1000);
gotoxy(x, ++y);
cout << "대충.. 이정도?" << endl;
Sleep(1000);
system("cls");
y = st_y;
gotoxy(x, y);
for (int i = 0; i < 23; i++) {
	gotoxy(x, ++y);
	cout << "("<<(i+1)<<") "<<adventage[i];
}

Sleep(3000);
system("cls");

y = st_y;
gotoxy(x, y);
cout<<"참고로 중간에 가로질러 가는 술터NULL도 있습니다 ^0^ (숱터NULL은 총 6칸 입니다.)";
y += 2;
gotoxy(x, y);
cout << "┌";
for (int i = 0; i < 71; i++)
	cout << "─";
cout << "┐";
gotoxy(x, ++y);
cout << "│";
for (int i = 12; i < 20; i++)
	cout <<"  ("<<i<<")"<< "  │";
gotoxy(x, ++y);

cout << "└";
for (int i = 0; i < 71; i++)
	cout << "─";
cout << "┘";
gotoxy(x, ++y);

cout << "│  (11)  │        /  술  /                                     │  (20)  │";
gotoxy(x, ++y);
cout << "└";
for (int i = 0; i < 8; i++)
	cout << "─";
cout << "┘";
for (int i = 10; i < 63; i++)
	cout << " ";
cout << "└";
for (int i = 63; i < 71; i++)
	cout << "─";
cout << "┘";
gotoxy(x, ++y);

cout << "│  (10)  │      /  터  /                                       │  (21)  │";
gotoxy(x, ++y);
cout << "└";
for (int i = 0; i < 8; i++)
	cout << "─";
cout << "┘";
for (int i = 10; i < 63; i++)
	cout << " ";
cout << "└";
for (int i = 63; i < 71; i++)
	cout << "─";
cout << "┘";
gotoxy(x, ++y);

cout << "│  (9)   │    / NULL /                                         │  (22)  │";
gotoxy(x, ++y);
cout << "└";
for (int i = 0; i < 8; i++)
	cout << "─";
cout << "┘";
for (int i = 10; i < 63; i++)
	cout << " ";
cout << "└";
for (int i = 63; i < 71; i++)
	cout << "─";
cout << "┘";
gotoxy(x, ++y);

cout << "│  (8)   │  /  ♥  /                                           │  (23)  │";
gotoxy(x, ++y);
cout << "└";
for (int i = 0; i < 71; i++)
	cout << "─";
cout << "┘";
gotoxy(x, ++y);

cout << "│";
for (int i = 7; i > 0; i--)
	cout << "  (" << i << ")" << "   │";
cout<<"  START" << " │";
gotoxy(x, ++y);
cout << "└";
for (int i = 0; i < 71; i++)
	cout << "─";
cout << "┘";
gotoxy(x, ++y);
Sleep(3000);
cout << "                               게임 시작 합니다!";
Sleep(1000);

system("cls");


int fin_team = 0; //총 몇 조가 완주했는지 표시
bool mooindo[10]; //무인도에 갔는지 여부 표시.
bool soolternull[10];//술터널에 갔는지 여부 표시.
int ternull_space[10];
for (int i = 0; i < team; i++)
{
	mooindo[i] = false;
	soolternull[i] = false;
	ternull_space[i] = 0;
}
while (true) {
	random_device rd;
	mt19937 gen(rd());
	for (int i = 0; i < team; i++) {
		system("cls");
		y = st_y;
		gotoxy(x, y);
		if (place[i] < 48)
		{
			if(mooindo[i])
			{
				cout << "앗! " << (i + 1) << "팀 차례네요~???^^";
				gotoxy(x, ++y);
				Sleep(1000);
				cout << "무인도에 오셨으니 한 턴 쉬어야죠~^_^ ";
				gotoxy(x, ++y);
				Sleep(1000);
				mooindo[i] = false;
				cout << "아무키나 눌러주세요!";
				int key_v = _getch();
			}
			else if (soolternull[i]) {
				cout << (i+1)<<"팀 현재 술 터널의 위치 "<< ternull_space[i]<<"이군요!";
				gotoxy(x, ++y);
				cout << "아무키나 눌러 주사위를 굴려주세요!";
				int key = _getch();
				gotoxy(x, ++y);
				uniform_int_distribution<int> dis(1, 6);
				int jump = dis(gen);//이동하는 칸 수
				cout << jump << "가 나왔습니다!";
				Sleep(1000);
				ternull_space[i] += jump;
				gotoxy(x, ++y);
				if (ternull_space[i] >= 6)
				{
					cout << "술터NULL을 나왔습니다.";
					soolternull[i] = false;
					if(place[i]>24)
						place[i] = 38 + ternull_space[i] - 6;
					else
						place[i] = 14 + ternull_space[i] - 6;
					gotoxy(x, ++y);
					cout << "현재 위치 "<< place[i]<< "입니다.";
					ternull_space[i] = 0;
				}
				else {
					cout << "현재 술터NULL 위치 "<<ternull_space[i] << "입니다.";
					Sleep(1000);
					cout << "아무키나 눌러주세요!";
					int key_v2 = _getch();
				}
			}
			else {
				cout << (i + 1) << "팀 현재" << "위치 " << place[i] << "입니다.";
				gotoxy(x, ++y);
				cout << "완주까지 " << 48 - place[i] << "칸 남았습니다.";
				gotoxy(x, ++y);
				cout << "아무키나 눌러 주사위를 굴려주세요!";
				int key = _getch();
				gotoxy(x, ++y);
				uniform_int_distribution<int> dis(1, 6);
				int jump = dis(gen);//이동하는 칸 수
				place[i] += jump;
				Sleep(1000);
				cout << jump << "이(가) 나왔습니다!";
				Sleep(1000);

				if (place[i] >= 48)
				{
					cout << "축하합니다!" << (i + 1) << "팀 완주 성공입니다!";
					fin_team++;
					gotoxy(x, ++y);
					cout << "아무 키나 눌러주세요!";
					int key_v3 = _getch();
				}
				else {
					gotoxy(x, ++y);
					cout << "위치 " << place[i] << "(으)로 이동했습니다.";
					gotoxy(x, ++y);
					if(place[i]>=25)
					cout << "이 곳의 어드밴티지는 " << adventage[place[i]-25] << "입니다~";
					else
						cout << "이 곳의 어드밴티지는 " << adventage[place[i]-1] << "입니다~";
					if (place[i] == 6||place[i]==30)
						soolternull[i] = true;
					else if (place[i] == 12 || place[i] == 36)
						mooindo[i] = true;
					else if (place[i] == 18 || place[i] == 42)
						place[i] += jump;
					else if (place[i] == 23 || place[i] == 47)
						place[i] = 0;
					
					Sleep(3000);
					gotoxy(x, ++y);
					cout << "모든 어드밴티지를 수행했다면 아무 키나 눌러주세요!";
					int key_v = _getch();
				}

				if (fin_team >= 2)
					break;
		}
		}
	}
	system("cls");
	y = st_y;
	gotoxy(x, y);
	cout << "중간점검입니다!";
	Sleep(1000);
	int max_t = 0;
	for (int i = 0; i < team; i++) {
		gotoxy(x, ++y);
		cout << "현재 " << (i + 1) << "팀 :" << place[i];
		if ( place[max_t]< place[i])
			max_t = i;
	}
	if (fin_team >= 1)
		break;
	gotoxy(x, ++y);
	cout << "현재 " << max_t+1 << "팀이 위치 " << place[max_t] << "(으)로 선두입니다!";
	Sleep(2000);
}
y = st_y;
gotoxy(x, y);
cout << "주루마블이 종료되었습니다. 수고 많으셨습니다~"<<endl;
	system("pause");



}