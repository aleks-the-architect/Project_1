
#include<iostream>
#include<math.h>



using namespace std;

 /* ������������� 
    ����������� */


const char  TAB = '\t';
const char  N_LINE = '\n';


 int compare (int x, int y, int z)  // ��������� ����� 
{
	 x = x % 2;

	if (x > y  &&  y > z) {
		cout << N_LINE << x << " ������ " << y << N_LINE;
	}
	else if (x==0) {
		cout << N_LINE << " � - ������ ����� " ;
	}
	else
	{
		cout << N_LINE <<  " ������� �� ���������! "  << N_LINE;
	}

	return 0;
} 

 int arithmetic (int x, int y, int z)  // �������������� ��������
 {
	cout << N_LINE << "x * y * z = " << (x + 10) * y * z << "\n";
	cout << N_LINE << "x + y + z = " << x + y + z << "\n";
	cout << N_LINE << "������� �������������� = " << (x + y + z) / 3 << "\n";
	cout << N_LINE << x << "\n";
	return 0;
}  

 int calculon (int x, int y, int z)
 {
	 switch (x, y, z)
	 {
	 case '+':
		 cout << " = " << x + y ;
		 break;

	 case '-':
		 cout << " = " << x - y ;
		 break;

	 case '*':
		 cout << " = " << x * y;

	 case '/':
		 cout << " = " << (float) x / y ;
		 break;
	 }

	 return 0;
 }




int  main ()
{
	setlocale(LC_ALL, "RUS");
	
	/*int v1, v2;
	char v3;
	
	int i = 1;
	while (i <= 3) 
	{
		cout << "������� ����: ";
		cin >> v1 >> v3 >> v2;
		int a = calculon(v1, v2, v3);
		i++;
	} */
	

	char a;
	int width;
	int height;

	cout << N_LINE << "������� ������:  ";
	cin >> a;
	cout << N_LINE << "������� ������:  ";
	cin >> width;
	cout << N_LINE << "������� ������:  ";
	cin >> height;
	
	for (int i = 1;  i <= height;  i++) 
	{
		cout << "" << N_LINE;

		for (int j = 1; j <= width; j++)
		{
			cout << a << "|_" ;
		}
	}





	/*char a;
	int n_repeat;
	int hor_vert;
	int i = 1;

	for ( ; ; )
	{
		cout  << N_LINE << "������� ������:  ";
		cin >> a;
		cout << "���������� ����������:  ";
		cin >> n_repeat;
		cout << "������� ����������:  ";
		cin >> hor_vert;
		while (i <= n_repeat)
		{
			if (hor_vert == 1)
			{
				cout << a << "  ";
			}
			else
			{
				cout << a << N_LINE;
			}
			i++;
		}
		i = 1;
	} */


	/*_ASSERT(hor_vert == 1); */

	//cout << "������� x:  ";
	//cin >> v1;
	//cout << "������� y:  ";
	//cin >> v2;
	//cout << "������� ��������:  ";
	//cin >> v3;

	//int a = compare (v1, v2, v3);
	//int b = arithmetic (v1, v2, v3);

	 
	}
