
#include <iostream>
    using namespace std;
    class new_list{
     private:
     int elements;
     int size;
     int * ptr;

     public:
     new_list(){
     this -> elements =0;
     size =2;
     ptr = new int [size];
     }
//============================================================//
     void reallocate(){
      int oldSize = size;
      int* temp = new int[oldSize];
        for (int i = 0; i < oldSize; i++) {
        temp[i] = ptr[i];
};
       delete []ptr;
       size = size * 5;
       ptr = new int [size];
       for(int i=0; i<oldSize;i++){
        ptr[i]=temp[i];
};
         delete []temp;
}
//======================================================================//
        void push(int data){
        if(elements == size){
        reallocate();
        ptr[elements]=data;
        elements++;}
        else{
        ptr[elements]=data;
        elements++;}

};
//=================================================================//
    int pop() {
    if (elements == 0) {
   throw runtime_error ("The stack is empty");
}
    else {int data;
      data = ptr[elements-1];
           elements--;
           return data;};
}

//======================================================================//
     void display(){
     if(elements==0)
     cout<<"Stack is empty"<<endl;
     for(int i=0;i<elements;i++){
     cout<<ptr[i]<<endl;
     cout<<"============================================="<<endl;
     };

};

~new_list(){
delete []ptr;
}
    };
int main()
    {
int data;
new_list test;
test.push(1);
test.push(2);
test.push(3);
test.push(4);
test.push(5);
test.push(6);
test.push(6);

test.display();
 try{
    data=test.pop();
    cout<<data<<endl;
    data=test.pop();
    cout<<data<<endl;
    data=test.pop();
    cout<<data<<endl;
    data=test.pop();
    cout<<data<<endl;
    data=test.pop();
    cout<<data<<endl;
    data=test.pop();
    cout<<data<<endl;
      data=test.pop();
    cout<<data<<endl;
         data=test.pop();
    cout<<data<<endl;
     }
catch(const runtime_error& e){
cout<<"Error:"<<e.what()<<endl;};

return 0; }
