#include <iostream>
#include <array>
#include <vector>
#include <limits>
#include <algorithm>

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

// int main() {
//  int n;
//  cout << "Enter size of matrix (n): ";
//  cin >> n;
//
//  int a[100][100];
//
//  cout << "Enter elements of the matrix:\n";
//  for (int i = 0; i < n; i++) {
//   for (int j = 0; j < n; j++) {
//    cin >> a[i][j];
//   }
//  }
//
//  cout << "Transpose of the matrix:\n";
//  for (int i = 0; i < n; i++) {
//   for (int j = 0; j < n; j++) {
//    cout << a[j][i] << " ";
//   }
//   cout << endl;
//  }
//
//  return 0;
// }

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

// int main() {
//  int n;
//  cout << "Enter size of matrix (n): ";
//  cin >> n;
//
//  int a[100][100];
//  cout << "Enter elements of the matrix:\n";
//  for (int i = 0; i < n; i++)
//   for (int j = 0; j < n; j++)
//    cin >> a[i][j];
//
//  bool symmetric = true;
//  for (int i = 0; i < n; i++) {
//   for (int j = 0; j < n; j++) {
//    if (a[i][j] != a[j][i]) {
//     symmetric = false;
//     break;
//    }
//   }
//   if (!symmetric) break;
//  }
//
//  if (symmetric)
//   cout << "The matrix is symmetric." << endl;
//  else
//   cout << "The matrix is not symmetric." << endl;
//
//  return 0;
// }

// problem 8

// int main() {
//  int n;
//  cout << "Enter number of grades: ";
//  cin >> n;
//
//  vector<int> grades(n);
//  cout << "Enter " << n << " grades:\n";
//  for (int i = 0; i < n; i++)
//   cin >> grades[i];
//
//  int minimum = grades[0];
//  int maximum = grades[0];
//  double sum = 0;
//
//  for (int g : grades) {
//   if (g < minimum) minimum = g;
//   if (g > maximum) maximum = g;
//   sum += g;
//  }
//
//  double average = sum / n;
//
//  cout << "Minimum=" << minimum << endl;
//  cout << "Maximum=" << maximum << endl;
//  cout << "Average=" << average << endl;
//
//  return 0;
// }
//

//problem 9

// int main() {
//  int n;
//  cout << "Enter the number of elements: ";
//  cin >> n;
//
//  vector<int> numbers;
//  cout << "Enter " << n << " numbers: ";
//  for (int i = 0; i < n; ++i) {
//   int num;
//  cin >> num;
//   if (num > 0) {
//    numbers.push_back(num);
//   }
//  }
//  sort(numbers.begin(), numbers.end());
//  cout << "Output: ";
//  for (int num : numbers) {
//   cout << num << " ";
//  }
//  cout << endl;
//
//  return 0;
// }

// problem 10

// int main() {
//  int n;
//  cout << "Enter number of elements: ";
//  cin >> n;
//
//  vector<int> a(n);
//  cout << "Enter " << n << " elements:\n";
//  for (int i = 0; i < n; i++)
//   cin >> a[i];
//
//  cout << "Output: ";
//  for (int i = 1; i < n - 1; i++) {
//   if (a[i] < a[i - 1] && a[i] < a[i + 1])
//    cout << a[i] << " ";
//  }
//  cout << endl;
//
//  return 0;
// }