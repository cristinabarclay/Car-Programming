
#include "msg_list.h"

msg_list::msg_list(){
	front = back = NULL;
}

msg_list::~msg_list()
{
    while (front != NULL)
    {
        msg_list_node* tmp = front;
        front = front->next;
        delete tmp;
    }
    back = NULL;
}

void msg_list::display() {
	msg_list_node *tmp;  int i;
	
	if(front==NULL) {
		cout << "** List is empty. **\n";
		return;
	}
	
	tmp = front;  i = 1;
	while(tmp!=NULL) {
		cout << "Item " << i++ << ":  " << tmp->msg << "\n";
		tmp = tmp->next;
	}
	
}

void msg_list::append(string x) {
	msg_list_node *tmp;
	
	tmp = new msg_list_node;
	tmp->next = NULL;
	tmp->msg = x;
	if(front==NULL) front = tmp;
	else 		back->next = tmp;
	back = tmp;
}

string msg_list::remove_back() {
    preview_back();
    
    msg_list_node* prev_node;
    msg_list_node* curr_node;
    
    prev_node = front;
    if (front == NULL){
        return "";
    }
    else if (prev_node->next ==NULL){//one item in the list
        string message = prev_node->msg;
        delete prev_node;
        front = back = NULL;
        return message;
    }
    else{//more than one item
    curr_node = front->next;
    
    while (curr_node->next != NULL){
        prev_node = prev_node->next;
        curr_node = curr_node->next;
    }
    back = prev_node;
    string message = curr_node->msg;
    delete curr_node;
    back->next = NULL;
    return message;
    }
}

string msg_list::preview_back(){
    msg_list_node* temp;
    temp = front;

    if (front == NULL){
        return "";
    }
    
    else {while (temp->next != NULL){
        temp = temp->next;
    }
        return temp->msg;
    }
    //delete temp; is this necessary?
}

void msg_list::insert_at_front(string x) {
    msg_list_node* curr_node;
    msg_list_node* new_node;
    new_node = new msg_list_node;
    
    
    curr_node = front;
    
    if (front == NULL){//empty list
        front = back = new_node;
        back->next = NULL;
        new_node-> msg = x;
        delete curr_node;
    }
    else{
        front = new_node;
        new_node->next = curr_node;
        new_node-> msg = x;
    }
    
    
}



