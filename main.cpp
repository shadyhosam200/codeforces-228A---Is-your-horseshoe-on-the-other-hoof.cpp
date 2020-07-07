#include <iostream>
#include <algorithm>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int buy=0;
int colors[4] ;
for (int i=0 ; i<4 ; i++)
{

 cin >> colors[i];
}
sort(colors,colors+4);
for (int i=0 ; i<4 ; i++)
{
    if (colors[i]==colors[i+1])
        buy++;

}
cout << buy;
}

