#include <iostream>
#include <algorithm>
using namespace std;
s
int main()
{truct Job
{
    int deadline;
    int profit;
};
    int size;
    cout << "Enter total job count";
    cin >> size;
    Job jobs[size];
    int max;
    cout << "Enter job details";
    for (int i = 0; i < size; i++)
    {
        cout << "enter job " << i + 1 << " deadline";
        cin >> jobs[i].deadline;
        cout << "enter job " << i + 1 << " profit";
        cin >> jobs[i].profit;
        if (i == 0)
        {
            max = jobs[i].deadline;
        }
        else
        {
            if (max < jobs[i].deadline)
            {
                max = jobs[i].deadline;
            }
        }
    }
    sort(jobs, jobs + size, [](const Job &a, Job &b)
         { return a.profit > b.profit; });

    int slots[max];
    Job selectedJobs[max];

    for (int i = 0; i < max; i++)
    {
        slots[i] = 0;
    }

    // int current_allocated = 0;
    int total_profit = 0;
    // int j = 0;
    for (int i = 0; i < size; i++)
    {
        // if ((max - current_allocated) >= jobs[i].deadline)
        // {
        //     selectedJobs[j++] = jobs[i];
        //     current_allocated += jobs[i].deadline;
        //     total_profit += jobs[i].profit;
        // }
        // if (current_allocated == max)
        // {
        //     break;
        // }
        int s = jobs[i].deadline;
        for (int k = s - 1; k >= 0; k--)
        {
            if (slots[k] == 0)
            {
                slots[k] = 1;
                total_profit += jobs[i].profit;
                selectedJobs[k] = jobs[i];
                break;
            }
        }
    }
    cout << "total profit" << total_profit << endl;
    cout << "selected jobs" << endl;
    for (int i = 0; i < max; i++)
    {
        cout << selectedJobs[i].profit << "(" << selectedJobs[i].deadline << ")" << endl;
    }

    return 0;
}