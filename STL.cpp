#include<bits/stdc++.h>
using namespace std;


// C++ STL:
	// Algorithms	-> OK
	// Containers 	-> OK
	// Functions
	// Iterators	-> OK



// Containers and Iterators:

// Pairs
void explainPair(){
	pair<int, int> p = {1, 3};
	cout << p.first << " " << p.second << "\n";

	pair<int, pair<int, int>> p2 ={1, {3, 4}};
	cout << p.first << " " << p2.second.second << " " << p2.second.first << "\n";

	pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
	cout << arr[1].second << "\n\n";
}


void explainVector(){

	vector<int> v;

	v.push_back(1);
	v.emplace_back(2);
	// emplace_back is faster than push_back

	vector<pair<int, int>> vec;
	vec.push_back({1, 2});
	vec.emplace_back(1, 2);

	vector<int> v2(5, 100);
	// v2 = {100, 100, 100, 100, 100}

	vector<int> v3(5);
	// zero or grabag value
	// v3 = {0, 0, 0, 0, 0}


	// vector copy:
	vector<int> v4(5, 20);
	vector<int> v5(v4);


	// access vector:
	cout << v[0] << " " << v.at(0);
	cout << "\n\n";
	cout << v.back() << " ";
	cout << "\n\n";


	v.push_back(2);
	v.push_back(3);
	v.push_back(4);


	// iterator - Another way:
	vector<int>::iterator it = v.begin();

	it++;
	cout << *(it) << " ";
	cout << "\n\n";

	it = it + 2;
	cout << *(it) << " ";
	cout << "\n\n";

	vector<int>::iterator it2 = v.end();
	// vector<int>::iterator it3 = v.rend();
	// vector<int>::iterator it4 = v.rbegin();


	for(vector<int>::iterator it = v.begin(); it!= v.end(); it++) {
		cout << *(it) << " ";
	}
	cout << "\n\n";

	for(auto it = v.begin(); it != v.end(); it++){
		cout << *(it) << " ";
	}
	cout << "\n\n";


	for( auto it: v){
		cout << it << " ";
	}
	cout << "\n\n";


	vector<int> vec2 = {10, 20, 12, 23};
	// {10, 20, 12, 23}
	vec2.erase(vec2.begin()+1);

	vector<int> vec3 = {10, 20, 12, 23, 35};
	// {10, 20, 12, 23}
	vec3.erase(vec3.begin()+2, vec3.begin()+4);	// {10, 20, 35} [start, end]


	// Insert function
	vector<int> vec4(2, 100); // {100, 100}
	vec4.insert(vec4.begin(), 300); // {300, 100, 100}
	vec4.insert(vec4.begin()+1, 2, 10); // {300, 10, 10, 100, 100}

	vector<int> copy(2, 50); // {50, 50}
	vec4.insert(vec4.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}


	vector<int> vec5 = {10, 20};
	cout << vec5.size(); // 2	
	cout << "\n\n";

	v.pop_back(); // 10

	vector<int> vec6 = {10, 20};
	vector<int> vec7 = {30, 40};
	vec6.swap(vec7); // vec6 -> {30, 40}, vec7 -> {10, 20}


	v.clear(); // erase the entire vector

	cout << v.empty();
	cout << "\n\n";
}


void explainList(){
	list<int> ls;

	ls.push_back(2); // {2}
	ls.emplace_back(4); // {2, 4}

	ls.push_front(5); // {5, 2, 4}

	ls.emplace_front(6); // {6, 5, 2, 4};

	// rest functions same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap

	for(auto it: ls){
		cout << it << " ";
	}
	cout << "\n\n";

}


// similar to vector
void explainDeque(){
	deque<int> dq;
	dq.push_back(1); // {1}
	dq.emplace_back(2); // {1, 2}
	dq.push_front(4); // {4, 1, 2}
	dq.emplace_front(3); // {3, 4, 1, 2}

	dq.pop_back(); // {3, 2, 1}
	dq.pop_front(); // {4, 1}

	dq.back();

	dq.front();

	// rest functions same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap
	for(auto it: dq){
		cout << it << " ";
	}
	cout << "\n\n";

}


// LIFO
void explainStack(){
	stack<int> st;
	st.push(1); // {1}
	st.push(2); // {2, 1}
	st.push(3); // {3, 2, 1}
	st.push(3); // {3, 3, 2, 1}
	st.emplace(5); // {5, 3, 3, 2, 1}

	cout << st.top(); // print 5 "** st[2] is invalid **"
	cout << "\n";

	st.pop(); // st looks like {3, 3, 2, 1}

	cout << st.top(); // 3
	cout << "\n";

	cout << st.size(); // 4
	cout << "\n";

	cout << st.empty();
	cout << "\n";

	stack<int> st1, st2;
	st1.swap(st2);
	cout << "\n\n";

	// push, pop top -> O(1)
}


// FIFO
void explainQueue(){
	queue<int> q;
	q.push(1); // {1}
	q.push(2); // {1, 2}
	q.emplace(4); // {1, 2, 4}

	q.back() += 5;

	cout << q.back(); // prints 9
	cout<< "\n";

	// Q is {1, 2, 9}
	cout << q.front(); // print 1
	cout<< "\n";

	q.pop(); // {2, 9}

	cout << q.front(); // print 2
	cout << "\n\n";

	// size swap empty same as stack

	// 	all operation O(1) times
}


void explainPQ(){
	priority_queue<int>pq;

	pq.push(5); // {5}
	pq.push(2); // {5, 2}
	pq.push(8); // {8, 5, 2}
	pq.emplace(10); // {10, 8, 5, 2}

	cout << pq.top(); // prints 10
	cout << "\n";

	pq.pop(); // {8, 5, 2}

	cout << pq.top(); // prints 8
	cout << "\n";

	// size swap empty function same as others
	
	// Minimum Heap
	priority_queue<int, vector<int>, greater<int>> pq2;
	pq2.push(5); // {5}
	pq2.push(2); // {2, 5}
	pq2.push(8); // {2, 5, 8}
	pq2.emplace(10); // {2, 5, 8, 10}

	cout << pq2.top(); // print 2
	cout << "\n\n";

	// upper is max heap
	// downer code is min heap

	// push, pop -> logn
	// top -> O(1) 
}


void explainSet() {
	set<int> st1;

	st1.insert(1);
	st1.emplace(2); // {1}
	st1.insert(2); // {1, 2}
	st1.insert(4); // {1, 2, 4}
	st1.insert(3); // {1, 2, 3, 4}

	// Functionality of insert in vector
	// ca be used also, that only increases
	// efficiency

	// begin(), end(), rbing(), rend(), size(),
	// empty() and swap() are same as those of above

	// {1, 2, 3, 4, 5}
	auto it = st1.find(3);

	// {1, 2, 3, 4, 5}
	auto it2 = st1.find(6);

	// {1, 4, 5}
	st1.erase(5); // erases 5 // take logarithmic time


	int cnt = st1.count(1);

	auto it3 = st1.find(3);

	set<int> st;
	st.insert(1); // {1}
	st.insert(2); // {1, 2}
	st.insert(2); // {1, 2}
	st.insert(4); // {1, 2, 4}
	st.insert(3); // {1, 2, 3, 4}

	// Functionality of insert in vector
	// can be used also, that only increases
	// efficiency

	// begin(), end(), rbegin(), rend(), size()
	// empty() and swap() are same as those of above

	// {1, 2, 3, 4, 5}
	auto it4 = st.find(3);

	// {1, 2, 3, 4, 5}
	auto it5 = st.find(6);	// if element is not there, it return st.end()


	// {1, 2, 3, 4, 5}
	st.erase(5); // erases 5 // takes logarithmic time

	int cnt2 = st.count(1);

	auto it6 = st.find(3);
	st.erase(it);	// it takes constant time


	// {1, 2, 3, 4, 5}
	auto it7 = st.find(2);
	auto it8 = st.find(4); 
	st.erase(it4, it5); // after erase {1, 4, 5} [first, last]

	// lower_bound() and upper_bound() function works in the same way
	// as in vector it does.

	// This is the syntax
	auto it9 = st.lower_bound(2);
	auto it10 = st.upper_bound(3);
	cout << "\n\n";

	// sorted and unique
	// inset, erase, find -> (logN)
}


void explainMultiSet() {
	// Everythng is same as set
	// only stores duplicate elements also

	multiset<int> ms;
	ms.insert(1); // {1}
	ms.insert(1); // {1, 1}
	ms.insert(1); // {1, 1, 1}

	ms.erase(1); // all 1's erased


	ms.insert(1); // {1}
	ms.insert(1); // {1, 1}
	ms.insert(1); // {1, 1, 1}
	ms.insert(1); // {1, 1, 1, 1}

	int cnt = ms.count(1);

	//only a single one erased
	ms.erase(ms.find(1));
	cout << "\n\n";

	// ms.erase(ms.find(1), ms.find(1)+2);

	// rest all function same as set
}


void explainUSet(){
	unordered_set<int> st;
	cout << "\n\n";

	// any order

	// lower_bound and upper_bound function
	// does not works, rest all function are same
	// as above, it does not stores in any
	// particular order, it has a better complexity
	// than set in most cases, except some when collision happens

	// most of the cases tc -> O(1)
	// worst case -> O(N)
}


void explainMap(){
	map<int, int> mpp;

	map<int, pair<int, int>> mpp2;
	map< pair<int, int>, int> mpp3;


	mpp[1] = 2;
	mpp.emplace(3, 1);

	mpp.insert({2, 4});

	mpp3[{2, 3}] = 10;

	// map store unique keys, in sorted order
	/*
	{
		{1, 2}
		{2, 4}
		{3, 1}
	}
	*/

	// sorted order of keys, not value

	for (auto it: mpp){
		cout << it.first << " " << it.second << "\n";
	}

	cout << mpp[1];
	cout << "\n";
	cout << mpp[3];
	cout << "\n";

	auto it = mpp.find(2);
	cout << (*it).second << '\n';
	cout << it->second << '\n';
	

	auto it2 = mpp.find(5); // this value is not exist, so it point mpp.end()
							// means after the map

	// This is the systax
	auto it3 = mpp.lower_bound(2);
	auto it4 = mpp.upper_bound(3);
	cout << "\n\n";

	// erase, swap, size, empty, are same as above	
}


void explainMultimap(){
	cout << "\n\n";
	// everything same as map, only it can store multiple keys
	// only mpp[key] cannot be used here

	// duplicate keys
}


void mexplainUnorderedMap(){
	cout << "\n\n";

	// sae as set and unordered_Set difference.
	// not store in sorted, randomize 
	// not duplicate, has unique keys


	// map works log N times
	// unordered_map all most all cases works constastand times O(1)
	// worse case, it go O(N) times
}




// Algorithms:


bool comp(pair<int, int> p1, pair<int, int> p2) {
	if(p1.second != p2.second){
		return p1.second < p2.second;	
	}
	return p1.first > p2.first;
}

void explainExtra(){
	// array
	int a[] = {3, 5, 6, 7, 2, 5, 9};
	int n = sizeof(a)/sizeof(a[0]);
	sort(a, a+n);

	// vector
	vector<int> v{4, 2, 6, 1, 7, 3, 8};
	sort(v.begin(), v.end());

	sort(a+2, a+4);
	// decreasing order
	sort(a, a+n, greater<int>());

	for(auto i: a){
		cout << i;
	}
	cout << "\n\n";


	pair<int, int> pr[] = {{1, 2}, {2, 1}, {4, 1}};

	// sort it according to second element
	// if second element is same, then sort
	// it according to first element but in descending
	n = 3;
	sort(pr, pr+n, comp);
	// self return comparitor
		// it is a boolean function
	// {{4, 1}, {2, 1}, {1, 2}};
	for(auto it: pr){
		cout << it.first << " " << it.second << "\n";
	}
	cout << "\n\n";



	int num = 7;
	int cnt = __builtin_popcount(num);

	long long num2 = 165786578687;
	int cnt2 = __builtin_popcountll(num2);


	string s = "123";

	// important: want to print all permutation?
	// must be sorted
	sort(s.begin(), s.end());

	do {
		cout << s << "\n";
	} while(next_permutation(s.begin(), s.end()));

	int maxo = *max_element(a, a+n);
	cout << "\n\n";
}



int main(){

	cout << "explainPair:" << "\n\n";
	explainPair();
	cout << "explainVector:" << "\n\n";
	explainVector();

	cout << "explainList:" << "\n\n";
	explainList();
	cout << "explainDeque:" << "\n\n";
	explainDeque();

	cout << "explainStack:" << "\n\n";
	explainStack();
	cout << "explainQueue:" << "\n\n";
	explainQueue();
	cout << "explainPQ:" << "\n\n";
	explainPQ();

	cout << "explainSet:" << "\n\n";
	explainSet();
	cout << "explainMultiSet:" << "\n\n";
	explainMultiSet();
	cout << "explainUSet:" << "\n\n";
	explainUSet();


	cout << "explainMap:" << "\n\n";
	explainMap();
	cout << "explainMultiSet:" << "\n\n";
	explainMultiSet();

	cout << "explainExtra:" << "\n\n";
	explainExtra();


	return 0;
}
