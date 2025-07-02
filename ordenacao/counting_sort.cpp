/*
=========================================
| NAME: Stiven Richardy Silva Rodrigues |
| CLASS: ADS 371                        |
=========================================
*/

#include <iostream>
#include <locale.h>
#include <string>
#include <conio.h>

using namespace std;

#define NUM_ARRAY 5
#define NUM_DOUBLE 8

// DISPLAY FUNCTIONS
void title() {
    cout << string(43, '=') << endl
         << string(15, ' ') << "COUNTING SORT" << endl
         << string(43, '=') << endl;
}

void clear() {
    cout << string(43, '=') << endl
         << "Pressione qualquer tecla..." << endl;
    _getch();
    system("cls");
}

void print(int *arg, int t)
{
    for(int i = 0; i < t; ++i)
    {
        cout << "| Elemento: " << i << " = " << arg[i] << endl;
    }
}

// MAIN FUNCTION
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
    int a[NUM_ARRAY] = {7, 2, 1, 4, 2};
    title();
    cout << "| Array: " << endl;
    print(a, NUM_ARRAY);
	clear();
	
    int c[NUM_DOUBLE];
    for(int ii = 0; ii < (NUM_DOUBLE - 1); ++ii)
    {
        c[ii] = 0;
    }

    for(int ii = 0; ii < NUM_ARRAY; ++ii)
    {
        c[a[ii] - 1] += 1;
    }
    title();
    cout << "| Frequência: " << endl;
    print(c, (NUM_DOUBLE - 1));
	clear();

    int aux = 0;
    int b[NUM_ARRAY];
    for(int ii = 0; ii < (NUM_DOUBLE - 1); ++ii)
    {
        for(int jj = 0; jj < c[ii]; jj++)
        {
            b[aux++] = ii + 1;
        }
    }
    title();
    print(b, NUM_ARRAY);
    clear();

    return 0;
}