#include <iostream>
#include <time.h>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>

using namespace std;

// Structure to hold course information
struct Course {
	string courseId;
	string courseName;
	vector<string> prerequisite;
	Course() {}
};

// Internal structure for tree node
struct Node {
	Course course;
	Node* left;
	Node* right;

	// Default constructor
	Node() {
		left = nullptr;
		right = nullptr;
	}

	// Initialize with a course
	Node(Course aCourse) :
		Node() {
		course = aCourse;
	}
	// Declare destructor
	~Node();
};

// Binary Search Tree class definition
class BinarySearchTree {
	private:
		Node* root;

		void addNode(Node* node, Course course);
		void printAll(Node* node);

	public:
		BinarySearchTree();
		virtual ~BinarySearchTree();
		void printAll();
		void Insert(Course course);
		Course Search(string courseId);

};

// Defualt constructor
BinarySearchTree::BinarySearchTree() {
	if (root != nullptr) {
		if (root == nullptr) {
			return;
		}
	}
}

// Destructor
BinarySearchTree::~BinarySearchTree() {
	delete root;
}

Node::~Node() {
	delete left;
	delete right;
}

// Traverse tree in order
void BinarySearchTree::printAll() {
	this->printAll(root);
}

// Insert a course
void BinarySearchTree::Insert(Course course) {
	if (root == nullptr) {
		// Set root to nullptr
		root = new Node(course);
	}
	else {
		// Add node root and course
		this->addNode(root, course);
	}
}

// Convert string to uppercase
string toUpper(string str) {
	for (int i = 0; i < str.length(); i++) {
		str[i] = toupper(str[i]);
	}
	return str;
}

// Search for a course
Course BinarySearchTree::Search(string courseId) {
	//Start at root
	Node* current = root;

	// Keep looping down tree until courseId found or bottom
	while (current != nullptr) {
		// If current node matches return
		if (current->course.courseId.compare(courseId) == 0) {
			return current->course;
		}
		// If courseId is smaller traverse left
		if (courseId.compare(current->course.courseId) < 0) {
			current = current->left;
		}
		// If courseId is greater traverse right
		else {
			current = current->right;
		}
	}
	Course course;
	return course;
}

// Add a course to some node (recursive)
void BinarySearchTree::addNode(Node* node, Course course) {
	// If node is larger than the course, add to left subtree
	if (node->course.courseId.compare(course.courseId) > 0) {
		if (node->left == nullptr) {
			node->left = new Node(course);
		}
		// Traverse through left side
		else {
			this->addNode(node->left, course);
		}
	}
	// Add to right subtree
	else {
		if (node->right == nullptr) {
			node->right = new Node(course);
		}
		// Traverse through right side
		else {
			this->addNode(node->right, course);
		}
	}
}

// Display all course Ids and names
void BinarySearchTree::printAll(Node* node) {
	// Check if current node is not null
	if (node != nullptr) {
		// Recursively traverse left subtree
		printAll(node->left);
		// Print course details
		cout << node->course.courseId << ", "
			<< node->course.courseName << endl;		
		// Recursively traverse right subtree
		printAll(node->right);
	}
}

// Display course information to console
void displayCourse(Course course) {
	cout << course.courseId << ", " << course.courseName << endl
		<< "Prerequisites: ";

	// Iterate through prerequisite vector
	for (int i = 0; i < course.prerequisite.size(); i++) {
		cout << course.prerequisite[i];
		// Add trailing comma unless last prerequisite
		if (i < course.prerequisite.size() - 1) {
			cout << ", ";
		}
	}
	cout << endl;
}

// Split string method
vector<string> split(string line, char delim) {
	stringstream ss(line);
	string word;
	vector<string> words;
	
	while (!ss.eof()) {
		getline(ss, word, delim);
		words.push_back(word);
	}
	return words;
}

// Load a CSV file containing courses into a container
void loadCourses(string csvPath, BinarySearchTree* bst) {
	cout << "Loading CSV file " << csvPath << endl;

	// Open file
	ifstream input{ csvPath };

	// Check for opening file errors
	if (!input.is_open()) {
		cout << "Error opening file: " << csvPath << endl;
		return;
	}
	string line;

	// Iterate through each line of CSV file
	while (getline(input, line)) {
		vector<string> tokens = split(line, ',');

		// Create a data structure and add to the collection of courses
		Course course;
		course.courseId = tokens[0];
		course.courseName = tokens[1];

		for (int i = 2; i < tokens.size(); i++) {
			course.prerequisite.push_back(tokens[i]);
		}
		// Push course to binary search tree
		bst->Insert(course);
	}
}

int main(int argc, char* argv[]) {

	// Define a timer variable
	clock_t ticks;

	// Define a file path variable
	string csvPath;

	// Define an id variable
	string id;

	// Define a binary search tree to hold all courses
	BinarySearchTree* bst;
	bst = new BinarySearchTree();
	Course course;

	cout << "Welcome to the course planner." << endl;

	int choice = 0;
	while (choice != 9) {
		cout << endl;
		cout << "  1. Load Data Structure." << endl;
		cout << "  2. Print Course List." << endl;
		cout << "  3. Print Course." << endl;
		cout << "  9. Exit" << endl;
		cout << "\nWhat would you like to do? ";
		cin >> choice;

		switch (choice) {

		case 1: 
			cin.ignore();
			cout << "Please enter file path: ";
			getline(cin, csvPath);

			// Initialize a timer variable before loading courses
			ticks = clock();

			// Complete the method call to load the courses
			loadCourses(csvPath, bst);

			// Calculate elapsed time and display result
			ticks = clock() - ticks; // current clock ticks minus starting clock ticks
			cout << "time: " << ticks << " clock ticks" << endl;
			cout << "time: " << ticks * 1.0 / CLOCKS_PER_SEC << " seconds" << endl;
			break;
		
		case 2:
			cout << "Here is a sample schedule:\n" << endl;

			// Complete the method call to display course schedule
			bst->printAll();
			
			break;

		case 3:
			cout << "What course do you want to know about? ";
			cin >> id;
			
			// Initialize a timer variable before searching for course
			ticks = clock();

			course = bst->Search(toUpper(id));

			ticks = clock() - ticks; // current clock ticks minus starting clock ticks

			// Display course if found
			if (!course.courseId.empty()) {
				displayCourse(course);
			}
			// If course not found
			else {
				cout << "Course Id " << id << " not found." << endl;
			}

			// Calculate elapsed time and display result
			cout << "time: " << ticks << " clock ticks" << endl;
			cout << "time: " << ticks * 1.0 / CLOCKS_PER_SEC << " seconds" << endl;

			break;

		default: 
			if (choice != 9) {
				cout << choice << " is not a valid option." << endl;
			}

			break;
		}
	}

	// Exit message
	cout << "Thank you for using the course planner!" << endl;

	return 0;
}
