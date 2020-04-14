
#include<iostream>
#include<math.h>



using namespace std;

 /* многострочные 
    комментарии */


const char  TAB = '\t';
const char  N_LINE = '\n';


 int compare (int x, int y, int z)  // сравнение чисел 
{
	 x = x % 2;

	if (x > y  &&  y > z) {
		cout << N_LINE << x << " больше " << y << N_LINE;
	}
	else if (x==0) {
		cout << N_LINE << " х - четное число " ;
	}
	else
	{
		cout << N_LINE <<  " Условия не выполнены! "  << N_LINE;
	}

	return 0;
} 

 int arithmetic (int x, int y, int z)  // арифметические действия
 {
	cout << N_LINE << "x * y * z = " << (x + 10) * y * z << "\n";
	cout << N_LINE << "x + y + z = " << x + y + z << "\n";
	cout << N_LINE << "Среднее арифметическое = " << (x + y + z) / 3 << "\n";
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
		cout << "Начните ввод: ";
		cin >> v1 >> v3 >> v2;
		int a = calculon(v1, v2, v3);
		i++;
	} */
	

	char a;
	int width;
	int height;

	cout << N_LINE << "Введите символ:  ";
	cin >> a;
	cout << N_LINE << "Введите ширину:  ";
	cin >> width;
	cout << N_LINE << "Введите высоту:  ";
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
		cout  << N_LINE << "Введите символ:  ";
		cin >> a;
		cout << "Количество повторений:  ";
		cin >> n_repeat;
		cout << "Укажите ориентацию:  ";
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

	//cout << "Введите x:  ";
	//cin >> v1;
	//cout << "Введите y:  ";
	//cin >> v2;
	//cout << "Введите оператор:  ";
	//cin >> v3;

	//int a = compare (v1, v2, v3);
	//int b = arithmetic (v1, v2, v3);

	 
	}
