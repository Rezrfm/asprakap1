#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int inp, inp1, lim, temp;

  cout << "Masukkan berapa baris yang diinginkan : ";
  cin >> inp;
  cout << "Masukkan berapa kolom yang diinginkan : ";
  cin >> inp1;
  const int *row = &inp;
  const int *col = &inp1;
  int trow = pow(inp, 2) * inp1;
  const int *tres = &trow;
  int arr1[*row][*col];
  int arr2[*row][*col];
  int res[*row][*col];
  int tem[*tres];

  cout << endl;
  cout << "Matriks ke-1" << endl;
  for (int i = 0; i < inp; i++) {
    cout << "Baris ke-" << i + 1 << endl;
    for (int j = 0; j < inp1; j++) {
      cout << "Masukkan data ke-" << j + 1 << " : ";
      cin >> arr1[i][j];
    }
  }

  cout << endl;
  cout << "Matriks ke-2" << endl;
  for (int i = 0; i < inp; i++) {
    cout << "Baris ke-" << i + 1 << endl;
    for (int j = 0; j < inp1; j++) {
      cout << "Masukkan data ke-" << j + 1 << " : ";
      cin >> arr2[i][j];
    }
  }

  cout << endl;
  cout << "Menampilkan matriks " << inp << " x " << inp1 << endl;
  cout << endl;

  for (int i = 0; i < inp; i++) {
    for (int j = 0; j < inp1; j++) {
      cout << arr1[i][j] << " ";
    }

    cout << "   ";

    for (int k = 0; k < inp1; k++) {
      cout << arr2[i][k] << " ";
    }
    cout << endl;
  }

  cout << endl;
  cout << "Penjumlahan Array" << endl;

  for (int i = 0; i < inp; i++) {
    for (int j = 0; j < inp1; j++) {
      res[i][j] = arr1[i][j] + arr2[i][j];
    }
  }

  for (int i = 0; i < inp; i++) {
    for (int j = 0; j < inp1; j++) {
      cout << res[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;
  cout << "Pengurangan Array" << endl;

  for (int i = 0; i < inp; i++) {
    for (int j = 0; j < inp1; j++) {
      res[i][j] = arr1[i][j] - arr2[i][j];
    }
  }

  for (int i = 0; i < inp; i++) {
    for (int j = 0; j < inp1; j++) {
      cout << res[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;
  cout << "Perkalian Array" << endl;
  lim = 0;
  for (int i = 0; i < inp; i++) {
    for (int j = 0; j < inp1; j++) {
      for (int k = 0; k < inp1; k++) {
        tem[lim] = arr1[i][k] * arr2[k][j];
        ++lim;
      }
    }
  }

  temp = 0;
  lim = 0;

  for (int i = 0; i < inp; i++) {
    for (int j = 0; j < inp1; j++) {
      for (int k = 0; k < inp1;) {
        temp = temp + tem[lim];

        ++lim;

        if (k == inp1 - 1) {
          res[i][j] = temp;
          temp = 0;
        }
        ++k;
      }
    }
  }

  for (int i = 0; i < inp; i++) {
    for (int j = 0; j < inp1; j++) {
      cout << res[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}