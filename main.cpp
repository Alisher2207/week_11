#include <iostream>
#include <array>

using namespace std;
//const int SIZE = 4;

//double sumColumn(const double m[] [SIZE], int rowsize,int columnIndex) {
 //double sum = 0;
 //for (int i=0;i<rowsize; i++)
  //sum+= m[i] [columnIndex];
 //return sum;
 //double summajordiagonal(const double m[SIZE][SIZE]) {
  //double sum =0;
  //for (int i=0;i<SIZE; i++) {
   //sum += m[i][i];
  //}

 //}
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
 //int main() {
//  double m [SIZE][SIZE];
  //for (int i=0;i< SIZE; j++) {
   //for (int j =0 ; j< SIZE ; j++) {
    //cin>> m[i][j];

   //}
  //}
  //cout<<summajordiagonal(m)<<endl;
  //return 0 ;
 //}
//}
//problem3
//
// const int n=4;
// void multiplyMatrix(const double a[][n], const double b[][n], const double c[][n]) {
// for (int i = 0; i < n; i++) {
// for (int j = 0; j < n; j++) {
// for (int k = 0; k < n; k++) {
// c[i][j] += a[i][k] * b[k][j];
// }
// }
// }
// for(int i = 0; i < n; i++) {
// for(int j = 0; j < n; j++) {
// cout<<c[i][j]<<" ";
// }cout<<endl;
// }
//
// }
// int main() {
//  double a[n][n], b[n][n], c[n][n];
//  cout<<"Enter matrix A:"<<endl;
//  for(int i = 0; i < n; i++) {
//   for(int j = 0; j < n; j++) {
//    cin>>a [i][j];
//   }
//  }
//  for(int i = 0; i < n; i++)
//   for(int j = 0; j < n; j++) {
//    cin>>b[i][j];
//   }
//
//  multiplyMatrix(a,b,c);
// }


//problem4
// int findMax(int mat[][100], int n ,int m) {
//  int max=mat[0][0];
//  for(int i=0;i<n;i++) {
//   for(int j=0;j<m;j++) {
//    if(mat[i][j]>max) max=mat[i][j];
//   }
//  }
//  return max;
// }
// int main() {
//  int n, m;
//  cin>>n>>m;
//  int mat[100][100];
//  for(int i=0;i<n;i++) {
//   for(int j=0;j<m;j++) {
//    cin>>mat[i][j];
//   }
//  }
//  cout<<findMax(mat, n, m)<<endl;
//  return 0;
// }
//problem5

//problem6
// int main() {
//  int n,m ;
//  cout<<"row" ; cin>>n ;
//
//  cout<<"column"; cin>>m ;
//
//  int matrix[n][m];
//  for(int i=0;i<n;i++) {
//   for(int j=0;j<m;j++) {
//    cin>>matrix[i][j];
//   }
//  }
//  for (int i=0;i<n;i++) {
//   int sum=0;
//   for (int j=0;j<m;j++) {
//    sum+=matrix[i][j];
//    cout<<matrix[i][j]<<" ";
//   }cout<<"Average of sum" <<double(sum)/m<<endl;
//
//  }
//  return 0;
// }0

//problem7
