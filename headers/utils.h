#pragma once

/**
 * Contains the definition of the differents data structures we're gonna need.
 */

// Represents the state of the creation action
typedef enum creationToolState {
	polygonCreationState,
	windowCreationState
};

// Represents the state of the creation action
typedef enum creationState {
	waitingForFirstClick,
	waitingForNextClick,
	pending,
	resize
};

// Represents a 2D point (x, y)
typedef struct Point {
	int x;
	int y;
} Point;

// Represents a Line
typedef struct Line {
	Point startPoint;
	Point endPoint;
} Line;

// Represents a Polygon
typedef struct CustomPolygon {
	Point vertices[256];
	int nbVertices;
} CustomPolygon;

// Represents a the points to fill
typedef struct PointsToFill {
	Point pointsToFill[20000];
	int nbPointsToFill;
} PointsToFill;
