class Radio:

    # Initial volume is set to 20%, initial mode is set to FM
    def __init__(self):
        self.volume = 20
        self.saved_volume = self.volume

    # Increase the volume by 10% if not already at max volume
    def increase_volume(self):
        global volume
        if self.volume <= 90:
            self.volume += 10
        volume = self.volume

    # Decrease the volume by 10% if not already at min volume
    def decrease_volume(self):
        if self.volume >= 10:
            self.volume -= 10
        volume = self.volume

    # Muting sets the volume to 0%, and saves the volume separately so it can be restored
    def toggle_mute(self):
        if self.volume > 0:
            self.saved_volume = self.volume
            self.volume = 0
        else:
            self.volume = self.saved_volume