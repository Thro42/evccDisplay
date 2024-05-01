# evccDisplay

EVCC Display

I created this for a 4.3 inch display type ESP32-4827S043. But I think it work also un other (Yellow) Display's.
The mission was to show simula information as the Web-Interface of my EVCC-instance.

## Display

The dispay has tree section.

1. Solar and Grid information
2. Car State of charge
3. Charge Power

### Solar and Grid information

The Bar has two sections. The left sechtion schows the current solar Power in W. The rigth section schows the Grit Power. The section is blue when power is using from Grid and yellow when power is going to Grid.

### Car State of charge

The Bar schows on the left site, the State of charge of the Car. It yellow when the car is charging and green when not.

### Charge Power

It shows the corren charching Power of the Car in kW

## prepare screts.h

Befor you compile the sources copy the file `secrets_sample.h` to `secrets.h` and edit the Wifi-Settings and IP adresses. If you dont want a fix IP-Adress, comment out the line of LOCAL_IP.
