#include <iostream>

using namespace std;


const int oMaxList = 100;


class oList
{
    public:
        oList();
        void Insert(int x);
        void Delete(int p,int &x);
        bool Full();
        bool Empty();
        void Clear();
        bool Size();
        int Gett(int i);
        void Retrive(int p, int &x);
        void Replace(int p, int x);

        
        private:
            int count;
            int Entry[oMaxList+1];
};