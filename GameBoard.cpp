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

void printMap(int a, int b, int r_a, int r_b, int _x, int _y) {
	int x = _x;
	int y = _y;
	gotoxy(x, y);
	string space[25];
	space[0] = "  START";
	for (int i = 1; i < 10; i++)
		space[i] = "  (" + to_string(i) + ")   ��";
	for (int i = 10; i < 12; i++)
		space[i] = "  (" + to_string(i) + ")  ��";
	for (int i = 12; i < 20; i++)
		space[i]="  ("+to_string(i)+")  ��";
	space[20] = "  (20)  ��";
	for(int i=21;i<24;i++)
		space[i] = "  (" + to_string(i) + ")  ��";
	//(a, b) ���� �� ��ġ�� ���� �� - a, �Ķ� �� - b ����.
	if (r_a >= 24)
		r_a -= 24;
	if (r_b >= 24)
		r_b -= 24;
	if (r_a == r_b)
		space[r_b] = "   �ܡ� ��";
	else
	{
		space[r_a] = "   ��   ��";
		space[r_b] = "   ��   ��";
	}
	cout << "����� �߰��� �������� ���� ����NULL�� �ֽ��ϴ� ^0^ (����NULL�� �� 6ĭ �Դϴ�.)";
	y += 2;
	gotoxy(x, y);
	cout << "��";
	for (int i = 0; i < 71; i++)
		cout << "��";
	cout << "��";
	gotoxy(x, ++y);
	cout << "��";
	for (int i = 12; i < 20; i++)
		cout << space[i];
	gotoxy(x, ++y);

	cout << "��";
	for (int i = 0; i < 71; i++)
		cout << "��";
	cout << "��";
	gotoxy(x, ++y);

	cout << "��";
	cout<< space[11]+"        /  ��  /                                     ��" +space[20];
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
	cout << "��";
	cout << space[10] + "      /  ��  /                                       ��" + space[21];
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
	cout << "��";
	cout << space[9]+"   / NULL /                                          ��" + space[22];
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
	cout << "��";
	cout << space[8] + "  /  ��  /                                           ��" + space[23];
	gotoxy(x, ++y);
	cout << "��";
	for (int i = 0; i < 71; i++)
		cout << "��";
	cout << "��";
	gotoxy(x, ++y);

	cout << "��";
	for (int i = 7; i >= 0; i--)
		cout << space[i];
	cout << " ��";
	gotoxy(x, ++y);
	cout << "��";
	for (int i = 0; i < 71; i++)
		cout << "��";
	cout << "��";

	x += 80;
	gotoxy(x, y);
	cout << "��";
	for (int i = 0; i < 9; i++)
		cout << "��";
	cout << "��";
	gotoxy(x, ++y);
	cout << "��         ��";
	gotoxy(x, ++y);
	string s="";
	s = "�� �� :"+ to_string(a)+ "�� ��";
	cout << s;
	gotoxy(x, ++y);
	
	s= "�� �� :" + to_string(b) + "�� ��";
	cout << s;
	gotoxy(x, ++y);

	cout << "��         ��";
	gotoxy(x, ++y);
	cout << "��";
	for (int i = 0; i < 9; i++)
		cout << "��";
	cout << "��";
	x = st_x;
	Sleep(3000);

	

	
}


int main() {
	string adventage[24][24] = { {"�ٰ��� ���ñ�", "��. ���� ���ø� �˴ϴ� ^^" },{"Ȳ�ݿ���", "�츮 ���� �ɷ��� �� ����� �� �ִ� ���迡��!"},{"����~ ����","�ɸ� ������ �� 3���� ���ø� �˴ϴ�."},{"�� �� �� ��","�Ʊ� ���Ͻ� ��������? ������� ����ð� ����ð� ����ð� ����ø� �˴ϴ�~ (�� �ɸ��� �� �� �� ��!)"}
,{"�ٰ��� 1��~","��. ���� ���ø� �˴ϴ�^^."},{"���ͳ� ����","�������̿���! ���� ���� �� �ְ���??"},{"���ױ� 2 Stack","���ױ� ������ +2 �Ǿ����ϴ�. �����մϴ�."},{"���޾� ��ī ���","��ī�� �����ð�, �������� ������ ������ �� ��ī�� ���� ��ī�� ���, �� �� ������ ���� ��ī�� �ڽ��� ���� �� ��� ������ �� ������ �˴ϴ�^^ �ð��� 3��!"},
	{"Ȳ�ݿ���","�츮 ���� �ɷ��� �� ����� �� �ִ� ���迡��!"}
,{"�ƹ�����","�������� �ܱ��� �� �ܷ�� ���ô� �е��� �� �ܾ� ��ø� �˴ϴ�. OK?"},{"��� �� 1��~","��. ����� �е��� ��ø� �˴ϴ� ^^"},{"���ε� (�� �� ����)","�� �� ����ðڽ��ϴ� :D"},{"�Ǹ� ����","�ɸ� ������ �� 2���� ���ø� �˴ϴ�."},{"���ݿ���","��. Ȳ�ݿ��� �Դϴ�."},{"���� �Ѹ� ���ñ�","��. ������ �� �� �����Ͻø� �˴ϴ�! �츮�� ����� �ƹ��� �� ��!"}
,{"��������","�Ʊ� ���Ͻ� ��������? ������� ����ð� ����ð� ����ð� ����ø� �˴ϴ�~ (�� �ɸ��� �� �� �� ��!)"},{"���� ī�� ������!","�ɸ� ���� ��� ���� �� ���� �����ڿ��� ī������ \"�����ְ� ����\"�� ���� ���� �¸�! �ɸ� ���� ������ ���, ��� ���� ������ �ɸ� ���� ���ʴϴ�^^"},{"�ֻ��� ���� �� ��ŭ ������~","���� ����ŭ ������~!"},{"���� �� ���ñ�^^", "���� ���� �� ���� ���ø� �˴ϴ�~!"},{"�� �ױ� 2 stack","�� ���� +2 �Ǿ����ϴ�. �����մϴ�."}
,{"���ݿ���","��. Ȳ�� �����Դϴ� :D"},{"���� ���� ī�庸����","�ɸ� ���� ��� ���� �� ���� �����ڿ��� ī������ \"�αٵαٹ�âȣ\"�� ���� ���� �¸�! �ɸ� ���� ������ ���, ��� ���� ������ �ɸ� ���� ���ʴϴ�^^"},{"ó������...(����)","Ah.. ó������ ���ðڽ��ϴ�..^^"},{"START","����!"} };

	// ���� �ΰ�
	int x = 45;
	int y = 30;

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
y += 5;
gotoxy(x, y);
cout << "*    *    *   ��ü ȭ������ ���ñ� �����մϴ�.   *     *    *";
int key_value = _getch();

system("cls");

//���� ����
x = st_x;
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
	cout << "("<<(i+1)<<") "<<adventage[i][0];
}

Sleep(3000);
system("cls");
int a, b; // ��� ���� ��������. �ޱ�.

y = st_y;
gotoxy(x, y);
cout << "���� ���� ������ �Է����ּ��� (1�� ����, 3�� �����̸� 1 3 �Է�) : ";
cin >> a >> b;
int* team_first = new int[2];
team_first[0] = a;
team_first[1] = b;

system("cls");

// �� �׸��� ����.
printMap(a, b, 0, 0, 15, 2);
gotoxy(x, 18);
cout << "                               ���� ���� �մϴ�!";
Sleep(3000);

system("cls");

int fin_team = 0; //�� �� ���� �����ߴ��� ǥ��
bool mooindo[2]; //���ε��� ������ ���� ǥ��.
bool soolternull[2];//���ͳο� ������ ���� ǥ��.
int ternull_space[2];//���ͳ��� ��ġ ǥ��.
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
				cout << "��! " << team_first[i] << "�� ���ʳ׿�~???^^";
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
				cout << team_first[i] << "�� ����" << "��ġ " << place[i] << "�Դϴ�.";
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

				if (place[i] >= 8)
				{
					cout << "�����մϴ�!" << team_first[i] << "�� ���� �����Դϴ�!";
					fin_team++;
					gotoxy(x, ++y);
					cout << "�ƹ� Ű�� �����ּ���!";
					int key_v3 = _getch();
				}
				else {
					gotoxy(x, ++y);
					cout << "��ġ " << place[i] << "(��)�� �̵��߽��ϴ�.";
					gotoxy(x, ++y);
					if (place[i] >= 25)
					{
						cout << "�� ���� ����Ƽ���� " << adventage[place[i] - 25][0] << "�Դϴ�~";
						gotoxy(x, ++y);
						cout << adventage[place[i] - 25][1] << endl;
					}
					else
					{
						cout << "�� ���� ����Ƽ���� " << adventage[place[i] - 1][0] << "�Դϴ�~";
						gotoxy(x, ++y);
						cout << adventage[place[i] - 1][1] << endl;
					}
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

				if (fin_team >= 1)
					break;
		}
		}
	}
	if (fin_team >= 1)
		break;
	system("cls");
	y = st_y;
	gotoxy(x, y);
	cout << "�߰������Դϴ�!";
	gotoxy(x, ++y);
	cout << "-----------------------------";
	Sleep(1000);
	int max_t = 0;
	for (int i = 0; i < team; i++) {
		gotoxy(x, ++y);
		cout << "���� " << team_first[i] << "�� :" << place[i];
		if ( place[max_t]< place[i])
			max_t = i;
	}
	gotoxy(x, ++y);
	cout << "-----------------------------";
	gotoxy(x, ++y);
	cout << "���� " << team_first[max_t] << "���� ��ġ " << place[max_t] << "(��)�� �����Դϴ�!";
	Sleep(2000);
	y += 2;
	gotoxy(x, y);
	printMap(a, b, place[0], place[1],x, y);
}
y = st_y;
gotoxy(x, y);
cout << "�ַ縶���� ����Ǿ����ϴ�. ���� �����̽��ϴ�~"<<endl;
	system("pause");

}