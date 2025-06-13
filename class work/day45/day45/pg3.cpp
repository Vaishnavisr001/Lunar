#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct PrintJob {
    string username;
    int pages;
};


void enqueueJob(queue<PrintJob>& jobs, const string& username, int pages) {
    while (pages > 10) {
        jobs.push({ username, 10 });
        pages -= 10;
    }
    if (pages > 0) {
        jobs.push({ username, pages });
    }
}


void processJobs(queue<PrintJob>& jobs) {
    while (!jobs.empty()) {
        PrintJob job = jobs.front();
        jobs.pop();
        cout << job.username << " " << job.pages << endl;
    }
}

int main() {
    queue<PrintJob> jobs;
    string username;
    int pages;

   
    while (cin >> username >> pages) {
        enqueueJob(jobs, username, pages);
    }

    processJobs(jobs);

    return 0;
}
