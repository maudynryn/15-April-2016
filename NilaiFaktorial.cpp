#include <iostream>

using namespace std;

int main()
{
    int nilai,jumlah;
    cout << "Masukan nilai = ";
    cin >> nilai;
    jumlah=1;
    cout << "Faktorial = ";
    for (;nilai>0;nilai--)
    {
        cout << nilai ;
        if (nilai!=1)
        {
            cout << " X ";
        }
        jumlah=jumlah*nilai;
    }
    cout << " = " << jumlah;
}
