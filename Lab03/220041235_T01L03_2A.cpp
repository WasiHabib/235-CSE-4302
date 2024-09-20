#include <bits/stdc++.h>
using namespace std;
class Temperature
{
private:
    float temperature;
    float Increment_steps;
public:
    Temperature()
    {
        temperature=0;
        Increment_steps=0;
    }
    void setIncrementStep(float steps)
    {
        Increment_steps=steps;
    }
    void increment()
    {
        temperature+=Increment_steps;
    }
    float getTemperature()
    {
        return temperature;
    }
    void resetTemperature()
    {
        temperature=0;
    }
};
int main()
{
    Temperature t1;
    float steps=5.5;
    cout<<t1.getTemperature()<<endl;
    t1.setIncrementStep(steps);
    t1.increment();
    cout<<t1.getTemperature()<<endl;
    t1.resetTemperature();
    cout<<t1.getTemperature()<<endl;
    return 0;
}
