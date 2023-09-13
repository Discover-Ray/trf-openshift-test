#include<iostream>
#include<chrono>
#include<thread>

int main()
{
        int32_t n=1;
        auto interval=std::chrono::seconds(1);
        while(true)
        {
                std::cout<<"hello: "<<n++<<std::endl;
                std::this_thread::sleep_for(interval);
        }
        return 0;
}
