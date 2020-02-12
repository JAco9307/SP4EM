//Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
//Date        : Wed Feb 12 10:18:23 2020
//Host        : LAPTOP-BQHMU89N running 64-bit major release  (build 9200)
//Command     : generate_target design_1_wrapper.bd
//Design      : design_1_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module design_1_wrapper
   (btns_5bits_tri_i,
    leds_8bits_0_tri_o,
    sws_8bits_tri_i);
  input [4:0]btns_5bits_tri_i;
  output [7:0]leds_8bits_0_tri_o;
  input [7:0]sws_8bits_tri_i;

  wire [4:0]btns_5bits_tri_i;
  wire [7:0]leds_8bits_0_tri_o;
  wire [7:0]sws_8bits_tri_i;

  design_1 design_1_i
       (.btns_5bits_tri_i(btns_5bits_tri_i),
        .leds_8bits_0_tri_o(leds_8bits_0_tri_o),
        .sws_8bits_tri_i(sws_8bits_tri_i));
endmodule
