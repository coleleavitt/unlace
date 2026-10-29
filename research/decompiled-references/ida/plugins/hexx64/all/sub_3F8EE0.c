unsigned __int64 __fastcall sub_3F8EE0(__int64 a1, double a2, double a3, __m128 a4)
{
  int v4; // r13d
  __int64 v6; // rdi
  int v7; // eax
  int v8; // edx
  unsigned __int8 v9; // r10
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // r8
  __m128 v13; // xmm1
  __m128i v14; // xmm0
  __int64 v15; // r9
  unsigned __int64 *v16; // rsi
  unsigned __int8 v18[16]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v19[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v4 = 8;
  v6 = a1 + 24;
  v7 = *(_DWORD *)(a1 + 52);
  v20 = __readfsqword(0x28u);
  v8 = v7 & 0x1018;
  if ( v8 != 4112 )
  {
    if ( (v7 & 0x1008) == 0 || (v4 = 2, v8 == 4104) )
      v4 = 4;
  }
  v10 = sub_3ECD50(v6);
  v11 = *(_QWORD *)(a1 + 832);
  v12 = *(int *)(v11 + 60);
  v13 = (__m128)_mm_cvtsi32_si128(v12);
  v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), (__m128i)v13);
  sub_3F7E20(a1, 2u, v9, *(int *)(v11 + 56), v12, v15, v14, v13, a4, v4);
  v16 = *(unsigned __int64 **)(a1 + 832);
  *(_DWORD *)v18 = 1;
  *(_QWORD *)&v18[4] = v14.m128i_i64[0];
  v19[0] = 0xFFFFFFFF00000000LL;
  v19[1] = 0;
  sub_120A10((__int64)v19, v16, v10, v4, -1, 0);
  sub_1D6450(a1, 12, (unsigned __int8 *)v19, v18, v18, v14, v13, a4);
  sub_11CDA0((__int64)v19);
  sub_11CDA0((__int64)v18);
  return v20 - __readfsqword(0x28u);
}

