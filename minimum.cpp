
#include<bits/stdc++.h> 
using namespace std; 

int main() 
{  
	vector< pair <int,string> > vect; 
    char c;
    string s_noe;
    int noe;
    char ch;
         while(((c = getc(stdin)) != ':'))
        s_noe+=c;
        s_noe+=':';
    
    cin>>noe;
    string s_GnP;
    char cc;
         while(((cc = getc(stdin)) != ':'))
        s_GnP+=cc;
        s_GnP+=':';
    //cout<<endl;
	int n = 10; 

	for (int i=0; i<n; i++) {
        string goodies;
        int price;
        char ch;
         while(((ch = getc(stdin)) != ':'))
         goodies+=ch;
         goodies+=':';
        cin>>price;
        //cout<<price;
		vect.push_back( make_pair(price,goodies) ); 

    }
    // for (int i=0; i<10; i++) 
	// { 
	// 	cout << vect[i].first << endl; 
	// } 
    int minIndex=0,minPrice=INT_MAX;
	sort(vect.begin(), vect.end());
	for (int i=0; i<n-noe; i++) 
	{ 
		if((vect[i+noe-1].first)-(vect[i].first)<minPrice)
        {
            minIndex=i;
        }
	} 

	cout << "The goodies selected for distribution are:\n" ; 
	for (int i=minIndex; i<minIndex+noe; i++) 
	{ 
		cout << vect[i].second <<" "<< vect[i].first; 
	} 
	return 0; 
} 
