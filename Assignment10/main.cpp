#include<iostream>
#include<deque>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

int main()
{
    std::deque<Triangle> triangles;
    Reader reader("E:\\Ramesh__Workspace\\Sketcher Exercise\\Ex10\\Sketcher -Deque\\cubeModel.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);

    Writer writer;

    std::deque<Triangle> outTriangles=triangulation.getTriangles();
    writer.write("E:\\Ramesh__Workspace\\Sketcher Exercise\\Ex10\\Sketcher -Deque\\output.txt", outTriangles);

    std::cout<<"Press enter to exit\n";
}