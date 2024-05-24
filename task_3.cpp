#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

void addTask(vector<Task> &tasks);
void viewTasks(const vector<Task> &tasks);
void markTaskCompleted(vector<Task> &tasks);
void removeTask(vector<Task> &tasks);

int main() {
    vector<Task> tasks;
    int choice;

    do {
        
        cout << "\n********* To-Do List Menu *********\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        
        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                markTaskCompleted(tasks);
                break;
            case 4:
                removeTask(tasks);
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 5.\n";
        }
    } while (choice != 5);

    return 0;
}

void addTask(vector<Task> &tasks) {
    Task newTask;
    cout << "Enter task description: ";
    cin.ignore();
    getline(cin, newTask.description);
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added successfully.\n";
}

void viewTasks(const vector<Task> &tasks) {
    cout << "\n===== Tasks =====\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". ";
        if (tasks[i].completed)
            cout << "[Completed] ";
        cout << tasks[i].description << endl;
    }
}

void markTaskCompleted(vector<Task> &tasks) {
    viewTasks(tasks);
    int taskNum;
    cout << "Enter the number of the task to mark as completed: ";
    cin >> taskNum;
    if (taskNum > 0 && taskNum <= static_cast<int>(tasks.size())) {
        tasks[taskNum - 1].completed = true;
        cout << "Task marked as completed.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

void removeTask(vector<Task> &tasks) {
    viewTasks(tasks);
    int taskNum;
    cout << "Enter the number of the task to remove: ";
    cin >> taskNum;
    if (taskNum > 0 && taskNum <= static_cast<int>(tasks.size())) {
        tasks.erase(tasks.begin() + taskNum - 1);
        cout << "Task removed successfully.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}
