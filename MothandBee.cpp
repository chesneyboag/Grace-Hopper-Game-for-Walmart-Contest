#include <iostream>
#include <string>
using namespace std;

//using ASCII characters to do small animation/creative display in output
void displayBee();
void displayMoth();

//check for valid answers aka "yes" or "no"
string validation(string answer);

//function declarations
//introduce the main character/game objective/instructions
void introductionBee(); 
void introductionMoth(); 

//need a function for each fact
//1: debugging fact, question= "do I save the moth?"
void debuggingFact(string answerDebug);
void debuggingFactMoth(string answerDebug);

//2: navy fact, question = "do I keep listening/do I save the moth now?"
void navyFact(string answerNavy);
void navyFactMoth(string answerNavy);

//3: master's degree fact, question = "Can I outsmart her?"
void mastersFact(string answerMasters);
void mastersFactMoth(string answerMasters);

//4: prof @ vassar fact, question = "time to carry out the plan?"
void profFact(string answerProf);
void profFactMoth(string answerProf);

//5: clock fact, no question should point right to ending
void clockFact(string answerClock);
void clockFactMoth(string answerClock);

//ending- moth goes to museum and bee follows, should happen no matter what outcome
void ending(string answerEnding);
void endingMoth(string answerEnding);

//something to loop thru to say goodbye or ask the user to play again, can embed debugging fact here to continue loop
void goodbyeMsg();
void goodbyeMsgMoth();

//__________________________________________________________
//function implementations
void displayBee(){ 
    cout<<"          .-.            \n"
"    .'   '.     /'       `.        \n"
"    '.     '. ,'          |        \n"
"  o   '.o   ,'        _.-'         \n"
"  |.--./'. /.:. :._:.'             \n"
" .'    '._-': ': ': ': ':          \n"
":(#) (#) :  ': ': ': ': ':>--       \n"
" ' ____ .'_.:' :' :' :' :'         \n"
"  '|__|'/ | | :' :' :'             \n"
"        |  | |                     \n"
"        '  ' '                     \n";

}
void displayMoth(){
    cout << "                       \n"
"    .      .-~                        \n"
"   / `-'`.'    `- :                    \n"
"   |    /          `._                  \n"
"   |   |   .-.        {                \n"
"   `   |   `-'         `.                   \n"
"     ` |                /              \n"
"~-.`. `|            .-~_                   \n"
"    .`-.`       .-~      |             \n"
"     `-'/~~ -.~          /             \n"
"   .-~/|`-._ /~~-.~ -- ~               \n"
"  /  |  |    ~- . _|                   \n";

}

string validation(string answer){
    while(answer != "yes" && answer != "no") {
        cout<< "Error, please re-enter your answer as 'yes' or 'no'"<<endl;
        getline(cin, answer);
    }
    return answer; 
} 

void introductionBee() {
    displayBee();
    cout << "Welcome! My name is Bee. I am so glad you are here! My friend, Moth, is stuck in this lady's computer!" <<endl;
    cout << "Moth is my best friend, but I can't save him by myself. So, that's where you come in!"<<endl;
    cout <<"Throughout our rescue mission, I will need your help calling the shots for when/how we should save Moth."<<endl;
    cout <<"To make our rescue mission run as smooth as possible: Please input all your answers exactly as 'yes' or 'no' to each question."<<endl;

    cout<<endl;
    
    cout << "Time to get started: Do we save Moth?"<<endl;
    //getline(cin, answerDebug);
    //debuggingFact(answerDebug);
}

void introductionMoth() {
    displayMoth();
    cout << "Welcome! My name is Moth. I am so glad you are here! You have to help me! I am stuck inside a computer!" <<endl;
    cout << "My friend, Bee, is outside trying to save me, but I know I can't do this alone!"<<endl;
    cout <<"Throughout our escape plan, I will need your help calling the shots for when/how we should make our moves."<<endl;
    cout <<"To make our escape plan run as smooth as possible: Please input all your answers exactly as 'yes' or 'no' to each question."<<endl;

    cout<<endl;
    
    cout << "Time to get started: Will you help me escape?"<<endl;
    
}

void debuggingFact(string answerDebug) {
   string result = validation(answerDebug);
   
    if(result=="yes"){
        cout << "YES PATH: Thank you for agreeing to help save my friend. As I am observing, I can hear the humans' conversation."<<endl;
        cout << "The lady is Grace Hopper, we're at Harvard right now, and apparently she named her computer Mark II. She seems frustrated: she keeps saying she needs to DEBUG her computer! As a bug, I do NOT like that one bit. That's my friend in there! Apparently no one uses that term 'debugging' but it seems to be catching on now."<<endl;
        cout << endl;
        cout << "Do I save the moth now?"<<endl;

    } else {
        cout << "NO PATH: You're right to be hesistant. This is a dangerous mission for just a wee little bee like me. I am going to perch myself in the corner and listen to the conversation of the humans"<<endl;
        cout << "The lady is Grace Hopper, we're at Harvard right now, and apparently she named her computer Mark II. She seems frustrated: she keeps saying she needs to DEBUG her computer! As a bug, I do NOT like that one bit. That's my friend in there! Apparently no one uses that term 'debugging' but it seems to be catching on now."<<endl;
        cout <<endl;
        cout << "Do I save the moth now?"<<endl;
    } 
    
}

void debuggingFactMoth(string answerDebug) {
   string result = validation(answerDebug);
   
    if(result=="yes"){
        cout << "YES PATH: Thank you for agreeing to help me escape. As I am observing, I can hear the humans' conversation."<<endl;
        cout << "The lady is Grace Hopper, we're at Harvard right now, and apparently she named her computer Mark II. She seems frustrated: she keeps saying she needs to DEBUG her computer! As a bug, I do NOT like that one bit. Apparently no one uses that term 'debugging' but it seems to be catching on now."<<endl;
        cout << endl;
        cout << "Is it time to escape now?"<<endl;

    } else {
        cout << "NO PATH: You're right to be hesistant. This is a dangerous mission for just a wee little Moth like me. I am going to listen to the conversation of the humans."<<endl;
        cout << "The lady is Grace Hopper, we're at Harvard right now, and apparently she named her computer Mark II. She seems frustrated: she keeps saying she needs to DEBUG her computer! As a bug, I do NOT like that one bit.  Apparently no one uses that term 'debugging' but it seems to be catching on now."<<endl;
        cout <<endl;
        cout << "Is it time to escape now?"<<endl;
    } 
    
}

void navyFact(string answerNavy){
    string result = validation(answerNavy);

    if(result=="yes"){
        cout <<"YES PATH: Alright, let's get our plan into action. Right now, Grace Hopper seems to be having dinner next to the computer so I need to stealthily make my way around her."<<endl;
        cout <<"Whoa! I didn't know Grace Hopper is actually ADMIRAL HOPPER of the NAVY. The NAVY! This task is going to be tricky, as a Navy Admiral I am definitely more intimidated about sneaking around her."<<endl;
        cout <<endl;
        cout<< "Should I be the first bee to take on the Navy in my rescue mission?"<<endl;
    } else{
        cout << "NO PATH: Hmm... I am not so sure I agree. I really want to save my friend. But I understand the need to be cautious here. Stealth and caution are key."<<endl;
        cout <<"Whoa! I didn't know Grace Hopper is actually ADMIRAL HOPPER of the NAVY. The NAVY! This task is going to be tricky, as a Navy Admiral I am definitely more intimidated about sneaking around her."<<endl;
        cout<<endl;
        cout <<"Should I be the first bee to take on the Navy in my rescue mission?"<<endl;
    }
    
}

void navyFactMoth(string answerNavy){
    string result = validation(answerNavy);

    if(result=="yes"){
        cout <<"YES PATH: Alright, let's get our plan into action. Right now, Grace Hopper seems to be having dinner next to the computer so I need to stealthily make my way around her."<<endl;
        cout <<"Whoa! I didn't know Grace Hopper is actually ADMIRAL HOPPER of the NAVY. The NAVY! This task is going to be tricky, as a Navy Admiral I am definitely more intimidated about sneaking around her."<<endl;
        cout <<endl;
        cout<< "Should I be the first Moth to take on the Navy in my escape plan?"<<endl;
    } else{
        cout << "NO PATH: Hmm... I am not so sure I agree. I really want to save my friend. But I understand the need to be cautious here. Stealth and caution are key."<<endl;
        cout <<"Whoa! I didn't know Grace Hopper is actually ADMIRAL HOPPER of the NAVY. The NAVY! This task is going to be tricky, as a Navy Admiral I am definitely more intimidated about sneaking around her."<<endl;
        cout<<endl;
        cout <<"Should I be the first Moth to take on the Navy in my escape plan?"<<endl;
    }
    
}

void mastersFact(string answerMasters){
    string result = validation(answerMasters);

    if(result=="yes"){
        cout <<"YES PATH: Wow, I really am about to be the first bee to take on the Navy. I am about to make HISTORY! Now it is my time to make my way closer to the computer."<<endl;
        cout << "Hopper almost caught me! She heard me buzzing around and swatted me. She grumbled about how she hates bees because of all the bees at Yale University. Hopper got her PhD from Yale in Mathematics."<<endl;
        cout<<endl;
        cout<<"Can I outsmart Hopper now that I know she has a PhD?"<<endl;
    }else{
        cout <<"NO PATH: You have to be BRAVE! I know she is an admiral, but we need to save my friend and take the brave route! I am going to slowly make my way towards the computer."<<endl;
        cout << "Hopper almost caught me! She heard me buzzing around and swatted me. She grumbled about how she hates bees because of all the bees at Yale University. Hopper got her PhD from Yale in Mathematics."<<endl;
        cout<<endl;
        cout<<"Can I outsmart Hopper now that I know she has a PhD?"<<endl;
    }
}

void mastersFactMoth(string answerMasters){
    string result = validation(answerMasters);

    if(result=="yes"){
        cout <<"YES PATH: Wow, I really am about to be the first Moth to take on the Navy. I am about to make HISTORY! Now it is my time to make my way closer towards an exit."<<endl;
        cout << "Hopper almost caught me! She heard me fluttering around and swatted me. She grumbled about how she hates bugs because of all the bugs at Yale University. Hopper got her PhD from Yale in Mathematics."<<endl;
        cout<<endl;
        cout<<"Can I outsmart Hopper now that I know she has a PhD?"<<endl;
    }else{
        cout <<"NO PATH: You have to be BRAVE! I know she is an admiral, but we need to save my friend and take the brave route! I am going to slowly make my way towards the computer."<<endl;
        cout << "Hopper almost caught me! She heard me fluttering around and swatted me. She grumbled about how she hates bugs because of all the bugs at Yale University. Hopper got her PhD from Yale in Mathematics."<<endl;
        cout<<endl;
        cout<<"Can I outsmart Hopper now that I know she has a PhD?"<<endl;
    }
}

void profFact(string answerProf){
    string result = validation(answerProf);

    if(result=="yes"){
        cout <<"YES PATH: I am the smartest, stealthiest bee to ever exist! Onwards with saving Moth from the computer!"<<endl;
        cout <<"I am flying down! I made sure that I am buzing very quitely as to avoid Hopper. I have buzzed down to her log books to see if there are any notes about the ways I can get into the computer. Instead of finding notes of the computer, I see her stories of her time at Vassar. Not only is she in the Navy, has a PhD, but also she is a professor! Now I'm nervous, what if she is just waiting for me to make my move? Teachers always know when something tricky is going on!"<<endl;
        cout<<endl;
        cout<<"Do I continue with the mission, knowing all the facts now?"<<endl;
    }else{
        cout <<"NO PATH: Ah yes, being swatted at definitely shook our nerves. Instead of leaping toward her computer, I am going to read her log books to see if there are any notes about the ways I can get into the computer."<<endl; 
        cout<< "Instead of finding notes of the computer, I see her stories of her time at Vassar. Not only is she in the Navy, has a PhD, but also she is a professor! Now I'm nervous, what if she is just waiting for me to make my move? Teachers always know when something tricky is going on!"<<endl;
        cout<<endl;
        cout<<"Do I continue with the mission, knowing all the facts now?"<<endl;
    }

   // clockFact();
}

void profFactMoth(string answerProf){
    string result = validation(answerProf);

    if(result=="yes"){
        cout <<"YES PATH: I am the smartest, stealthiest Moth to ever exist! (Well besides the fact I got caught inside the computer in the first place...) Onwards with escaping!"<<endl;
        cout <<"I have fluttered over a small opening in the computer and I'm able to see her log books. I wonder if there's a map so I can see how to get out." <<endl;
        cout << "Instead of finding notes of the computer, I see her stories of her time at Vassar. Not only is she in the Navy, has a PhD, but also she is a professor! Now I'm nervous, what if she is just waiting for me to make my move? Teachers always know when something tricky is going on!"<<endl;
        cout<<endl;
        cout<<"Do I continue with the escape, knowing all the facts now?"<<endl;
    }else{
        cout <<"NO PATH: Ah yes, being swatted at definitely shook our nerves. I am going to make my way towards a small crack in the computer. I can see her log books: I wonder if there's a map of the computer there to help me escape."<<endl; 
        cout<< "Instead of finding notes of the computer, I see her stories of her time at Vassar. Not only is she in the Navy, has a PhD, but also she is a professor! Now I'm nervous, what if she is just waiting for me to make my move? Teachers always know when something tricky is going on!"<<endl;
        cout<<endl;
        cout<<"Do I continue with the escape, knowing all the facts now?"<<endl;
    }

    //clockFactMoth();
}

void clockFact(string answerClock){
    string result = validation(answerClock);
    if(result=="yes"||result=="no"){
    cout << "Honestly, I am so nervous. Grace Hopper has accomplished so much. She was talking about how she used to take apart clocks as a child, so I am going to trust her to be proficient with technology enough to get my friend free for herself."<<endl;
    cout<<"I can't believe this! She freed my friend! But, he's trapped in her logbook. Wait! Moth! Where are you being taken??"<<endl;
    cout << "I have to follow the logbook, it's on the move towards DC."<<endl;
    cout << endl;
    cout <<"Ah, we have landed. Moth and I are now living comfortably in the safety of the Smithsonian Museum. If you ever want to see the Moth caught in Hopper's computer, and Moth's handsome friend The Bee, come to the Smithsonian!"<<endl;
    cout<< "Thank you for participating, please come visit!"<<endl;
    }
}

void clockFactMoth(string answerClock){
    string result = validation(answerClock);
    if(result=="yes"||result=="no"){
    cout << "Honestly, I am so nervous. Grace Hopper has accomplished so much. She was talking about how she used to take apart clocks as a child, so I am going to trust her to be proficient with technology enough to safely get me out of here."<<endl;
    cout<<"I can't believe this! I'm free! But, I've been squished in the pages of her log book."<<endl;
    cout << "It seems like we're on the move! I hope my friend Bee follows us wherever we end up."<<endl;
    cout << endl;
    cout <<"Ah, we have landed. Bee and I are now living comfortably in the safety of the Smithsonian Museum. If you ever want to see the me, the famous Moth caught in Hopper's computer, come to the Smithsonian!"<<endl;
    cout<< "Thank you for participating, please come visit!"<<endl;
    }
}


void ending(string answerEnding){
    string result = validation(answerEnding);
    if(result=="no")
        goodbyeMsg(); 
    else 
        introductionBee();    
}

void endingMoth(string answerEnding){
    string result = validation(answerEnding);
    if(result=="no")
        goodbyeMsgMoth(); 
    else 
        introductionMoth();    
}

void goodbyeMsg(){
    cout << "Your efforts and wisdom in my mission will not go unnoticed! Thank you for playing and learning more about Grace Hopper."<<endl;
}

void goodbyeMsgMoth(){
    cout << "Your efforts and wisdom in my mission will not go unnoticed! Thank you for playing and learning more about Grace Hopper."<<endl;
}

int main () {
    string narratorChoice;
    string answerDebug;
    string answerNavy;
    string answerMasters;
    string answerProf;
    string answerClock;
    string answerEnding;
    string resultEnding;
    

while(answerEnding!="no"){

    cout<<"Welcome to Chesney's Grace Hopper Game. Please choose your mission: escape or rescue by typing 'escape' or 'rescue':"<<endl;
    cin >> narratorChoice;

    if (narratorChoice=="rescue"){
    
    //while(answerEnding!="no"){
        introductionBee();

        cin >> answerDebug;
        debuggingFact(answerDebug);

        cin >> answerNavy;
        navyFact(answerNavy);

        cin >> answerMasters;
        mastersFact(answerMasters);

        cin >> answerProf;
        profFact(answerProf); 

        cin >> answerClock;
        clockFact(answerClock);

        cout << "Do you want to play again?"<<endl;
        cin >> answerEnding;
        ending(answerEnding);
    }   

//else narratorChoice=escape
else{
     //while(answerEnding!="no"){
        introductionMoth();

        cin >> answerDebug;
        debuggingFactMoth(answerDebug);

        cin >> answerNavy;
        navyFactMoth(answerNavy);

        cin >> answerMasters;
        mastersFactMoth(answerMasters);

        cin >> answerProf;
        profFactMoth(answerProf); 

        cin >> answerClock;
        clockFactMoth(answerClock);

        cout << "Do you want to play again?"<<endl;
        cin >> answerEnding;
        endingMoth(answerEnding);
    }   
}

    return 0;

}