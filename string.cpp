#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[202];
    int i;
    
    /// string array reverse.....
    scanf("%[^\n]",str);
    for ( i = strlen(str) - 1; i>=0; i--){
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}