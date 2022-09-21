#include <iostream>
#include "static_list.h"
#include "static_list_order.h"

using namespace std;






int ex3(List l1,int x)
{
    int z,cont = 0;
    for(int i = 1; i <= l1.Size();i++)
    {
        l1.Retrive(i,z);
        if(z == x)
        {
            cont++;
        }
    }
    return cont;
}




void ex4(List &l1)
{
    int z;
    int size = l1.Size();
    for(int i = 1; i <= size;i++)
     {
        l1.Retrive(i,z);
        cout << z;
     }
    

    int arr[size];
    for(int i = size,j=0 ; i>=1 ; i--,j++)
    {   
        l1.Retrive(i,z);
        arr[j] = z;
    }

    l1.Clear();
    for(int j = 1; j <= size;j++)
    {
        l1.Insert(j,arr[j-1]);
    }

    cout << "\n";
    for(int i = 1; i <= size;i++)
     {
        l1.Retrive(i,z);
        cout << z;
     }
}


void ex5(oList l1, oList l2)
{
    oList tmp;
    int i = 1;
    int size1 = l1.Size(), size2 = l2.Size();
    for(int i = 1;i <= size1;i++)
    {
        tmp.Insert(l1.Gett(i));
    }
    for(int i = 1;i <= size2;i++)
    {
        tmp.Insert(l2.Gett(i));
    }
}

void ex6(List l1)
{
    int first = l1.Get(1);
    int size = l1.Size();
    oList left,right;
    for(int i = 2; i<=l1.Size();i++)
    {
        if(l1.Get(i) < first)
        {
            left.Insert(l1.Get(i));
        }
        else 
        {
            right.Insert(l1.Get(i));
        }
    }
    l1.Clear();
    for(int i = 1;i <=left.Size();i++)    
    {
        l1.Insert(i,left.Gett(i));
    }
    l1.Insert(left.Size()+1,first);

    for(int i = left.Size()+2;i <=right.Size()+1+left.Size();i++) 
    {
        l1.Insert(i,right.Gett(i-2));
    }
}



int main()
{
    List teste;
    teste.Insert(1,8);
    teste.Insert(2,7);
    teste.Insert(3,9);
    teste.Insert(2,20);
    teste.Insert(5,8);
    teste.Insert(6,8);
    
    cout << ex3(teste,8) << endl;
    ex4(teste);

    oList l1,l2;
    l1.Insert(7);
    l1.Insert(3);
    l1.Insert(6);
    l1.Insert(1);
    l2.Insert(4);
    l2.Insert(2);
    l2.Insert(5);
    ex5(l1,l2);

    ex6(teste);
    return 0;
}