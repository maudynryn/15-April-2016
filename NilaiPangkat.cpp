#include <iostream>

using namespace std;

int main()
{
    int i,nilai,pangkat,jumlah;
    cout << "Masukkan nilai = ";
    cin >> nilai;
    cout << "Masukkan pangkat = ";
    cin >> pangkat;
    jumlah=1;
    for (i=1;i<=pangkat;i++)
    {
        jumlah=jumlah*nilai;
    }
    cout << "Jumlah = "<<jumlah;
}
