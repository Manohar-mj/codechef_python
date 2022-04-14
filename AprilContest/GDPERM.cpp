#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	std::cin >> t;
	while(t--){
	    long long n;
	    cin >> n;
	    if(n%2==1){
	        if(n==1 || n==3){
	            std::cout << "-1\n" << std::endl;
	        }else{
	            cout<<"3 5 1 2 4";
	            for (int i=n;i<6;i--){
	                cout<<i<< " ";
	            }
	            cout<<"\n";
	        }
	    }else{
	        for(int i=1;i<=n;i++){
	            cout<<n+1-i<<" ";
	        }
	        cout << "\n";
	    }
	}
	return 0;
}
