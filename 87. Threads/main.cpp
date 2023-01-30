// NOTE: Compile with -> g++ -lpthread main.cpp -o output && ./output
#include <iostream>
#include <thread> // to enable threading

bool endLoop = false;

void doSomething() {
    using namespace std::literals::chrono_literals; // to use sleep_for

    std::cout << "Started thread with ID: " << std::this_thread::get_id() << std::endl;
    
    while(!endLoop){
        std::cout << "Hello World!" << std::endl;
        // when a thread continuously runs in a loop like this, it can result in a 100% cpu usage
        // for that thread, which isn't very good, we can use the below function to make the thread
        // wait for a bit before continuing (this will reduce cpu load in this case)
        std::this_thread::sleep_for(1s); // sleep for 1 second before continuing
    }
}

int main(int argc, char const *argv[])
{
    // create a thread
    std::thread worker(doSomething);

    std::cin.get(); // the program won't continue to the next line of code, until we press enter
    // doSomething will still run while we wait for cin.get to get input, this is because the thread has started
    // and that thread will keep running in the background, since it is no longer part of this main thread, until
    // we say .join, which will make the worker thread part of the main thread again.
    endLoop = true; // will make endLoop true and allow doSomething to finish

    worker.join(); // wait for the worker thread to finish executing before continuing with the main program

    std::cout << "Threads finished" << std::endl;

    return 0;
}