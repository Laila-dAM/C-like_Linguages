using System;
using System.Collections.Generic
using System.Linq;

class Program {
    static void Main(string[] args) {
        Console.WriteLine("Welcome to the AI Evolution Simulato!");
        console.Write("Enter climate type (hot, cold, neutral): ");
        string climate = Console.ReadLine().ToLower();

        Console.Write("Enter mutation rate (0.01 - 1.0): ");
        double mutationRate = double.Parse(Console.ReadLine());

        Console.Write("Enter resource scarcity level (low, medium, high): ");
        string resourceScarcity = Console.ReadLine().ToLower();

        Console.Write("Enter number of generations to simulate: ");
        int generations = int.Parse(Console.ReadLine());

        Console.Write("Enter initial population size: ");
        int populationSize = int.Parse(Console.ReadLine());

        EvolutionSimulator simulator = new EvolutionSimulator(climate, mutationRate, resourceScarcity, populationSize);
        simulator.RunSimulation(generations);
    }
}
class EvolutionSimulator {
    private string Climate;
    private double MutationRate;
    private string ResourceScarcity;
    private List<Pokemon> Population;
    private Random RandomGenerator;

public EvolutionSimulator(string climate, double mutationRate, string resourceScarcity, int populationSize) {
    Climate = climate;
    MutationRate = mutationRate;
    ResourceScarcity = resourceScarcity;
    RandomGenerator = new Random();
    Population = GenerateInitialPopulation(populationSize);
}
public void RunSimulation(int generations) {
    for(int generation = 1; generation <= generations; generation++) {
        EvaluateFitness();
        Reproduce();
        Mutate();

            Console.WriteLine($"Generation {generation}: Average Fitness = {Population.Average(p => p.Fitness):F2}, Population Size = {Population.Count}");
    }
Console.WriteLine("Simulation Complete!");
}
private List<Pokemon> GenerateInitialPopulation(int size){
    var initialPopulation = new List<Pokemon>();
    for(int i = 0; i < size; i++) {
                    initialPopulation.Add(new Pokemon(RandomGenerator.Next(1, 101), RandomGenerator.Next(1, 101), RandomGenerator.Next(1, 101)));

    }
    return initialPopulation;
}
private void EvaluateFitness() {
    foreach (var pokemon in Population) {
        pokemon.Fitness = CalculateFitness(pokemon);
    }
        Population = Population.OrderByDescending(p => p.Fitness).Take(Population.Count / 2).ToList();

}

}