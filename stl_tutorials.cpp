#include <bits/stdc++.h>
using namespace std;

class Compare
{
    public:
    bool operator() (int a, int b)
    {
        if(a>b) //this will create min heap/priority_queue
            return true;
        else
            return false;
    }
};

bool comparator(int &a, int &b)
{
    if(a<b) //this will sort in increasing order
        return true;
    else
        return false;
}


int main()
{
    /*
    =========
     STRING
    =========
    */

    string s;
    s.insert(position, char);



    /*
    =========
     VECTOR
    =========
    */

    vector <int> v;

    v.empty() //check if vector is empty or not
    v.push_back(i) //insert at last
    v.size() //return the size of vector
    v.insert(v.begin()+1, 15) //insert at particular position
    v.erase(v.begin() + position) //deleting an element at position
    v.erase(v.begin(), v.begin()+2) //deleting range of elements
    v.clear(); //clear all elements from vector

    //print vector elements
    vector <int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<"  "<<*it;
    }



    /*
    ==================================
     LINKED LISTS- Implemented as DLL
    ==================================
    */

    list<int> l;

    l.push_back()
    l.pop_back()
    l.push_front()
    l.pop_front()



	/*
	==============================
	 STACK- Implemented as stack
	==============================
	*/

    stack<int> s;

    s.empty()
    s.size()
    s.pop()
    s.push()
    s.top()



    /*
    ===========================================
     DEQUE- Implemented as doubly ended queue
    ===========================================
    */

    deque<int> dq;

    //operations same as vector
    dq.push_back()
    dq.pop_back();
    dq.push_front();
    dq.pop_front();



    /*
    ===============================
     QUEUE- Implemented as queue
    ===============================
    */

    queue<int> q;

    q.empty()
    q.size()
    q.pop()
    q.push()
    q.front()
    q.back()



	/*
	===================================================
	 MAP- Implemented as balanced BST(red black tree)
     UNORDERED_MAP- Implemented as a hash table
     MULTIMAP
     UNORDERED_MULTIMAP
     SET
     MULTISET
     UNORDERED_SET
     UNORDERED_MULTISET
	==================================================
	*/

    map<int, int> m;

    m.begin()
    m.end()
    m.size()
    m.empty()
    m.find()
    m.insert()

	map <string, string> m;

    m["Goole"] = "Larry Page";
	m.insert(make_pair(string("Uber"), string("Travis Kalanick")));

	// Iterating the map
	map<string, string>::iterator itz;
	for (itz=m.begin(); itz!=m.end(); itz++)
    {
		cout<<"Company: " << (*itz).first << "\t Founder: " << itz->second <<endl;
	}

	itz = companies.find("Google")
	cout << itz->second;
    m.find("f") != m.end() //check if key found in map or not

    set.erase(element)



    /*
	=======
	 HEAPS
	=======
	*/

    priority_queue <int> pq; //max heap
    priority_queue <int, vector<int>, greater<int> > pq; //min heap
    priority_queue<int, vector<int>, Compare> pq; //own comparator
    pq.push(10);
    pq.push(1);
    pq.push(12);
    pq.push(41);
    pq.push(111);

    while(pq.size()!=0)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }



    /*
	=============
	 ALGORITHMS
	=============
	*/

    int arr[] = {1,2,4,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n, compar);
    sort(arr, arr+n, greater<int>());

    if(binary_search(arr, arr+n, 2))
    {
        cout<<"found\n";
    }
    else
    {
        cout<<"not found\n";
    }

    reverse(arr, arr+n);
    cout<<*max_element(arr, arr+n)<<"\n";
    cout<<*min_element(arr, arr+n)<<"\n";

    // Returns the first occurance of 20
    auto q = lower_bound(arr, arr+n, 20);
    // Returns the last occurrence of 20
    auto p = upper_bound(arr, arr+n, 20);

    cout << "The lower bound is at position: ";
    cout << q-arr << endl;
    cout<<"Upper bound: ";
    cout<<p-arr;

	return 0;
}
