#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
double weight;
double weighted_grade;
double course_grade;
double sum=0;
string subject=" ";
int x;
int count=1;
int num;
int row;
int col;
int loop=-1;
string response="";
int counter=0;

/*
This program will allow you to calculate your grade based on weighting and percentage grade
The code is very messy, if you get loss, I am very sorry
The program will return an array with your course name and grade next to it
*/


void reset(){
    weighted_grade=0.0;
    weight=0.0;
    course_grade=0.0;
    sum=0.0;
    count=1;
    counter++;
}

double grade(){
    weighted_grade=weight*course_grade;
    return weighted_grade;
	}
double get_info(){
    cout<<"Enter the assessment"<<"("<<count<<")"<< "weighting: "<<endl;
    cin>>weight;
    cout<<"Enter your assemssment grade: "<<endl;
    cin>>course_grade;
    return 0;
}

int data_point(){
     cout<<"How many sets of assessment do you have?"<<endl;
     cin>>x;
     return x;
}

string subject_name(){
    cout<<"Enter the name of the subject:"<<endl;
    getline(cin,subject);
    return subject;
}

int num_subject(){
    cout<<"Enter the number of subject you have: "<<endl;
    cin>>num;
    return num;
}

int row_size(){
    cout<<"Enter the number of courses you wish to check: "<<endl;
    cin>>row;
    return row;
}

vector<string> vec_row ={};
vector <double> vec_col={};




int main(){
    subject_name(
	); //Subject name
    data_point(); //Number of assessment 
    for (int i=x; i>0; i--){
        get_info(); //Weighting and grade
        grade(); //Weighted grade
        sum+=weighted_grade;
        count++;
        if (i==1){
            vec_row.push_back(subject);
            vec_col.push_back(sum);
        }
        else{}
    }
    counter++;
	for (int z=0; z<1000; z++){
    cout<<"Do you have another course to check? (Yes/No)"<<endl;
    cin>>response;
    if (response=="Yes"){
		cin.get();
        subject_name(); //Subject name
        data_point(); //Number of assessment
        reset();
        for (int i=x; i>0; i--){
        get_info(); //Weighting and grade
        grade(); //Weighted grade
        sum+=weighted_grade;
        count++;
            if (i==1){
                vec_row.push_back(subject);
                vec_col.push_back(sum);
            }
            else{}
        }
    }
    else{
        for(int j=0; j<=counter; j++){
            cout<<vec_row[j]<<"    "<<vec_col[j]<<"%"<<endl;
    }
    }
	do{
		break;
	}
	while(response!="Yes");
    }
    for(int j=0; j<=counter; j++){
    cout<<vec_row[j]<<"    "<<vec_col[j]<<"%"<<endl;
    }
	
	return 0;
    }
