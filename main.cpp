#include <iostream>
using namespace std;
const int SIZE = 4;

double sumColumn(const double m[] [SIZE], int rowsize,int columnIndex) {
 double sum = 0;
 for (int i=0;i<rowsize; i++)
  sum+= m[i] [columnIndex];
 return sum;
 double summajordiagonal(const double m[SIZE][SIZE]) {
  double sum =0;
  for (int i=0;i<SIZE; i++) {
   sum += m[i][i];
  }

 }
 //problem1
 // const int size = 4;
 //
 // double sumColumn(const double m[] [size], int rowsize,int columnIndex) {
 //     double sum = 0;
 //     for (int i=0;i<rowsize; i++)
 //         sum+= m[i] [columnIndex];
 //     return sum;
 // }
 // int main() {
 //         double m[5] [size] =
 //             {{5,3 ,1,6,},{ -5,2,1,5,},{6,6,1,6,}, {-3,11,2,55,},{0,4,0,4,}};
 //         for (int c = 0; c <size ;c++)
 //             cout << "Sum of column" << c<<" = " << sumColumn(m,5,c) << endl;
 //     }

 //problem2
 // const int SIZE=4;
 // Double sumMajorDiagonal(const double m[] [SIZE]) {
 //     for (int i=0;i<SIZE;i++) {
 //         sum +=m[i] [i];
 //     }
 //     return sum;
 // }
 //
 // int main() {
 //     int n;
 //     cin >> n;
 //     double arr[n][n];
 //     for (int i=0;i<n;i++) {
 //         for (int j=0;j<n;j++) {
 //             cin >> arr[i][j];
 //         }
 //     }
 //
 //     cout<<"Sum of the diagonal values through columns:"<<sumMajorDiagonal(arr)<<endl;
 //     return 0;
 // }
 //
 //Again problem2
 int main() {
  double m [SIZE][SIZE];
  for (int i=0;i< SIZE; j++) {
   for (int j =0 ; j< SIZE ; j++) {
    cin>> m[i][j];

   }
  }
  cout<<summajordiagonal(m)<<endl;
  return 0 ;
 }
}
