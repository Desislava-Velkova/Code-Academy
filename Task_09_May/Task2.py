
class EvenOnly(list):
    def append(self, integer):
        if not isinstance(integer, int):
            raise TypeError("Only integers can be added")
        if integer % 2:
            raise ValueError("Only even numbers is recommended to be added")
        super().append(integer)
        
instance = EvenOnly()
x = [2,3]

instance.append(x)
print(instance)