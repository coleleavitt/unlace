__int64 __fastcall sub_3ECE40(_QWORD *a1, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __int64 v9; // rcx
  char v10; // al
  __int64 v12; // r15
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // [rsp+8h] [rbp-70h]
  unsigned __int8 v17[16]; // [rsp+10h] [rbp-68h] BYREF
  int v18; // [rsp+20h] [rbp-58h] BYREF
  int v19; // [rsp+24h] [rbp-54h]
  _QWORD *v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  LODWORD(v5) = *(_DWORD *)(a2 + 32);
  v21 = __readfsqword(0x28u);
  if ( (_DWORD)v5 == 12 )
  {
    v15 = *(_QWORD *)(a1[100] + 8LL);
    if ( (unsigned __int8)getinf() )
      LODWORD(v5) = (unsigned __int8)getinf();
    else
      v5 = *(_QWORD *)(v15 + 120);
  }
  v6 = a1[104];
  *(_QWORD *)v17 = 1;
  v7 = _mm_cvtsi32_si128(*(_DWORD *)(v6 + 464));
  v8 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), v7);
  *(_QWORD *)&v17[4] = v8.m128i_i64[0];
  if ( (unsigned __int8)has_insn_feature() )
  {
    sub_1D6450((__int64)a1, 60, nullptr, nullptr, v17, v8, (__m128)v7, a5);
  }
  else
  {
    v12 = a1[1];
    v13 = *(_QWORD *)(v12 + 144);
    v18 = 5;
    v16 = v13;
    v14 = (_QWORD *)j__qalloc_or_throw(16, 2, v13, v9);
    *v14 = v12;
    v14[1] = v16;
    v20 = v14;
    v19 = v5;
    sub_1D6450((__int64)a1, 4, (unsigned __int8 *)&v18, nullptr, v17, v8, (__m128)v7, a5);
    sub_11CDA0((__int64)&v18);
  }
  v10 = *(_BYTE *)(a2 + 16);
  v18 = 1;
  LODWORD(v20) = 8;
  v19 = 4 * ((v10 & 0xF) != 4) + 4;
  sub_1D6450(
    (__int64)a1,
    (unsigned int)((v10 & 0x30) == 32) + 63,
    v17,
    nullptr,
    (unsigned __int8 *)&v18,
    v8,
    (__m128)v7,
    a5);
  sub_11CDA0((__int64)&v18);
  sub_11CDA0((__int64)v17);
  return 0;
}

