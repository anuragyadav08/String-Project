
#include <iostream>
using namespace std;
int main()
{
    char arr[]={'a','b','c','d','e','a','b','a'};
    char ch[]={'a','b','c',};
    int c[10];
    int a=sizeof(arr)/sizeof(char);
    int b=sizeof(ch)/sizeof(char);
    for(int i=0;i<b;i++)
    {
            int count=0;
            for(int j=0;j<a;j++)
            {
                    if(ch[i]==arr[j])
                    count++;
            }
            c[i]=count;
    }
    int count1=0;
   for(int k=0;k<b;k++)
   {
            if(c[k]>0)
            {
                    count1++;
            }
   }
   if(count1==b)
   {
             cout<<"All Element Found ";
   }
   else
   {
            cout<<"All Element Not Found !";  
   }
    return 0;
}