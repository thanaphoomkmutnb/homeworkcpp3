#include <iostream>

using namespace std;

int main() {
    float first, second, third, mid_term, Final, quizz_total, total;
    cout << "==========QUIZZES============\n";
    cout << "Enter first quizz (10): ";
    cin >> first;
    cout << "Enter second quizz (10): ";
    cin >> second;
    cout << "Enter third quizz (10): ";
    cin >> third;
    cout << "==========MID-TERM===========\n";
    cout << "Enter mid-term (40): ";
    cin >> mid_term;
    cout << "============FINAL============\n";
    cout << "Enter final (50): ";
    cin >> Final;
    quizz_total = (first + second + third)/3;
    cout << "Total: " << quizz_total << endl;
    cout << "Mid term: " << mid_term << endl;
    cout << "Final: " << Final << endl;
    total = quizz_total + mid_term + Final;
    cout << "Total: " << total << endl;
    cout << "Your score " << (total >= 50 ? "IsPASS" : "IsFaild") << endl;
    system("pause");
    return 0;
}