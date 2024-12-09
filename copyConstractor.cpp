#include <iostream>

using namespace std;
class Test {
int x;
int y;

public:
Test (){
x=y=0;
cout <<"non parameter constract"<<endl;
}
Test (Test &c){
this-> x=c.x ;
this->y=c.y;
cout<<"Copy constractor"<<endl;
}
Test (int x,int y){
this ->x=x;
this->y =y;
 cout <<"parameter constract"<<endl;
}
int sum (){
return x+y;

}

~Test(){
cout<<"Distractor"<<endl;

}
};

void content (Test c);
int main()
{
Test c(2,3);
content(c);
    return 0;
}

void content (Test c){
int result = c.sum() +5;
cout <<result<<endl;
}










