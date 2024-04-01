#pragma once
#include "grid.hpp"

class Simulation {
    private :
        Grid grid;
        bool running;
        
    public :
        Simulation(int width, int height, int cellDim, int randomRate): 
            grid(width, height, cellDim, randomRate), running(false)
            {grid.Randomize();};

        bool IsRunning() { return running; }
        void SetRunning(bool value);

        void SetCell(int x, int y, int value);

        void DrawGrid();
        int CountLiveNeighbours(int x, int y);
        void Update();

        void Randomize();
};