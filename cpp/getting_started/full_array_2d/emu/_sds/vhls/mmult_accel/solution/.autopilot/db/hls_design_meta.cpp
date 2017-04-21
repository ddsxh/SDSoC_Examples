#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst_n", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("m_axi_a_AWVALID", 1, hls_out, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_a_AWREADY", 1, hls_in, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_a_AWADDR", 32, hls_out, 0, "m_axi", "ADDR", 1),
	Port_Property("m_axi_a_AWID", 1, hls_out, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_a_AWLEN", 8, hls_out, 0, "m_axi", "LEN", 1),
	Port_Property("m_axi_a_AWSIZE", 3, hls_out, 0, "m_axi", "SIZE", 1),
	Port_Property("m_axi_a_AWBURST", 2, hls_out, 0, "m_axi", "BURST", 1),
	Port_Property("m_axi_a_AWLOCK", 2, hls_out, 0, "m_axi", "LOCK", 1),
	Port_Property("m_axi_a_AWCACHE", 4, hls_out, 0, "m_axi", "CACHE", 1),
	Port_Property("m_axi_a_AWPROT", 3, hls_out, 0, "m_axi", "PROT", 1),
	Port_Property("m_axi_a_AWQOS", 4, hls_out, 0, "m_axi", "QOS", 1),
	Port_Property("m_axi_a_AWREGION", 4, hls_out, 0, "m_axi", "REGION", 1),
	Port_Property("m_axi_a_AWUSER", 1, hls_out, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_a_WVALID", 1, hls_out, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_a_WREADY", 1, hls_in, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_a_WDATA", 32, hls_out, 0, "m_axi", "DATA", 1),
	Port_Property("m_axi_a_WSTRB", 4, hls_out, 0, "m_axi", "STRB", 1),
	Port_Property("m_axi_a_WLAST", 1, hls_out, 0, "m_axi", "LAST", 1),
	Port_Property("m_axi_a_WID", 1, hls_out, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_a_WUSER", 1, hls_out, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_a_ARVALID", 1, hls_out, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_a_ARREADY", 1, hls_in, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_a_ARADDR", 32, hls_out, 0, "m_axi", "ADDR", 1),
	Port_Property("m_axi_a_ARID", 1, hls_out, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_a_ARLEN", 8, hls_out, 0, "m_axi", "LEN", 1),
	Port_Property("m_axi_a_ARSIZE", 3, hls_out, 0, "m_axi", "SIZE", 1),
	Port_Property("m_axi_a_ARBURST", 2, hls_out, 0, "m_axi", "BURST", 1),
	Port_Property("m_axi_a_ARLOCK", 2, hls_out, 0, "m_axi", "LOCK", 1),
	Port_Property("m_axi_a_ARCACHE", 4, hls_out, 0, "m_axi", "CACHE", 1),
	Port_Property("m_axi_a_ARPROT", 3, hls_out, 0, "m_axi", "PROT", 1),
	Port_Property("m_axi_a_ARQOS", 4, hls_out, 0, "m_axi", "QOS", 1),
	Port_Property("m_axi_a_ARREGION", 4, hls_out, 0, "m_axi", "REGION", 1),
	Port_Property("m_axi_a_ARUSER", 1, hls_out, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_a_RVALID", 1, hls_in, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_a_RREADY", 1, hls_out, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_a_RDATA", 32, hls_in, 0, "m_axi", "DATA", 1),
	Port_Property("m_axi_a_RLAST", 1, hls_in, 0, "m_axi", "LAST", 1),
	Port_Property("m_axi_a_RID", 1, hls_in, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_a_RUSER", 1, hls_in, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_a_RRESP", 2, hls_in, 0, "m_axi", "RESP", 1),
	Port_Property("m_axi_a_BVALID", 1, hls_in, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_a_BREADY", 1, hls_out, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_a_BRESP", 2, hls_in, 0, "m_axi", "RESP", 1),
	Port_Property("m_axi_a_BID", 1, hls_in, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_a_BUSER", 1, hls_in, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_b_AWVALID", 1, hls_out, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_b_AWREADY", 1, hls_in, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_b_AWADDR", 32, hls_out, 1, "m_axi", "ADDR", 1),
	Port_Property("m_axi_b_AWID", 1, hls_out, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_b_AWLEN", 8, hls_out, 1, "m_axi", "LEN", 1),
	Port_Property("m_axi_b_AWSIZE", 3, hls_out, 1, "m_axi", "SIZE", 1),
	Port_Property("m_axi_b_AWBURST", 2, hls_out, 1, "m_axi", "BURST", 1),
	Port_Property("m_axi_b_AWLOCK", 2, hls_out, 1, "m_axi", "LOCK", 1),
	Port_Property("m_axi_b_AWCACHE", 4, hls_out, 1, "m_axi", "CACHE", 1),
	Port_Property("m_axi_b_AWPROT", 3, hls_out, 1, "m_axi", "PROT", 1),
	Port_Property("m_axi_b_AWQOS", 4, hls_out, 1, "m_axi", "QOS", 1),
	Port_Property("m_axi_b_AWREGION", 4, hls_out, 1, "m_axi", "REGION", 1),
	Port_Property("m_axi_b_AWUSER", 1, hls_out, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_b_WVALID", 1, hls_out, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_b_WREADY", 1, hls_in, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_b_WDATA", 32, hls_out, 1, "m_axi", "DATA", 1),
	Port_Property("m_axi_b_WSTRB", 4, hls_out, 1, "m_axi", "STRB", 1),
	Port_Property("m_axi_b_WLAST", 1, hls_out, 1, "m_axi", "LAST", 1),
	Port_Property("m_axi_b_WID", 1, hls_out, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_b_WUSER", 1, hls_out, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_b_ARVALID", 1, hls_out, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_b_ARREADY", 1, hls_in, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_b_ARADDR", 32, hls_out, 1, "m_axi", "ADDR", 1),
	Port_Property("m_axi_b_ARID", 1, hls_out, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_b_ARLEN", 8, hls_out, 1, "m_axi", "LEN", 1),
	Port_Property("m_axi_b_ARSIZE", 3, hls_out, 1, "m_axi", "SIZE", 1),
	Port_Property("m_axi_b_ARBURST", 2, hls_out, 1, "m_axi", "BURST", 1),
	Port_Property("m_axi_b_ARLOCK", 2, hls_out, 1, "m_axi", "LOCK", 1),
	Port_Property("m_axi_b_ARCACHE", 4, hls_out, 1, "m_axi", "CACHE", 1),
	Port_Property("m_axi_b_ARPROT", 3, hls_out, 1, "m_axi", "PROT", 1),
	Port_Property("m_axi_b_ARQOS", 4, hls_out, 1, "m_axi", "QOS", 1),
	Port_Property("m_axi_b_ARREGION", 4, hls_out, 1, "m_axi", "REGION", 1),
	Port_Property("m_axi_b_ARUSER", 1, hls_out, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_b_RVALID", 1, hls_in, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_b_RREADY", 1, hls_out, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_b_RDATA", 32, hls_in, 1, "m_axi", "DATA", 1),
	Port_Property("m_axi_b_RLAST", 1, hls_in, 1, "m_axi", "LAST", 1),
	Port_Property("m_axi_b_RID", 1, hls_in, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_b_RUSER", 1, hls_in, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_b_RRESP", 2, hls_in, 1, "m_axi", "RESP", 1),
	Port_Property("m_axi_b_BVALID", 1, hls_in, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_b_BREADY", 1, hls_out, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_b_BRESP", 2, hls_in, 1, "m_axi", "RESP", 1),
	Port_Property("m_axi_b_BID", 1, hls_in, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_b_BUSER", 1, hls_in, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_c_AWVALID", 1, hls_out, 2, "m_axi", "VALID", 1),
	Port_Property("m_axi_c_AWREADY", 1, hls_in, 2, "m_axi", "READY", 1),
	Port_Property("m_axi_c_AWADDR", 32, hls_out, 2, "m_axi", "ADDR", 1),
	Port_Property("m_axi_c_AWID", 1, hls_out, 2, "m_axi", "ID", 1),
	Port_Property("m_axi_c_AWLEN", 8, hls_out, 2, "m_axi", "LEN", 1),
	Port_Property("m_axi_c_AWSIZE", 3, hls_out, 2, "m_axi", "SIZE", 1),
	Port_Property("m_axi_c_AWBURST", 2, hls_out, 2, "m_axi", "BURST", 1),
	Port_Property("m_axi_c_AWLOCK", 2, hls_out, 2, "m_axi", "LOCK", 1),
	Port_Property("m_axi_c_AWCACHE", 4, hls_out, 2, "m_axi", "CACHE", 1),
	Port_Property("m_axi_c_AWPROT", 3, hls_out, 2, "m_axi", "PROT", 1),
	Port_Property("m_axi_c_AWQOS", 4, hls_out, 2, "m_axi", "QOS", 1),
	Port_Property("m_axi_c_AWREGION", 4, hls_out, 2, "m_axi", "REGION", 1),
	Port_Property("m_axi_c_AWUSER", 1, hls_out, 2, "m_axi", "USER", 1),
	Port_Property("m_axi_c_WVALID", 1, hls_out, 2, "m_axi", "VALID", 1),
	Port_Property("m_axi_c_WREADY", 1, hls_in, 2, "m_axi", "READY", 1),
	Port_Property("m_axi_c_WDATA", 32, hls_out, 2, "m_axi", "DATA", 1),
	Port_Property("m_axi_c_WSTRB", 4, hls_out, 2, "m_axi", "STRB", 1),
	Port_Property("m_axi_c_WLAST", 1, hls_out, 2, "m_axi", "LAST", 1),
	Port_Property("m_axi_c_WID", 1, hls_out, 2, "m_axi", "ID", 1),
	Port_Property("m_axi_c_WUSER", 1, hls_out, 2, "m_axi", "USER", 1),
	Port_Property("m_axi_c_ARVALID", 1, hls_out, 2, "m_axi", "VALID", 1),
	Port_Property("m_axi_c_ARREADY", 1, hls_in, 2, "m_axi", "READY", 1),
	Port_Property("m_axi_c_ARADDR", 32, hls_out, 2, "m_axi", "ADDR", 1),
	Port_Property("m_axi_c_ARID", 1, hls_out, 2, "m_axi", "ID", 1),
	Port_Property("m_axi_c_ARLEN", 8, hls_out, 2, "m_axi", "LEN", 1),
	Port_Property("m_axi_c_ARSIZE", 3, hls_out, 2, "m_axi", "SIZE", 1),
	Port_Property("m_axi_c_ARBURST", 2, hls_out, 2, "m_axi", "BURST", 1),
	Port_Property("m_axi_c_ARLOCK", 2, hls_out, 2, "m_axi", "LOCK", 1),
	Port_Property("m_axi_c_ARCACHE", 4, hls_out, 2, "m_axi", "CACHE", 1),
	Port_Property("m_axi_c_ARPROT", 3, hls_out, 2, "m_axi", "PROT", 1),
	Port_Property("m_axi_c_ARQOS", 4, hls_out, 2, "m_axi", "QOS", 1),
	Port_Property("m_axi_c_ARREGION", 4, hls_out, 2, "m_axi", "REGION", 1),
	Port_Property("m_axi_c_ARUSER", 1, hls_out, 2, "m_axi", "USER", 1),
	Port_Property("m_axi_c_RVALID", 1, hls_in, 2, "m_axi", "VALID", 1),
	Port_Property("m_axi_c_RREADY", 1, hls_out, 2, "m_axi", "READY", 1),
	Port_Property("m_axi_c_RDATA", 32, hls_in, 2, "m_axi", "DATA", 1),
	Port_Property("m_axi_c_RLAST", 1, hls_in, 2, "m_axi", "LAST", 1),
	Port_Property("m_axi_c_RID", 1, hls_in, 2, "m_axi", "ID", 1),
	Port_Property("m_axi_c_RUSER", 1, hls_in, 2, "m_axi", "USER", 1),
	Port_Property("m_axi_c_RRESP", 2, hls_in, 2, "m_axi", "RESP", 1),
	Port_Property("m_axi_c_BVALID", 1, hls_in, 2, "m_axi", "VALID", 1),
	Port_Property("m_axi_c_BREADY", 1, hls_out, 2, "m_axi", "READY", 1),
	Port_Property("m_axi_c_BRESP", 2, hls_in, 2, "m_axi", "RESP", 1),
	Port_Property("m_axi_c_BID", 1, hls_in, 2, "m_axi", "ID", 1),
	Port_Property("m_axi_c_BUSER", 1, hls_in, 2, "m_axi", "USER", 1),
	Port_Property("a_offset", 32, hls_in, 3, "ap_none", "in_data", 1),
	Port_Property("b_offset", 32, hls_in, 4, "ap_none", "in_data", 1),
	Port_Property("c_offset", 32, hls_in, 5, "ap_none", "in_data", 1),
	Port_Property("size", 32, hls_in, 6, "ap_none", "in_data", 1),
};
const char* HLS_Design_Meta::dut_name = "mmult_accel";
