#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int getwidth(int w);
int getLength(int len);
int setLength(int lenght);
int  setWidth(int width);
int getArea(int len ,int w,int a);
void drawrectangle(int &len,int &w);
int rotateRectangle(int len ,int w);
int main()
{ 

	int len=0,w=0,a=0;
	cout<<"enter length of rectangle : \n";
	setLength(len);
	cout<<"enter width of rectangle : \n";
	setWidth(w);
	cout<<"lenght of rectangle  is : \n";
	getLength(len);
	cout<<"Width of rectangle is : \n";
	getwidth(w);
	cout<< "area of rectangle is : \n";
	getArea(len,w,a);
	cout<<"After rotating lenght and width  of rectangle is : \n";
	rotateRectangle(len,w);
	cout<<" Pattern of rectangle is : "<<endl;
	drawrectangle(len,w);
	system("pause");
	return 0;
}
int  setlenght(int l)
{
	cin>>l;
	return l;

}
int  setWidth(int w)
{
	cin>>w;
	return w;
}
int getwidth(int w)
{
	return w;
}
int getLength(int l)
{
	return l;
}
int getArea(int len,int w,int a)
{
	a=len*w;
	return a;
}
int rotateRectangle(int len ,int w)
{
	int temp=0;
	temp=len;
	len=w;
	w=temp;
	return len;
	return w;
}
void drawrectangle(int &len,int &w)
{
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<w;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}







