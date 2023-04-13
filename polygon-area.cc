struct Point
{
        int x, y;
};

int n;
vector<Point> v;

/*
    Polygon area is half of this matrix's discriminant
    X0       Y0
    X1       Y1
    X2       Y2
        ...
    Xn-1   Yn-1
    (X0*Y1 - X1*Y0)...
*/

double polygonArea()
{
        double area = 0;

        for (int i = 0; i < n - 1; ++i)
                area += (v[i].x * v[i + 1].y - v[i + 1].x * v[i].y);

        area += (v[n - 1].x * v[0].y - v[0].x * v[n - 1].y);
        return fabs(area) / 2.0;
}