#include <stdio.h>
#include "Stack.h"
#include "LinkedList.h"

typedef char llt;

void prnMenu(){
	cout<<"*******************************************"<<endl;
	cout<<"* 1.Insert    2.Delete    3.Print   4.End *"<<endl;
	cout<<"*******************************************"<<endl;
	cout<<endl;
	cout<<"Select an action to execute ";
}

int main(){
	    int mode, selectNumber;
		llt tmpItem;
		LinkedList<llt> *p;
		bool flag = false;

		cout<<"Choose the type of data structure (1: Stack, Other: Linked List): ";
		cin>>mode;
						    
		if(mode == 1)
			p = new Stack<llt>();    // 정수를 저장하는 스택
			
		else
			p = new LinkedList<llt>();


		do{
			prnMenu();
			cin>>selectNumber;
			
			switch(selectNumber){ 
				case 1:
					cout<<"Input item: ";
					cin>>tmpItem;    p->Insert(tmpItem);
					cout<<tmpItem<<" has been inserted"<<endl;
					break;
					
				case 2:
					if(p->Delete(tmpItem)==true)
						cout<<tmpItem<<" has been deleted"<<endl;
						
					else cout<<"Empty list. delete failed"<<endl;
					break;
					
				case 3:
					cout<<"Size: "<<p->GetSize()<<endl;
					p->Print();
					break;
					
				case 4:
					flag = true;     break;
					
				default:
					cout<<"\nwrong input (1-4)"<<endl;
					break;
			
			}
			
			if(flag) break;
			
		} while(1);
		
		return 0;
}

