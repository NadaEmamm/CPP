
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
     size =5;
     ptr = new int [size];
     }
//============================================================//
     void reallocate(int x){
      int oldSize = this ->size;
      int* temp = new int[oldSize];
        for (int i = 0; i < oldSize; i++) {
    temp[i] = this->ptr[i];
};
       delete []ptr;
       this -> size = x * 5;
       ptr = new int [size];
       for(int i=0; i<oldSize;i++){
        this->ptr[i]=temp[i];
};
         delete []temp;
}
//======================================================================//
         int push(int data){
        if(elements == size)
        reallocate(size);
        ptr[elements]=data;
        elements++;
        return 1;
};
//=================================================================//
    int pop() {
    if (elements == 0) {
   throw runtime_error ("The stack is empty");
}
    int data;
      data = ptr[elements-1];
           elements--;
           return data;
}

//======================================================================//
     void display(){
     if(elements==0)
     cout<<"Stack is empty"<<endl;
     for(int i=1;i<=size;i++){
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
     }
catch(const runtime_error& e){
cout<<"Error:"<<e.what()<<endl;};

return 0; }
