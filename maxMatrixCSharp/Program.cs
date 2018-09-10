using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace maxMatrixCSharp
{
    class Program
    {
        [DllImport(@"maxMatixDll.dll", EntryPoint = "ex_maxmatrix", SetLastError = true, CharSet = CharSet.Ansi,
ExactSpelling = false, CallingConvention = CallingConvention.Cdecl)]
        static extern double ex_maxMatrix(double[] a, int row, int col);

        static void Main(string[] args)
        {
            double[] a = new double[9] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
            double b;
            b = ex_maxMatrix(a, 3, 3);
            Console.WriteLine(b);
            Console.ReadLine();
        }
    }

}
