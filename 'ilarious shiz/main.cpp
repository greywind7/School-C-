//Good Luck figuring this shit out XD
#include <iostream>

using namespace std;

int menu()
{
    int x;
    cout<<"Select\n";
    cout<<"1.A little about me\n2.Books I like\n3.Movies I like\n4.Music I like\n5.I love Tv series xD\n6.Caution\n";
    cin>>x;
    return x;
}

void abtME()
{
    cout<<"Kinda Childish, maybe mature,bit lazy, introvert, hangs out rarely,leo, INFJ.\n Obviously Krazzy.";
}
void abtBooks()
{
    cout<<"Hunger games and Da Vinci Code are love.\nLike intense plots/ morally questioning stuff.";
}
void abtMovies()
{
    cout<<"Mostly Hate romances\nJohn Wick and Pirates of Caribean are love(RIP)\n Dont like horrors\n";
}
void abtMuzic()
{
    cout<<"I love soft muzik(like instrumental)\n Aurora is fav artist\n LP is fav band";
}
void abtTV()
{
    cout<<"Breaking bad,Game of thrones,Black Sails are love!";
}
void CAUTION()
{
    cout<<"Grammar Nazi(I dont correct though), sometimes mean, rude, overly sensitive, bitch.\n";
    cout<<"However means no disrespect and tries to be polite :)";
}

int main()
{
    char ch='Y';
    cout<<">>ABOUT RIKI BOI\n<<";
    cout << "Hello Friend! I know im Kuh-Rayzzee to do shiz like this but duh!\n" << endl;
    while(ch=='Y' || ch=='y')
    {
        switch(menu())
        {
            case 1:abtME();break;
            case 2:abtBooks();break;
            case 3:abtMovies();break;
            case 4:abtMuzic();break;
            case 5:abtTV();break;
            case 6:CAUTION();break;
            default:cout<<"Select valid option XD";break;
        }
        cout<<"\nWanna know something else?";
        cin>>ch;
    }

    return 0;
}
