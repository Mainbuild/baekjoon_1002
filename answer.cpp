#include <iostream>
using namespace std;

int main(){
	int tc;
	
	cin >> tc;
	
	int x1,y1,r1,x2,y2,r2;
	for(int i=0;i<tc;i++){
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		
		int d = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		int sum = (r1+r2)*(r1+r2);
		int dif = (r1-r2)*(r1-r2);
		
		if(d==0&&dif==0) cout<<-1<<endl;
		else if(d==0) cout<<0<<endl;
		else if(d==sum||d==dif) cout<<1<<endl;
		else if(dif<d && d<sum) cout<<2<<endl;
		else cout<<0<<endl;
	}
	
	return 0;
}
