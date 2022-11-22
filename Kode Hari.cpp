#include <iostream>

using namespace std;

int main(){
	
	int a;
	
	cout<<"hari ke : ";
	cin>>a;
	
	if(a==1){
		cout<<"Hari ke - "<<a<<" adalah hari Senin";
	}else if(a==2){
			cout<<"Hari ke - "<<a<<" adalah hari Selasa";
	}else if(a==3){
			cout<<"Hari ke - "<<a<<" adalah hari Rabu";
	}else if(a==4){
			cout<<"Hari ke - "<<a<<" adalah hari Kamis";
	}else if(a==5){
			cout<<"Hari ke - "<<a<<" adalah hari Jumat";
	}else if(a==6){
			cout<<"Hari ke - "<<a<<" adalah hari Sabtu";
	}else if(a==7){	
			cout<<"Hari ke - "<<a<<" adalah hari Minggu";
	}else{
		cout<<"error";
	}
	
return 0;
}