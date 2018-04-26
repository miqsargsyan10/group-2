#include <iostream>
#include "DList.h"

List::List()
    :_head(0)
    ,_tail(0)
     ,_size(0)
{}

List::List(const List& list)
    :_head(0)
    ,_tail(0)
     ,_size(list._size)
{
    Node* tmp = list._tail;
    Node* next = NULL;
    while(tmp) {
        _head = new Node(tmp->_value);
        _head->_next = next;
        next ? next->_prev = _head: _tail = _head;
        next = _head;
        tmp = tmp->_prev;
    }
}

List::~List()
{
    while(_head) {
        if(_head->_prev)
            delete _head->_prev;
        _head = _head->_next;
    }
    _size = 0;

}

int& List::operator[](unsigned int index) 
{
    static int tmp = -1;
    if (_size == 0 || _size<index) {
        std::cout << "Error: out of range: index " << index << std::endl;
        return tmp;
    }

    Node* item = NULL;
    if (index > _size/2) {
        item = (Node*) findNodeFromEnd(_size-index-1);
    } else {
        item = (Node*) findNodeFromStart(index);
    }
    return item->_value;
} 

int List::find(int value)
{
    if (0 >= _size) {
        std::cout << "Error: empty list " << std::endl;
        return -1;
    }
    unsigned int c = 0;
    Node* tmp = _head;
    do {
        if(value == tmp->_value) {
            return c;
        }
        ++c;
        tmp = tmp->_next;
    } while(tmp);
    return -1;
}

void List::insert(int value, unsigned int index)
{
    if(index <= _size){
        if(index == 0) {
            pushFront(value);
        } else if (index == _size) {
            pushEnd(value);
        } else {
	    Node* tmp = new Node(value);
	    Node* temp = _head;
	    for (unsigned int i = 0; i <= index; i++) {
		temp = temp->_next;
	    }
	    tmp->_prev = temp->_prev;
	    tmp->_next = temp;
	    temp->_prev = tmp;
	}
        ++_size;
    }
}

void List::pushFront(int value)
{
    Node* n = new Node(value);
    if(_head) {
        _head->_prev = n;
        n->_next = _head;
    }
    if(NULL == _tail) {
        _tail = n;
    }
    _head = n;
    ++_size;
}

void List::pushEnd(int value)
{
    Node* n = new Node(value);
    if(_tail) {
        _tail->_next = n;
        n->_prev = _tail;
    }
    if(NULL == _head) {
        _head = n;
    }
    _tail = n;
    ++_size;
}

int List::remove(unsigned int index)
{
    if (index <= _size) {
	if (index == 0) {
	    popFront();
	} else if (index == _size - 1) {
	    popEnd();
	} else {
	    Node* temp = _head;
	    Node* tmp = _head;
	    for (unsigned int i = 0; i <= index +1; i++){
		temp = temp->_next;
		if ( i < index) {
		    tmp = tmp->_next;
		}
	    }
	    tmp->_next = temp;
	    temp->_prev = tmp;
	}
    }
}

int List::popFront()
{
    if(_head) {
        int value = _head->_value;
        Node* tmp = _head;
        _head = _head->_next;
        _head ? _head->_prev = NULL : NULL;
        delete tmp;
        --_size;
        return value;
    }
    return -1;
}

int List::popEnd()
{
    if(_tail) {
        int value = _tail->_value;
        Node* tmp = _tail;
        _tail = _tail->_prev;
        _tail ? _tail->_next = NULL : NULL;
        delete tmp;
        --_size;
        return value;
    }
    return -1;
}

int List::size()
{
    return _size;
}

void List::print() 
{
    Node* tmp = _head;
    std::cout << "Print head - " << _head << " and tail " <<  _tail << std::endl;
    while(tmp) {
        std::cout << "value " << tmp->_value << " ";
        std::cout << "next " << tmp->_next << " ";
        std::cout << "prev " << tmp->_prev << std::endl;
        tmp = tmp->_next;
    }
}

void* List::findNodeFromEnd(unsigned int index)
{
    Node* tmp = _tail;
    if (index > 0) {
        do {
            --index;
            tmp = tmp->_prev;
        } while (index > 0);
    }
    return tmp;
}

void* List::findNodeFromStart(unsigned int index)
{
    Node* tmp = _head;
    if (index > 0) {
        do {
            --index;
            tmp = tmp->_next;
        } while (index > 0);
    }
    return tmp;
}
