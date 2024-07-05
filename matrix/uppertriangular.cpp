 /*Base Address + (i n + j) size for row-major order, or ((j m) + i) size + Base Address for column-major order.*/

#include<iostream>
#include<vector>

using namespace std;

class Matrix
{
   private:
   int n;
   vector<int> A;

   public:
   Matrix(int size):n(size)
   {
      A.resize((n*(n-1))/2);
   }

   void set(int i,int j,int x)
   {
      if(j>=i)
      {
         A[(j*(j-1))/2+(i-1)]=x;
      }
   }

   int get(int i,int j)
   {
      if(j>=i)
      {
         return A[(j*(j-1))/2+(i-1)];
      }
      else{
         return 0;
      }
   }

   void display()
   {
      for(int i=1;i<=n;i++)
      {
         for(int j=1;j<=n;j++)
         {
            if(j>=i)
            cout<<A[(j*(j-1))/2+(i-1)]<<" ";
            else
            cout<<"0"<<" ";
         }
         cout<<endl;
      }
   }
};

int main()
{
   int size;
   cout<<"Enter Dimensions"<<endl;
   cin>>size;
   Matrix m(size);

   cout<<"Enter elements:"<<endl;

   for(int i=1;i<=size;i++)
   {
      for(int j=1;j<=size;j++)
      {
         int x;
         cin>>x;
         m.set(i,j,x);
      }
   }

   cout<<endl;

   m.display();

   cout<<endl;

  cout<<m.get(2,3)<<endl;
}