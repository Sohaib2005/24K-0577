#include <stdio.h>
#include <math.h>
struct Point {
    double x;
    double y;
};
double calculate_distance(struct Point p1, struct Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}
int is_point_inside_rectangle(struct Point p, struct Point bottom_left, struct Point top_right) {
    return (p.x >= bottom_left.x && p.x <= top_right.x &&
            p.y >= bottom_left.y && p.y <= top_right.y);
}
int main() {
    struct Point p1 = {2.0, 3.0};
    struct Point p2 = {5.0, 7.0};
    struct Point check_point = {4.0, 5.0};
    struct Point bottom_left = {1.0, 1.0};
    struct Point top_right = {6.0, 6.0};
    double distance = calculate_distance(p1, p2);
    printf("Distance between p1 and p2: %.2f\n", distance);
    if (is_point_inside_rectangle(check_point, bottom_left, top_right)) {
        printf("Point (%.2f, %.2f) is inside the rectangle.\n", check_point.x, check_point.y);
    } else {
        printf("Point (%.2f, %.2f) is outside the rectangle.\n", check_point.x, check_point.y);
    }
    return 0;
}

