# include <iostream>
# include <list>
# include <vector>
# include <set>

using namespace std;

struct Student {
    int index, l, r, seconds;

    Student(int index, int l, int r) : index(index), l(l), r(r) {
        seconds = 0;
    }

    Student() {
        index = l = r = seconds = 0;
    }

    void operator = (const Student &rhs) {
        this->index = rhs.index;
        this->l = rhs.l;
        this->r = rhs.r;
        this->seconds = rhs.seconds;
    }
};

struct StudentCompare {
    bool operator () (const Student &lhs, const Student &rhs) const {
        return lhs.index < rhs.index;
    }
};

int main() {

    int t, n, l, r, second;
    list<Student> students;
    set<Student, StudentCompare> cache;
    list<Student> queue;
    vector<Student> done(201);

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;

        students.clear();
        queue.clear();
        for (int j = 0; j < n; ++j) { // Populates students
            cin >> l >> r;
            students.push_back(Student(j, l, r));
        }

        second = 1;
        while (done.size() < n) {
            for (auto it = students.begin(); it != students.end();) { // Select students to cache
                auto curIt = it++;
                if (curIt->l == second) {
                    cache.insert(*curIt);
                    students.erase(curIt);
                }
            }

            for (auto it = cache.begin(); it != cache.end();) { // Take students from cache to queue
                auto curIt = it++;
                queue.push_back(*curIt);
                cache.erase(curIt);
            }

            // First student gets his tea
            auto first = queue.begin();
            first->seconds += 1;
            done[first->index] = *first;
            queue.erase(first);

            for (auto it = queue.begin(); it != queue.end();) { // Refreshs the queue
                auto curIt = it++;
                curIt->seconds += 1;

                if (curIt->r == second) {
                    curIt->seconds = 0;
                    done[curIt->index] = *curIt;
                    queue.erase(curIt);
                }
            }
            ++second;

            for (int j = 0; j < n; ++j)
                cout << done[j].seconds << ' ';
            cout << '\n';
        }
    }

    return 0;
}
