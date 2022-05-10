// g++ -o main main.cpp -std=c++2a -Wall -Wextra -Werror

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

int main()
{
    std::vector<int> values = {1, 2, 3, 4, 5};

    std::vector<int>::iterator it = values.begin();
    for (; it != values.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    // std::unordered_map<std::string, int> map = {{"one", 1}, {"two", 2}, {"three", 3}};
    // std::unordered_map<std::string, int>::iterator it2 = map.begin();
    // for (; it2 != map.end(); ++it2)
    // {
    //     std::cout << it2->first << ": " << it2->second << std::endl;
    // }

    using ScoreMap = std::unordered_map<std::string, int>;
    ScoreMap map = {{"one", 1}, {"two", 2}, {"three", 3}};
    map["gay_yakov"] = 99;

    for (ScoreMap::const_iterator it = map.begin(); it != map.end(); ++it)
    {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    for (auto kv : map)
    {
        std::cout << kv.first << ": " << kv.second << std::endl;
    }

    for (auto [key, value] : map)
    {
        std::cout << key << ": " << value << std::endl;
    }

    // for(int i = 0; i < values.size(); i++)
    // {
    //     std::cout << values[i] << std::endl;
    // }

    // for(auto i : values)
    // {
    //     std::cout << i << std::endl;
    // }
}
