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
	string adventage[24] = { "�� ���� ���ñ�","Ȳ�ݿ���","����~ ����","�� �� �� ��"
,"�ٰ��� 1��~","���ͳ� ����","���ױ� 2 Stack","���޾� ��ī ���","Ȳ�ݿ���"
,"�ƹ�����","������ �ʴ�","���ε� (�� �� ����)","�Ǹ� ����","���ݿ���","���� �Ѹ� ���ñ�"
,"��������","�˶� Game","�ֻ��� ���� �� ��ŭ ������~","���� �� ���ñ�^^","�츮�� 1��~"
,"���ݿ���","���� ���� ī�庸����","ó������...(����)","START" };

	// ���� �ΰ�
	int x = 15;
	int y = 2;

	gotoxy(x, y);
	cout << "��";
	for (int i = 0; i < 60; i++)
		cout << "��";
	cout << "��";
gotoxy(x, ++y);
cout<<"��           &&@/.%*.(@@#**************&@%###@  .&@%          ��"<<endl;
gotoxy(x, ++y);
cout<<"��       *&       %,      ,&.      (@        @       /@       ��"<<endl;
gotoxy(x, ++y);
cout<<"��     /@      ,@@&,         @.  /&       @@@@          @     ��"<<endl;
gotoxy(x, ++y);
cout<<"��    &*    ,@&&&@&,  &@&     %(&%     @@@&&&@  @@&%     @    ��"<<endl;
gotoxy(x, ++y);
cout<<"��    &     ((((((&,  &@@@/    @&     @&@@@&@@  &@@@@@@@@@@   ��"<<endl;
gotoxy(x, ++y);
cout<<"��   (#           &,  &@@@@    &&    &@&     @            @   ��"<<endl;
gotoxy(x, ++y);
cout<<"��    @    /@@@@@&@,  &@@@.    @&     &@@@   @  @@@@@@@@@@#   ��"<<endl;
gotoxy(x, ++y);
cout<<"��   @*&     &@@@@&,  &@&     @ *&     &@@   @  @@@      &&   ��"<<endl;
gotoxy(x, ++y);
cout<<"��  (%  &        #&,        /@    @          @         &% (#  ��"<<endl;
gotoxy(x, ++y);
cout<<"��  @     &@      %,   &    @      @   .     @      .&,    &. ��"<<endl;
gotoxy(x, ++y);
cout<<"�� %*         *&@@&@@&&%&.*@       #@.*@%@@&&@%&&@*         @ ��"<<endl;
gotoxy(x, ++y);
cout<<"��  @           .&(                         .@/             & ��"<<endl;
gotoxy(x, ++y);
cout<<"��   /&.     #&                                 &&        *&  ��"<<endl;
gotoxy(x, ++y);
cout<<"��      .&&@&#                                     .&&@&#     ��"<<endl;
gotoxy(x, ++y);
cout << "��";
for (int i = 0; i < 60; i++)
	cout << "��";
cout << "��";

y += 2;
gotoxy(x, y);
cout << "               PRESS        ANY         KEY !!                ";
int key_value = _getch();

system("cls");

//���� ����
y = st_y;
int team;//�� �� ������ ����.
vector<int> place; //�� ������ ��� ��ġ���� ����.

gotoxy(x, y);
cout << "�� �� ���� ������ �����ϳ���? : ";
cin >> team;

//�� team�� ��ŭ ����. ��� 0��° ��ġ�� �ʱ�ȭ!
for (int i = 0; i < team; i++)
	place.push_back(0);
gotoxy(x, ++y);
cout << "�ַ縶�� ���� ���� ȯ���մϴ�." << endl;
Sleep(1000);
gotoxy(x, ++y);
cout << "�ֻ����� ���� ���� ����ŭ �̵��մϴ�." << endl;
Sleep(1000);
gotoxy(x, ++y);
cout << "�� 2������ ���� ���� ���� �¸�!" << endl;
Sleep(1000);
gotoxy(x, ++y);
cout << "�� ��ġ���� �������� ����Ƽ���� �ֽ��ϴ�." << endl;
Sleep(1000);
gotoxy(x, ++y);
cout << "����.. ������?" << endl;
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
cout<<"����� �߰��� �������� ���� ����NULL�� �ֽ��ϴ� ^0^ (����NULL�� �� 6ĭ �Դϴ�.)";
y += 2;
gotoxy(x, y);
cout << "��";
for (int i = 0; i < 71; i++)
	cout << "��";
cout << "��";
gotoxy(x, ++y);
cout << "��";
for (int i = 12; i < 20; i++)
	cout <<"  ("<<i<<")"<< "  ��";
gotoxy(x, ++y);

cout << "��";
for (int i = 0; i < 71; i++)
	cout << "��";
cout << "��";
gotoxy(x, ++y);

cout << "��  (11)  ��        /  ��  /                                     ��  (20)  ��";
gotoxy(x, ++y);
cout << "��";
for (int i = 0; i < 8; i++)
	cout << "��";
cout << "��";
for (int i = 10; i < 63; i++)
	cout << " ";
cout << "��";
for (int i = 63; i < 71; i++)
	cout << "��";
cout << "��";
gotoxy(x, ++y);

cout << "��  (10)  ��      /  ��  /                                       ��  (21)  ��";
gotoxy(x, ++y);
cout << "��";
for (int i = 0; i < 8; i++)
	cout << "��";
cout << "��";
for (int i = 10; i < 63; i++)
	cout << " ";
cout << "��";
for (int i = 63; i < 71; i++)
	cout << "��";
cout << "��";
gotoxy(x, ++y);

cout << "��  (9)   ��    / NULL /                                         ��  (22)  ��";
gotoxy(x, ++y);
cout << "��";
for (int i = 0; i < 8; i++)
	cout << "��";
cout << "��";
for (int i = 10; i < 63; i++)
	cout << " ";
cout << "��";
for (int i = 63; i < 71; i++)
	cout << "��";
cout << "��";
gotoxy(x, ++y);

cout << "��  (8)   ��  /  ��  /                                           ��  (23)  ��";
gotoxy(x, ++y);
cout << "��";
for (int i = 0; i < 71; i++)
	cout << "��";
cout << "��";
gotoxy(x, ++y);

cout << "��";
for (int i = 7; i > 0; i--)
	cout << "  (" << i << ")" << "   ��";
cout<<"  START" << " ��";
gotoxy(x, ++y);
cout << "��";
for (int i = 0; i < 71; i++)
	cout << "��";
cout << "��";
gotoxy(x, ++y);
Sleep(3000);
cout << "                               ���� ���� �մϴ�!";
Sleep(1000);

system("cls");


int fin_team = 0; //�� �� ���� �����ߴ��� ǥ��
bool mooindo[10]; //���ε��� ������ ���� ǥ��.
bool soolternull[10];//���ͳο� ������ ���� ǥ��.
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
				cout << "��! " << (i + 1) << "�� ���ʳ׿�~???^^";
				gotoxy(x, ++y);
				Sleep(1000);
				cout << "���ε��� �������� �� �� �������~^_^ ";
				gotoxy(x, ++y);
				Sleep(1000);
				mooindo[i] = false;
				cout << "�ƹ�Ű�� �����ּ���!";
				int key_v = _getch();
			}
			else if (soolternull[i]) {
				cout << (i+1)<<"�� ���� �� �ͳ��� ��ġ "<< ternull_space[i]<<"�̱���!";
				gotoxy(x, ++y);
				cout << "�ƹ�Ű�� ���� �ֻ����� �����ּ���!";
				int key = _getch();
				gotoxy(x, ++y);
				uniform_int_distribution<int> dis(1, 6);
				int jump = dis(gen);//�̵��ϴ� ĭ ��
				cout << jump << "�� ���Խ��ϴ�!";
				Sleep(1000);
				ternull_space[i] += jump;
				gotoxy(x, ++y);
				if (ternull_space[i] >= 6)
				{
					cout << "����NULL�� ���Խ��ϴ�.";
					soolternull[i] = false;
					if(place[i]>24)
						place[i] = 38 + ternull_space[i] - 6;
					else
						place[i] = 14 + ternull_space[i] - 6;
					gotoxy(x, ++y);
					cout << "���� ��ġ "<< place[i]<< "�Դϴ�.";
					ternull_space[i] = 0;
				}
				else {
					cout << "���� ����NULL ��ġ "<<ternull_space[i] << "�Դϴ�.";
					Sleep(1000);
					cout << "�ƹ�Ű�� �����ּ���!";
					int key_v2 = _getch();
				}
			}
			else {
				cout << (i + 1) << "�� ����" << "��ġ " << place[i] << "�Դϴ�.";
				gotoxy(x, ++y);
				cout << "���ֱ��� " << 48 - place[i] << "ĭ ���ҽ��ϴ�.";
				gotoxy(x, ++y);
				cout << "�ƹ�Ű�� ���� �ֻ����� �����ּ���!";
				int key = _getch();
				gotoxy(x, ++y);
				uniform_int_distribution<int> dis(1, 6);
				int jump = dis(gen);//�̵��ϴ� ĭ ��
				place[i] += jump;
				Sleep(1000);
				cout << jump << "��(��) ���Խ��ϴ�!";
				Sleep(1000);

				if (place[i] >= 48)
				{
					cout << "�����մϴ�!" << (i + 1) << "�� ���� �����Դϴ�!";
					fin_team++;
					gotoxy(x, ++y);
					cout << "�ƹ� Ű�� �����ּ���!";
					int key_v3 = _getch();
				}
				else {
					gotoxy(x, ++y);
					cout << "��ġ " << place[i] << "(��)�� �̵��߽��ϴ�.";
					gotoxy(x, ++y);
					if(place[i]>=25)
					cout << "�� ���� ����Ƽ���� " << adventage[place[i]-25] << "�Դϴ�~";
					else
						cout << "�� ���� ����Ƽ���� " << adventage[place[i]-1] << "�Դϴ�~";
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
					cout << "��� ����Ƽ���� �����ߴٸ� �ƹ� Ű�� �����ּ���!";
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
	cout << "�߰������Դϴ�!";
	Sleep(1000);
	int max_t = 0;
	for (int i = 0; i < team; i++) {
		gotoxy(x, ++y);
		cout << "���� " << (i + 1) << "�� :" << place[i];
		if ( place[max_t]< place[i])
			max_t = i;
	}
	if (fin_team >= 1)
		break;
	gotoxy(x, ++y);
	cout << "���� " << max_t+1 << "���� ��ġ " << place[max_t] << "(��)�� �����Դϴ�!";
	Sleep(2000);
}
y = st_y;
gotoxy(x, y);
cout << "�ַ縶���� ����Ǿ����ϴ�. ���� �����̽��ϴ�~"<<endl;
	system("pause");



}