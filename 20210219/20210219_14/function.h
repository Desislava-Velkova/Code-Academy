struct employees{
    char firstName[20];
    char middleName[20];
    char surName[20];
    char position[20];
    int workExperience;
    float salary;
    struct employees* Manager;
};

void fillInfo(struct employees *emp, int numEmployees);
void printInfo(struct employees *emp, int numEmployees);
void ManagerInfo(struct employees *managers, int numEmployees);
void printManager(struct employees *managers, int numEmployees);
void assignManagers(struct employees *emp, struct employees *managers, int numEmployees, int numManagers);

