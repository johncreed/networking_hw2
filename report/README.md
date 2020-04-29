# Exponential Weighed Moving Average Report

## Experiments

Each picture is consisted of six graphes with different alphas: 0.5, 0.25, 0.125, 0.0625, 0.03125, and 0.
Each graph is a round trip time (RTT) record for sending 50 packages.
The y-axis is the time for each RTT and the x-axis is the timestamp for each sample RTT and estimated round trip time (EstRTT).

Here we consider two network environments.
One has a loss rate of 0.1 and a corruption rate of 0.1.
Another has a loss rate of 0.3 and a corruption rate of 0.3.
In each environment, we consider three different sending intervals (i.e. s/pkt).


## Observations

### Relationship between EstRTT and Alpha
> The EstRTT will change more rapidly under a larger alpha.

By comparing six graphs in each picture, we can see that the red line (EstRTT) becomes much smoother as the alpha changes large to a small value.
It is reasonable because larger alpha will favor the current sample RTT and update the EstRTT much aggressively. 

### Relationship between Sending Interval and Average RTT
> The average RTT will increase as traffic intensity becomes larger (i.e. the time interval between packages is smaller).

By comparing each picture in the same environment, we can observe that the Average RTT is significantly lower when the sending interval is larger.
When sending interval is large enough, the Average RTT can reduce to _2E[1+9*rand(0,1)] = 11_.

### Relationship between the network environment and Average RTT
> When the loss rate and corruption rate are bigger, the sender may need to reduce the sending speed to avoid overloading the network.

By comparing pictures with the same sending interval between two network environments under, it is clear that the EstRTT is much worse in a noisy environment.
It is caused by constant package losses and interruptions. 
Therefore, the sender keeps sending the same package many more times.
As a result, the network is congested by many duplicated packages.
A remedy to this is to further reduce the sending interval.

### 0.1 Loss 0.1 Corruption

#### Traffic intensigy (5 s/pkt)
![alt text](https://github.com/johncreed/networking_hw2/blob/master/report/pic/1-1-5.png)
#### Traffic intensigy (10 s/pkt)
![alt text](https://github.com/johncreed/networking_hw2/blob/master/report/pic/1-1-10.png)
#### Traffic intensigy (25 s/pkt)
![alt text](https://github.com/johncreed/networking_hw2/blob/master/report/pic/1-1-25.png)

### 0.3 Loss 0.3 Corruption

#### Traffic intensigy (10 s/pkt)
![alt text](https://github.com/johncreed/networking_hw2/blob/master/report/pic/3-3-10.png)
#### Traffic intensigy (25 s/pkt)
![alt text](https://github.com/johncreed/networking_hw2/blob/master/report/pic/3-3-25.png)
#### Traffic intensigy (50 s/pkt)
![alt text](https://github.com/johncreed/networking_hw2/blob/master/report/pic/3-3-50.png)
