"""
Trent Farley CS161 8AM
Assignment 6

Design -
    for this part of the assignment, two classes had to be made, one for 
    the doctors and one for the patients. The doctor's attributes include
    degree_type, specialty and smartness. For the patients, the attributes will 
    be num_id, patient infor and patient history. 

Testing
    I just ran the code to make sure there were no errors.
"""
class Doctors:
    def __init___(self, degree_type, specialty, smartness):
        self.degree_type = degree_type
        self.specialty = specialty
        self.smartness = smartness

    def degree_type(self, degree_type):
        """returns degree type"""
        degree_type = self.degree_type
        return degree_type
    
    def specialty(self, specialty):
        """returns specialty"""
        specialty = self.specialty
        return specialty

    def smartness(self, smartness):
        """returns smartness"""
        smartness = self.smartness
        return smartness


class Patients:
    def __init__(self, num_id, patient_info, patient_history):
        self.num_id = num_id
        self.patient_info = ['age','weight','problem','treatment']
        self.patient_history = ['previous visits', 'past treatment']
    
    def num__id(self, num_id):
        """returns num_id"""
        id_number = self.num_id
        return id_number
    
    def patient_inform(self, patient_info):
        """returns patient inform"""
        patient_info = self.patient_info
        return patient_info

    def patient_historys(self, patient_history):
        """returns patient history"""
        patient_history = self.patient_history
        return patient_history




