//Write a program to print all the combinations of the given word with or without meaning (when unique characters are given).
//
//
//
//Sample Input:
//
//abc
//
//
//
//Output:
//
//abc
//
//acb
//
//bac
//
//bca
//
//cba
//
//cab


#include<bits/stdc++.h> 
using namespace std; 
void permute(string a, int l, int r)  
{  
    if (l == r)  
        cout<<a<<endl;  
    else
    {  
        for (int i = l; i <= r; i++)  
        {  
            swap(a[l], a[i]);  
            permute(a, l+1, r);  
            swap(a[l], a[i]);  
        }  
    }  
}  
int main()  
{  
    string str;
    cin>>str;
    int n = str.size();  
    permute(str, 0, n-1);  
    return 0;  
}  







