#include <iostream>
using namespace std;

float r;
float phi = 3.14;

void input()
{
    cout << "Isi jari jari : ";
    cin >> r;
}

float luas(float a)
{
    return phi * a * a;
}

void output()
{
    cout << "Luas Adalah : " << luas(r);
}

int main()
{
    input();
    output();
}