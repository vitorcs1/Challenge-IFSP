# Challenge-IFSP

A challenge in pairs was proposed for the systems analysis and development class, follow the challenge below:

A transport company wants to develop software that calculates the kilometers traveled and the costs
involved in their itineraries. For this, a matrix was created containing the distance between the cities
serviced by the carrier.

The distance values were stored in a 5x5 matrix, below is the matrix:

                      São Paulo Campinas Santos Bragança Paulista Sorocaba
                         0         1       2           3             4
                         
São Paulo 0              0        106      79          90            98
Campinas 1              106        0       187         79            98
Santos 2                 79       187       0          153           171
Bragança Paulista 3      90        79      153          0            147
Sorocaba 4               98        98      171         147            0

The user needs to put the numbers corresponding to the cities, always putting the first number as a starting 
point and the second as a destination (Ex: 0 and 2, the distance between this 2 points is 79). After that, the 
software calculate the fuel cost by dividing the total distance by the transport consumption and multiplying by 
the gasoline cost, both values are entered by the user.

Made by Daniel Alves Freitas (SoliDanAlves) and Vitor Cardoso Silva (vitorcs1)
