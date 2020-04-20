
#include<iostream>
#include<math.h>
#include<ctime>



using namespace std;

const char  TAB = '\t';
const char  N_LINE = '\n';


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


void fillArray(int arr [] , const int size )
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
}

int max(int a)
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


int  main ()
{
	setlocale(LC_ALL, "RUS");
	
	int a = max(5);
	printf ("Count of stars:  %d\n",  max(a));




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
	
	//call function
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
