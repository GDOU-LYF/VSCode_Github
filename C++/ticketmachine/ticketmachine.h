#ifdef ticketmachine_h_
class ticketmachine
{
private:
   const int PRICE;
   int balance;
   int total;
public:
    void showPrompt();
    void getMOey();
    void showBalance();
    void printError();
};

#endif //ticketmachine_h_