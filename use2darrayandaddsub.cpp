#include<iostream>
using namespace std;
int main(){
	int i,j,x[2][3],y[2][3],sum[2][3];
		for(i=0;i<2;i++){
			for(j=0;j<3;j++){
				cin>>x[i][j];
			}
		}
			for(i=0;i<2;i++){
			for(j=0;j<3;j++){
			cin>>y[i][j];
	}
	cout<<"\n";
}
	cout<<"output\n";
		for(i=0;i<2;i++){
			for(j=0;j<3;j++){
				sum[i][j]=x[i][j]+y[i][j];
}
}
		for(i=0;i<2;i++){
			for(j=0;j<3;j++){
				cout<<sum[i][j]<<"\t";
}
cout<<"\n";
}
		return 0;
	}
