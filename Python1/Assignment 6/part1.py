'''
Trent Farley CS161 8AM
Assignment 6

Design -
    for this assignment, I created a class that defined all of the attributes
    of a desk fan. This includes rotation, speeds and build quality. 

Testing
    I just ran the code to make sure there were no errors. 
'''
class DeskFan:
    def __init__(self, rotate, speed, build_quality):
        self.rotate = rotate
        self.speeds = speed
        self.build_quality = build_quality
    
    def rotation(self, rotate):
        """returns the variable rotate"""
        rotate = ['constant', 'delayed', 'timed']
        return rotate
    
    def fan_speeds(self, speeds):
        """returns the variable speeds"""
        speeds = ['low','medium','high']
        return speeds
    
    def quality(self,build_quality):
        """returns the quality of the fan"""
        build_quality = ['China', 'Japan', 'Germany']
        return build_quality
