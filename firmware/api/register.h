//
// iceZ0mb1e - FPGA 8-Bit TV80 SoC for Lattice iCE40
// with complete open-source toolchain flow using yosys and SDCC
//
// Copyright (c) 2018 Franz Neumann (netinside2000@gmx.de)
//
// Permission is hereby granted, free of charge, to any person obtaining a 
// copy of this software and associated documentation files (the "Software"), 
// to deal in the Software without restriction, including without limitation 
// the rights to use, copy, modify, merge, publish, distribute, sublicense, 
// and/or sell copies of the Software, and to permit persons to whom the 
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included 
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY 
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#ifndef __REGISTER_H
#define __REGISTER_H

#define XTAL_FREQ 12E6

#define uart_dm0 0x18
#define uart_thr 0x18
#define uart_rbr 0x18
#define uart_dm1 0x19
#define uart_iir 0x1a
#define uart_lcr 0x1b
#define uart_mcr 0x1c
#define uart_lsr 0x1d
#define uart_msr 0x1e
#define uart_scr 0x1f

#define port_a   0x40
#define port_b   0x41
#define port_cfg 0x42

#define i2c_status  0x50
#define i2c_cmd     0x53
#define i2c_dat_in  0x54
#define i2c_dat_out 0x55

#define spi_status  0x60
#define spi_cfg     0x61
#define spi_cmd     0x63
#define spi_dat_in  0x64
#define spi_dat_out 0x65

#endif
