//This is where Function Declarations go
#include <iostream>
#include <string>

class Ticket{
  //need to fix private/public
  public:
  //setters
  void setTicketNumber(std::string input);
  void setGrossWeight(double input);
  void setTareWeight(double input);
  void setMoistureLevel(double input);
  void setForeignMaterial(double input);

  //getters
  std::string getTicketNumber();
  double getGrossWeight();
  double getTareWeight();
  double getMoistureLevel();
  double getForeignMaterial();

  //calculation
  double calculateNetWeight();
  double calculateGrossBushels();
  double calculateMoistureDockage();
  double calculateForeignMaterialDockage();
  double calculateNetBushels();

  private:
  std::string ticketNumber;
  double grossWeight, tareWeight, moistureLevel, foreignMaterial;
};