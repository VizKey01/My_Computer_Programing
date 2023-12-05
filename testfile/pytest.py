class SentimentLexicon:
        
   def __init__(self, polarity='positive', language='en'):
       self.language = language
       self.words = []
       if polarity in ['positive', 'negative', 'neutral']:
           self.polarity = polarity
       else:
           print('Found a weird polarity: {}'.format(polarity))
 
   def add_word(self, word):
       self.words.append(word)
 
   def vocab_size(self):
       return len(self.words)


my_lex = SentimentLexicon()
french_lex = SentimentLexicon('fr')
german_neg_lex = SentimentLexicon('de', 'negative')

print(my_lex.polarity)
print(french_lex.polarity)
print(my_lex.add_word)

my_lex.add_word('good')
my_lex.add_word('bon')
print(my_lex.vocab_size())
print(french_lex.vocab_size())