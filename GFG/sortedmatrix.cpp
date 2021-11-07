class Solution {
  public
    vectorvectorint sortedMatrix(int N, vectorvectorint Mat) {
         code here
        vectorint v;
        for(int i=0;iN;i++){
            for(int j=0;jN;j++){
                v.push_back(Mat[i][j]);
            }
        }
        int k=0;
        sort(v.begin(),v.end());
        for(int i=0;iN;i++){
            for(int j=0;jN;j++){
                Mat[i][j]=v[k++];
            }
        }
        return Mat;
    }
};