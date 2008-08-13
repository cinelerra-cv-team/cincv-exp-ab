/*
 * Copyright (c) 2003 Matteo Frigo
 * Copyright (c) 2003 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Sat Jul  5 21:40:25 EDT 2003 */

#include "codelet-dft.h"

/* Generated by: /homee/stevenj/cvs/fftw3.0.1/genfft/gen_notw_c -simd -compact -variables 4 -n 3 -name n2fv_3 -with-ostride 2 -include n2f.h */

/*
 * This function contains 6 FP additions, 2 FP multiplications,
 * (or, 5 additions, 1 multiplications, 1 fused multiply/add),
 * 11 stack variables, and 6 memory accesses
 */
/*
 * Generator Id's : 
 * $Id: algsimp.ml,v 1.7 2003/03/15 20:29:42 stevenj Exp $
 * $Id: fft.ml,v 1.2 2003/03/15 20:29:42 stevenj Exp $
 * $Id: gen_notw_c.ml,v 1.9 2003/04/16 21:21:53 athena Exp $
 */

#include "n2f.h"

static void n2fv_3(const R *ri, const R *ii, R *ro, R *io, stride is, stride os, int v, int ivs, int ovs)
{
     DVK(KP500000000, +0.500000000000000000000000000000000000000000000);
     DVK(KP866025403, +0.866025403784438646763723170752936183471402627);
     int i;
     const R *xi;
     R *xo;
     xi = ri;
     xo = ro;
     BEGIN_SIMD();
     for (i = v; i > 0; i = i - VL, xi = xi + (VL * ivs), xo = xo + (VL * ovs)) {
	  V T1, T4, T6, T2, T3, T5;
	  T1 = LD(&(xi[0]), ivs, &(xi[0]));
	  T2 = LD(&(xi[WS(is, 1)]), ivs, &(xi[WS(is, 1)]));
	  T3 = LD(&(xi[WS(is, 2)]), ivs, &(xi[0]));
	  T4 = VADD(T2, T3);
	  T6 = VBYI(VMUL(LDK(KP866025403), VSUB(T3, T2)));
	  ST(&(xo[0]), VADD(T1, T4), ovs, &(xo[0]));
	  T5 = VFNMS(LDK(KP500000000), T4, T1);
	  ST(&(xo[4]), VSUB(T5, T6), ovs, &(xo[0]));
	  ST(&(xo[2]), VADD(T5, T6), ovs, &(xo[2]));
     }
     END_SIMD();
}

static const kdft_desc desc = { 3, "n2fv_3", {5, 1, 1, 0}, &GENUS, 0, 2, 0, 0 };
void X(codelet_n2fv_3) (planner *p) {
     X(kdft_register) (p, n2fv_3, &desc);
}
