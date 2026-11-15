#include <iostream>
#include <thread>
#include <string>
#include <mutex>

std::mutex mtx;

void countVowels(const std::string& str, int& vowel_count, int thread_id) 
{
    vowel_count = 0;
    std::string vowels = "aeiouAEIOU";
    
    for (char c : str) 
    {
        if (vowels.find(c) != std::string::npos)
            vowel_count++;
    }
    
    mtx.lock();

    std::cout << "Thread processing string: \'" << str <<  "\' - Vowels: " << vowel_count << std::endl;

    mtx.unlock();
}

int main() 
{
    const int NUM_THREADS = 3;

    std::string strings[NUM_THREADS] = {"Example String", "Thread Example", "Hello World"};
    std::vector<int> vowel_counts(NUM_THREADS, 0);
    std::vector<std::thread> threads;
    
    for (int i = 0; i < NUM_THREADS; ++i)
        threads.push_back(std::thread(countVowels, strings[i], std::ref(vowel_counts[i]), i + 1));
    
    for (std::thread& th : threads) 
        th.join();
    
    int total_vowels = 0;

    for (int count : vowel_counts) 
        total_vowels += count;
    
    return 0;
}