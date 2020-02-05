/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};


/*
 1)
 */
struct Person
{
    char gender;
    float height;
    float weight;
    
    bool isSleeping()
    {
        return{};
    }

};
/*
 2)
 */
struct Zombie
{
    int numberOfLimbs;
    int daysDead;
    float unrottenFleshPercentage;
    
    struct Spitter
    {
        void throwSomeAcid(Person target);
    };
    
    void eatFace (Person victim);

};
/*
 3)
 */
struct Animal
{
    int limbs;
    int weight;
    int lenght;
    char sex;

    struct mammal
    {
        bool fur;
        void roars();
        bool isPet()
        {
            return{};
        }

    };
};
/*
 4)
 */
struct SoccerTeam
{   
    char name[20] = "default name";
    int yearsInTeam;

    struct Player
    {
        int position;
        float height;
        float age;
        
        int goalsPerSeason(Player name);
    };
    struct Staff
    {
        char* department;
        char* jobPosition;
        
    };
    
    int numberOfPlayersInjured()
    {
        return{};
    }
   
    int getSalary()
    {
        return{};
    }
    void setName(char name[20]);
};
/*
 5)
 */
struct Instrument
{
    int octaveRange;
    char musicalRegister[10] = "Register";
    bool hasStrings()
    {
        return{};
    }
    
    void setRegister(char musicalRegister[10]);
};
/*
 6)
 */
struct Plane
{
    double maxSpeed;
    bool supersonic;
    int crew;

    double getAltitude()
    {
        return{};
    }
    double getSpeed()
    {
        return{};
    }
};
/*
 7)
 */
struct Computer
{
    char* cpuVendor;
    int ram;
    int hardDrive;
    char* graphicsCardVendor;

    bool isRunning()
    {
        return{};
    }
    bool isServer()
    {
        return{};
    }
};
/*
 8)
 */
struct Dish
{
    char* origin;
    bool spicy;
    bool cold;

    void getRecipie(char* ingredients, char* kitchenWare);
};
/*
 9)
 */
struct Hunter
{
    int ammo;
    char* name;
    char* weapon;
    char* gender;

    void aim(Animal prey);
    bool lostAnimalTrack(Animal prey)
    {   
        return{};
    }
};
/*
 10)
 */
struct Worker
{
    float hourlyPay;
    bool whiteCoat;
    bool dayShift;
    char* name;
    int age;
    char* field;

    double getSalary(double hoursWorked, double overtime)
    {
        return{};
    }
};
#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
