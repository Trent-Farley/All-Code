def get_and_strip_number(s):
    # replace this comment and the next statement with your function body
    return 0, ''

def get_and_strip_word(s):
    # replace this comment and the next statement with your function body
    return '', ''
    
def pad_words(s, num_words, final_len):
    if num_words <= 1:      # best we can do is fill out the line with spaces
        return s + ((final_len - len(s))*' ')

    # there are at least 2 words, so at least one pigeon hole to fill (with spaces)
    num_pigeon_holes = num_words - 1                        # the buckets (pigeon holes) are between words
    num_pigeons = final_len - (len(s) - num_pigeon_holes)   # my pigeons are spaces
    pad_num = num_pigeons // num_pigeon_holes
    extra_num = num_pigeons % num_pigeon_holes              # number of holes that get an extra pigeon
    working_str = ''
    
    # take care of the first num_pigeon_holes - extra_num holes
    for i in range(num_pigeon_holes - extra_num):
        word, s = get_and_strip_word(s)
        working_str += word + (pad_num * ' ')   # insert pad_num spaces

    # take care of the last extra_num holes
    for i in range(extra_num):
        word, s = get_and_strip_word(s)
        working_str += word + ((pad_num + 1) * ' ')

    working_str += s
    return working_str

sentence = "This is a test."
filled_sentence = pad_words(sentence, 4, 20)
print(filled_sentence)

filled_sentence = pad_words("What?", 1, 30)
print(filled_sentence)

print(pad_words("What's up?", 2, 30))




