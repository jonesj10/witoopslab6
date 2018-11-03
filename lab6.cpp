
//Ameer and Jacob
//lab 6

#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;
//make the QB struct
struct qb {
        string firstname, lastname;
        int numWins; //starts a 0
        int years[4]; //Most won by a QB in that span is 4
        qb *next;
        qb *prev;
} ;
//making pointer structs so that they may be connected and used in the list
qb *temp2=0;
qb *temp=0;
qb *HEAD=0;
//prototyping functions
void searcher();
void deleteall();
void addstruct();
void removefunc();

//________________________________________________________________________________________
void addstruct(){
string fname, lname;
int numwins;
int year[4];

//assign the variables to the new entry
qb *newentry = new qb;
newentry-> firstname = fname;
newentry-> lastname =lname;
newentry-> numWins = numwins;
newentry-> years[4] = year[4];

//sets the temp pointer to the next temp.
if(HEAD ==NULL){
	HEAD = newentry;
	newentry->next=0;
}
else{
	for(temp =HEAD; temp !=0; temp=temp->next){}
	temp = newentry;
	newentry->next=HEAD;
	HEAD = newentry;
}
cout <<"The struct was created!" <<endl;
}//end of addstruct function

//_________________________________________________________________________________________
//delete all function that deletes all of the entries
void deleteall(){
        temp = HEAD;
        while(temp){
                qb *deleted =temp; //save the current
                temp = temp->next; //moves to the next pointer
                delete deleted;//deletes the current
        }
}//end of delete all
//_________________________________________________________________________________________
int main(){
//activates the menu and returns the useres choice that is given to the computer

        string qblist[19][3];

        ifstream infile1("qblist.txt");


        for ( int i = 0; i<17; i++ ) {
                for (int j=0; j<3; j++ ) {
                        infile1 >> qblist[i][j];
                }//j
        }//i
        int choice;
        do{
        cout <<"please enter what you want to do:" << endl;
        cout <<"if you want to add a struct, enter 1" << endl;
        cout <<"if you want to search for a struct, enter 2" << endl;
        cout <<"to delete all, enter 3!" << endl;
        cout <<"to remover a struct, enter 4" <<endl;
        cout <<"to exit,enter 0" << endl;
        cin >> choice;
        if(choice ==1){
                addstruct();
        }
        else if(choice ==2){
//                searcher();
        }
        else if(choice ==3){
                deleteall();
        }
        else if (choice ==4){
//                removefunc();
        }
        else
    return 0;
        }while(choice !=0);
}//main

