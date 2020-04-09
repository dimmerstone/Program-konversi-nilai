#include <iostream>
using namespace std;

int main()
{
    int nilai;
    cout<<"Masukan Nilai: ";
    cin>>nilai;

    if (nilai>=90&& nilai<=100)
    cout<<"Sangat bagus = A";
    else
    if (nilai>=70 && nilai<90)
    cout<<"Lumayan= B";
    else
    if (nilai>=45 && nilai<70)
    cout<<"Nilai Cukup= C";
    else
    if (nilai>=25 && nilai<45)
    cout<<"Belajar lagi = D";
    else
    if (nilai<25 && nilai>=0)
    cout<<"Mengulang kelas = E";
    else
    if (nilai>100 || nilai<0)
    cout<<"anda salah masukan nilai";
    return 0;
}
