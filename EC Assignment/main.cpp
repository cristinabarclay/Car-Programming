#include <iostream>

#include "msg_list.h"


using namespace std;


int main() {

    msg_list* lst = new msg_list;
    
    cout << "lst initially has: " << endl;
    lst->display();
    
    cout << "Removing back: " << lst->remove_back() << endl;
    cout << "after removing back, lst now has: " << endl;
    lst->display();
    
    lst->append("hi there");
    lst->append("class");
    cout << "after appending \"hi there\" and \"class\", lst now has: " << endl;
    lst->display();
    
    cout << "Previewing back: " << lst->preview_back() << endl;
    cout << "after calling preview back, lst now has: " << endl;
    lst->display();

    cout << "Removing back: " << lst->remove_back() << endl;
    cout << "after removing back, lst now has: " << endl;
    lst->display();

    cout << "Removing back: " << lst->remove_back() << endl;
    cout << "after removing back, lst now has: " << endl;
    lst->display();
    
    cout << "Previewing back: " << lst->preview_back() << endl;
    cout << "after calling preview back, lst now has: " << endl;
    lst->display();
    
    lst->insert_at_front("and enjoy your summer");
    cout << "after inserting \"and enjoy your summer\" at front, lst now has: " << endl;
    lst->display();
    
    lst->insert_at_front("good luck with finals");
    cout << "after inserting \"good luck with finals\" at front, lst now has: " << endl;
    lst->display();
    
    lst->insert_at_front("you are awesome");
    cout << "after inserting \"you are awesome\" at front, lst now has: " << endl;
    lst->display();

    cout << "Removing back: " << lst->remove_back() << endl;
    cout << "after removing back, lst now has: " << endl;
    lst->display();

}

