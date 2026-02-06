#include <iostream>
#include <list>
using namespace std;
int main()
{ 
    int N,M;
    cout << "Enter N "; //numbers of people
    cin >> N;
    cout << "Enter M "; //number of passes
    cin >> M;
    list<int> lst;
    for(int i=1; i<=N; i++)
    {
        lst.push_back(i);
    }

    list<int>::iterator it=lst.begin();

    cout << "Elimination order: ";
    while(lst.size()>1)
    {
        for(int j=0; j<M; j++)
        {
            it++;
            if(it==lst.end())
                it=lst.begin(); //circular

        }
        cout << *it << " "; //eliminated person
        //remove the person and get the next iterator
        it=lst.erase(it);
        //circular
        if(it==lst.end())
            it=lst.begin();
    }
    cout<<endl;
    cout << "winner: " << lst.front() << endl;
    return 0;
}