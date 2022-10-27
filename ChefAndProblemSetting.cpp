#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	    int n,m;cin>>n>>m;
	    int finvalid=0,cweak=0;
	    int ffine=1,fweak=0;
        int print=0;
	    for(int i=0;i<n;i++){
            cweak=0;
            ffine=1;
	    string s1,s2;
	    string s3;
        cin>>s1>>s2;
        s3=s1+s2;
        int j=0;
        if(s3.at(j)=='c'){
	            for(int k=7;k<m+7;k++){
	                if(s3.at(k)=='0'){
	                    finvalid=1;
                        ffine=0;
	                    break;
	                }
	            }
	        }
        else if(s3.at(j)=='w'){
            for(int k=5;k<m+5;k++){
                if(s3.at(k)=='1'){
                    cweak++;
                }
                if(cweak==m){
                    fweak=1;
                    ffine=0;
                    // cout<<"WEAK"<<endl;
                    break;
                }
            }
        }
            if((print == 1) || (ffine==1 && i<(n-1)) || (fweak==1 && i<(n-1)) ||(finvalid==1 && i<(n-1))){
                continue;
            }
            if(finvalid==1){
                cout<<"INVALID"<<endl;
                print = 1;
                //finvalid=1;
                // break;
            }
            else if(fweak==1){
                cout<<"WEAK"<<endl;
                print = 1;
            }
            else if((ffine==1) && (i==(n-1))){
                cout<<"FINE"<<endl;
                print = 1;
            }
        }
         
    }
    return 0;
}

