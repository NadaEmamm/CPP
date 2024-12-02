#include <iostream>

using namespace std;
void swap_by_address(int *x ,int *y);
void swap_by_value(int x ,int y);
void swap_by_ref(int &x ,int &y);

int main()
{
 int x =5;
 int y=10;

 //swap_by_address(&x,&y);
 //swap_by_value(x,y);
  swap_by_ref(x,y);
 cout <<x<<" "<<y<<endl;

    return 0;
}

void swap_by_address(int *x ,int *y){
*x =*x +*y;
*y= *x -*y;
*x=*x -*y;
};

void swap_by_value(int x ,int y){
x =x +y;
y= x -y;
x=x -y;
};

void swap_by_ref(int &x ,int &y){
x =x +y;
y= x -y;
x=x -y;
};



if (real==0){
if (img >0)
cout <<"+"<<img<<"j"<< endl;
else if(img<0)
cout <<img<< "j"<<endl;

}
else {
if (img >0)
cout <<real<<"+"<<img<<"j"<< endl;
else if(img<0)
cout <<real<<img<<"j" <<endl;

}
