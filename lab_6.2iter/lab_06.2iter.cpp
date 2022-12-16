#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = Low + rand() % (High - Low + 1);
    }
   
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << a[i];
    }
        cout << endl;
}
int IndexMaxElem(int a[], const int size, int& index)
{
    int max = 0;

    for (int i = 0; i < size; i++)
    {
        if (max < a[i] && a[i] % 2 == 0)
        {
            max = a[i];
            index = i;
        }
    }
   
        return index;

}




int main()
{
    srand((unsigned)time(NULL));

    int n;
    cout << "n = "; cin >> n;

    int* a = new int[n];
    int Low = -10;
    int High = 10;

    Create(a, n, Low, High);
    Print(a, n);

    int index = -1;
    int i = IndexMaxElem(a, n, index);
    
    if (index != -1)
    {
        cout << "index = " << i << endl;
    }
    else
    {
        cout << "There isn't zero" << endl;
    }


    delete[]a;

    return 0;
}