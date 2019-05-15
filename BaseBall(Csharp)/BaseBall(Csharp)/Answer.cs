using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BaseBall_Csharp_
{
    class Answer : NumberContainer
    {
        public void Generate()
        {
            while (true)
            {
                Random random = new Random();
                for (int i = 0; i < _numbers.Length; i++)
                    _numbers[i] = random.Next(Constant.MaxValue);

                if (_numbers[0] != _numbers[1] && _numbers[1] != _numbers[2] && _numbers[2] != _numbers[0])
                    break;
            }
        }

        protected override string GetPrintPrefix()
        {
            return "[정답]";
        }
    }
}
