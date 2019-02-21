sentence= input("What would you like to swap?")

class StringSwap:
    def __init__(self, sentence):
        self.sentence = sentence
    
    def sentence_swap(self):
        return "".join(self.sentence.split()[::-1])

print(StringSwap)

    
