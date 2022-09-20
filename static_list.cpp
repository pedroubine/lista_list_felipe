#include "static_list.h"
#include <iostream>

using namespace std;

List::List()
{
    count = 0;
}

bool List::Full()
{
    return count == MaxList ? true : false;
}
bool List::Empty()
{
    return count == 0 ? true : false;
}

void List::Insert(int p, int x)
{
    int i = count;
    if ( Full() ) 
    { 
        cout << "full" << endl;
        abort(); 
    }

    if(p < 1 || p > count+1) 
    { 
        cout << "Invalid postion" << endl;
        abort();
    }
    for(i; i>=p; i--)
    {
        Entry[i+1] = Entry[i];
    }
    Entry[p] = x;
    count++;
}

void List::Delete(int p, int &x)
{
    if(Empty())
    {
        cout << "Empty" << endl;
        abort();
    }

    if(p < 1 || p >count)
    {
        cout << "Invalid postion" << endl;
        abort();
    }

    x = Entry[p];

    for(int i = p; i<count;i++)
    {
        Entry[i] = Entry[i+1];
    }
    count = count - 1;

}

void List::Clear()
{
    count = 0;
}

int List::Size()
{
    return count;    
}

void List::Retrive(int p, int &x)
{
    if (p > count || p < 1)
    {
        cout << "OUT BOUND" <<endl;
        abort();
    }
    x = Entry[p];
}

void List::Replace(int p, int x)
{
    if (p > count || p < 1)
    {
        cout << "OUT BOUND" <<endl;
        abort();
    }
    Entry[p] = x;
}