#include <iostream>
using namespace std;

int main() {
    cout << "Select your mood from the following options:\n";
    cout << "1 - Happy 😊\n";
    cout << "2 - Sad 😢\n";
    cout << "3 - Excited 🤩\n";
    cout << "4 - Angry 😠\n";
    cout << "5 - Relaxed 😌\n";

    int choice;
    cout << "Enter the number corresponding to your mood: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "😊 That's great! Keep smiling and spread the joy!\n";
            break;
        case 2:
            cout << "😢 It's okay to feel sad sometimes. Take a deep breath and remember, this too shall pass.\n";
            break;
        case 3:
            cout << "🤩 Excitement is contagious! Share your energy with others!\n";
            break;
        case 4:
            cout << "😠 Anger can be powerful. Channel it into something productive!\n";
            break;
        case 5:
            cout << "😌 Relax and take it easy. You deserve some downtime!\n";
            break;
        default:
            cout << "❗ Invalid choice! Please select a number between 1 and 5.\n";
            break;
    }

    cout << "🙏 Thank you for sharing your mood with us!\n";

    return 0;
}