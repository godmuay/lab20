#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a,Rect b){
	double width = (min((a.x)+a.w,(b.x)+b.w) - max(a.x,b.x)) , hight = (min(a.y,b.y) - max((a.y)-a.h,(b.y)-b.h));
	if(width * hight > 0){return width * hight;}else return 0; 
}

int main(){
	Rect R1 = {1,1,5,5};	
	Rect R2 = {7,2,3,3};	
	cout << overlap(R1,R2);	
}

/*CX1[2] ={a.x , (a.x)+a.w} , CY1[2] ={a.y , (a.y)+a.h};g
	CX2[2] ={b.x , (b.x)+b.w} , CY2[2] ={b.y , (b.y)+b.h};*/
