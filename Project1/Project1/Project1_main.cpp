
#include<iostream>
#include<math.h>
#include<ctime>



using namespace std;

const char  TAB = '\t';
const char  N_LINE = '\n';

//arithmetic
/* int compare (int x, int y, int z)  // сравнение чисел 
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
 } */

 //array
/*void fillArray(int arr [] , const int size )
{
		for (int i = 0; i < size; i++)
		{
			arr[i] = i;
		}
}

void printArray ( int arr[], const int size )
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
} */

//Triangle
/*int n_stars(int a)
{
	int star = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
			star++;
		}
		cout << "" << N_LINE;
	}
	return star;
}
*/

//Square
int print_1str (int w, char a)
{
	int count_s1 = 0;
	for (int i = 1; i <= w; i++)
	{
		cout << a;
		count_s1++;
	}
	cout << N_LINE;
	return count_s1 * 2;
}

//Square
int print_2str(int h, int w, char a)
{
	int str2 = w - 2;
	int h2 = h - 2;
	int count_s2 = 0;
	for (int i = 1; i <= h2; i++)
	{
		cout << a;
		for (int k = 1; k <= str2; k++)
		{
			cout << " ";
			
		}
		cout << a << N_LINE;
		count_s2++;
	}
	return count_s2 * 2;
}


int  main ()
{
	setlocale(LC_ALL, "RUS");
	
	//Square
	int width;
	int height;
	char symbol_a;
	cout << "Enter width:  ";
	cin >> width;
	cout << "Enter height:  ";
	cin >> height;
	cout << "Enter symbol:  ";
	cin >> symbol_a;
	cout << N_LINE;

	int a = print_1str(width, symbol_a);
	int b = print_2str(height, width, symbol_a);
	print_1str(width, symbol_a);
	cout << N_LINE << "Total number of symbol:  " << a + b << N_LINE;


	//Triangle
	/*int n;
	cout << "Height of stars:  " ;
	cin >> n;
	int a = n_stars(n);
	printf ("Count of stars:  %d\n", a ); */


	/*srand ( time (NULL));
	const int SIZE = 10;
	int arr [SIZE];

	fillArray(arr, SIZE);
	printArray(arr, SIZE); */

	//array//
	/*const int ROW = 3;
	const int COL = 5;
	int arr [ROW] [COL];
	
	for (int i = 0 ; i < ROW ; )
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = j;
		}
		i++;
	}

	for (int k = 0; k < ROW;)
	{
		for (int p = 0; p < COL; p++)
		{
			int a = 0;
			cout << arr[a][p] << "   ";
		}
		cout << N_LINE;
		k++;
		
	}
	

	/*cout << N_LINE << "Количество элементов:  " << sizeof(arr) / sizeof(arr[0]) << endl; */

	//call function//
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
	
	//arithmetic
/*cout << "Введите x:  ";
cin >> v1;
cout << "Введите y:  ";
cin >> v2;
cout << "Введите оператор:  ";
cin >> v3;

//int a = compare (v1, v2, v3);
//int b = arithmetic (v1, v2, v3); */

	//loop//
	/*char a;
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
			cout << a << "_" ;
		}
	} */

	//condition//
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
	}
