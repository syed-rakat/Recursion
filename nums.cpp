#include<bits/stdc++.h>
using namespace std;
void printNum(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    printNum(n-1);

}
int main()
{
   printNum(10);
}