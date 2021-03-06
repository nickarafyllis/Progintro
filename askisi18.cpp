#include<iostream>
#include<cstdio>

using namespace std;



struct node
{
    int info;
    struct node *next = NULL;
};

class queue {

    public:

    queue (); 
    int size;
    bool empty (); 
    void enqueue (int x); 
    int dequeue (); 
    int peek (); 

    private:

    node *front, *rear;
    

};

queue::queue()
{
    front = NULL;
    rear = NULL;
    size = 0;
}

bool queue::empty()
{
    return front == NULL;
}

void queue::enqueue(int x)
{
    node *nodep = new node;

    nodep->info = x;
    nodep->next = NULL;

    if(front == NULL)
    {
        front = nodep;
        rear = nodep;
    }
    else
    {   
        rear->next = nodep;
        rear = nodep;
    }
    
    size++;
}

int queue::dequeue()
{
    node *node;
    int value;

    node = front;
    value = node->info;
    front = front->next;

    if(front == NULL) rear = NULL;

    size--;
    delete node;
    return value;

}

int queue::peek()
{
    return front->info;
}

int main()
{
    queue posq, negq;
    int equal = 0, n;
    bool valid = true;

    while(scanf("%d", &n) == 1)
    {
        if(n > 0)
        {
            posq.enqueue(n);
            equal++;
        }
        else
        {
            negq.enqueue(n);
            equal--;
        }
    }

    if(equal != 0)
    {
        cout << "no" << endl;
        return 0;
    }

    while(posq.size > 0)
    {
        if(posq.dequeue() != abs(negq.dequeue()))
        {
            valid = false;
        }
    }

    if(valid) cout << "yes" << endl;
    else cout << "no" << endl;

}
