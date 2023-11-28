#include <fstream>
#include "../headers/Writer.h"
#include "iostream"

Writer::Writer(/* args */)
{
}

Writer::~Writer()
{
}

void Writer::write(std::string filePath, std::vector<Triangle> &triangles)
{
  std::ofstream dataFile;
  dataFile.open(filePath);

  for (std::vector<Triangle>::iterator itr = triangles.begin(); itr != triangles.end(); ++itr)
  {
    std::cout << (*itr).p1().x() << " " << (*itr).p1().y() << " " << (*itr).p1().z() << std::endl;
    std::cout << (*itr).p2().x() << " " << (*itr).p2().y() << " " << (*itr).p2().z() << std::endl;
    std::cout << (*itr).p3().x() << " " << (*itr).p3().y() << " " << (*itr).p3().z() << std::endl;
  }

  for (Triangle triangle : triangles)
  {
    dataFile << triangle.p1().x() << " " << triangle.p1().y() << " " << triangle.p1().z() << std::endl;
    dataFile << triangle.p2().x() << " " << triangle.p2().y() << " " << triangle.p2().z() << std::endl;
    dataFile << triangle.p3().x() << " " << triangle.p3().y() << " " << triangle.p3().z() << std::endl;
    dataFile << triangle.p1().x() << " " << triangle.p1().y() << " " << triangle.p1().z() << std::endl;
  }
  dataFile.close();
};