#include<bits/stdc++.h>
using namespace std;
int main()
{
    //intger dynamic
    int *a = new int;
    *a = 10;
    cout << *a<<endl;
    //float dynamic
    float *b = new float;
    *b = 2.354;
    //pointer fixed << setprecision( )
    cout<< fixed<<setprecision(2)<<*b;
    return 0;
}