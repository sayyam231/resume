#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans = "";
    for(int i=0;i<(n/4);i++){
        int start = 1;
        int end = 16;
        int  j=i*4;
        for(;j<i*4+3;j++){
            int num = '0' - s[j];
            
            if(num==0){
                end = (start +end)/2;
            }else{
                start = (start +end)/2 + 1;
            }

        }
        char c = 97;
        if(s[(i+1)*4-1]=='0')
        c = c + start-1;
        else
        c = c + end-1;
        ans +=c;
        
    }
    cout<<ans;
    
return 0;
}