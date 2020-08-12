/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
Thing 1) Country
5 properties:
    1) size of population
    2) land area in square miles
    3) dollar amount of GDP 
    4) size of military (in people)
    5) number of nuclear warheads
3 things it can do:
    1) declare war
    2) hold elections
    3) export products
 */

/*
Thing 2) Blockbuster
5 properties:
    1) number of DVDs
    2) number of Videogames
    3) number of employees
    4) number of microwave popcorn packets 
    5) number of types of candy
3 things it can do:
    1) rent out movies/games
    2) accept returns
    3) sign up a new customer
 */

/*
Thing 3) grocery store
5 properties:
    1) number of registered upc
    2) monthly profit
    3) amount of cash in store
    4) current inventory of cans of black beans
    5) number of transactions per day
3 things it can do:
    1) order more produce
    2) declare that something's on sale
    3) hire more employees
 */

/*
Thing 4) zoo
5 properties:
    1) number of penguins
    2) number of annual passholders
    3) revenue of concession sales
    4) number of peacocks
    5) number of gorillas
3 things it can do:
    1) feed tigers
    2) close reptile house
    3) open petting area
 */

/*
Thing 5) crew
5 properties:
    1) number of medical dept
    2) number of navigation dept
    3) number of weapons dept
    4) number of engine/maintence dept
    5) number of communications dept
3 things it can do:
    1) reassign dept members
    2) evacuate ship
    3) take roll call
 */

/*
Thing 6) weapon system
5 properties:
    1) Total number of torpedos
    2) number of Tomahawk class torpedoes
    3) number of Harpoon class torpedoes
    4) number of launch tubes
    5) number of mines
3 things it can do:
    1) launch Tomahawk missile
    2) launch Harpoon missile
    3) deploy mine
 */

/*
Thing 7) propulsion system
5 properties:
    1) top speed
    2) width of propeller
    3) maximum angle of descent
    4) maximum angle of ascent
    5) decibels of current speed
3 things it can do:
    1) rise to periscope depth
    2) emergency submerge
    3) full speed ahead
 */

/*
Thing 8) power system
5 properties:
    1) number of backup batteries
    2) current reactor temperature
    3) current megawatts produced
    4) water pressure in kPa
    5) maximum megawatts possible
3 things it can do:
    1) shutdown reactor
    2) release water pressure
    3) discharge battery bank
 */

/*
Thing 9) sonar system
5 properties:
    1) range in km
    2) ping per minute
    3) output power
    4) direction of beamforming (angle)
    5) width of beam formed
3 things it can do:
    1) sweep beam
    2) deploy array
    3) ping
 */

/*
Thing 10) Submarine
5 properties:  
    1) crew
    2) weapon system
    3) propulsion system
    4) power system
    5) radar system
3 things it can do:
    1) submerge
    2) fire torpedo
    3) go into silent mode
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
