#include<iostream>
#include<vector>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"


int main()
{
    std::vector<Triangle> triangles;
    Reader reader("E:\\Ramesh__Workspace\\Sketcher Exercise\\EX8\\Updated Sketchers\\cubeModel.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);

    Writer writer;

    std::vector<Triangle> outTriangles=triangulation.getTriangles();
    writer.write("E:\\Ramesh__Workspace\\Sketcher Exercise\\EX8\\Updated Sketchers\\output.txt", outTriangles);

    std::cout<<"Press enter to exit\n";
}