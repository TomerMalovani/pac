#include "Menu.h"
#include "Game.h"

void Menu::printMainMenu()const
{
    cout << "********************************\n";
    cout << "*      Welcome to Pacman!      *\n";
    cout << "********************************\n";
    cout << "(1) Start a new game\n(8) Present instructions and keys\n(9) EXIT\n";
    cout << endl;
}

void Menu::printInstructions()const
{
    cout << "The pacman travels on screen and eats the breadcrumbs.\n"
        "Each eaten breadcrumb equals a point to be earned.\n"
        "Once all breadcrumbs on screen are eaten the game ends and you win!.\n"
        "In case a ghost eats the pacman,\n"
        "you loses one life.If all lives are gone you loose the game\n";
    cout << "You can move the pacman using the following keys from your keybord:\n"
        "w or W : up\n"
        "x or X : down\n"
        "a or A : left\n"
        "d or D : right\n"
        "s or S : stand\n";
    cout << "press any key to return to the main menu";
    cout << endl;
    char key = _getch();
    clear_screen();
    Menu::printMainMenu();
}

//void Menu::menu()
//{
//    Menu::printMainMenu();
//    int key = 0;
//    int flag = 0;
//    do
//    {
//        key = _getch();
//        if (key == START_GAME)
//        {
//            char ch;
//            clear_screen();
//            cout << "Do you want the game will be colorfull?\nPress Y or y for colorfull game\n"
//                "Press N or n for black and while game";
//            cout << endl;
//            do
//            {
//                (_kbhit());
//                ch = _getch();
//                if (ch == 'Y' || ch == 'y')
//                    isColored = true;
//                else if (ch == 'N' || ch == 'n')
//                    isColored = false;
//                else
//                {
//                    cout << ch << "\nThe key you pressed is not an option, Please try again:\n";
//                    cout << endl;
//                }
//
//            } while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n');
//            clear_screen();
//            //Game::init(isColored);
//            //Game::run();
//        }
//        else if (key == INSTRUCTIONS)
//        {
//            clear_screen();
//            Menu::printInstructions();
//
//        }
//        else if (key == EXIT)
//        {
//            clear_screen();
//            cout << "\nThank you and goodbye!\n";
//
//        }
//        else
//        {
//            if (key != 0)
//                clear_screen();
//
//            Menu::printMainMenu();
//
//            key = 0;
//            clear_screen();
//            cout << "\nThe numer you pressed is not an option, Please try again:\n";
//            cout << endl;
//        }
//
//    } while (!flag);
//
//    return;
//}
