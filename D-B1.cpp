#include <iostream>
using namespace std;
    
 

int main(){
int n;
cin>>n;
int array[n];

for (int i = 0; i <n; i++)
{
   cin>>array[i];
}

int Temp;
int Counter= 1;

while (Counter<n)
{
   for (int i = 0; i <= n-Counter; i++)
   {
       if (array[i]>array[i+1])
       {
          Temp=array[i];
          array[i]=array[i+1];
          array[i+1]=Temp;
       }
       
   }
    Counter++;
}

for (int i = 0; i <n; i++)
{
   cout<<array[i]<<" ";
}

}   
