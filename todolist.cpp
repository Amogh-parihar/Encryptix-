#include<iostream>
#include<windows.h>
using namespace std;

void print_tasks (string tasks[], int task_count)
{
    cout<<"Tasks To Do: "<<endl;
    cout<<"-----------------------------------"<<endl;
    for(int i=0;i<task_count; i++)
    {
        cout<<"Task "<<i<<" : "<<tasks[i]<<endl;
    }
    cout<<"-----------------------------------"<<endl;
}



int main()
{
        string tasks[10] = {""};
        //counter var -> know how many tasks we have 
        int task_count = 0;

        int option = -1;
        while(option != 0)
        {
            //we will make menu here 
            cout<<"\n-----To Do List-----"<<endl;
            cout<<"1 - To Add New Tasks"<<endl;
            cout<<"2 - To View Tasks"<<endl;
            cout<<"3 - Delete The Tasks"<<endl;
            cout<<"0 - Terminate the Program"<<endl; 
            cin>>option;

            switch(option){
                case 1:
                    { 
                        if (task_count >9)
                        {
                            cout<<"  Tasks List Is Full"<<endl;
                        }
                        else
                        {
                            cout<<"\nEnter A New Tasks : "<<endl;
                            cin.ignore();
                            getline(cin,tasks[task_count]);
                            task_count++;
                        }
                        break;
                    }
                case 2: 
                    print_tasks(tasks,task_count);
                    break;
                case 3:
                    {
                        int del_task = 0;
                        cout<<"Enter A task to delete : ";
                        cin>>del_task;

                        if(del_task<0 || del_task >9)
                        {
                            cout<<"You entered Invaid task no. "<<endl;
                            break;
                        }
                        for(int i=del_task ; i<task_count ; i++)
                        {
                            tasks[i] = tasks[i+1];
                        }
                        task_count = task_count - 1;
                        break;
                    }    
            } 
            
        }


    return 0;
}
