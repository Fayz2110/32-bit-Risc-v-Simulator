#include <systemc.h>
SC_MODULE(OR) {
	sc_in<sc_uint<1>> i1, i2;
	sc_out<sc_uint<1>> out;

	SC_CTOR(OR) {
		SC_METHOD(OPR);
		sensitive << i1 << i2;
	}
	void OPR() {
		out.write(i1.read() | i2.read());
	}
};