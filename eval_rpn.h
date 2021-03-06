//*****************************************************************************
//
// eval_rpn.h - Declarations and definitions for RPN evaluator.
//
// Author:  Reed Bement,  2019/1/6
//
//    Notes:
//    ------
//
//*****************************************************************************

#define MAX_EXP_LEN 1023

class EvalRPN {
    private:
        Stack s;
        char szExp[MAX_EXP_LEN+1];

    public:
        EvalRPN()  { }    // Constructor
        ~EvalRPN() { }    // Destructor
        double DoEvalRPN(const char *expression, double x = 0.0);
    private:
        void HandleBinary(char *pszWord);
        void HandleUnary(char *pszWord);
        void HandleConVar(char *pszWord, double x);

        double Str2D(char *pszWord);
};
