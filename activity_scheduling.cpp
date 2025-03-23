#include <iostream>
using namespace std;

struct Activity {
    int start;
    int end;
};

void sortActivities(Activity activities[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (activities[j].end > activities[j + 1].end) {
            
                Activity temp = activities[j];
                activities[j] = activities[j + 1];
                activities[j + 1] = temp;
            }++
        }
    }
}

int activitySelection(int start[], int end[], int n) {
    
    Activity activities[n];
    for (int i = 0; i < n; i++) {
        activities[i].start = start[i];
        activities[i].end = end[i];
    }

    sortActivities(activities, n);

    int ans = 0;
    int finish = -1;

   
    for (int i = 0; i < n; i++) {
        if (activities[i].start >= finish) {
            finish = activities[i].end;
            ans++;
        }
    }

    return ans;
}

int main() {
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 1, 5, 6, 7};
    int n = sizeof(start) / sizeof(start[0]);

    cout << "Max work can be performed: " << activitySelection(start, end, n) << endl;
    return 0;
}