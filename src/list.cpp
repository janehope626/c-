#include "include/list.h"

void List::print_menu() {
    int choice;

    cout << "*************************\n";
    cout <<"1-Print list.\n";
    cout <<"2-Add to list.\n";
    cout <<"3-delete from list.\n";
    cout <<"4-ouit.\n";
    cout <<"Enter your choice and press return:";

    cin >> choice;

    if (choice==4){
        exit(0);
    }
    else if (choice==2) {
        add_item();
    }
    else if (choice==3) {
        delete_item();
    }
    else if (choice==1) {
        print_list();
    }
    else {
        cout << "choice not define";
    }
}

void List::print_list(){ 
    
     cout << "print list :\n";
     for (int list_index=0; list_index< (int)list.size();list_index++) {
         cout << list[list_index] << "\n" ;
     }
     cout << "M-menu:";
     char choice;
     cin >> choice;

     if (choice=='M'|| choice=='m') {
         print_menu();
     }
     else {
         cout << "invalid paramete \n";
     }
}

void List::add_item(){
    cout << "please add item:";

    string item;
    cin >> item;

    list.push_back(item);

    cout <<"ok for add item\n";

    cin.clear();

    print_menu();

}
void List::delete_item() {
    cout << "select an item to delete\n";
    if (list.size()) {
        for (int i=0; i< (int)list.size(); i++){
            cout << i <<":"<< list[i] << endl;
        }
        int choiceNum;
        cin >> choiceNum;
        list.erase(list.begin()+choiceNum);
    }
    else {
         cout <<"no item to delete\n\n";
    }

    print_menu();
    }