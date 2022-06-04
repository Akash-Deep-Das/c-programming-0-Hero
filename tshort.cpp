#include<iostream>
using namespace std;
void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n-1 ; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
int main() {
   int n,a[n];
   cin>>n;
   while(n--){
   int t = sizeof(a)/ sizeof(a[0]);
   for (int i = 0; i < n; i++){
   cin>>a[i];
}
   selectionSort(a, t);
   for (int i = 0; i < n; i++)
   cout<< a[i]<<endl;
   }
   return 0;
}
