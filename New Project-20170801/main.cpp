#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    vector<int> v;

    for(int i=0; i <= 100; ++i)
    {
        v.push_back(i);
    }
    
    for(vector<int>::iterator i=v.begin(); i != v.end();++i)
    {
        cout << *i << '\t' << *i * *i << endl;     
    }
    
    return 0;
}