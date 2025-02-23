    #include <iostream>
    #include "day3.h"
    #include <unistd.h>
    #define UP 65
    #define DOWN 66
    #define ESC 27
    #define ENTER 10
    #define BACK 127
    #define SIZE 10
    #define n  110
    #define y 121
    #define col 35
    #define row 5
using namespace std;

 struct employee {
        char name[40];
        int  id;
        int salary;
};

class stack{

    private:
    int t;
    int size;
    employee *values;
    static int counter;

    public:
    stack(int size){
    t =-1;
    this -> size = size;
    values = new employee [size];
    counter++;
};
    int push(employee &data){
    if(t == size-1)
    return 0;
    t++;
    values[t]=data;
    return 1;
};

void pop(employee &dataShow) {
    if (t == -1) {
   throw runtime_error ("The stack is empty");
}
      dataShow =values[t];
           t--;
}
     void display(){
     if(t==-1)
     cout<<"Stack is empty"<<endl;
     for(int i=0;i<=t;i++){
     cout<<"Employee Name: "<<values[i].name <<"\n"<<"ID: "<< values[i].id<<"\n"<<"Salary: "<<values[i].salary<<endl;
     cout<<"============================================="<<endl;
     };

}
~stack (){
    delete[]values;
};

};
void resetBackgroundColor(){
 printf("\033[0m");};

void pushData(employee emp[],int stackSize,stack &c1);

    void bluePush();
    void bluePop();
	void blueDisplay();
    int stack::counter = 0;

    int main()
    {
     int i;
     int ch;
     int flag =1;
    int currentPosition =1;
    employee dataShow [SIZE];

    employee insertData [SIZE] ={0};
    int j=0;
    int stackSize;


    cout << "Please enter the number of employees: "<<endl;
    scanf("%d", &stackSize);
    while(SIZE < stackSize ||  getchar() != '\n' || stackSize <=0){ //----------------------> size and num validation
        textcolor(RED);
    cout <<"Invalid input. Please enter a valid number of employees: "<<endl;
        resetBackgroundColor();
    scanf("%d", &stackSize);}


    stack c1(stackSize); //============================================== c1

    while(flag==1){
    if(currentPosition == 1){
    bluePush ();
    }
    else if(currentPosition==2){
    bluePop();
    }
    else if(currentPosition==3){
    blueDisplay();
    }
       //==========================================================// in and out pages


     if(ch == ENTER && currentPosition==1){ // -------------------> push data
                cout << "\a";
                clrscr();
                //textbackground(BLUE);
                textcolor(GREEN);
                gotoxy(col,row-3);
                cout << "Push" << endl;
               // resetBackgroundColor();
                gotoxy(1,row);
                cout<<"Please insert Data"<<endl;
                gotoxy(1,row+1);
                resetBackgroundColor();
                cout<<"=============================="<<endl;
                gotoxy(1,row+3);
                pushData(insertData,stackSize, c1);
                getch();
                cout << "\a";
                while(getch()!= BACK){
                fflush(stdin);}
                }

                if(ch==ENTER && currentPosition==2){ //----------------> pop
                cout << "\a";
                clrscr();
                //textbackground(BLUE);
                textcolor(GREEN);
                gotoxy(col,row-3);
                cout << "Pop" << endl;
                resetBackgroundColor();
               // gotoxy(5,row);
                employee removedData;
                try{
                c1.pop(removedData);

                cout << "emp name: " << removedData.name << "\n"
                     << "emp id: " << removedData.id << "\n"
                     << "emp salary: " << removedData.salary << endl;

                cout<<"================================================"<<endl;}

                    catch(const runtime_error& e){
                    cout<<"Error:"<<e.what()<<endl;
                    };
                while(getch()!= BACK){fflush(stdin);}
                };


                if(ch==ENTER && currentPosition==3){  //........................... Display
                cout << "\a";
                clrscr();
               // textbackground(BLUE);
                textcolor(GREEN);
                gotoxy(col,row-3);
                cout << "Display" << endl;
                resetBackgroundColor();
                c1.display();
                while(getch()!= BACK){fflush(stdin);}
                };
    //=================================================// arrow section

            ch = getch();
        if (ch == 91) {
            for (int j = 0; j < 1; j++) {
                ch = getch();
            };
            };

    if(ch==DOWN){
    cout << "\a";
     currentPosition ++;
     if (currentPosition >3){
        currentPosition = 1;
     };

    }
     else if(ch==UP){
    currentPosition --;
    cout << "\a";

        if (currentPosition <1){
       currentPosition =3;
     };
     }
    }

        return 0;
        };
    //======================================================================================//
    void pushData(employee emp[],int stackSize ,stack &c1){
    char ch=0;
    int currentPosition =1;
    for(int i=0; i<stackSize;i++){
    ch =0;
    int valid = 0;
    while (valid == 0) {
    cout << "Please enter a valid name for the employee: ";
    scanf("%[^\n]", emp[i].name);
    valid = 1;
    for (int k = 0; emp[i].name[k] != '\0'; k++) {
    if (!isalpha(emp[i].name[k] ) &&  emp[i].name[k] != ' ' ) {
     valid = 0;

        break;
    }}}
    cout << "Please insert the ID: ";
    scanf("%d",&emp[i].id);
    while(getchar() != '\n' || emp[i].id <=0){ //----------------------> size and num validation
    textcolor(RED);
    cout << "Invalid input. Please insert the ID: "<<endl;
    resetBackgroundColor();
    scanf("%d",&emp[i].id);
    }
    //----------------------------------------------------------------//
    cout << "Please enter the salary of the employee: ";
    scanf("%d",&emp[i].salary);
    while( getchar() != '\n'|| emp[i].salary <=0){ //----------------------> num validation
    textcolor(RED);
   cout << "Invalid input. Please enter the salary of the employee: ";
    resetBackgroundColor();
    scanf("%d",&emp[i].salary);
    };

    c1.push(emp[i])?cout<<"Success Push"<<endl:cout<<"Faild Push"<<endl ;


    };

    return;
    }

    //-------------------------------------------------------------------------------------//
    //push
            void bluePush(){
                clrscr();
                textcolor(GREEN);
                gotoxy(col,row);
               cout << "Push" << endl;
                resetBackgroundColor();
                gotoxy(col,row+3);
                cout << "Pop" << endl;
                gotoxy(col,row +6);
                 cout << "Display" << endl;
    };
    //=========================================================================================//

    //pop
            void bluePop(){

                clrscr();
                gotoxy(col,row);
                cout << "Push" << endl;
               // textbackground(BLUE);
                textcolor(GREEN);
                gotoxy(col,row+3);
              cout << "Pop" << endl;
                resetBackgroundColor();
                gotoxy(col,row +6);
                cout << "Display" << endl;

               }

    //=================================================================//
    //Display
            void blueDisplay(){
                clrscr();
                gotoxy(col,row);
                cout << "Push" << endl;
                resetBackgroundColor();
                gotoxy(col,row+3);
                cout << "Pop" << endl;
               // textbackground(BLUE);
                textcolor(GREEN);
                gotoxy(col,row +6);
                cout << "Display" << endl;
                resetBackgroundColor();

    };
