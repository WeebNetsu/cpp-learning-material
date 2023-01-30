#include <iostream>
#include <memory> // grants access to smart pointers

class Person
{
public:
    Person()
    {
        std::cout << "Person was created!" << std::endl;
    };

    ~Person()
    {
        std::cout << "Person was destroyed!" << std::endl;
    };

    void sayHello(){
        std::cout << "Hello there!" << std::endl;
    };
};

int main(int argc, char const *argv[])
{
    /* 
        * Smart Pointers:
            Pointers you don't have to delete yourself, they will delete themselves automatically (will call 'new' and 'delete' for you)
            They are wrappers for normal pointers
        
        * Unique Pointer:
            Scoped pointer, so when the pointer goes out of scope, it gets deleted
            ! You cannot copy a unique pointer! (that's why it's called unique)
        
        * Shared Pointer:
            Smart pointer you can have multiple of
    */

    //* Unique Pointer
    { // create a make-shift scope
        // std::unique_ptr<Person> person(new Person());
        // the above is one way to create a unique pointer, but the BELOW is recommended
        std::unique_ptr<Person> person = std::make_unique<Person>();
        // the above is recommended for exception safety
        // so if an exception occures, then you won't have a pointer without a reference (aka. memory leak)
        person->sayHello(); // you can call it's methods like you'd normally do
        // pointer will get deleted automatically at the end of this scope
        // NOTE: You cannot copy a unique pointer!!
        // std::unique_ptr<Person> human = person; // this does not work!
    }    

    //! You do NOT want to create a shared pointer like below
    // std::shared_ptr<Person> sharedPerson(new Person);
    // create a shared pointer like this:
    std::shared_ptr<Person> sharedPerson = std::make_shared<Person>();
    std::shared_ptr<Person> shared2 = sharedPerson; // perfectly fine copyting a pointer
    // the above will get deleted once all the references are removed, eg:
    /* 
        {
            std::shared_ptr<Person> sharedPerson = std::make_shared<Person>();
            {
                std::shared_ptr<Person> shared2 = sharedPerson;
            } // the first reference will be deleted (shared2)
        } // the last reference will be deleted (sharedPerson) -> deletes the entire pointer then
    */

    return 0;
}