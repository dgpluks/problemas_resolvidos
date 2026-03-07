class Solution {
public:

    double area(double ax,double ay, double bx , double by, double cx, double cy){
        return abs(ay*(bx-cx)+by*(cx-ax)+cy*(ax-bx))/2;
    }


    double largestTriangleArea(vector<vector<int>>& points) {
        double maxi = -1;
    

        for(int i = 0; i < points.size() - 2; i++){
            for(int j = i + 1; j < points.size()-1; j++){
                for(int k = j + 1; k < points.size(); k++){
                    double pos = area(points[i][0],points[i][1],points[j][0],points[j][1],points[k][0],points[k][1]);
                    if(pos > maxi){
                        maxi = pos;
                    }
                }
            } 
        }

        return maxi;
    }
};
