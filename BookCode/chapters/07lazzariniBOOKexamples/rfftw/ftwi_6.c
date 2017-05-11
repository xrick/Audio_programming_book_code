/*
 * Copyright (c) 1997-1999 Massachusetts Institute of Technology
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
/* Generated on Sun Nov  7 20:44:57 EST 1999 */

#include <fftw-int.h>
#include <fftw.h>

/* Generated by: ./genfft -magic-alignment-check -magic-twiddle-load-all -magic-variables 4 -magic-loopi -twiddleinv 6 */

/*
 * This function contains 46 FP additions, 28 FP multiplications,
 * (or, 32 additions, 14 multiplications, 14 fused multiply/add),
 * 22 stack variables, and 24 memory accesses
 */
static const fftw_real K500000000 = FFTW_KONST(+0.500000000000000000000000000000000000000000000);
static const fftw_real K866025403 = FFTW_KONST(+0.866025403784438646763723170752936183471402627);

/*
 * Generator Id's : 
 * $Id: exprdag.ml,v 1.41 1999/05/26 15:44:14 fftw Exp $
 * $Id: fft.ml,v 1.43 1999/05/17 19:44:18 fftw Exp $
 * $Id: to_c.ml,v 1.25 1999/10/26 21:41:32 stevenj Exp $
 */

void fftwi_twiddle_6(fftw_complex *A, const fftw_complex *W, int iostride, int m, int dist)
{
     int i;
     fftw_complex *inout;
     inout = A;
     for (i = m; i > 0; i = i - 1, inout = inout + dist, W = W + 5) {
	  fftw_real tmp7;
	  fftw_real tmp31;
	  fftw_real tmp50;
	  fftw_real tmp54;
	  fftw_real tmp29;
	  fftw_real tmp33;
	  fftw_real tmp38;
	  fftw_real tmp44;
	  fftw_real tmp18;
	  fftw_real tmp32;
	  fftw_real tmp41;
	  fftw_real tmp45;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp1;
	       fftw_real tmp49;
	       fftw_real tmp6;
	       fftw_real tmp48;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp1 = c_re(inout[0]);
	       tmp49 = c_im(inout[0]);
	       {
		    fftw_real tmp3;
		    fftw_real tmp5;
		    fftw_real tmp2;
		    fftw_real tmp4;
		    ASSERT_ALIGNED_DOUBLE;
		    tmp3 = c_re(inout[3 * iostride]);
		    tmp5 = c_im(inout[3 * iostride]);
		    tmp2 = c_re(W[2]);
		    tmp4 = c_im(W[2]);
		    tmp6 = (tmp2 * tmp3) + (tmp4 * tmp5);
		    tmp48 = (tmp2 * tmp5) - (tmp4 * tmp3);
	       }
	       tmp7 = tmp1 - tmp6;
	       tmp31 = tmp1 + tmp6;
	       tmp50 = tmp48 + tmp49;
	       tmp54 = tmp49 - tmp48;
	  }
	  {
	       fftw_real tmp23;
	       fftw_real tmp36;
	       fftw_real tmp28;
	       fftw_real tmp37;
	       ASSERT_ALIGNED_DOUBLE;
	       {
		    fftw_real tmp20;
		    fftw_real tmp22;
		    fftw_real tmp19;
		    fftw_real tmp21;
		    ASSERT_ALIGNED_DOUBLE;
		    tmp20 = c_re(inout[4 * iostride]);
		    tmp22 = c_im(inout[4 * iostride]);
		    tmp19 = c_re(W[3]);
		    tmp21 = c_im(W[3]);
		    tmp23 = (tmp19 * tmp20) + (tmp21 * tmp22);
		    tmp36 = (tmp19 * tmp22) - (tmp21 * tmp20);
	       }
	       {
		    fftw_real tmp25;
		    fftw_real tmp27;
		    fftw_real tmp24;
		    fftw_real tmp26;
		    ASSERT_ALIGNED_DOUBLE;
		    tmp25 = c_re(inout[iostride]);
		    tmp27 = c_im(inout[iostride]);
		    tmp24 = c_re(W[0]);
		    tmp26 = c_im(W[0]);
		    tmp28 = (tmp24 * tmp25) + (tmp26 * tmp27);
		    tmp37 = (tmp24 * tmp27) - (tmp26 * tmp25);
	       }
	       tmp29 = tmp23 - tmp28;
	       tmp33 = tmp23 + tmp28;
	       tmp38 = tmp36 - tmp37;
	       tmp44 = tmp36 + tmp37;
	  }
	  {
	       fftw_real tmp12;
	       fftw_real tmp39;
	       fftw_real tmp17;
	       fftw_real tmp40;
	       ASSERT_ALIGNED_DOUBLE;
	       {
		    fftw_real tmp9;
		    fftw_real tmp11;
		    fftw_real tmp8;
		    fftw_real tmp10;
		    ASSERT_ALIGNED_DOUBLE;
		    tmp9 = c_re(inout[2 * iostride]);
		    tmp11 = c_im(inout[2 * iostride]);
		    tmp8 = c_re(W[1]);
		    tmp10 = c_im(W[1]);
		    tmp12 = (tmp8 * tmp9) + (tmp10 * tmp11);
		    tmp39 = (tmp8 * tmp11) - (tmp10 * tmp9);
	       }
	       {
		    fftw_real tmp14;
		    fftw_real tmp16;
		    fftw_real tmp13;
		    fftw_real tmp15;
		    ASSERT_ALIGNED_DOUBLE;
		    tmp14 = c_re(inout[5 * iostride]);
		    tmp16 = c_im(inout[5 * iostride]);
		    tmp13 = c_re(W[4]);
		    tmp15 = c_im(W[4]);
		    tmp17 = (tmp13 * tmp14) + (tmp15 * tmp16);
		    tmp40 = (tmp13 * tmp16) - (tmp15 * tmp14);
	       }
	       tmp18 = tmp12 - tmp17;
	       tmp32 = tmp12 + tmp17;
	       tmp41 = tmp39 - tmp40;
	       tmp45 = tmp39 + tmp40;
	  }
	  {
	       fftw_real tmp42;
	       fftw_real tmp30;
	       fftw_real tmp35;
	       fftw_real tmp53;
	       fftw_real tmp55;
	       fftw_real tmp56;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp42 = K866025403 * (tmp38 - tmp41);
	       tmp30 = tmp18 + tmp29;
	       tmp35 = tmp7 - (K500000000 * tmp30);
	       c_re(inout[3 * iostride]) = tmp7 + tmp30;
	       c_re(inout[iostride]) = tmp35 + tmp42;
	       c_re(inout[5 * iostride]) = tmp35 - tmp42;
	       tmp53 = K866025403 * (tmp18 - tmp29);
	       tmp55 = tmp41 + tmp38;
	       tmp56 = tmp54 - (K500000000 * tmp55);
	       c_im(inout[iostride]) = tmp53 + tmp56;
	       c_im(inout[5 * iostride]) = tmp56 - tmp53;
	       c_im(inout[3 * iostride]) = tmp55 + tmp54;
	  }
	  {
	       fftw_real tmp46;
	       fftw_real tmp34;
	       fftw_real tmp43;
	       fftw_real tmp52;
	       fftw_real tmp47;
	       fftw_real tmp51;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp46 = K866025403 * (tmp44 - tmp45);
	       tmp34 = tmp32 + tmp33;
	       tmp43 = tmp31 - (K500000000 * tmp34);
	       c_re(inout[0]) = tmp31 + tmp34;
	       c_re(inout[4 * iostride]) = tmp43 + tmp46;
	       c_re(inout[2 * iostride]) = tmp43 - tmp46;
	       tmp52 = K866025403 * (tmp32 - tmp33);
	       tmp47 = tmp45 + tmp44;
	       tmp51 = tmp50 - (K500000000 * tmp47);
	       c_im(inout[0]) = tmp47 + tmp50;
	       c_im(inout[4 * iostride]) = tmp52 + tmp51;
	       c_im(inout[2 * iostride]) = tmp51 - tmp52;
	  }
     }
}

static const int twiddle_order[] =
{1, 2, 3, 4, 5};
fftw_codelet_desc fftwi_twiddle_6_desc =
{
     "fftwi_twiddle_6",
     (void (*)()) fftwi_twiddle_6,
     6,
     FFTW_BACKWARD,
     FFTW_TWIDDLE,
     143,
     5,
     twiddle_order,
};
