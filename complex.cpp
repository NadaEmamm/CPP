    #include <iostream>

using namespace std;



class complex_number {
private:
int real;
int img;

public:

 complex_number(){
 real=0;
 img =0;
 }

  complex_number(int realNum, int imgNum){
    this ->real = realNum;
    this ->img =imgNum;
 }

    void set_real(int realNum){
    real=realNum;
};
    void set_img(int imgNum){
    img=imgNum;

};
    int get_real(){
    return real;
};
    int get_img(){
    return img;
};

    void set_complex (int realNum ,int imgNum){
    this ->real = realNum;
    this ->img =imgNum;
};

 //----------------------------------------------------//
    void display (){

    if (real ==0 && img ==0){
    cout <<"NO DATA"<<endl;
}
    else
{
    if (real!=0 && img !=0){

    if (img <0)
    cout <<real<<img<< "j"<<endl;

    else
    cout <<real<<"+"<<img<<"j"<< endl;
}
//------------------------------------------------//
    else if (img !=0 && real==0 ){

    if (img <0)
    cout <<img<< "j"<<endl;

    else
    cout <<"+"<<img<<"j"<< endl;
}
//------------------------------------------//
    else
    cout <<real<<endl;

}

}
    complex_number add (complex_number cStrange1){
    complex_number result;
    result.real= real +cStrange1.real;
    result.img = img +cStrange1.img;
    return result;
}
    complex_number subtract (complex_number cStrange1){
    complex_number result;
    result.real= real - cStrange1.real;
    result.img = img - cStrange1.img;
    return result;

}

complex_number operator+(int x){
complex_number temp;
temp.real = this -> real +x;
temp .img = this -> img +x;
return temp;
};
complex_number operator-(int x){
complex_number temp;
temp.real = this -> real -x;
temp .img = this -> img -x;
return temp;
};
complex_number operator++(){
this -> real++;
this -> img++;
return *this;
};
complex_number operator++(int x){
complex_number temp ;
temp.real = this -> real ;
temp .img = this -> img;
this -> real++;
this -> img++;
return temp;

};



~complex_number(){
};
};

complex_number operator+(int x,complex_number c);
complex_number operator-(int x,complex_number c);


    int main()
{
    complex_number c1,c2,c3,c4,c5;
    c1.set_real(1);
    c1.set_img(10);
    c3=c1++;
    c1.display();
    c2.set_real(20);
    c2.set_img(10);
    //c3 = c1 -10;
   // c3.display();
   //c3 =10-c1;
   c3.display();


        return 0;
}
complex_number operator+(int x,complex_number c){
complex_number temp;
temp.set_real(c.get_real()+x);
temp .set_img(c.get_img()+x);
return temp;

}
complex_number operator-(int x,complex_number c){
complex_number temp;
temp.set_real(x-c.get_real());
temp .set_img(x-c.get_img());
return temp;

}



