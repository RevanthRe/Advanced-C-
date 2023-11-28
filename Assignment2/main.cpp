#include "headers/Reader.h"
#include"headers/BBox.h"
#include "headers/Writer.h"

 
int main()
{
    //get original shape points
    std::vector<Triangle> triangles;
    Reader readShape("E:\\Ramesh__Workspace\\Sketcher Exercise\\Ex2\\Updated Sketchers\\resources\\cubeModel.stl");
    readShape.getTriangles(triangles);

    //plot original shape points
    Writer writeGeometry;
    writeGeometry.write("E:\\Ramesh__Workspace\\Sketcher Exercise\\Ex2\\Updated Sketchers\\Shape.txt", triangles);

}