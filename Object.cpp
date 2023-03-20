#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class DgnConstruct{
    public:
        string data;

        DgnConstruct(const char* data){
            DgnConstruct::data = data;
        }

        void show(){
            cout << "ini " << DgnConstruct::data << endl; 
        }

};

class TanpaConstruct{
    public:
        string data;

        void show(){
            cout << "ini " << TanpaConstruct::data << endl; 
        }

};

int main (){

    //1.Membuat taanpa construct
    TanpaConstruct object1;
    object1.data = "obj1";
    object1.show();

    //2. Dengan construct -> tidak bisa di deklarasi, harus lasngung di assign

    // DgnConstruct obj2;
    // obj2 = DgnConstruct("obj2");

    DgnConstruct obj2 = DgnConstruct("Obj2");
    obj2.show();

    //3. cara lain membuat obj dengan construct
    DgnConstruct obj3("obj3");
    obj3.show();

    //4. Mmebuat obj dengan heap pada memori
    DgnConstruct* obj4 = new DgnConstruct("object 4");
    (*obj4).show(); //Dereference
    obj4->show();//arrow operatrror, mapping function
    string data = obj4->data;
    cout << "data" << endl;

    //5. Bisa lanbgsung di assign dengan cara ke 4
    DgnConstruct* obj5;
    obj5 = new DgnConstruct("Onj5");
    obj5->show();



    

return 0; }