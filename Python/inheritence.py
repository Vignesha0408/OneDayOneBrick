class God:
    def power(self):
        print("God power")

class Shiva(God):
    
    def power(self):
        super().power()
        print("Shiva special power")
a= Shiva();
a.power()