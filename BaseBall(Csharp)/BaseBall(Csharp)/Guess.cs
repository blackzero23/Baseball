using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BaseBall_Csharp_
{
    class Guess : NumberContainer
    {
        public void Input()
        {
            for (int i = 0; i < Constant.Digit; i++)
                _numbers[i] = int.Parse(Console.ReadLine());
        }

        protected override string GetPrintPrefix()
        {
            return "[추측]";
        }
    }
}
