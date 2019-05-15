
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BaseBall_Csharp_
{
    class Program
    {
        static void Main(string[] args)
        {
            // TDD (Test-Driven Development)

            // 1. 정답을 생성한다.
            Answer answer = new Answer();
            answer.Generate();

            answer.Print();


            while (true)
            {
                // 2. 추측을 입력받는다
                Guess guess = new Guess();
                guess.Input();

                guess.Print();


                // 3. 정답과 추측을 비교하여 결과를 판정한다.
                Result result = new Result();
                result.Calculate(answer, guess);


                // 4. 결과를 출력한다.
                // string interpolation (문자열 내삽)
                Console.WriteLine(result);


                // 5. 정답과 추측이 일치하지 않으면, 2번으로 돌아간다
                if (result.IsCorrect())
                    break;
            }

            Console.WriteLine("[종료]");
        }
    }
}

