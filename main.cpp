#include <iostream>
#include <thread>
#include <unistd.h>
#include <mutex>

using namespace std;

mutex cout_mutex;

void foo(int a) {
    sleep(5);
    lock_guard<mutex> lock(cout_mutex);  
    cout << a << endl;
}
int main() {
 thread threads[20];
 for (int i = 0; i < 20; i++){
 threads[i] = thread(foo, i);
 }
 for (int i = 0; i < 20; i++){
 threads[i].join();
 }
}
