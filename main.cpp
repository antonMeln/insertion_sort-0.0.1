#include <iostream>
#include <sstream>

using namespace std;

bool read (int & n, int * mas)
{
  string str;
  getline(cin,str);
  istringstream stream(str);
  bool F = true;
    
  for (int i=0;i<n;i++){
    if (!(stream >> mas[i])) {
        F = false;
        break;
             
     }
  }
   return F;
}

int main ()
 { 
   int i, n;
   int * mas = new int[n];
   int min;
   string str;
   getline(cin,str);
   istringstream  stream (str);
    
       if (stream >> n){
         if (read(n,mas)){
          
            int a,j;
            for (int i = 1;i<n;i++){
              a= mas[i];
              j=i-1;
               while (mas[j]>a && j>=0){
                mas[j+1]=mas[j];
                mas[j]=a;
                j--;
               
              }
            }
            for (int i=0;i <n; i++) 
             cout << mas[i] << " ";
          
          } 
          else cout << "An error has occured while reading input data.";
       }
  delete[] mas;
  return 0;
 }  
