/* #include <iostream>
 */


/*
using namespace std;
auto sum (int lo,int hi)
{
	int sum =0;
	while (lo<hi) sum+=lo;
	return sum;
}

int main ()
{
	cout<< "sum is" <<sum(50,50+1)<<endl;
	return 0;
}*/


/* #include "Sales_item.h"
using namespace std;
int main ()
{
	Sales_item s1,s2;
	cin>>s1>>s2;
	cout<<s1<<'\t'<<s2<<'\t'<<s1+s2<<endl;
	return 0;
} */

/* #include <string>
#include <vector>
#include <stdexcept> */
//#include "Chapter6.h"
/* using namespace std;

int main (int argc,char**argv)
{     */
 /*    vector<string> s{10,"hello"};
	for(auto c :s)
	   cout<<c; */
/*      double f=3.14;
	 int i(f);
	 int j{f};
     string s{"hello,this.is a message:nju!"};
	 string str;
	 cout<<s;
	 //string::size_type cnt;
	 for(auto &c :s)
		 if(!ispunct(c))
			 str+=c;
			 
	 cout<<s.size()<<" "<<str.size()<<str<<endl; */
	 /* vector<int> num; */
/* 	 for (int i;cin>>i;num.push_back(i))
		 cout<<i; */
  /*    vector<int> text;
	 for (int num;cin>>num;text.push_back(num));
	 for (decltype(text.size()) i=1;i!=text.size();++i)
		 cout<<(text[i-1]+text[i])<<endl; */
	 
/* 	 vector<int> num {0,1,2,3,4,5,6,7,8,9};
	 for (auto i=num.begin();i!=num.end();++i)
	 {
		 (*i)*=2;
		 cout<<(*i)<<" "<<endl;
	 } */
	 

	/* int i[8]{1,2,3,4,5,6};
    int *p=begin(i);
    int *q=end(i);
    cout<<p<<' '<<q<<' '<<q-p<<' '<<*q<<endl;	 */
	 
 /*    string str("hello nju"),str1;
	char s[10]="nihao nju";
	str1=str+s;
	cout<<str1; */
	
/*     cout << "void: nullptr_t\t" << sizeof(std::nullptr_t) << " bytes" << endl << endl; 
      
     // boolean type 
     cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl << endl; 
      
     // charactor type 
     cout << "char:\t\t" << sizeof(char) << " bytes" << endl; 
     cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl; 
     cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl; 
     cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl << endl; 
      
     // integers type 
     cout << "short:\t\t" << sizeof(short) << " bytes" << endl; 
     cout << "int:\t\t" << sizeof(int) << " bytes" << endl; 
     cout << "long:\t\t" << sizeof(long) << " bytes" << endl; 
     cout << "long long:\t" << sizeof(long long) << " bytes" << endl << endl; 
      
     // floating point type 
     cout << "float:\t\t" << sizeof(float) << " bytes" << endl; 
     cout << "double:\t\t" << sizeof(double) << " bytes" << endl; 
     cout << "long double:\t" << sizeof(long double) << " bytes" << endl << endl; 
 	 
     // Fixed width integers 
     cout << "int8_t:\t\t" << sizeof(int8_t) << " bytes" << endl; 
     cout << "uint8_t:\t" << sizeof(uint8_t) << " bytes" << endl; 
     cout << "int16_t:\t" << sizeof(int16_t) << " bytes" << endl; 
     cout << "uint16_t:\t" << sizeof(uint16_t) << " bytes" << endl; 
     cout << "int32_t:\t" << sizeof(int32_t) << " bytes" << endl; 
     cout << "uint32_t:\t" << sizeof(uint32_t) << " bytes" << endl; 
     cout << "int64_t:\t" << sizeof(int64_t) << " bytes" << endl; 
     cout << "uint64_t:\t" << sizeof(uint64_t) << " bytes" << endl;  */

/* 	const char *p="this is a test.";
    cout<<static_cast<string>(p).size()<<endl;
	cout<<static_cast<string>(const_cast<char*>(p)).size()<<endl;  */
    




 

 /*   std::cout << "5! is " << fact(5) << std::endl;  
   std::cout << func() << std::endl;  
   std::cout << abs(-9.78) << std::endl; 
 */
  
/*     std::string str; 
     for (int i = 1; i != argc; ++i) 
         str +=string(argv[i])+' '; 
 
     std::cout << str << std::endl; 
     return 0;  */

/*    int i(9);
   cout<<i+int(5.4)<<endl;
   return 0; */
  
/*    string s("nihao");
   vector<string> vec{"hello",s};
   for(string str:vec)
	   cout<<str<<" "; */
   
   
  /*   const int i=1;
	auto & j=i;
    auto s={1,2,3,4,5,6};
	for (auto & elem :s)
		cout<<elem<<" ";
	
   return 0; */
    
	
/*    const int i=9;
   const int *p=&i;
   int *pi=p;
   cout<<*pi<<endl; 
   
}*/
/* #include <iostream> 
#include <vector> 
using std::vector; using std::cout; using std::endl; using std::cerr;
 
#define NDEBUG 
void printVec(vector<int> &vec) 
 { 
 #ifdef NDEBUG 
     cout << "vector size: " << vec.size() << endl; 
 #endif 
     if (!vec.empty()) 
     { 
         auto tmp = vec.back(); 
         vec.pop_back(); 
         printVec(vec); 
         cout << tmp << " "; 
     } 
 } 
 
 
 int main() 
 { 
     vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
     printVec(vec); 
     cout << endl; 
	 cerr << "That's all ?"<<endl;
 
     return 0; 
 }*/
 
 
/* #include <iostream> 
#include <sstream> 
#include <fstream> 
#include <string> 
#include <vector> 
 
using std::vector; using std::string; using std::cin; using std::istringstream; 
using std::ostringstream; using std::ifstream; using std::cerr; using std::cout; using std::endl; 
//using std::isdigit; 


struct PersonInfo { 
    string name; 
    vector<string> phones; 
}; 


bool valid(const string& str) 
{ 
    return isdigit(str[0]); 
} 

 
string format(const string& str) 
{ 
    return str.substr(0,3) + "-" + str.substr(3,3) + "-" + str.substr(6); 
} 

 
int main() 
{ 
    ifstream ifs("file_test.txt"); 
    if (!ifs) 
    { 
        cerr << "no phone numbers?" << endl; 
        return -1; 
    } 

    string line, word; 
    vector<PersonInfo> people; 
    istringstream record; 
    while (getline(ifs, line)) 
    { 
        PersonInfo info; 
        record.clear(); 
        record.str(line); 
        record >> info.name; 
        while (record >> word) 
            info.phones.push_back(word); 
        people.push_back(info); 
    } 

    for (const auto &entry : people) 
    { 
        ostringstream formatted, badNums; 
        for (const auto &nums : entry.phones) 
            if (!valid(nums)) badNums << " " << nums; 
            else formatted << " " << format(nums); 
        if (badNums.str().empty()) 
            cout << entry.name << " " << formatted.str() << endl; 
        else 
            cerr << "input error: " << entry.name 
                 << " invalid number(s) " << badNums.str() << endl; 
    } 

   return 0; 
}  */

/* #include <iostream>
#include <sstream> 
#include <fstream> 
#include <string> 
using namespace std;
int main()
{   ifstream text("file_test.txt");
    ostringstream osstream;
	string str;
	while (getline(text,str))
	{   
	    osstream<<str<<endl;	
	}
	cout<<osstream.str();
} */
/* #include <iostream> 
#include <vector> 
#include <forward_list>
 
int main() 
{   int i=0;
    std::vector<int> v{1,2,3,4,5,6,7,8}; 
    int j;
	//std::cout<<*(--v.end())<<std::endl;;
	/* auto it=v.erase(++v.begin(),v.end());
	std::cout<<(it==(v.end()))?1:0;
	for (auto & n:v)
		std::cout<<n<<std::endl;
	std::vector<double> w{10};
	auto itt=w.insert(w.begin(),++v.begin(),v.end());
	for (auto & n:w)
		std::cout<<n<<std::endl;
    std::cout<<*itt<<std::endl;


	return 0;

} */
/* #include <iostream> 
#include <vector> 
using std::vector; using std::cout; using std::endl; using std::string;

 
int main() 
{ 
    vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
    auto begin = v.begin(); 
    while (begin != v.end()) { 
        ++begin; 
       begin = v.insert(begin, 42); 
       ++begin; 
    } 
    for (auto i : v) 
        cout << i << " "; 

 
    return 0; 
} 
 */
/* #include <iostream> 
#include <string> 
#include <vector> 
/*@Soyn 
*Ex 9.51 
*Date: 2015.6.12 

using namespace std; 
class My_date{ 
private: 
   unsigned year, month, day; 
public: 
    My_date(const string &s){ 
 
        unsigned tag; 
        unsigned format; 
        format = tag = 0; 

        // 1/1/1900 
        if(s.find_first_of("/")!= string :: npos) 
        { 
            format = 0x01; 
        } 

        // January 1, 1900 or Jan 1, 1900 
        if((s.find_first_of(',') >= 4) && s.find_first_of(',')!= string :: npos){ 
            format = 0x10; 
        } 
        else{ // Jan 1 1900 
            if(s.find_first_of(' ') >= 3 
                && s.find_first_of(' ')!= string :: npos){ 
                format = 0x10; 
                tag = 1; 
            } 
        } 

        switch(format){ 

        case 0x01: 
            day = stoi(s.substr(0, s.find_first_of("/"))); 
            month = stoi(s.substr(s.find_first_of("/") + 1, s.find_last_of("/")- s.find_first_of("/"))); 
            year = stoi(s.substr(s.find_last_of("/") + 1, 4)); 

        break; 
 
        case 0x10: 
            if( s.find("Jan") < s.size() )  month = 1; 
            if( s.find("Feb") < s.size() )  month = 2; 
            if( s.find("Mar") < s.size() )  month = 3; 
            if( s.find("Apr") < s.size() )  month = 4; 
            if( s.find("May") < s.size() )  month = 5; 
            if( s.find("Jun") < s.size() )  month = 6; 
            if( s.find("Jul") < s.size() )  month = 7; 
            if( s.find("Aug") < s.size() )  month = 8; 
            if( s.find("Sep") < s.size() )  month = 9; 
            if( s.find("Oct") < s.size() )  month =10; 
            if( s.find("Nov") < s.size() )  month =11; 
            if( s.find("Dec") < s.size() )  month =12; 

            char chr = ','; 
            if(tag == 1){ 
                chr = ' '; 
            } 
            day = stoi(s.substr(s.find_first_of("123456789"), s.find_first_of(chr) - s.find_first_of("123456789"))); 
            cout<<s.find_first_of(chr)<<" "<<s.find_first_of("123456789")<<" "<<s.find_first_of(chr) - s.find_first_of("123456789")<<endl;
            year = stoi(s.substr(s.find_last_of(' ') + 1, 4)); 
            break; 
        } 
    } 

    void print(){ 
        cout << "day:" << day << " " << "month: " << month << " " << "year: " << year; 
    } 
}; 
int main() 
{ 
    My_date d("Jan 1 1900"); 
    d.print(); 
    return 0; 
}  */
/* #include <algorithm>
#include <string> 
#include <iostream> 
#include <vector>
#include <numeric>
#include <functional>
using namespace std;
bool check_size(const string & s,string ::size_type sz)
{
	return s.size()>sz;
}
int main (int argc ,char**argv)
{   string::size_type sz=6;
    vector<string> words{"hellonju","nihao","hhhhhhhhhhh","avc"};
    //bool check_size(const string & s,string::size_type sz=sz1);
	auto wc=find_if(words.begin(),words.end(),bind(check_size,placeholders::_1,sz));
	cout<<*wc<<endl;
}
 */

/* #include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <list>
#include <algorithm>
using namespace std;
int main()
{   istream_iterator<string> in(cin),eof;
	vector<string> vec(in,eof);
	string str;

	
	cout<<cin.rdstate();
	for (auto & str:vec)
	{
		cout<<str<<ends;
	} 
    vector<int> vint{1,2,1,2,3,4,5,6,7};
	auto it=remove(vint.begin(),vint.end(),1);
	ostream_iterator<int> os(cout," ");
	copy(vint.begin(),vint.end(),os);
}
 */
/* #include <map>
#include <string>
#include <iostream>
using namespace std;
 
 int main ()
 {
	 map<string,int> map_n;
	 string str;int n;
	 for (;cin>>str>>n;map_n.emplace(str,n));
	 auto ret=map_n.emplace("cjs",7);
	 for (const auto & a:map_n)
	 {
		 cout<<a.first<<" "<<a.second<<endl;
	 }
	 auto rty=map_n.emplace("fl",5);
	 auto rt=map_n.erase(ret.first,rty.first);
	 cout<<(*rt).first<<" "<<(*rt).second<<endl;
	 cout<<endl;
	 for (const auto & a:map_n)
	 {
		 cout<<a.first<<" "<<a.second<<endl;
	 }
 } */
/*  #include <iostream>
 

#include <map>

#include <string>

#include <typeinfo>



int main()

{

 

    std::map<int, std::string> m = { { 1,"ss" },{ 2,"sz" } };

    using KeyType = std::map<int, std::string>::key_type;



    std::cout << "type to subscript: " << typeid(KeyType).name() << std::endl;

    std::cout << "returned from the subscript operator: " << typeid(decltype(m[1])).name() << std::endl;



    return 0;

} */

/* #include <map>

#include <set>

#include <string>

#include <iostream>



using std::string;



int main()

{

    std::multimap<string, string> authors{

        { "alan", "DMA" },

        { "pezy", "LeetCode" },

        { "alan", "CLRS" },

        { "wang", "FTP" },

        { "pezy", "CP5" },

        { "wang", "CPP-Concurrency" }

    };

    std::map<string, std::multiset<string>> order_authors;

    for (const auto &author : authors)

        order_authors[author.first].insert(author.second);

    for (const auto &author : order_authors) {

        std::cout << author.first << ": ";

        for (const auto &work : author.second)

            std::cout << work << " ";

        std::cout << std::endl;

    }

} */

/* #include <iostream>
#include <string>
#include <memory>
using namespace std;
int main()

{
    auto p=make_shared<string>("hello nju!");
	cout<<*p<<endl;
	if(!p.unique())
		p.reset(new string(*p));
	*p+=" cjs";
	cout<<*p;
    	
    return 0;

} */
/* #include <iostream>
#include <string>
#include <memory>
using namespace std;
int main()
{
	string *p=new string("hello nju!");
	shared_ptr<string> p1(p);
	shared_ptr<string> p2(p);
	cout<<*p<<endl;
	cout<<*p1<<endl;
	cout<<*p2<<endl;
	p1.reset();
	cout<<p<<endl;
	cout<<"1"<<endl;
	cout<<p1<<endl;
	cout<<"2"<<endl;
	cout<<p2<<endl;
	cout<<"3"<<endl;

	return 0;
	
} */
/* #include <iostream>
#include <string>
using namespace std;
int main ()
{
    string str1,str2;
	cin>>str1;
	//cin.ignore(); 
	getline(cin,str2);
	cout<<endl;
	cout<<str1<<endl;
	cout<<str2<<endl;
} */
/* #include <iostream>
#include <memory>
#include <string>
using namespace std;
int main()
{
    shared_ptr<string> p(new string("hahha"));
	cout<<p.use_count()<<endl;
	auto & q=p;
	cout<<q.use_count()<<endl;
} */


/* #include <iostream>
#include <string>


class copy{
	public:
	copy()=default;//:str(),n(0){std::cout<<"defult"<<std::endl;}
	copy(const std::string & str1):str(str1),n(0){std::cout<<"copy(string $)"<<std::endl;}
	copy(const copy& cop):str(cop.str),n(cop.n){std::cout<<"copy(copy&)"<<std::endl;}	
	std::ostream&print(std::ostream &os);
	copy& operator=(const copy &);
	private:
	std::string str;
	int n;
};
copy& copy::operator=(const copy &cop)
{
	this->str=cop.str;
	this->n=cop.n;
	std::cout<<"operator=(const copy &)"<<std::endl;
	return *this;
}
std::ostream & copy::print(std::ostream &os)
{
	os<<this->str<<" "<<this->n<<std::endl;
	return os;
}
copy te;
int main()
{  
	copy test="haha",test1(test),test3;
    test3.print(std::cout);
	test.print(std::cout);
	te.print(std::cout);
	char * p="hhhhhhhhhhh";
	std::string str=p;
	
	std::cout<<str;
} */

/* #include <utility>
#include <iostream>
#include <string>
using namespace std;
class str{
	public:
	str()=default;
	str(const string & strin):s(strin){cout<<"const string &"<<endl;}
	str(const str & copy):s(copy.s){cout<<"const str &"<<endl;}
	str (str && move):s(move.s){cout<<"str &&"<<endl;}
	str & operator +=(const str & rstr){s+=rstr.s;return *this;}
	str & operator +=(const char *rstr ){s+=rstr;return *this;}
	str & operator = (str rstr) {swap(s,rstr.s);return *this;}
	friend ostream & operator << (ostream &os,const str& rstr){os<<rstr.s;return os;}
	private:
	string s; 
};
ostream & operator << (ostream &os,const str& rstr);
str baz()
{
	cout<<"func begin"<<endl;
	str ret("nju");
    cout<<"func end"<<endl;
	return ret;
}

int main ()
{
	str i("nju");
	str && k=std::move(i);
	cout<<i<<endl;
	cout<<k<<endl;
	k+="c";
	cout<<i<<endl;
	cout<<k<<endl;
	i+="j";
	cout<<i<<endl;
	cout<<k<<endl;
	str j(k);//std::move(i);
	cout<<i<<endl;
	cout<<k<<endl;
	cout<<j<<endl;
	k+="s";
	cout<<i<<endl;
	cout<<k<<endl;
	cout<<j<<endl;
	cout<<"main begin"<<endl;
    str s1=baz();
	cout<<"main end"<<endl;
	system("pause");
} */

/* #include <string>
#include <iostream>
int main ()
{
	std::string str[5];
	str[0]="hello";
	str[1]="nju";
	str[2]="this";
	str[3]="is";
	str[4]="cjs";
	for (auto it=str;it!=str+5;++it)
	{
		std::cout<<*it<<std::endl;
	}
} */
/* #include <iostream>

#include <string>

#include <map> 

#include <functional> 



int add(int i, int j){ return i + j; }

auto mod = [](int i, int j){ return i % j; };

struct Div{ int operator ()(int i, int j) const { return i / j; } };



auto binops = std::map<std::string, std::function<int(int, int)>>

{

    { "+", add },                               // function pointer 

    { "-", std::minus<int>() },                 // library functor 

    { "/", Div() },                             // user-defined functor 

    { "*", [](int i, int j) { return i*j; } },  // unnamed lambda 

    { "%", mod }                                // named lambda object 

};





int main()

{

    while ( std::cout << "Pls enter as: num operator num :\n")

    {

        int lhs, rhs; 
		std::string op;

        std::cin >> lhs >> op >> rhs;

        std::cout << binops[op](lhs, rhs) << std::endl;

    }



    return 0;

} */
/* #include <iostream>
#include <string>

class base {
	public:
	base() = default;
	 virtual void message(){
		std::cout<<"this is base class";
	}
	void print(){
		message();
	}
	void test(){
		std::cout<<0;
	}
		void test(int i){
		std::cout<<1;
	}
		void test(double j){
		std::cout<<2;
	}
};

class derivation : public base{
	public:
	derivation()=default;
	void message () override {
		base::message();
		std::cout<<std::endl<<"this is derivation";
	}
	using base::test;
	void test(){
		std::cout<<3;
	}
};

int main()
{
	derivation deri;
	base ba;

	base & item = deri;
	item.base::message();
	deri.test();
	return 0;
} */
/* #include <iostream>

#include <string>



template<typename Arr, unsigned N>

void print(Arr const(& arr)[N])

{

    for (auto const& elem : arr)

        std::cout << elem << std::endl;

}



int main()

{

    std::string s[] = { "ssss", "aaa", "ssssss" };

    char c[] = { 'a', 'b', 'c', 'd' };

    int  i[] = { 1 };

    print(i);

    print(c);

    print(s);



    return 0;

} */
/* #include <iostream>



template<typename T, typename ...Args>

void foo(T t, Args ...args)

{

    std::cout << sizeof...(Args) << std::endl;

    std::cout << sizeof...(args) << std::endl;

}





int main()

{

    foo(1, 2);

    foo(1, 23, 4, 5, 6);

} */
// #include <iostream>

/* template <typename T> void print (T){
	std::cout<<"print(T)"<<std::endl;
} */ 
/* template <typename T> void print (T&){
	std::cout<<"print(&T)"<<std::endl;
}
template <typename T> void print (T&&){
	std::cout<<"print(T&&)"<<std::endl;
}  
int main()
{
	int i;
	print(i);
	print (43);
	print (std::move(i));
} */
#include <iostream>

using std::cout;

using std::cin;

using std::endl;



#include <string>

using std::string;



#include <regex>

using std::regex;

using std::regex_error;



int main()

{

    // for ex17.14

    // error_brack

    try{

        regex r("[[:alnum:]+\\.(cpp|cxx|cc)$", regex::icase);

    }

    catch(regex_error e)

    {

        cout << e.what() << " code: " << e.code() << endl;

    }



    // for ex17.15

    regex r("[[:alpha:]]*[^c]ei[[:alpha:]]*", regex::icase);

    string s;

    cout << "Please input a word! Input 'q' to quit!" << endl;

    while(cin >> s && s != "q")

    {

        if(std::regex_match(s, r))

            cout << "Input word " << s << " is okay!" << endl;

        else

            cout << "Input word " << s << " is not okay!" <<endl;



        cout << "Please input a word! Input 'q' to quit!" << endl;

    }



    cout << endl;



    // for ex17.16

    r.assign("[^c]ei", regex::icase);

    cout << "Please input a word! Input 'q' to quit!" << endl;

    while(cin >> s && s != "q")

    {

        if(std::regex_match(s, r))

            cout << "Input word " << s << " is okay!" << endl;

        else

            cout << "Input word " << s << " is not okay!" <<endl;



        cout << "Please input a word! Input 'q' to quit!" << endl;

    }



    return 5;

}