nt n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout << ' ';
            space++;
        }

        int j = 1;
        int k = i;
        while (j <= i)
        {
            cout << k;
            j++;
            k++;
        }

        j = 1;
        k = 2 * (i - 1);
        while (j <= i - 1)
        {
            cout << k;
            k--;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;