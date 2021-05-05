class Customer:
    
    def __init__(self, customer_id):
        self.customer_id= customer_id
    
    def display_cart(self):
        print("Printing content of the display cart.")

class ReturningCustomer(Customer):
    def order_history(self):
        print("Printing order history")
        
my_customer = ReturningCustomer(8)

my_customer.display_cart()
my_customer.order_history()
