unsigned __int64 __fastcall sub_3F8D40(__int64 a1, int a2, unsigned __int8 a3, __m128i a4, __m128 a5, __m128 a6)
{
  int v7; // ebx
  unsigned int v8; // r14d
  int v9; // r13d
  __int64 v10; // r8
  int v11; // r9d
  unsigned __int64 *v12; // r11
  _DWORD *v13; // rax
  int v14; // r15d
  unsigned int v15; // eax
  __m128 v16; // xmm1
  __m128i v17; // xmm0
  __int64 v19; // rdx
  char v20; // r10
  signed int v21; // [rsp+0h] [rbp-70h]
  unsigned __int8 v22; // [rsp+7h] [rbp-69h]
  _QWORD v23[2]; // [rsp+10h] [rbp-60h] BYREF
  unsigned __int8 v24[24]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-38h]

  v7 = a2;
  v22 = a3;
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
  v25 = __readfsqword(0x28u);
  v23[1] = 0;
  v23[0] = 0xFFFFFFFF00000000LL;
  v9 = sub_3ECD50(a1 + 24);
  sub_120A10((__int64)v23, v12, v9, v8, v10, v11);
  v13 = *(_DWORD **)(a1 + 832);
  if ( v9 != 2 && v13[120] <= a2 && v13[122] >= a2 )
  {
    v19 = 7;
    v20 = 7;
    if ( v9 == 4 )
    {
      v19 = 2;
      v20 = 2;
    }
    v22 = v20;
    sub_1D6840(a1, a3, v19, a2, v13[114], 0, a4, a5, a6);
    v13 = *(_DWORD **)(a1 + 832);
    v7 = v13[114];
  }
  v14 = v13[14];
  v15 = v13[15];
  v16 = (__m128)_mm_cvtsi32_si128(v15);
  *(_DWORD *)v24 = 1;
  v17 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), (__m128i)v16);
  v21 = v15;
  *(_QWORD *)&v24[4] = v17.m128i_i64[0];
  sub_1D6450(a1, 13, v24, (unsigned __int8 *)v23, v24, v17, v16, a6);
  sub_3F7E20(a1, 1u, v22, v7, v14, v21, v17, v16, a6, v8);
  sub_11CDA0((__int64)v24);
  sub_11CDA0((__int64)v23);
  return v25 - __readfsqword(0x28u);
}

