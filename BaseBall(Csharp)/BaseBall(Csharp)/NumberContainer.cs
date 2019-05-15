using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BaseBall_Csharp_
{
    abstract class NumberContainer
    {
        protected int[] _numbers = new int[Constant.Digit];

        public int Length
        {
            get
            {
                return _numbers.Length;
            }
        }

        public int this[int digit]
        {
            get
            {
                return _numbers[digit];
            }
        }

        protected abstract string GetPrintPrefix();

        public void Print() // template pattern
        {
            Console.WriteLine(GetPrintPrefix());
            for (int i = 0; i < _numbers.Length; i++)
                Console.Write(_numbers[i] + " ");
            Console.WriteLine();
        }
    }
}
