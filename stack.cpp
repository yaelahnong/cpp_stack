#include <stdio.h>
#include <iostream>
#define MAX 10

using namespace std;

struct Stack
{
  int top, data[MAX];
} Tumpukan;

void init()
{
  Tumpukan.top = -1;
}

bool isEmpty()
{
  return Tumpukan.top == -1;
}

bool isFull()
{
  return Tumpukan.top == MAX - 1;
}

void push()
{
  if (isFull()) {
    cout << "\n Tumpukan penuh" << endl;
  } else {
    Tumpukan.top++;
    cout << "\nMasukkan data = ";
    cin >> Tumpukan.data[Tumpukan.top];
    cout << "Data " << Tumpukan.data[Tumpukan.top] << " Masuk ke stack" << endl;
  }
}

void pop()
{
  if (isEmpty()) {
    cout <<"\nData Kosong\n" << endl;
  } else {
    cout << "\nData " << Tumpukan.data[Tumpukan.top] << " Sudah terambil" << endl;
    Tumpukan.top--;
  }
}

void printStack()
{
  if (isEmpty()) {
    cout << "\nTumpukan kosong";
  } else {
    cout << "\nTumpukan = ";

    for (int i = Tumpukan.top; i >= 0; i--) {
      cout << Tumpukan.data[i] << ((i == 0) ? " " : ",");
    }
  }
}

int main()
{
  int pilihan;
  init();
  do {
    printStack();
    cout << endl;
    cout << "\n1. Input Push";
    cout << "\n2. Hapus Pop";
    cout << "\n3. Keluar";
    cout << "\nMasukkan pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        cout << "Program berakhir";
        break;
      
      default:
        cout << "Pilihan tidak tersedia" << endl;
        cout << "Menampilkan menu kembali..." << endl;
    }
  } while (pilihan != 3);
}