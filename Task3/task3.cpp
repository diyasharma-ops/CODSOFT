#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> tasks;
    int choice;

    while (true) {
        cout << endl;
        cout << "To-Do List" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string task;
            cout << "Enter task: ";
            getline(cin, task);
            tasks.push_back(task);
            cout << "Task added." << endl;
        }
        else if (choice == 2) {
            if (tasks.empty()) {
                cout << "No tasks found." << endl;
            } else {
                for (int i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
            }
        }
        else if (choice == 3) {
            if (tasks.empty()) {
                cout << "No tasks to delete." << endl;
            } else {
                int index;
                cout << "Enter task number: ";
                cin >> index;

                if (index > 0 && index <= tasks.size()) {
                    tasks.erase(tasks.begin() + index - 1);
                    cout << "Task removed." << endl;
                } else {
                    cout << "Invalid number." << endl;
                }
            }
        }
        else if (choice == 4) {
            break;
        }
        else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
