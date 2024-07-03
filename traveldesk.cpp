#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>

using namespace std;
class Vehicle;

class Trip
{
public:
    Trip(Vehicle *vehicle, std::string pick_up_location, std::string drop_location, int departure_time)
        : vehicle(vehicle), pick_up_location(pick_up_location), drop_location(drop_location), departure_time(departure_time), booked_seats(0) {}

    // Getter functions
    Vehicle *getVehicle() const
    {
        return vehicle;
    }

    std::string getPickUpLocation() const
    {
        return pick_up_location;
    }

    std::string getDropLocation() const
    {
        return drop_location;
    }

    int getDepartureTime() const
    {
        return departure_time;
    }

    int getBookedSeats() const
    {
        return booked_seats;
    }

    // Setter functions
    void setVehicle(Vehicle *v)
    {
        vehicle = v;
    }

    void setPickUpLocation(std::string location)
    {
        pick_up_location = location;
    }

    void setDropLocation(std::string location)
    {
        drop_location = location;
    }

    void setDepartureTime(int time)
    {
        departure_time = time;
    }

    void setBookedSeats(int seats)
    {
        booked_seats = seats;
    }

private:
    Vehicle *vehicle;
    std::string pick_up_location;
    std::string drop_location;
    int departure_time;
    int booked_seats;
};

class BinaryTreeNode;

class TransportService
{
public:
    TransportService(std::string name) : name(name), BSThead(nullptr) {}

    // Getter functions
    std::string getName() const
    {
        return name;
    }

    BinaryTreeNode *getBSTHead() const
    {
        return BSThead;
    }

    // Setter functions
    void setName(std::string service_name)
    {
        name = service_name;
    }

    void setBSTHead(BinaryTreeNode *node)
    {
        BSThead = node;
    }

    void addTrip(int key, Trip *trip);

private:
    std::string name;
    BinaryTreeNode *BSThead;
};

class BinaryTreeNode
{
public:
    BinaryTreeNode(int departuretime = 0, Trip *tripenodeptr = nullptr, BinaryTreeNode *parentptr = nullptr)
        : leftptr(nullptr), rightptr(nullptr), parentptr(parentptr), departuretime(departuretime), tripnodeptr(tripenodeptr) {}

    // Getter functions
    BinaryTreeNode *getLeftPtr() const
    {
        return leftptr;
    }

    BinaryTreeNode *getRightPtr() const
    {
        return rightptr;
    }

    BinaryTreeNode *getParentPtr() const
    {
        return parentptr;
    }

    int getDepartureTime() const
    {
        return departuretime;
    }

    Trip *getTripNodePtr() const
    {
        return tripnodeptr;
    }

    // Setter functions
    void setLeftPtr(BinaryTreeNode *left)
    {
        leftptr = left;
    }

    void setRightPtr(BinaryTreeNode *right)
    {
        rightptr = right;
    }

    void setParentPtr(BinaryTreeNode *parent)
    {
        parentptr = parent;
    }

    void setDepartureTime(int time)
    {
        departuretime = time;
    }

    void setTripNodePtr(Trip *trip)
    {
        tripnodeptr = trip;
    }

private:
    BinaryTreeNode *leftptr;
    BinaryTreeNode *rightptr;
    BinaryTreeNode *parentptr;
    int departuretime;
    Trip *tripnodeptr;
};

class Vehicle
{
public:
    Vehicle(std::string vehicle_number, int seating_capacity)
        : vehicle_number(vehicle_number), seating_capacity(seating_capacity) {}

    // Getter functions
    std::string getVehicleNumber() const
    {
        return vehicle_number;
    }

    int getSeatingCapacity() const
    {
        return seating_capacity;
    }

    const std::vector<Trip *> &getTrips() const
    {
        return trips;
    }

    // Setter functions
    void setVehicleNumber(std::string number)
    {
        vehicle_number = number;
    }

    void setSeatingCapacity(int capacity)
    {
        seating_capacity = capacity;
    }

    void addTrip(Trip *trip)
    {
        trips.push_back(trip);
    }

private:
    std::string vehicle_number;
    int seating_capacity;
    std::vector<Trip *> trips;
};

class Location
{
public:
    Location(std::string name) : name(name) {}

    // Getter functions
    std::string getName() const
    {
        return name;
    }

    TransportService *getServicePtr(std::string droplocation) const
    {
        TransportService *temp = 0;
        for (int i = 0; i < serviceptrs.size(); i++)
        {
            if (serviceptrs[i]->getName() == droplocation)
            {
                temp = serviceptrs[i];
            }
        }
        return temp;
    }

    std::vector<TransportService *> getserviceptrs()
    {
        return serviceptrs;
    }

    // Setter functions
    void setName(std::string location_name)
    {
        name = location_name;
    }

    TransportService *setServicePtr(std::string droplocation)
    {
        TransportService *t = new TransportService(droplocation);
        serviceptrs.push_back(t);
        return t;
    }
    TransportService *setServicePtr(TransportService *t)
    {
        serviceptrs.push_back(t);
        return t;
    }

    void addTrip(Trip *trip)
    {
        trips.push_back(trip);
    }

private:
    std::string name;
    std::vector<TransportService *> serviceptrs;
    std::vector<Trip *> trips;
};

class BinaryTree
{
protected:
    BinaryTreeNode *root;

public:
    BinaryTree() : root(nullptr) {}

    int getHeight() const
    {
        // Implement this function to return the height of the tree
        return 0; // Placeholder
    }

    int getNumberOfNodes() const
    {
        // Implement this function to return the number of nodes in the tree
        return 0; // Placeholder
    }
};

class BinarySearchTree : public BinaryTree
{
public:
    BinarySearchTree() {}

    BinaryTreeNode *getElementWithMinimumKey() const
    {
        // Implement this function to return the element with the minimum key
        return nullptr; // Placeholder
    }

    BinaryTreeNode *getElementWithMaximumKey() const
    {
        // Implement this function to return the element with the maximum key
        return nullptr; // Placeholder
    }

    BinaryTreeNode *searchNodeWithKey(int key) const
    {
        // Implement this function to search for a node with the given key or the next larger key
        return nullptr; // Placeholder
    }

    BinaryTreeNode *getSuccessorNode(BinaryTreeNode *node) const
    {
        // Implement this function to return the successor node of the given node
        return nullptr; // Placeholder
    }

    BinaryTreeNode *getSuccessorNodeByKey(int key) const
    {
        // Implement this function to return the successor node by key
        return nullptr; // Placeholder
    }

    BinaryTreeNode *getPredecessorNode(BinaryTreeNode *node) const
    {
        // Implement this function to return the predecessor node of the given node
        return nullptr; // Placeholder
    }

    BinaryTreeNode *getPredecessorNodeByKey(int key) const
    {
        // Implement this function to return the predecessor node by key
        return nullptr; // Placeholder
    }
};

class TravelDesk
{
public:
    void addTrip(std::string vehicle_number, int seating_capacity, std::string pick_up_location, std::string drop_location, int departure_time)
    {
        // Implement this function to add a trip
        // Check if the vehicle already exists, if not, create a new one with the seating capacity
        Vehicle *vehicle = nullptr;
        for (int i = 0; i < vehicles.size(); i++)
        {
            if (vehicles[i]->getVehicleNumber() == vehicle_number)
            {
                vehicle = vehicles[i];
                std::vector<Trip *> v = vehicle->getTrips();
                for (int j = 0; j < v.size(); j++)
                {
                    if (v[j]->getPickUpLocation() == pick_up_location)
                    {
                        if (v[j]->getDropLocation() == drop_location)
                        {
                            if (v[j]->getDepartureTime() == departure_time)
                            {
                                return;
                            }
                        }
                    }
                }
            }
        }
        if (vehicle == 0)
        {
            Vehicle *p = new Vehicle(vehicle_number, seating_capacity);
            vehicle = p;
            vehicles.push_back(vehicle);
        }
        // Create a new trip and add it to the appropriate objects
        Trip *T = new Trip(vehicle, pick_up_location, drop_location, departure_time);
        vehicle->addTrip(T);
        // Create or retrieve the Location object and associated pick up location
        Location *L = 0;
        for (int i = 0; i < locations.size(); i++)
        {
            if (locations[i]->getName() == pick_up_location)
            {
                L = locations[i];
                L->addTrip(T);
                break;
            }
        }
        if (L == 0)
        {
            L = new Location(pick_up_location);
            L->addTrip(T);
            locations.push_back(L);
            TransportService *t = L->setServicePtr(drop_location);
            BinaryTreeNode *node = new BinaryTreeNode(departure_time);
            t->setBSTHead(node);
            node->setTripNodePtr(T);
        }
        else
        {
            TransportService *servptr = L->getServicePtr(drop_location);
            if (servptr == 0)
            {
                servptr = L->setServicePtr(drop_location);
                BinaryTreeNode *node = new BinaryTreeNode(departure_time);
                servptr->setBSTHead(node);
                node->setTripNodePtr(T);
            }
            else
            {
                BinaryTreeNode *node = servptr->getBSTHead();
                if (node == 0)
                {
                    node = new BinaryTreeNode(departure_time);
                    servptr->setBSTHead(node);
                    node->setTripNodePtr(T);
                }
                else
                {
                    BinaryTreeNode *node_data = new BinaryTreeNode(departure_time);
                    node_data->setTripNodePtr(T);
                    BinaryTreeNode *curr = node;
                    BinaryTreeNode *prev = node;
                    while (1)
                    {
                        if (departure_time < curr->getDepartureTime())
                        {
                            if (curr->getLeftPtr())
                            {
                                prev = curr;
                                curr = curr->getLeftPtr();
                            }
                            else
                            {
                                curr->setLeftPtr(node_data);
                                curr->setParentPtr(prev);
                                break;
                            }
                        }
                        else
                        {
                            if (curr->getRightPtr())
                            {
                                prev = curr;
                                curr = curr->getRightPtr();
                            }
                            else
                            {
                                curr->setRightPtr(node_data);
                                curr->setParentPtr(prev);
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    void addinvector(BinaryTreeNode *root, std::vector<Trip *> &v, int &after, int &before,int & size)
    {
        if (root == 0)
        {
            return;
        }
        int x = root->getDepartureTime();
        if (x >= after && x < before)
        {
            v[size]=root->getTripNodePtr();
            size++;
        }
        addinvector(root->getLeftPtr(), v, after, before,size);
        addinvector(root->getRightPtr(), v, after, before,size);
    }

std::vector<Trip*> showTripsbydestination(std::string pick_up_location, std::string destination,int after_time, int before_time) 
{
        // Implement this function to retrieve trips within a specified time range form pickup to droplocatin
        after_time = min(after_time, before_time);
        before_time = max(after_time, before_time);
        // Implement this function to retrieve trips within a specified time range
        std::vector<TransportService *> v;
        for (int i = 0; i < locations.size(); i++)
        {
            if (locations[i]->getName() == pick_up_location)
            {
                v = locations[i]->getserviceptrs();
            }
        }
        std::vector<Trip *> ans(1000);
        int size=0;
        TransportService * p;
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i]->getName()==destination)
            {
                p=v[i];
                break;
            }
        }
        BinaryTreeNode * node=p->getBSTHead();
        addinvector(node, ans, after_time, before_time,size);
        std::vector<Trip *> ans_x={};
        for(int i=0;i<size;i++)
        {
            ans_x.push_back(ans[i]);
        }
        return ans_x;
    }

    std::vector<Trip *> showTrips(std::string pick_up_location, int after_time, int before_time)
    {
        after_time = min(after_time, before_time);
        before_time = max(after_time, before_time);
        // Implement this function to retrieve trips within a specified time range
        std::vector<TransportService *> v;
        for (int i = 0; i < locations.size(); i++)
        {
            if (locations[i]->getName() == pick_up_location)
            {
                v = locations[i]->getserviceptrs();
            }
        }
        std::vector<Trip *> ans(1000);
        int size=0;
        for (int i = 0; i < v.size(); i++)
        {
            TransportService *temp = v[i];
            BinaryTreeNode *node = temp->getBSTHead();
            addinvector(node, ans, after_time, before_time,size);
        }
        std::vector<Trip *> ans_x;
        for(int i=0;i<size;i++)
        {
            ans_x.push_back(ans[i]);
        }
        return ans_x;
    }

    void fun(BinaryTreeNode *root, int &time, std::string &vehicle, BinaryTreeNode *&ans)
    {
        if (root == 0)
        {
            return;
        }
        if (root->getDepartureTime() == time)
        {
            if (root->getTripNodePtr()->getVehicle()->getVehicleNumber() == vehicle)
            {
                ans = root;
            }
        }
        fun(root->getLeftPtr(), time, vehicle, ans);
        fun(root->getRightPtr(), time, vehicle, ans);
    }

    Trip *bookTrip(std::string pick_up_location, std::string drop_location, std::string vehicle_number, int departure_time)
    {
        Trip *ans;
        Location *temp = 0;
        for (int i = 0; i < locations.size(); i++)
        {
            if (locations[i]->getName() == pick_up_location)
            {
                temp = locations[i];
            }
        }
        if (temp == 0)
        {
            return 0;
        }
        else
        {
            std::vector<TransportService *> v = temp->getserviceptrs();
            TransportService *t = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i]->getName() == drop_location)
                {
                    t = v[i];
                }
            }
            if (t == 0)
            {
                return 0;
            }
            else
            {
                BinaryTreeNode *node = t->getBSTHead();
                BinaryTreeNode *ans_node = 0;
                fun(node, departure_time, vehicle_number, ans_node);
                if (ans_node == 0)
                {
                    return 0;
                }
                else
                {
                    ans = ans_node->getTripNodePtr();
                }
                int x = ans_node->getTripNodePtr()->getBookedSeats();
                ans_node->getTripNodePtr()->setBookedSeats(x + 1);
                // deleting node if bus is full.
                if (ans_node->getTripNodePtr()->getBookedSeats() == ans_node->getTripNodePtr()->getVehicle()->getSeatingCapacity())
                {
                    if (t->getBSTHead() == node)
                    {
                        if (node->getLeftPtr() != 0 && node->getRightPtr() != 0)
                        {
                            BinaryTreeNode *left = node->getLeftPtr();
                            BinaryTreeNode *right = node->getRightPtr();
                            BinaryTreeNode *temp_ptr = left;
                            while (1)
                            {
                                if (temp_ptr->getRightPtr() != 0)
                                {
                                    temp_ptr = temp_ptr->getRightPtr();
                                }
                                else
                                {
                                    temp_ptr->setRightPtr(right);
                                    break;
                                }
                            }
                            node->setLeftPtr(NULL);
                            node->setRightPtr(NULL);
                            t->setBSTHead(left);
                        }
                        else if (node->getLeftPtr() == 0 && node->getRightPtr() != 0)
                        {
                            t->setBSTHead(node->getRightPtr());
                            node->setLeftPtr(NULL);
                            node->setRightPtr(NULL);
                        }
                        else
                        {
                            t->setBSTHead(node->getLeftPtr());
                            node->setLeftPtr(NULL);
                            node->setRightPtr(NULL);
                        }
                    }
                    else
                    {
                        if (node->getLeftPtr() != 0 && node->getRightPtr() != 0)
                        {
                            BinaryTreeNode *left = node->getLeftPtr();
                            BinaryTreeNode *right = node->getRightPtr();
                            BinaryTreeNode *prt = node->getParentPtr();
                            BinaryTreeNode *temp_ptr = left;
                            while (1)
                            {
                                if (temp_ptr->getRightPtr() != 0)
                                {
                                    temp_ptr = temp_ptr->getRightPtr();
                                }
                                else
                                {
                                    temp_ptr->setRightPtr(right);
                                    break;
                                }
                            }
                            node->setLeftPtr(NULL);
                            node->setRightPtr(NULL);
                            if (prt->getLeftPtr() == node)
                            {
                                prt->setLeftPtr(left);
                            }
                            else
                            {
                                prt->setRightPtr(left);
                            }
                        }
                        else if (node->getLeftPtr() == 0 && node->getRightPtr() != 0)
                        {
                            BinaryTreeNode *right = node->getRightPtr();
                            BinaryTreeNode *prt = node->getParentPtr();
                            if (prt->getLeftPtr() == node)
                            {
                                prt->setLeftPtr(right);
                            }
                            else
                            {
                                prt->setRightPtr(right);
                            }
                            node->setLeftPtr(NULL);
                            node->setRightPtr(NULL);
                        }
                        else
                        {
                            BinaryTreeNode *left = node->getLeftPtr();
                            BinaryTreeNode *prt = node->getParentPtr();
                            if (prt->getLeftPtr() == node)
                            {
                                prt->setLeftPtr(left);
                            }
                            else
                            {
                                prt->setRightPtr(left);
                            }
                            node->setLeftPtr(NULL);
                            node->setRightPtr(NULL);
                        }
                    }
                }
            }
        }
        return ans;
    }

    
    Location *getLocation(std::string location)
    {
        Location *ans = 0;
        for (int i = 0; i < locations.size(); i++)
        {
            if (locations[i]->getName() == location)
            {
                ans = locations[i];
                break;
            }
        }
        return ans;
    }

public:
    std::vector<Vehicle *> vehicles;
    std::vector<Location *> locations;
};

// converting string into int
int string_to_int(string str)
{
    int ans=0;
    for (int i = 0; i < str.size(); i++)
    {
        if (i == 2)
        {
            continue;
        }
        switch (str[i])
        {
        case '1':
        {
            ans = ans * 10 + 1;
            break;
        }
        case '2':
        {
            ans = ans * 10 + 2;
            break;
        }
        case '3':
        {
            ans = ans * 10 + 3;
            break;
        }
        case '4':
        {
            ans = ans * 10 + 4;
            break;
        }
        case '5':
        {
            ans = ans * 10 + 5;
            break;
        }
        case '6':
        {
            ans = ans * 10 + 6;
            break;
        }
        case '7':
        {
            ans = ans * 10 + 7;
            break;
        }
        case '8':
        {
            ans = ans * 10 + 8;
            break;
        }
        case '9':
        {
            ans = ans * 10 + 9;
            break;
        }
        case '0':
        {
            ans = ans * 10 + 0;
            break;
        }
        default:
        {
            break;
        }
        }
    }
    return ans;
}

// reading file
void read_input_file(string file_path)
{
    TravelDesk desk;
    vector<string> row;
    string line, word;
    fstream file(file_path, ios::in);
    while (getline(file, line))
    {
        row.clear();
        stringstream str(line);
        while (getline(str, word, ' '))
        {
            row.push_back(word);
        }
        // listing requests on desk.
        if (row[0] == "ADDTRIP")
        {
            int seating_capacity = string_to_int(row[2]);
            int time = string_to_int(row[5]);
            desk.addTrip(row[1], seating_capacity, row[3], row[4], time);
        }
        else if (row[0] == "SHOWTRIP")
        {
            int after = string_to_int(row[2]);
            int before = string_to_int(row[3]);
            vector<Trip *> v = desk.showTrips(row[1], after, before);
            if (v.size() == 0)
            {
                cout << "No trip available as per your requirement" << endl;
            }
            else
            {
                cout << "found trips for you" << endl;
                for (int j = 0; j < v.size(); j++)
                {
                    cout << v[j]->getVehicle()->getVehicleNumber() << " " << v[j]->getPickUpLocation() << " " << v[j]->getDropLocation() << " " << v[j]->getDepartureTime();
                    cout << endl;
                }
            }
        }
        else if (row[0] == "BOOKTRIP")
        {
            int time = string_to_int(row[4]);
            Trip *t = desk.bookTrip(row[1], row[2], row[3], time);
            if (t == 0)
            {
                cout << "All buses are booked";
            }
            else
            {
                cout << "your trip is booked as below" << endl;
                cout << t->getVehicle()->getVehicleNumber() << " " << t->getPickUpLocation() << " " << t->getDropLocation() << " " << t->getDepartureTime();
            }
            cout << endl;
        }
        else if (row[0]=="SHOWTRIPSBYDESTINATION")
        {
            
            int after = string_to_int(row[3]);
            int before = string_to_int(row[4]);
            vector<Trip *> v = desk.showTripsbydestination(row[1],row[2], after, before);
            if (v.size() == 0)
            {
                cout << "No trip available as per your requirement" << endl;
            }
            else
            {
                cout << "found trips for you" << endl;
                for (int j = 0; j < v.size(); j++)
                {
                    cout << v[j]->getVehicle()->getVehicleNumber() << " " << v[j]->getPickUpLocation() << " " << v[j]->getDropLocation() << " " << v[j]->getDepartureTime();
                    cout << endl;
                }
            }
        }
    }
}

// int main() {

//      //read_input_file("interaction.txt");
//     // // Run the test cases
//     // test_addTrip();
//     // test_bookTrip();
//     // test_bookTrip_max_capacity();
//     // test_showTrips_by_time();
//     // test_location_name();
//     // test_addTrip_to_vehicle();
//     // test_trip_departure_time();


//     // std::cout << "Number of test cases passed: " << testCasesPassed << "/" << 7 << std::endl;
    
//     return 0;
// }