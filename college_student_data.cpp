#include <iostream>
#include <string>

#define SIZE 86

using namespace std;

class computer_class
{
protected:
    long long int enrollment_number[SIZE] = {
        12302040501001,
        12302040501002,
        12302040501003,
        12302040501004,
        12302040501005,
        12302040501006,
        // 12302040501007,
        12302040501008,
        12302040501009,
        12302040501010,
        12302040501011,
        12302040501012,
        12302040501013,
        12302040501014,
        12302040501015,
        12302040501016,
        12302040501017,
        12302040501018,
        12302040501019,
        12302040501020,
        12302040501021,
        12302040501022,
        12302040501023,
        12302040501024,
        12302040501025,
        12302040501026,
        12302040501027,
        12302040501028,
        12302040501029,
        12302040501030,
        12302040501031,
        12302040501032,
        12302040501033,
        12302040501034,
        12302040501035,
        12302040501036,
        12302040501037,
        12302040501038,
        12302040501039,
        12302040501040,
        12302040501041,
        12302040501042,
        12302040501043,
        12302040501044,
        12302040501045,
        12302040501046,
        12302040501047,
        12302040501048,
        12302040501049,
        // 12302040501050,
        12302040501051,
        12302040501052,
        12302040501053,
        12302040501054,
        12302040501055,
        12302040501056,
        12302040501057,
        12302040501058,
        12302040501059,
        12302040501060,
        12302040501061,
        12302040501062,
        12302040501063,
        12302040501064,
        12302040501065,
        12302040501066,
        12302040501067,
        12302040501068,
        12302040501069,
        12302040501070,
        12302040501071,
        12302040501072,
        12302040501073,
        12302040501074,
        12302040501075,
        12302040501076,
        12302040501077,
        12302040501078,
        12302040501079,
        12302040501080,
        12302040501081,
        12302040501082,
        12302040501083,
        12302040501084,
        12302040501085,
        12302040501086,
        12302040501087,
        12302040501088};
    string Full_name[SIZE] = {
        "BHADIYADRA ABHISHEK JAYDEEPBHAI",
        "ANSH CHETAN SHAH",
        "DODIYA BHAVYA PRAVINSINH",
        "PATEL BLISHA AMITKUMAR",
        "SOLANKI CHIRAGKUMAR ARVINDBHAI",
        "PATEL DARSHKUMAR DIPAKBHAI",
        // "MOTERIYA DEV HITESHBAHI",
        "PATEL DEV VIPULKUMAR",
        "DEVARSH PATEL",
        "NAIK DHARMI PIYUSHKUMAR",
        "PATEL DHAVAL JIGNESHKUMAR",
        "PATIL DHRUV BHATU",
        "DHRUVA PATEL",
        "SHAH DHYAN RAJESHKUMAR",
        "BALDHA DIP KETANBHAI",
        "RATHOD DIYA NARENDRABHAI",
        "VASANI GARVIN HITESHBHAI",
        "GAURAV HARSHADKUMAR PATEL",
        "HARSH AJAYKUMAR TAILOR",
        "VALA HARSHILKUMAR HARSHADBHAI",
        "HET",
        "PATEL JAINIL JAYESHBHAI",
        "JAY DIGANTKUMAR PATEL",
        "SHAH KAHAN RAJENDRABHAI",
        "MAJITHIA KATHAN KAMLESHKUMAR",
        "PATEL KHUSHI MANISHBHAI",
        "BHADIYADRA KRUSHAL MADHUBHAI",
        "SHARMA MEERABEN RAJESHKUMAR",
        "PATEL MEET ALPESHKUMAR",
        "PARMAR MEET ASHOKKUMAR",
        "NAKSHI MANISHKUMAR SHAH",
        "THAKOR NAND KIRITBHAI",
        "SHEKH NEEL MAKBULBHAI",
        "PARIKH NISARG HIMANSHU",
        "NISARG JIGNESHBHAI PANCHAL",
        "DETROJA NISARG SATISHBHAI",
        "NITISH SHARMA",
        "ANDANI PAL VINODBHAI",
        "BEHL PALAK SUSHILKUMAR",
        "JOSHI PALASH VAIBHAV",
        "PARTHVI BAKOTRA",
        "PRABHAV PATEL",
        "VASAVA PRATIKKUMAR SHANMUKHBHAI",
        "PATEL PRINCE ASHISHKUMAR",
        "TOPIYA PRIYANSH BHARATBHAI",
        "BARIA PRIYANSHI RAJENDRAKUMAR",
        "PATEL PRIYANSHU BAKULBHAI",
        "GHONIYA RAJ BHUPENDRABHAI",
        "GOYANI RAJ HARESHBHAI",
        // "RAMOLIYA RAJ SANJAYBHAI",
        "NAGAPARA RENISH PRABHUBHAI",
        "PATEL RIDDHI KAUSHIKBHAI",
        "TRIVEDI RISHABH VIMALBHAI",
        "KACHHIA RUDRA CHIRAGKUMAR",
        "PATEL SAKSHIBEN DHARMENDRABHAI",
        "CHANGELA SHREY HASMUKHBHAI",
        "SHRUTI PATEL",
        "PATEL SUJAL JITENDRABHAI",
        "KARDANI SUJAL SHAILESHBHAI",
        "DALAL SWAYAM NIRAV",
        "TANVI PATEL",
        "KIKANI VAIDIK RAMESHBHAI",
        "SOLANKI VIRAJ PRAKASHBHAI",
        "THAKKAR VIRENKUMAR ANILKUMAR",
        "KHIMSURIYA VISHAL JITENDRABHAI",
        "PATEL VISHWA DHARMENDRAKUMAR",
        "VRAJ DINESHKUMAR PATEL",
        "SONI VRAJ JIGNESHKUMAR",
        "BHAVSAR YASHVI GIRISHBHAI",
        "SHIKHA DEVI",
        "ADITYA JETLY",
        "DEKIVADIYA AMAN ASHVINBHAI",
        "ARPAN PATEL",
        "DAVE AUM RAJESHBHAI",
        "DAKSH BRIJESH PATADIA",
        "TRIVEDI DEVASYA MANISHBHAI",
        "HARSH AJMERA",
        "PATEL JAMES PARESHKUMAR",
        "KAVYA RANA",
        "KHALIL HAJI AARIFBHAI VAHORA",
        "KSHITIJA PURANDAR VYAS",
        "NIHAR HITESHBHAI HIRPARA",
        "PATEL RAVI SHAILESHKUMAR",
        "BHUT RISHI VIPULKUMAR",
        "PATEL SAHAJ RAJNIKANT",
        "YASHVI MEHTA",
        "PATEL YATRI RAKESH", " PATEL VEDKUMAR NILESHKUMAR "};

public:
};

class Maths_Marks : public computer_class
{
protected:
    int marks_maths[SIZE] = {20, 13, 17, 9, 18, 14, 15, 16, 17, 17, 17, 19, 16, 17, 17, 15, 18, 20, 15, 14, 12, 20, 14, 17, 17, 20, 18, 16, 17, 17, 19, 12, 5, 20, 17, 15, 17, 18, 16, 17, 16, 14, 12, 12, 16, 19, 15, 18, 13, 5, 18, 20, 18, 16, 20, 19, 11, 17, 18, 12, 18, 14, 12, 20, 14, 17, 17, 4, 15, 5, 11, 10, 11, 15, 17, 11, 9, 13, 5, 0, 14, 10, 0, 12, 7, 2};

public:
    void display()
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << enrollment_number[i] << ":-";
            cout << Full_name[i] << ":-" << marks_maths[i] << endl;
        }
    }
    void avg_marks_maths()
    {
        float avg = 0.0;
        int count = 0;
        for (int i = 0; i < SIZE; i++)
        {
            avg += marks_maths[i];
            count++;
        }
        cout << avg / count;
    }
    void Fails_maths()
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (marks_maths[i] < 7 && marks_maths[i] >= 0)
            {
                cout << enrollment_number[i] << ":-" << Full_name[i] << ":" << marks_maths[i] << endl;
            }
        }
    }
    void NPTL_maths()
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (marks_maths[i] == 0)
            {
                cout << enrollment_number[i] << ":-" << Full_name[i] << ":" << marks_maths[i] << endl;
            }
        }
    }
    void access_enrollment()
    {
        long long int enrollment_number1;
        cout << "Enter a enrollment_number:-";
        cin >> enrollment_number1;
        for (int i = 0; i < SIZE; i++)
        {
            if (enrollment_number1 == enrollment_number[i])
            {
                cout << enrollment_number[i] << ":-" << Full_name[i] << ":" << marks_maths[i] << endl;
            }
        }
    }
    void acess_name()
    {
        string Full_name1;
        cout << "Enter a fullname: ";
        getline(cin, Full_name1);
        for (int i = 0; i < SIZE; i++)
        {
            if (Full_name1 == Full_name[i])
            {
                cout << enrollment_number[i] << ":-" << Full_name[i] << ":" << marks_maths[i] << endl;
            }
        }
    }
    void Change_marks_maths()
    {
        long long int enrollment_number1;
        int new_marks_maths;
        cout << "Enter Enrollment_number do you change to marks:-";
        cin >> enrollment_number1;
        cout << "Enter new Maths marks:-";
        cin >> new_marks_maths;
        for (int i = 0; i < SIZE; i++)
        {
            if (enrollment_number[i] == enrollment_number1)
            {
                marks_maths[i] = new_marks_maths;
            }
        }
    }
    void max_marks_maths()
    {
        int max = 0;
        for (int i = 0; i < SIZE; i++)
        {
            if (marks_maths[i] >= max)
            {
                max = marks_maths[i];
                if (max == 20)
                {
                    cout << Full_name[i] << max << endl;
                }
            }
        }
    }
};

int main()
{
    Maths_Marks c;
    int branch, marks;
    int choice;
    string Full_name1;

    cout << "Which branch do you want:-" << endl
         << "1)Computer Enginering" << endl
         << "2)Information Technology" << endl;
    cin >> branch;
    switch (branch)
    {
    case 1:
        cout << "which subject ,marks do you want:-" << endl
             << "1)LAVCODE" << endl
             << "2)PHYSICS" << endl;
        cin >> marks;
        // Clear input buffer
        cin.ignore();
        switch (marks)
        {
        case 1:
            cout << "1)All marks display" << endl
                 << "2)Show fail students data" << endl
                 << "3)Show NPTL list" << endl
                 << "4)Show Avg marks in LAVCODE Subject" << endl
                 << "5)Show data using Name" << endl
                 << "6)Show data using Enrollment number" << endl
                 << "7)Max marks in this subjects" << endl
                 << "8)Change marks in LAVCODE" << endl
                 << "Enter  a your choice:-" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                c.display();
                break;
            case 2:
                c.Fails_maths();
                break;
            case 3:
                c.NPTL_maths();
                break;
            case 4:
                c.avg_marks_maths();
                break;
            case 5:
                c.acess_name();
                break;
            case 6:
                c.access_enrollment();
                break;
            case 7:
                c.max_marks_maths();
                break;
            case 8:
                c.Change_marks_maths();
                break;
            default:
                cout << "--------ERROR!!!--------";
                break;
            }

            break;

        default:
            break;
        }
        break;

    default:
        break;
    }
    return 0;
}
