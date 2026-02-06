#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>lst;
    for(int i=0; i<5; i++)
    {
        lst.push_back(i);
    }

    list<int>::iterator it=lst.begin();

    cout << *it << endl;
    it++;
    cout << *it << endl;

    return 0;
}