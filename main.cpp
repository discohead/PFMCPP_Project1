#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example)
 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
arm.extend();
arm.flex();
arm.rotateCounterClockwise(); //demonstrates CamelCase

/*
 1)
 Noun: cat
 action 1: the cat meows
 action 2: the cat scratches
 action 3: the cat purrs
 */
cat.meow();
cat.scratch();
cat.purr();

/*
 2)
 Noun: dog
 action 1: the dog barks
 action 2: the dog jumps
 action 3: the dog licks
 */

 dog.bark();
 dog.jump();
 dog.lick();

/*
 3)
 Noun: car
 action 1: the car starts
 action 2: the car drives
 action 3: the car stops
 */

car.start();
car.drive();
car.stop();

/*
 4)
 Noun: synthesizer
 action 1: the synthesizer bleeps
 action 2: the synthesizer bloops
 action 3: the synthesizer mutes
 */

 synthesizer.bleep();
 synthesizer.bloop();
 synthesizer.mute();

/*
 5)
 Noun: sequencer
 action 1: the sequencer advances
 action 2: the sequencer reverses
 action 3: the sequencer stops
 */
sequencer.advance();
sequencer.reverse();
sequencer.stop();

/*
 6)
 Noun: person
 action 1: the person speaks
 action 2: the person sleeps
 action 3: the person eats
 */

 person.speak();
 person.sleep();
 person.eat();

/*
 7)
 Noun: hand
 action 1: the hand grasps
 action 2: the hand releases
 action 3: the hand waves
 */
hand.grasp();
hand.release();
hand.wave();

/*
 8)
 Noun: robot
 action 1: the robot spins
 action 2: the robot beeps
 action 3: the robot shuts down
 */
 robot.spin();
 robot.beep();
 robot.shutDown();

/*
 9)
 Noun: foo
 action 1: the foo bars
 action 2: the foo bazs
 action 3: the foo quxs
 */
foo.bar();
foo.baz();
foo.qux();

/*
 10)
 Noun: programmer
 action 1: the programmer drinks coffee
 action 2: the programmer codes
 action 3: the programmer goes to meeting
 */

programmer.drinkCoffee();
programmer.code();
programmer.goToMeeting();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
