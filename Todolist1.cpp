#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Task {
    string description;
    bool completed;
};

void print_tasks(const vector<Task>& tasks) {
    cout << "\nTasks :\n";
    cout << "------------------------------------\n";
    for (size_t i =0; i <tasks.size(); ++i) {
        cout <<" Task " << i + 1 <<": ";
        cout <<tasks[i].description <<" - ";
        if (tasks[i].completed) {
            cout << "Done";
        } 
        else{
            cout <<"Not done";
        }
        cout <<endl;
    }
    cout << "------------------------------------\n";
}

int main() {
    vector<Task> tasks;
    int option = -1;

    while (option != 0) {

        cout << "\n\n------------To Do List------------\n" << endl;
        cout << "\t1. Add New Task" << endl;
        cout << "\t2. View Tasks" << endl;
        cout << "\t3. Mark Task as Done/Not Done" << endl;
        cout << "\t4. Delete Task" << endl;
        cout << "\t0. Terminate the Program" << endl;
        cout << "\n    Choose an option: ";
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1: {

                if (tasks.size() >= 10) {
                    cout << "\nTasks List is Full.\nCannot add more tasks." << endl;
                } 
                else {
                    cout << "\n Enter a new task description: ";
                    string description;
                    getline(cin, description);

                    Task newTask;
                    newTask.description = description;
                    newTask.completed = false;

                    tasks.push_back(newTask);
                    cout << "\nTask added successfully." << endl;
                }
                break;
            }
            case 2: 
                if (tasks.empty()) {
                    cout << "\nNo tasks added yet. " << endl;
                }
                else {
                    print_tasks(tasks);
                }
                break;
            case 3: {
                if (tasks.empty()) {
                    cout << "\nNo tasks Available to mark." << endl;
                }
                else {
                    int taskNumber;
                    cout << "\nEnter the task number to mark as done/not done (1-" << tasks.size() << "): ";
                    cin >> taskNumber;

                    if (taskNumber < 1 || taskNumber > tasks.size()){
                        cout <<"\nInvalid task number .\tPlease try again." <<endl;
                    }
                    else {
                        Task& task = tasks[taskNumber - 1];
                        task.completed = !task.completed;
                        cout << "Task marked as ";
                        if (task.completed) {
                            cout << "done." << endl;
                        } 
                        else {
                            cout <<"not done." << endl;
                        }
                    }
                }
                break;
            }
            case 4: {
                if (tasks.empty()) {
                    cout << "\nNo tasks available to delete." << endl;
                }
                else {
                    int del_task;
                    cout << "\nEnter the task number to delete (1-" << tasks.size() << "): ";
                    cin >> del_task;

                    if (del_task < 1 || del_task > tasks.size()) {
                        cout << "Invalid task number.\nPlease try again." << endl;
                    } 
                    else {
                        tasks.erase(tasks.begin() + del_task - 1);
                        cout << " Task deleted successfully " << endl;
                    }
                }
                break;
            }
            case 0:
                cout <<"Terminating the program. "<< endl;
                break;
            default:
                cout <<"\nInvalid option.\nPlease choose a valid option. " <<endl;
                break;
        }
    }
    return 0;
}