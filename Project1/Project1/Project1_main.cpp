
#include<iostream>
#include<math.h>
#include<ctime>
#include <stdio.h>
#include <stdlib.h> 
#include "Header.h"



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
/*int print_1str (int w, char a)
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
} */

//Template
/*template < class T1, class T2, class T3, class T4 >
void Temp_Func(T1 a, T2 b, T3 c, T4 d)
{
	cout << a << N_LINE << b << N_LINE << c << N_LINE << d << N_LINE;
}*/

//RECTANGLES                                                                                        
/*struct rect {
	int x;
	int y;
	int width;
	int height;
};
typedef struct rect rectangle;

rectangle canonicalize(rectangle r) {
	//WRITE THIS FUNCTION
		if (r.width < 0)
		{
			r.width = r.width + (r.width * -2);
			r.x = r.x - r.width;
		};
		if (r.height < 0)
		{
			r.height = r.height + (r.height * -2);
			r.y = r.y - r.height;
		};
	return r;
}

rectangle intersection(rectangle r1, rectangle r2) {
	//WRITE THIS FUNCTION   
	r1 = canonicalize(r1);
	r2 = canonicalize(r2);
	int x1_2 = r1.x + r1.width;
	int x2_2 = r2.x + r2.width;
	int y1_2 = r1.y + r1.height;
	int y2_2 = r2.y + r2.height;

	if ((r2.x >= r1.x  &&  x2_2 <= x1_2) && (r2.y >= r1.y  &&  y2_2 <= y1_2))
	{
		return r2;
	}
	if ((r2.x <= r1.x  &&  x2_2 >= x1_2) && (r2.y <= r1.y  &&  y2_2 >= y1_2))
	{
		return r1;
	}
	else {
		if (
			((r1.x >= r2.x  &&  r1.x <= x2_2) || (x1_2 >= r2.x  &&  x1_2 <= x2_2)) &&
			((r1.y >= r2.y  &&  r1.y <= y2_2) || (y1_2 >= r2.y  &&  y1_2 <= y2_2))
			)
		{

			if (r1.x <= r2.x)
			{
				r1.x = r2.x;
				r1.width = x1_2 - r2.x;
			}
			else {
				r1.width = x2_2 - r1.x;
			}
			if (r1.y <= r2.y)
			{
				r1.y = r2.y;
				r1.height = y1_2 - r2.y;
			}
			else {
				r1.height = y2_2 - r1.y;
			}
		}
		else {
			r1.width = 0;
			r1.height = 0;
		}
	}
	return r1;
}

//You should not need to modify any code below this line                                                                          
void printRectangle(rectangle r) {
	r = canonicalize(r);
	if (r.width == 0 && r.height == 0) {
		printf("<empty>\n");
	}
	else {
		printf("(%d,%d) to (%d,%d)\n", r.x, r.y,
			r.x + r.width, r.y + r.height);
	}
} */

//RETIRE CULCULATOR
/*struct _retire_info
{
	int months;
	double contribution;
	double rate_of_return;
};
typedef struct _retire_info retire_info;


void retirement(int startAge, double initial, retire_info working, retire_info retired)
{
	int end_work = startAge + working.months;
	int end_retire = end_work + retired.months;
	for (int i = startAge; i < end_work; i++)
	{
		printf("Age %3d month %2d you have $%2.2f\n", startAge / 12, startAge % 12, initial);
		initial = initial + working.contribution + (initial * working.rate_of_return);
		startAge++;
	}
	for (int i = end_work; i < end_retire; i++)
	{
		printf("Age %3d month %2d you have $%2.2f\n", end_work / 12, end_work % 12, initial);
		initial = initial + retired.contribution + (initial * retired.rate_of_return);
		end_work++;
	}
} */

//Recuirse
/*int recuirse(int a)
{
	if (a == 0)
	{
		return 0;
	}
 if (a == 1)
{
	return 1;
}
 return a * recuirse(a - 1);
} */

// CARDS Course 2
/*void assert_card_valid(card_t c) 
{
	if (c.value >= 2 && c.value <= VALUE_ACE); 
	_ASSERT(c.value != 0); //c.value != 0
	
	if (c.suit >= SPADES && c.suit <= CLUBS);
	_ASSERT(c.suit != NUM_SUITS);
}

const char * ranking_to_string(hand_ranking_t r) {
	switch (r)
	{
	case STRAIGHT_FLUSH: return "STRAIGHT FLUSH"; break;
	case FOUR_OF_A_KIND: return "FOUR OF A KIND"; break;
	case FULL_HOUSE: return "FULL HOUSE"; break;
	case FLUSH: return "FLUSH"; break;
	case STRAIGHT: return "STRAIGHT"; break;
	case THREE_OF_A_KIND: return "THREE OF A KIND"; break;
	case TWO_PAIR: return "TWO PAIR"; break;
	case PAIR: return "PAIR"; break;
	case NOTHING: return "NOTHING"; break;
	}
	return 0;
}

char value_letter(card_t c) 
{
	if (c.value == 10)
	{
		return 48;
	}
	if (c.value >= 2  &&  c.value <= 9)
	{
		return 48 + c.value;
	}
	if (c.value == VALUE_ACE)
	{
		return 'A';
	}
	if (c.value == VALUE_KING)
	{
		return 'K';
	}
	if (c.value == VALUE_QUEEN)
	{
		return 'Q';
	}
	if (c.value == VALUE_JACK)
	{
		return 'J';
	}
	return 0;
}


char suit_letter(card_t c) {
	switch (c.suit)
	{
	case SPADES: return 's'; break;
	case HEARTS: return 'h'; break;
	case DIAMONDS: return 'd'; break;
	case CLUBS: return 'c'; break;
	case NUM_SUITS: return '?';
	} 
	return 0;
}

 void print_card(card_t c) 
 {
	 printf("%c%c" , value_letter(c), suit_letter(c));
}

card_t card_from_letters(char value_let, char suit_let) 
{
	card_t temp;
	switch (value_let)
	{
	case '0': temp.value = 10; break;
	case '1': temp.value = 1; break;
	case '2': temp.value = 2; break;
	case '3': temp.value = 3; break;
	case '4': temp.value = 4; break;
	case '5': temp.value = 5; break;
	case '6': temp.value = 6; break;
	case '7': temp.value = 7; break;
	case '8': temp.value = 8; break;
	case '9': temp.value = 9; break;
	case 'A': temp.value = VALUE_ACE; break;
	case 'K': temp.value = VALUE_KING; break;
	case 'Q': temp.value = VALUE_QUEEN; break;
	case 'J': temp.value = VALUE_JACK; break;
	default:  temp.value = 0;
	}

	switch  (suit_let)
	{
	case 's': temp.suit = SPADES; break; //s
	case 'h': temp.suit = HEARTS; break; //h
	case 'd': temp.suit = DIAMONDS; break; //d
	case 'c': temp.suit = CLUBS; break; //c
	default:  temp.suit = NUM_SUITS;
	};

	assert_card_valid (temp);
	return temp;
}

card_t card_from_num(unsigned c) 
{
	card_t temp;
	int num_suit = c / 13;
	int num_value = c % 13;

	if (num_suit <= 3)
	{
		if (num_value >= 0 && num_value <= 8)
		{
			temp.value = num_value + 2;
		}
		if (num_value == 9)
		{
			temp.value = VALUE_JACK;
		}
		if (num_value == 10)
		{
			temp.value = VALUE_QUEEN;
		}
		if (num_value == 11)
		{
			temp.value = VALUE_KING;
		}
		if (num_value == 12)
		{
			temp.value = VALUE_ACE;
		}

		switch (num_suit)
		{
		case 0: temp.suit = SPADES; break;
		case 1: temp.suit = HEARTS; break;
		case 2: temp.suit = DIAMONDS; break;
		case 3: temp.suit = CLUBS; break;
		}
	}
	else
	{
		temp.value = num_value + 2;
		temp.suit = NUM_SUITS;
	}
	assert_card_valid(temp);
	return temp;
}  */

//Assignment 11 Course 3
/*void g(int x, int * y) {
	printf("In g, x = %d, *y = %d\n", x, *y);
	x++;
	*y = *y - x;
	y = &x;
}

void f(int * a, int b) {
	printf("In f, *a = %d, b = %d\n", *a, b);
	*a += b;
	b *= 2;
	g(*a, &b);
	printf("Back in f, *a = %d, b = %d\n", *a, b);
} */

//Assignment 12 Course 3
/*int f(int ** r, int ** s) {
	int temp = ** r;
	int temp2 = **s;
	int * z = *r;
	*r = *s;
	*s = z;
	printf("**r = %d\n", **r);
	printf("**s = %d\n", **s);
	*z += 3;
	**s -= 8;
	**r -= 19;
	return temp + temp2;
} */

//SWAP
  /*template <typename T1, typename T2> 
void swap(T1 &pa, T2 &pb)
{
	int temp = pa;
	pa = pb;
	pb = temp;

} */

//Array
/*int SumArray(int *arr, int n)
{
	int answer = 0;
	for (int i = 0; i < n; i++)
	{
		answer = answer + arr[i];
	}
	return answer;
} */

//Array MAX
  /*int * arrayMax(int * array, int n) 
{
	if (n == 0)
	{
		return NULL;
	}

	int *largest = array;
	for (int i = 1; i < n; i++)
	{
		if ( *(array + i) > *largest)
		{
			*largest = *(array + i);
		}
	}
	return largest;
}*/

//Assignment 13 Course 3
  /*void doTest(int * array, int n) {
	printf("arrayMax(");
	if (array == NULL) {
		printf("NULL");
	}
	else {
		printf("{");
		for (int i = 0; i < n; i++) {
			printf("%d", array[i]);
			if (i < n - 1) {
				printf(", ");
			}
		}
		printf("}");
	}
	printf(", %d) is \n", n);
	int * p = arrayMax(array, n);
	if (p == NULL) {
		printf("NULL\n");
	}
	else {
		printf("%d\n", *p);
	}
}*/


size_t maxSeq(int * arrayLenght, size_t n)
{
	size_t maxLenSeq = *arrayLenght;
	int *arr_1 = arrayLenght;
	//int sizeArrLen = sizeof(arrayLenght) / sizeof(arrayLenght[0]);
	for (int i = 1; i < n; i++)
	{
		if ( *(arr_1 + i) > *arr_1)
		//if (arrayLenght[i + 1] > arrayLenght[i])
		{
			maxLenSeq = *(arr_1 + i);
			//maxLenSeq = arrayLenght[i + 1];
		}
	}
	return maxLenSeq;
}

	




int main(void)
{
	setlocale(LC_ALL, "RUS");


		int array[] = { 1000,500,100,55,22,11,1,0 };
		
		int *pArr = array;
		size_t maxLenSeq = 0;
	    size_t curLenSeq = 0;
		int sizeArray = sizeof(array) / sizeof(array[0]);
	
		if (sizeArray == 0)
		{
			return maxLenSeq = 0;
		}
	
			for (size_t i = 0; i < sizeArray; i++)
			{
					for ( size_t j = 0;  pArr[ i + 1] > pArr[i] &&  i < sizeArray;  j++ )
					{
						curLenSeq = j + 2;
						i++;
					}
	
			
				if (curLenSeq > maxLenSeq)
				{
					maxLenSeq = curLenSeq;
				}
				if (maxLenSeq == 0)
				{
					maxLenSeq = 1;
				}
	
				/*if (arrayLenght[0] > maxLenSeq)
				{
					maxLenSeq = arrayLenght[0];
				}
				if (arrayLenght[0] == 0)
				{
					maxLenSeq = 1;
				} */
	
			}
			
		/*for (int s = 0; s < 2; s++)
		{
			cout << arrayLenght[s] << " ";
		}*/
	
		cout << endl << "Max lenght in number:\t" << maxLenSeq << endl;
		cout << "Size of array:\t" << sizeArray << endl;
		
		return maxLenSeq;
		 //return EXIT_SUCCESS;
	}


	/*int arr[500]{};
	for (int i = 0; i < 500; i++)
	{
		arr[i] = i;
		cout << i <<", ";
	}
}*/


//Assignment 13 Course 3
	/*doTest(array1, 8);
	doTest(array2, 7);
	doTest(array3, 6);
	doTest(NULL, 0);
	doTest(array1, 0); */

	//return EXIT_SUCCESS;

	//Array
	/*int sum;
	const int SIZE = 4;

	int arr[SIZE]{ 3, 5, 4, 103 };
	cout << SumArray (arr , SIZE) << endl;
	cout << arr[5];*/

	//SWAP
  /*int a = 4, b = 7;
cout << "Before a = " << a << endl;
cout << "Before b = " << b << endl;

swap (a, b);
cout << "After a = " << a << endl;
cout << "After b = " << b << endl;
cout << "a - b = " << b - a << endl;*/

	//Assignment 13 Course 3
	/*int anArray[] = { 5,16,33,99 };
	int * p = anArray;
	printf("*p = %d\n", *p);
	p++;
	printf("Now *p = %d\n", *p);
	int * q = &anArray[3];
	int ** x = &q;
	**x = 12;
	*x = p;
	**x = 42;
	q[1] = 9;
	for (int i = 0; i < 4; i++) {
		printf("anArray[%d] = %d\n", i, anArray[i]);
	}
	return EXIT_SUCCESS;
  } */

	//Assignment 12 Course 3
	/*int a = 80;
	int b = 12;
	int * p = &a;
	int * q = &b;
	int x = f(&p, &q);
	printf("x = %d\n", x);
	printf("*p = %d\n", *p);
	printf("*q = %d\n", *q);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return EXIT_SUCCESS; */

	//Assignment 11 Course 3
	/*int x = 3;
	int y = 4;
	f(&x, y);
	printf("In main: x = %d, y = %d\n", x, y);
	return EXIT_SUCCESS; */

	// CARDS Course 2
	/*for (int i = 0; i < 52; i++)
	{
	  print_card(card_from_num(i));
	}
	char val = 'A';
	char suit = 's';
	card_t a = card_from_letters(val, suit);
	print_card(a);

	cout << value_letter(a) << suit_letter(a);
	print_card(a); */

	//Recuirse
	/*cout << recuirse(9) << endl; */

	//RETIRE CULCULATOR
	/*int startAge = 327;
	double savings = 21345;
	retire_info working;
	retire_info retired;

	working.months = 489;
	working.contribution = 1000;
	working.rate_of_return = 0.045 / 12;

	retired.months = 384;
	retired.contribution = -4000;
	retired.rate_of_return = 0.01 / 12;

	retirement (startAge, savings, working, retired);

	return EXIT_SUCCESS; */
	
	////RECTANGLES  
	/*	rectangle r1;
		rectangle r2;
		rectangle r3;
		rectangle r4; 

		r1.x = 2;
		r1.y = 3;
		r1.width = 5;
		r1.height = 6;
		printf("r1 is ");
		printRectangle(r1);

		r2.x = 4;
		r2.y = 5;
		r2.width = -5;
		r2.height = -7;
		printf("r2 is ");
		printRectangle(r2);

		r3.x = -2;
		r3.y = 7;
		r3.width = 7;
		r3.height = -10;
		printf("r3 is ");
		printRectangle(r3);

		r4.x = 0;
		r4.y = 7;
		r4.width = -4;
		r4.height = 2;
		printf("r4 is ");
		printRectangle(r4); 

		//test everything with r1                                                                                                       
		rectangle i = intersection(r1, r1);
		printf("intersection(r1,r1): ");
		printRectangle(i);

		i = intersection(r1, r2);
		printf("intersection(r1,r2): ");
		printRectangle(i);

		i = intersection(r1, r3);
		printf("intersection(r1,r3): ");
		printRectangle(i);

		i = intersection(r1, r4);
		printf("intersection(r1,r4): ");
		printRectangle(i);

		//test everything with r2                                                                                                       
		i = intersection(r2, r1);
		printf("intersection(r2,r1): ");
		printRectangle(i);

		i = intersection(r2, r2);
		printf("intersection(r2,r2): ");
		printRectangle(i);

		i = intersection(r2, r3);
		printf("intersection(r2,r3): ");
		printRectangle(i);

		i = intersection(r2, r4);
		printf("intersection(r2,r4): ");
		printRectangle(i);

		//test everything with r3                                                                                                       
		i = intersection(r3, r1);
		printf("intersection(r3,r1): ");
		printRectangle(i);

		i = intersection(r3, r2);
		printf("intersection(r3,r2): ");
		printRectangle(i);

		i = intersection(r3, r3);
		printf("intersection(r3,r3): ");
		printRectangle(i);

		i = intersection(r3, r4);
		printf("intersection(r3,r4): ");
		printRectangle(i);

		//test everything with r4                                                                                                       
		i = intersection(r4, r1);
		printf("intersection(r4,r1): ");
		printRectangle(i);

		i = intersection(r4, r2);
		printf("intersection(r4,r2): ");
		printRectangle(i);

		i = intersection(r4, r3);
		printf("intersection(r4,r3): ");
		printRectangle(i);

		i = intersection(r4, r4);
		printf("intersection(r4,r4): ");
		printRectangle(i); 

		cout << r1.x << "  " << r1.y << "  " << r1.width << "  " << r1.height << endl;
		cout << r2.x << "  " << r2.y << "  " << r2.width << "  " << r2.height << endl;
		cout << r3.x << "  " << r3.y << "  " << r3.width << "  " << r3.height << endl;
		cout << r4.x << "  " << r4.y << "  " << r4.width << "  " << r4.height << endl;

		return EXIT_SUCCESS; */

	//Template
	/*Temp_Func(true, 0x2F, 3.849, "WOW!!!");*/

	//Square
	/*int width;
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
	*/

	//Triangle
	/*int n;
	cout << "Height of stars:  " ;
	cin >> n;
	int a = n_stars(n);
	printf ("Count of stars:  %d\n", a ); */

	//array//
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

