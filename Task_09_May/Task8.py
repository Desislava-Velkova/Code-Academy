class InvalidWithdrawal(Exception):
    def __init__(self, balance, amount):
        super().__init__(f"account doesn't have ${amount}")
        self.amount = amount
        self.balance = balance
        
    def overage(self):
        return self.amount - self.balance
    

try:
    raise InvalidWithdrawal(80,50)
except InvalidWithdrawal as ex:
    print("Your withdraw is more than your balance by {} leva".format(ex.overage()))
    print("Your withdraw is more than your balance by %s" % ex.overage(),"leva")
    