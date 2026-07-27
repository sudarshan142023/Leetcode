int leastInterval(char* tasks, int tasksSize, int n) {

 

    int count[26] = {0};

    for (int i = 0; i < tasksSize; i++)
        count[tasks[i] - 'A']++;

    // Find maximum frequency
    int maxFreq = 0;


    for (int i = 0; i <26; i++)
    {
        if (count[i] > maxFreq)
        {
            maxFreq = count[i];
        }
    }

    int countMax = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == maxFreq)
            countMax++;
    }

    int interval = (maxFreq-1) * (n+1) + countMax;

    return (interval > tasksSize) ? interval : tasksSize;
    
}