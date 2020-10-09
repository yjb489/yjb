#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string i[25]={"01","02","03","04","05","06","07","08","09","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25"};
	string a="第"; 
	string b="集";
	char c='$';
	string url="https://list.ink.icu/%E6%88%91%E7%9A%84%E8%A7%86%E9%A2%91/%E7%99%BE%E5%A6%96%E8%B0%B1%EF%BC%BB%E5%9B%BD%E6%BC%AB%EF%BC%BD/%E7%99%BE%E5%A6%96%E8%B0%B1";
	string mkv=".mkv";
	for(int j=0;j<25;j++){
		string chen=a+i[j]+b+c+url+i[j]+mkv;
		cout<<chen<<endl;
	}
} 