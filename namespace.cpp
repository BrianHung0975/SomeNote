#include <iostream>

/*
    Namespace -> provides a solution for preventing name conflicts in large projects. 
                 Each entity needs a unique name. 
                 A namespace allows for identically named entities as long as the namespaces are different.
*/
// It can allow us to use the same variables in a project.

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}


int main(){
    
    int x = 0;
    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';

    return 0;
}


int main(){
    using namespace first;
    std::cout << x;

    return 0;
}


int main(){
    using namespace first;
    std::cout << second::x;

    return 0;
}


int main(){
    using namespace std;// With this i don't need to type 'std' anymore
    string name = "BrianHung";
    cout << name;

    return 0;
}


int main(){
    using std::cout;
    using std::string;// It is safer to use because there are lots of entities of 'std'
    
    string name = "BrianHung";
    cout << name;

    return 0;
}