#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iterator>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    if(n==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    std::istream_iterator<int> eos;
    std::vector<int> input(std::istream_iterator<int>(cin), eos);
  
    std:sort(std::begin(input), std::end(input),
    [](int a, int b)->bool
        { if( (abs(a)==abs(b) && a>b) || abs(a)<abs(b)) return true;
        return false;   
        }
    );

    cout<<*std::begin(input);

}