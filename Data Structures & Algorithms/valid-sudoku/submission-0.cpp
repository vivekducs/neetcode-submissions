class Solution {
   public:
   bool isValid(vector<vector<char>>& board,int sr,int er,int sc, int ec){
     unordered_set<char>seen;
      for( int i=sr;i<=er;i++){
       
        for( int j=sc;j<=ec;j++){
            if(board[i][j]=='.')
            continue;
            if( seen.find(board[i][j])!=seen.end())
            return false;
            else seen.insert(board[i][j]);
        }
    }
    return true;
   }
    bool isValidSudoku(vector<vector<char>>& board) {
        // check for rows if row  contains duplicate 
        for( int i=0;i<9;i++){
            unordered_set<char>seen;
            for( int j=0;j<9;j++){
                if(board[i][j]=='.')
            continue;
                if(seen.find(board[i][j])!=seen.end())
                return false;
                else
                seen.insert(board[i][j]);

            }
        }
        // check for  if col  contains duplicate 
        for( int i=0;i<9;i++){
            unordered_set<char>seen;
            for( int j=0;j<9;j++){
                if(board[j][i]=='.')
            continue;
                if(seen.find(board[j][i])!=seen.end())
                return false;
                else
                seen.insert(board[j][i]);

            }
        }
        // check for the  squares
        for( int sr=0;sr<9;sr+=3){
            int er=sr+2;
            for( int sc=0;sc<9;sc+=3){
                int ec=sc+2;
              if(  !isValid(board,sr,er,sc,ec))
              return false;
            }

        }
        return true;
    }
    
};