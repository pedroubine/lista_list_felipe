#include "static_list_order.h"
#include <iostream>

using namespace std;

oList::oList()
{
    count = 0;
    int i = 0;
    while (i <= oMaxList)
    {
        Entry[i] = 0;
        i++;
    }
    
}

bool oList::Full()
{
    return count == oMaxList ? true : false;
}
bool oList::Empty()
{
    return count == 0 ? true : false;
}

void oList::Insert(int x)
{
    int i;
    int p;
    if ( Full() ) 
    { 
        cout << "full" << endl;
        abort(); 
    }

    // if(p < 1 || p > count+1) 
    // { 
    //     cout << "Invalid postion" << endl;
    //     abort();
    // }

    if(count == 0)
    {
        Entry[1] = x;
        count++;
        return;
    }

    for(i = 1;i<=count;i++)
    {
        if(x < Entry[i])
        {
            p = i;
            break;
        }
        p = i+1;
    }

    for(i = count; i>=p; i--)
    {
        Entry[i+1] = Entry[i];
    }
    Entry[p] = x;
    count++;
}
int oList::Gett(int i)
{

}
void oList::Delete(int p, int &x)
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

void oList::Clear()
{
    count = 0;
}

bool oList::Size()
{
    return count;    
}

void oList::Retrive(int p, int &x)
{
    if (p > count || p < 1)
    {
        cout << "OUT BOUND" <<endl;
        abort();
    }
    x = Entry[p];
}

void oList::Replace(int p, int x)
{
    if (p > count || p < 1)
    {
        cout << "OUT BOUND" <<endl;
        abort();
    }
    Entry[p] = x;
}