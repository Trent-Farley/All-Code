'''
Trent Farley CS161 8AM
Assignment 6

Design - 
    For this part of the assignment, I need to write a class schedule for 
    a student. THis schedule will have class name, credits, teacher name, room 
    and time of day. The functions inside of the class will be a little bit boring
    but they will return the variables. 

Testing
    I just ran the code to make sure there were no errors. 
'''

class ClassSchedule:
    def __init__(self, _credits, class_name, teacher_name, room, time):
        self._credits = _credits
        self.class_names = class_name
        self.teacher_name = teacher_name
        self.room = room 
        self.time = time

    def class_credtis(self, _credits):
        """Returns _credits"""
        _credits = self._credits
        return _credits
    
    def name_of_class(self, class_name):
        """returns name_of_class"""
        class_name = self.class_names
        return class_name

    def name_of_teacher(self, teacher_name):
        """returns name_of_teacher"""
        teacher_name = self.teacher_name
        return teacher_name
    
    def classroom(self, room):
        """returns classroom"""
        room = self.room 
        return room 
    
    def times(self, time):
        """returns times"""
        time = self.time
        return time

