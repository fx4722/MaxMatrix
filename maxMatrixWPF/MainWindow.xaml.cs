using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Runtime.InteropServices;


namespace maxMatrixWPF
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        [DllImport(@"maxMatixDll.dll", EntryPoint = "ex_maxmatrix", SetLastError = true, CharSet = CharSet.Ansi,
ExactSpelling = false, CallingConvention = CallingConvention.Cdecl)]
        static extern double ex_maxMatrix(double[] a, int row, int col);

        public MainWindow()
        {
            InitializeComponent();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            double[] a = new double[9] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
            double b;
            b = ex_maxMatrix(a, 3, 3);
            textbox1.Text = b.ToString();
        }
    }
}
