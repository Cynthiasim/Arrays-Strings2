//  File name: main.cpp
//  Programmer: Cynthia Simon
//  Course: Prorgramming Fundamentals II (COSC 1337)
//  Professor: Isaac K. Gang
//  Institution: Texas A&M University-Commerce

//  Problem: Arrays and Strings
//  Due date: 04/15/2019

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Candidate
{
public:
    string lastName;
    int numVotes;
};

int main ( )
{
    Candidate election[5];
    
    for (int i=0; i<5; i++)
    {
        
        cout<<"Enter the last name of candidate #"<<i+1<<": ";
        cin >> election[i].lastName;
        cout<<"Enter the number of votes that "<<election[i].lastName<<" got : ";
        cin>>election[i].numVotes;
    }
    
    for (int i=0; i<5; i++)
    {
        cout<<setw(7)<<election[i].lastName;
        cout<< setw(7)<<election[i].numVotes;
        cout<<endl;
    }
    
    int max = election[0].numVotes;
    string winner = election[0].lastName;
    
    for (int i=1; i<5; i++)
    {
        if (election [i ].numVotes > max)
        {
            max = election[i].numVotes;
            winner = election[ i ].lastName;
        }
    }
    
    cout<<"The winner was "<<winner<<" with "<<max<<" votes."<<endl;
}
void printElectionResults(string lastNames[],
                          int numberofVotes[], int size, int index,
                          int totalVotes)
{
cout << "\nElection Results: " << endl;
cout << endl << left << setw(20) << "candidate"
    << right << setw(15) << "Votes Recieved"
    << setw(21) << "% of Total Votes"
    << endl << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout << left << setw(15) << lastNames[i]
        << right << setw(15) << numberofVotes[i]
        << setw(20) << setprecision(2) << fixed
        << ((double)numberofVotes[i] / totalVotes)
        * 100.0 << endl;
    }
    cout << left << setw(15) << "Total "
    << right << setw(15) << totalVotes << endl;
    
    cout << "\nThe Winner of the Election is "
    << lastNames[index] << "." << endl;
}

