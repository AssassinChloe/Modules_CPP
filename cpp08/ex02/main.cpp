#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout << "MUTANT STACK" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << "new size " << mstack.size() << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "MutantStack<int> content : ";
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
    
    MutantStack<int>::reverse_iterator rlit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rlite = mstack.rend();
    ++rlit;
    --rlit;
    std::cout << "MutantStack<int> content reverse: ";
    while (rlit != rlite)
    {
        std::cout << *rlit << " ";
        ++rlit;
    }
    std::cout << std::endl << std::endl;

    std::cout << "MUTANT STACK COPY" << std::endl;
    MutantStack<int> s(mstack);
    it = s.begin();
    ite = s.end();
    std::cout << "Copy of MutantStack<int> content : ";
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl << std::endl;

    std::cout << "LIST " << std::endl;
    std::list<int> testlist;
    testlist.push_back(5);
    testlist.push_back(17);
    std::cout << "top " << testlist.back() << std::endl;
    testlist.pop_back();
    std::cout << "size " << testlist.size() << std::endl;
    testlist.push_back(3);
    testlist.push_back(5);
    testlist.push_back(737);
    testlist.push_back(0);
    std::cout << "new size " << testlist.size() << std::endl;
    std::list<int>::iterator tlit = testlist.begin();
    std::list<int>::iterator tlite = testlist.end();
    ++tlit;
    --tlit;
    std::cout << "std::list<int> content : ";
    while (tlit != tlite)
    {
        std::cout << *tlit << " ";
        ++tlit;
    }
    std::cout << std::endl;

    std::list<int>::reverse_iterator rtlit = testlist.rbegin();
    std::list<int>::reverse_iterator rtlite = testlist.rend();
    ++rtlit;
    --rtlit;
    std::cout << "std::list<int> content reverse: ";
    while (rtlit != rtlite)
    {
        std::cout << *rtlit << " ";
        ++rtlit;
    }
    std::cout << std::endl;
    return (0);
}