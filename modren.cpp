#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

/* Function prototypes */
int get_option(void);
int atomic_number(void);
int atomic_symbol(void);
int atomic_name(void);
int atomic_weight(void);
char block(int);
char property(int);
void show(int, char, char);

/* Global Array Declarations and initialization */
string name[112] = {"Hydrogen", "Helium", "Lithium", "Beryllium", "Boron", "Carbon", "Nitrogen", "Oxygen", "Fluorine", "Neon",
                    "Sodium", "Magnesium", "Aluminium", "Silicon", "Phosphorus", "Sulphur", "Chlorine", "Argon",
                    "Potassium", "Calcium", "Scandium", "Titanium", "Vanadium", "Chromium", "Manganese", "Iron", "Cobalt", "Nickel", "Copper", "Zinc",
                    "Gallium", "Germanium", "Arsenic", "Selenium", "Bromine", "Krypton",
                    "Rubidium", "Strontium", "Yttrium", "Zirconium", "Niobium", "Molybdenum", "Technetium", "Ruthenium", "Rhodium", "Palladium", "Silver", "Cadmium",
                    "Indium", "Tin", "Antimony", "Tellurium", "Iodine", "Xenon",
                    "Cesium", "Barium", "Lanthanum", "Cerium", "Praseodymium", "Neodymium", "Promethium", "Samarium", "Europium", "Gadolinium", "Terbium", "Dysprosium",
                    "Holmium", "Erbium", "Thulium", "Ytterbium", "Lutetium",
                    "Hafnium", "Tantalum", "Tungsten", "Rhenium", "Osmium", "Iridium", "Platinum", "Gold", "Mercury", "Thallium", "Lead", "Bismuth", "Polonium", "Astatine", "Radon",
                    "Francium", "Radium", "Actinium", "Thorium", "Protactinium", "Uranium", "Neptunium", "Plutonium", "Americium", "Curium", "Berkelium",
                    "Californium", "Einsteinium", "Fermium", "Mendelevium", "Nobelium", "Lawrencium",
                    "Rutherfordium", "Dubnium", "Seaborgium", "Bohrium", "Hassium", "Meitnerium", "Darmstadtium", "Roentgenium", "Copernicium"};

string symbol[112] = {"H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne",
                      "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar",
                      "K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr",
                      "Rb", "Sr", "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I", "Xe",
                      "Cs", "Ba", "La", "Ce", "Pr", "Nd", "Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "Yb", "Lu",
                      "Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Tl", "Pb", "Bi", "Po", "At", "Rn",
                      "Fr", "Ra", "Ac", "Th", "Pa", "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm", "Md", "No", "Lr",
                      "Rf", "Db", "Sg", "Bh", "Hs", "Mt", "Ds", "Rg", "Cn"};

double weight[112] = {1.00, 4.00, 6.94, 9.01, 10.81, 12.01, 14.00, 16.00, 20.00, 20.18, 23.00, 24.31, 26.99, 28.08, 30.97, 32.06, 35.45, 39.09, 40.07, 44.95, 47.86, 50.94,
                      51.99, 54.93, 55.84, 58.69, 58.93, 63.54, 65.39, 69.7, 72.64, 74.92, 78.96, 79.90, 83.80, 85.46, 87.62, 88.90, 91.22, 92.90, 95.94, 98.00, 101.07,
                      102.90, 106.42, 107.86, 112.41, 114.81, 118.71, 121.76, 127.6, 126.90, 131.29, 137.90, 137.32, 138.90, 140.11, 140.90, 144.24, 145.00,
                      150.36, 151.96, 157.25, 158.92, 162.50, 164.93, 167.5, 168.93, 173.04, 174.96, 178.49, 180.94, 183.84, 186.20, 190.23, 192.21, 195.07, 196.97,
                      200.59, 204.38, 207.20, 208.98, 209.00, 210.00, 222.00, 223.00, 226.00, 227.00, 231.03, 232.03, 237.00, 238.03, 243, 244, 247, 247, 251, 252, 257, 258,
                      259, 261, 262, 264, 266, 268, 272, 277, 276, 281, 280, 285};

/* Main method */
int main()
{
    int i = 999, option;

    cout << "\n\nNAME: N.PRATEETH BHARADWAJ";
    cout << "\nUSN: 3BR21EC109";
    cout << "\nBRANCH: ECE";
    system("pause");
    system("cls");

    do
    {
        char ch1, ch2;
        option = get_option();

        switch (option)
        {
        case 1:
            i = atomic_number();
            break;
        case 2:
            i = atomic_symbol();
            break;
        case 3:
            i = atomic_name();
            break;
        case 4:
            i = atomic_weight();
            break;
        case 5:
            return 0;
        default:
            system("cls");
            cout << "\n\n\t\t\t\tWrong Choice!\n";
            cout << "\n\t\t\t\tLet's try it again, Shall we ?\n\n";
        }
        if (i == -1)
        {
            system("cls");
            cout << "\t\t\t\t\tOops! \n\t\t\t\t\tNo Such element present!\n";
            cout << "\t\t\t\t     Make a right choice this time!\n\n";
        }
        else if (i == 999)
            continue;
        else
        {
            system("cls");
            ch1 = block(i);
            ch2 = property(i);
            show(i, ch1, ch2);
        }
        i = 999;
    } while (option != 5);
    return 0;
}

/* Gets the choice of search from the user */
int get_option(void)
{
    int option;
    cout << "\n\nEnter the corresponding number:\n\n";
    cout << "1. Search by ATOMIC NUMBER\n";
    cout << "2. Search by ATOMIC SYMBOL\n";
    cout << "3. Search by ATOMIC NAME\n";
    cout << "4. Search by ATOMIC WEIGHT\n";
    cout << "5. QUIT\n";
    cout << "\nEnter Your Choice: ";
    cin >> option;
    return option;
}

/* Method to search element by atomic number */
int atomic_number(void)
{
    int n;
    cout << "\nEnter the Atomic Number you want to search for: ";
    cin >> n;
    n--;
    if (n >= 0 && n < 112)
        return n;
    else
        return -1;
}

/* Method to search element by atomic symbol */
int atomic_symbol(void)
{
    string sym;
    cout << "\nEnter the Atomic Symbol of the element you want to search for: ";
    cin >> sym;
    for (int i = 0; i < 112; i++)
    {
        if (sym == symbol[i])
            return i;
    }
    return -1;
}

/* Method to search element by atomic name */
int atomic_name(void)
{
    string n;
    cout << "\nEnter the Atomic Name of the element you want to search for: ";
    cin >> n;
    for (int i = 0; i < 112; i++)
    {
        if (n == name[i])
            return i;
    }
    return -1;
}

/* Method to search element by atomic weight */
int atomic_weight(void)
{
    double n;
    cout << "\nEnter the Atomic Weight of the element you want to search for: ";
    cin >> n;
    for (int i = 0; i < 112; i++)
    {
        if (weight[i] == n)
            return i;
    }
    return -1;
}

/* Returns the block of the element */
char block(int i)
{
    if (i == 0 || i == 1 || (i >= 2 && i <= 3) || i == 10 || i == 11 || (i >= 18 && i <= 19) || (i >= 36 && i <= 37) || (i >= 54 && i <= 55) || (i >= 86 && i <= 87))
        return 's';
    else if ((i >= 4 && i <= 9) || (i >= 12 && i <= 17) || (i >= 30 && i <= 35) || (i >= 48 && i <= 53))
        return 'p';
    else if ((i >= 20 && i <= 29) || (i >= 38 && i <= 47) || (i >= 56 && i <= 85) || (i >= 88 && i <= 111))
        return 'd';
    else
        return 'f';
}

/* Returns the property of the element */
char property(int i)
{
    if (i == 0 || (i >= 4 && i <= 9) || (i >= 15 && i <= 16) || (i >= 30 && i <= 33) || i == 51)
        return 'n';
    else if (i == 2 || i == 10 || i == 18 || i == 36 || i == 54 || i == 86)
        return 'g';
    else if ((i >= 12 && i <= 14) || i == 48)
        return 'm';
    else
        return 't';
}

/* Displays the properties of the selected element */
void show(int i, char ch1, char ch2)
{
    cout << "\n\n\t\t\t\tTHE ELEMENT\n\n";
    cout << "Atomic Number: " << (i + 1) << "\n";
    cout << "Atomic Symbol: " << symbol[i] << "\n";
    cout << "Atomic Name: " << name[i] << "\n";
    cout << "Atomic Weight: " << fixed << setprecision(2) << weight[i] << "\n";
    cout << "Block: " << ch1 << "\n";
    switch (ch2)
    {
    case 'n':
        cout << "Property: Non-Metal\n";
        break;
    case 'g':
        cout << "Property: Inert Gas\n";
        break;
    case 'm':
        cout << "Property: Metalloid\n";
        break;
    case 't':
        cout << "Property: Metal\n";
        break;
    }
}
