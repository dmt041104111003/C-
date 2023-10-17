// cai dat stack bang mang
#include <iostream>
using namespace std;
#ifndef __stack__cpp__
#define __stack__cpp__
//#define Max_vol 1000
template <class T>
// toan tu gan ! toan tu copy nhu nao
// vua khai bao cho = luon => copy , khai xog ms = => toan tu gan
// toan tu copy dung khi truyen tham so cho ham, doi nay truyen cho doi kia
class STACK{
	int n,cap/*n la so phan tu dang co, cap = suc chua (capactity) n<=cap*/;
	/*T buf[Max_vol];*/T *buf;
	public:
	STACK() {n=0; buf=NULL;}
	// cout<<"toan tu copy";
	STACK(STACK<T>&z) {this->n=z.n;this->cap=z.cap;this->buf=new T[cap];for(int i=0;i<n;i++) this->buf[i]=z.buf[i];}
	//cout<<"toan tu gan";
	STACK<T> &operator=(STACK<T> &z) {this->n=z.n;this->cap=z.cap;this->buf=new T[cap]; for(int i=0;i<n;i++) this->buf[i]=z.buf[i];return *this;}
	~STACK() {if(buf) delete []buf;}
//	void push(T x) {if (n==cap) {cap=2*cap+1 /* mo rong kich thuoc*/;
//		T *temp=new T[cap]; for(int i=0;i<n;i++) temp[i]=buf[i]; 
//		if(buf) delete[]buf; buf=temp;} buf[n++]=x;} 
	void push(T x) {if (n==cap) {cap=2*cap+1 /* mo rong kich thuoc*/;
		T *temp=buf; buf=new T[cap]; for(int i=0;i<n;i++) buf[i]=temp[i]; 
		if(temp) delete[]temp;} buf[n++]=x;} 
	void pop() {n--;}
	T &top() {return buf[n-1];}
	int size() {return n;} bool empty() {return n==0;}};
#endif

