#include <string>
#include <iostream>
using namespace std;


class msg_list;

class msg_list_node {
	private:
		msg_list_node* next;
        string msg;
		
	friend	class msg_list;
};


class msg_list {
	private:
        msg_list_node* front;
        msg_list_node* back;
		
	public:
		msg_list();
        ~msg_list();
		void display();
		void append(string x);
        string preview_back();
        string remove_back();
        void insert_at_front(string x);
};