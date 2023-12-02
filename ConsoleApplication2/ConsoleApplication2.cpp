#include <string>
#include <iostream>

int main()
{
    std::cout << "type a number to place X or O\n";

    std::cout << " 1 || 2 || 3\n";
    std::cout << "=============\n";
    std::cout << " 4 || 5 || 6\n";
    std::cout << "=============\n";
    std::cout << " 7 || 8 || 9\n";

    int ab[8];
     std::string a="   ";
     std::string b = "   ";
     std::string c = "   ";
     std::string d = "   ";
     std::string e = "   ";
     std::string f = "   ";
     std::string g = "   ";
     std::string k = "   ";
     std::string y = "   ";
   


    for (int i = 0;i < 9;i++)
    { 
       number:
        std::cin >> ab[i];


        if (ab[i] < 1 || ab[i]>9)
        {
            std::cout << "invalid number please enter again\n";

            goto number;

        }


        std::string j = " X ";

        if (i % 2)
        {
            j = " O ";
        }

        if (ab[i] == 1)
            a = j;

        else if (ab[i] == 2)
            b = j;

        else if (ab[i] == 3)
            c = j;

        else if (ab[i] == 4)
            d = j;

        else if (ab[i] == 5)
            e = j;

        else if (ab[i] == 6)
            f = j;

        else if (ab[i] == 7)
            g = j;

        else if (ab[i] == 8)
            k = j;

        else if (ab[i] == 9)
            y = j;

        std::cout << a << "||" << b << "||" << c << std::endl;
        std::cout << "==============\n";
        std::cout << d << "||" << e << "||" << f << std::endl;
        std::cout << "==============\n";
        std::cout << g << "||" << k << "||" << y << std::endl;

        //vertical horizontal
        if (a == j && d == j && g == j)
        {
            if (j == " X ")
                std::cout << "first player won";
            else
                std::cout << "Second player won";
            break;
        }

        if (a == j && b == j && c == j)
        {
            if (j == " X ")
                std::cout << "first player won";
            else
                std::cout << "Second player won";
            break;
        }

        if (c == j && f == j && y == j)
        {
            if (j == " X ")
                std::cout << "first player won";
            else
                std::cout << "Second player won";
            break;
        }

        if (g == j && k == j && y == j)
        {
            if (j == " X ")
                std::cout << "first player won";
            else
                std::cout << "Second player won";
            break;
        }
        //diagonal
        if (a == j && e == j && y == j)
        {
            if (j == " X ")
                std::cout << "first player won";
            else
                std::cout << "Second player won";
            break;
        }

        if (g == j && e == j && c == j)
        {
            if (j == " X ")
                std::cout << "first player won";
            else
                std::cout << "Second player won";
            break;
        }
        
        if (e == j && d == j && f == j)
        {
            if (j == " X ")
                std::cout << "first player won";
            else
                std::cout << "Second player won";
            break;
        }

        if (b == j && e == j && k == j)
        {
            if (j == " X ")
                std::cout << "first player won";
            else
                std::cout << "Second player won";
            break;
        }

    }

}
