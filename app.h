struct Person{
    char name[35];
    char phone[17] ;
    char email[26];
    char address[101];
    char password[20];

};

struct Hotel{
    char name[51];
    char contact[11];
    char mail[51];
    char address[151];
    float price;
    bool petallowed;
    bool wifi;
    float rating;
    int max_guests;
    char exact_loc[16];
    char description[1999];
};
void scan_sentences(char array[]);
int scan_user(struct Person persons_list[],char name[35],char password[20],int numelements);
int scan_users(struct Person persons_list[],char name[35],char password[20],int numelements);
bool valid_phoneno(char phoneno[17]);
bool emailverifier(char email[]);
void display_hotels(struct Hotel hotel[7]);
void pets(bool petsallowed);
int choose_hotel();
float price_cal(float price);
int guests(int maxguests);
bool confirm();
void create_user(struct Person persons_list[],int numelements, FILE *user_file);
int login(struct Person persons_list[],int numofpersons);
int make_users(struct Person persons_list[]);

