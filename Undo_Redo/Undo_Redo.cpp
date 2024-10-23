#include <iostream>
#include "clsMyString.h"


int main()
{
    system("color 5f");
    clsMyString  S1;
    cout << "S1 = " << S1.Value << endl;

    S1.Value = "Sidna1";
    cout << "S1  =  " << S1.Value << endl;

    S1.Value = "Sidna2";
    cout << "S1  =  " << S1.Value << endl;

    S1.Value = "Sidna3";
    cout << "S1  =  " << S1.Value << endl;

    cout << "\nUndo\n";
    cout << "----------------------------------\n";

    S1.Undo();
    cout << "\nS1 After undo: " << S1.Value << endl;

    S1.Undo();
    cout << "S1 After undo: " << S1.Value << endl;

    S1.Undo();
    cout << "S1 After undo: " << S1.Value << endl;

    cout << "\nRedo\n";
    cout << "----------------------------------\n";

    S1.Redo();
    cout << "\nS1 After Redo: " << S1.Value << endl;

    S1.Redo();
    cout << "S1 After Redo: " << S1.Value << endl;

    S1.Redo();
    cout << "S1 After Redo: " << S1.Value << endl;

    S1.Undo();
    cout << "S1 After undo: " << S1.Value << endl;

    system("pause > 0");
}
