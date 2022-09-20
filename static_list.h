#include <iostream>

using namespace std;
const int MaxList = 100;

class List
{
    public:
        List();
        void Insert(int p,int x);
        void Delete(int p,int &x);
        bool Full();
        bool Empty();
        void Clear();
        int Size();
        void Retrive(int p, int &x);
        void Replace(int p, int x);

        private:
            int count;
            int Entry[MaxList+1];
};