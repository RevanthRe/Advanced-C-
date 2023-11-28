#include "headers/Reader.h"
#include"headers/BBox.h"
#include "headers/Writer.h"
#include "headers/Geometry.h"


void printClassName(Point3D obj)
{
    obj.print();
}
 
int main()
{
    //get original shape points
    std::vector<Triangle> triangles;
    Reader readShape("E:\\Ramesh__Workspace\\Sketcher Exercise\\Ex12\\Updated Sketchers\\resources/cubeModel.stl");
    readShape.getTriangles(triangles);

    //plot original shape points
    Writer writeGeometry;
    writeGeometry.write("E:\\Ramesh__Workspace\\Sketcher Exercise\\Ex12\\Updated Sketchers\\originalShape.txt", triangles);

    Point3D pointObj;
    Triangle triangleObj;
    Triangulation triangulationObj;

    printClassName(pointObj);
    printClassName(triangleObj);
    printClassName(triangulationObj);


}