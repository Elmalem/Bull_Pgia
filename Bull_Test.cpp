#include <iostream>
using namespace std;

#include "play.hpp"
#include "DummyChoosers.hpp"
#include "DummyGuessers.hpp"
#include "SmartGuesser.hpp"
#include "badkan.hpp"
#define COMMA ,

using namespace bullpgia;


// This test is fo sure check only the functions that we writed.
int main() {

	badkan::TestCase testcase;
	int grade=0;
	int signal = setjmp(badkan::longjmp_buffer);
	if (signal == 0) {
    // constructors
    Guesser g1("1234");
    Guesser g2("2345");
    //
    Chooser c1("1234");
    Chooser c2("4567");
    //
    Chooser same1("4567");
    Chooser same2("4567");
    //
    ConstantChooser cc1{"1234"}, cc2{"12345"}, cc3{"9999"};
		ConstantGuesser cg1{"1234"}, cg2{"12345"}, cg3{"9999"};
    //
    testcase.setname("Calculate bull and pgia")
		.CHECK_OUTPUT(calculateBullAndPgia("2345","2345"), "4,0")      // 4 bull, 0 pgia
    .CHECK_OUTPUT(calculateBullAndPgia("1234","1243"), "2,2")      // 2 bull , 2 pgia
    .CHECK_OUTPUT(calculateBullAndPgia("1678","1234"), "1,0")       // 1 bull , 0 pgia
    .CHECK_EQUAL(Guesser g(),Guesser f())
    .CHECK_EQUAL(c1.length(),g1.length)
    .CHECK_EQUAL(c1.my(),g1.my()) // "1234" = "1234" , my() return the private string
    .CHECK_EQUAL(same1,same2)
    .CHECK_OK(cc1.choose())
    .CHECK_OK(cc2.choose())
    .CHECK_OK(cc3.choose())
    .CHECK_OK(cg1.guess())
    .CHECK_OK(cg1.guess())
    .CHECK_OK(cg1.guess())

  // testcase.setname("Play with smart guesser");
  // RandomChooser randy;
  // SmartGuesser smarty;
  // for (uint i=0; i<100; ++i) {
  //  testcase.CHECK_EQUAL(play(randy, smarty, 4, 100)<=10, true);  // smarty should always win in at most 10 turns!
  //   }
  grade = testcase.grade();
}
 else {
    testcase.print_signal(signal);
    grade = 0;
  }
  cout << "Your grade is: "  << grade << endl;
  return 0;
}
