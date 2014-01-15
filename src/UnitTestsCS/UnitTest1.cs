using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using GLRT;
namespace UnitTestsCS
{
    [TestClass]
    public class UnitTest1
    {
        [TestMethod]
        public void TestMethod1()
        {
            Mesh mesh1 = new Mesh();
            Assert.AreEqual(43, mesh1.GetMagicNumber());
        }
    }
}
