using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BaseBall_Csharp_
{
    class Result
    {
        private int _strike = 0;
        private int _ball = 0;
        private int _out = 0;

        public bool IsCorrect()
        {
            return _strike == Constant.Digit;
        }

        public void Calculate(Answer answer, Guess guess)
        {
            for (int i = 0; i < Constant.Digit; i++)
            {
                int j = (i + 1) % Constant.Digit;
                int k = (i + 2) % Constant.Digit;

                if (guess[i] == answer[i])
                    _strike++;
                else if (guess[i] == answer[j] || guess[i] == answer[k])
                    _ball++;
                else
                    _out++;
            }
        }

        public override string ToString()
        {
            return $"스트라이크:{_strike} B:{_ball} O:{_out}";
        }
    }
}
