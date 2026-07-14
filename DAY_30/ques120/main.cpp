#include <iostream>
#include <string>
#include <windows.h>
#include <direct.h>

using namespace std;

int main() {
    string command;

    while (true) {
        char cwd[MAX_PATH];
        _getcwd(cwd, MAX_PATH);

        cout << cwd << " > ";
        getline(cin, command);

        if (command.empty())
            continue;

        if (command == "exit")
            break;

        if (command.substr(0, 2) == "cd") {
            string path = command.substr(3);

            if (_chdir(path.c_str()) != 0) {
                cout << "Directory not found.\n";
            }

            continue;
        }

        STARTUPINFOA si;
        PROCESS_INFORMATION pi;

        ZeroMemory(&si, sizeof(si));
        si.cb = sizeof(si);

        ZeroMemory(&pi, sizeof(pi));

    
        string cmd = "cmd.exe /C " + command;

        char* cmdline = &cmd[0];

        if (!CreateProcessA(
                NULL,
                cmdline,
                NULL,
                NULL,
                FALSE,
                0,
                NULL,
                NULL,
                &si,
                &pi)) {

            cout << "Failed to execute command.\n";
            continue;
        }

        WaitForSingleObject(pi.hProcess, INFINITE);

        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);
    }

    return 0;
}