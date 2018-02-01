#include<iostream>
using namespace std;

void initial(double [], int);  //  Prototipul functiei apelate

int main()
{
   double a[100];
   int nr;
   cout << "Numarul de elemente (mai mic sau egal cu 100): ";
   cin >> nr;
   initial(a, nr);

   for (int i = 0; i < nr; i++) {
        cout << a[i] << ", ";
    }
    cout << endl;
    return 0;
}
void initial(double a[], int n)
{
   for (int i = 0; i < n; i++) {
      a[i] = i + 1;
   }
}
