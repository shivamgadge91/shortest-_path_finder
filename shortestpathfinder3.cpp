 // Display the path in the correct order
        cout << "Shortest Path: ";
        for (int i = length - 1; i >= 0; i--)
        {
            cout << path[i];

            if (i > 0)
                cout << " -> ";
        }

        // Display the total shortest distance
        cout << "\nTotal Distance: "
             << dist[destination] << endl;
    }
};

int main()
{
    // Create a graph containing four locations
    Graph g(4);

    // Add roads and their distances
    g.addRoad(0, 1, 10);
    g.addRoad(0, 2, 3);
    g.addRoad(2, 1, 2);
    g.addRoad(1, 3, 4);

    int source, destination;

    // Take source and destination from the user
    cout << "Locations are numbered 0 to 3.\n";
    cout << "Enter source location: ";
    cin >> source;

    cout << "Enter destination location: ";
    cin >> destination;

    // Validate the entered location numbers
    if (source < 0 || source >= 4 ||
        destination < 0 || destination >= 4)
    {
        cout << "Invalid location number.\n";
        return 0;
    }

    // Find and display the shortest path
    g.shortestPath(source, destination);

    return 0; 
}
/*Enter source location: 0
Enter destination location: 3
Shortest Path: 0 -> 2 -> 1 -> 3
Total Distance: 9
PS C:\Users\HP\Documents\yash personal> 


 */