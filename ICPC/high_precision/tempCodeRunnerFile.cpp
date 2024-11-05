    if (cmp(A, B)) {
        auto DIFFERENCE = subtract(A, B);
        cout << a << " - " << b << " = ";
        for (int i = DIFFERENCE.size() - 1; i >= 0; i--) cout << DIFFERENCE[i];
        cout << endl;
    } else {
        auto DIFFERENCE = subtract(A, B);
        cout << a << " - " << b << " = -";
        for (int i = DIFFERENCE.size() - 1; i >= 0; i--) cout << DIFFERENCE[i];
        cout << endl;
    }