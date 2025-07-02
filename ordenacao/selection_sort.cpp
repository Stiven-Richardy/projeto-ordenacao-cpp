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

#define NUM_ARRAY 8

// SELECTION SORT
void sort_selection(int *arg, int t) {
	int ind;
	int aux;
	
	for (int ii = 0; ii < (t-1); ++ii) {
		ind = ii;
		cout << string(44, '=') << endl;
		cout << "| Looping " << ii << endl;
		cout << string(44, '=') << endl;
		for (int jj = (ii + 1); jj < t; ++jj) {
			cout << "| [" << ind << "]: " << arg[ind] << ", [" << jj << "]: " << arg[jj];
			if (arg[jj] < arg[ind]) {
				ind = jj;
				cout << " - Valor mínimo!";
			} 
			cout << endl;
		}
		if (arg[ii] == arg[ind]) {
			cout << "| Se mantém" << endl;
		} else {
			cout << "| Valor mínimo encontrado: [" << ind << "] = " << arg[ind] << endl;
			cout << "| Trocando com o elemento: [" << ii << "] = " << arg[ii] << endl;
			aux = arg[ii];
			arg[ii] = arg[ind];
			arg[ind] = aux;
		}
	}
}

// DISPLAY FUNCTIONS
void title() {
    cout << string(44, '=') << endl
         << string(15, ' ') << "SELECTION SORT" << endl
         << string(44, '=') << endl;
}

void clear() {
    cout << string(44, '=') << endl
         << "Pressione qualquer tecla..." << endl;
    _getch();
    system("cls");
}

void print(int *arg, int t)
{
	for(int i=0; i < t; ++i)
	{
		cout << "| Elemento: " << i << " = "
		     << arg[i] << endl; 
	}
}

// MAIN FUNCTION
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	int a[NUM_ARRAY] = {49, 38, 58, 87, 34, 93, 26, 13};
	
	title();
	cout << "| Array: " << endl;
    print(a, NUM_ARRAY);
    clear();
 	
 	title();
    sort_selection(a, NUM_ARRAY);
    clear();
    
    title();
    print(a, NUM_ARRAY);
    clear();

	return 0;
}