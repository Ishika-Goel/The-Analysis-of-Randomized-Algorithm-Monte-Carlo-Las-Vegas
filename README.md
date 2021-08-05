# The-Analysis-of-Randomized-Algorithm-Monte-Carlo-Las-Vegas

# INTRODUCTION
Randomized algorithms make random decisions rather than deterministic decisions. The main advantage is that no input can reliably produce worst-case results because the algorithm runs differently each time.
These algorithms are commonly used in situations where no exact and fast algorithm is known.
Our project focuses on the study of randomized algorithm mainly Monte Carlo and Las Vegas.
And also to study the comparative analysis between Monte Carlo and Las Vegas.

# WHY RANDOMNESS OVER DETERMINISTIC APPROACH?
Algorithm that follow simple steps where we have predefined set of inputs and a required
output and follow a suggested steps, then these algorithms are Deterministic algorithms. 
Meanwhile, Algorithms that uses random numbers to decide what to do next anywhere in
its logic are called Randomized algorithms.

![image](https://user-images.githubusercontent.com/46298449/128373093-4c829e8d-6b9f-49e9-afee-58075ead2d12.png)

# LITERATURE REVIEWS
Randomization has become a standard approach in algorithm design due to its efficiency and simplicity. It has been used in wide spread applications, especially in the areas of communication, cryptography, data management, and discrete optimization. 
It is most versatile and widely used numerical method.
This project describes application of Monte Carlo method in sampling problems.
This project briefly describes the nature and relevance of Monte Carlo simulations, the way to perform these simulations and analyze result.
In computing, a Las Vegas algorithm is a randomized algorithm that always gives correct results; that is, it always produces the correct result or it informs about the failure. However, the runtime of a Las Vegas algorithm differs depending on the input.

# MOTIVATION
The motivation behind doing this project came to us from  the fact that making good decisions could be complicated and expensive.
For eg: Consider a sorting procedure.
Picking an element in the middle makes the procedure very efficient, but it is very expensive(that is linear time) to find such an element.
But picking a random element will do!
Randomized algorithm for a problem is usually simpler and more efficient than it’s deterministic counter part.

# OBJECTIVES
•	Comparative study of  randomized classification algorithms: Monte Carlo and Las Vegas.

•	Our main aim is to introduce the fundamental concepts behind Monte Carlo methods and Las Vegas algorithm. The specific learning objectives are: 

   (a) To become familiar with the general scope of both the methods
   (b) To understand to role of “randomness” in Monte Carlo and Las Vegas.

# MONTE CARLO ALGORITHM

•	Monte Carlo algorithm produce correct or optimum result with some probability. These algorithms have deterministic running time and it is generally easier to find out worst case time complexity.

•	By running it many times on independent random variables, we can make the failure probability arbitrarily small at the expense of running time.

•	Monte Carlo methods vary, but tend to follow a particular pattern:

	1.	Define a domain of possible inputs
  
  2.	Generate inputs randomly from a probability distribution over the domain
  
	3.	Perform a deterministic computation on the inputs
  
	4.	Aggregate the results
  
	5.	Simulation
  
	For eg: Consider a deck of cards or flip a coin.
  
# What is the probability that at least two kings will appear next to each other in a shuffled deck?

Firstly we have taken a deck of cards and then done shuffling of cards by generating random numbers.
we needed to calculate the number of times two or more than two kings appear consecutively.
That can be calculated by 1-P(no kings appear together)
So doing this we finally take out the probability of the number of times kings appear together!

![image](https://user-images.githubusercontent.com/46298449/128374542-55d4394d-2fd9-4c30-8f5d-c46d4f49afb7.png)

# LAS VEGAS ALGORITHM 

•	In computing, a Las Vegas algorithm is a randomized algorithm that always gives correct results; that is, it always produces the correct result or it informs about the failure. However, the runtime of a Las Vegas algorithm differs depending on the input. The usual definition of a Las Vegas algorithm includes the restriction that the expected runtime be finite, where the expectation is carried out over the space of random information, or entropy, used in the algorithm

•	For eg: Randomized Quicksort.

# COMPARATIVE ANALYSIS

 
 
  
  MONTE-CARLO


  
  
  LAS VEGAS


  
 
 
  
  The output may be incorrect with some probability.


  
  
  The output is guaranteed to be correct
  no matter which random choices the algorithm makes


  
 
 
  
  The running time is bounded for all
  possible choices, but only most of the choices lead to the correct answer.


  
  
  The running time is a random variable,
  making the expected running time the most important parameter.


  
 
 
  
  we can repeat the Monte Carlo algorithm
  until we get a confirmed answer – this becomes a Las Vegas algorithm.


  
  
  By an application of Markov's
  inequality, a
  Las Vegas algorithm can
  be converted into a
  Monte Carlo algorithm by
  running it for set time and generating a random answer when it fails
  to terminate.


  
 













