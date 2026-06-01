unsigned __int64 __fastcall sub_3F9B20(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __m128i a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // r12
  int v10; // r15d
  int v12; // r14d
  int dtype_size; // eax
  _QWORD v14[2]; // [rsp+10h] [rbp-60h] BYREF
  _DWORD v15[6]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-38h]

  v9 = a5;
  v16 = __readfsqword(0x28u);
  if ( (unsigned __int8)(a2[1] - 6) <= 1u )
  {
    v12 = *a2;
    dtype_size = get_dtype_size();
    sub_1D6310(a1, 3u, dtype_size, a4, 0x3BEA45E214ADDC55LL, v9, *(double *)a6.m128i_i64, v12);
  }
  else
  {
    v14[1] = 0;
    v14[0] = 0xFFFFFFFF00000000LL;
    v10 = get_dtype_size();
    sub_120BF0((__int64)v14, *(_QWORD *)(a1 + 800), *(_QWORD *)(a1 + 40), a2, a4, v10, a6, 0, -1);
    v15[0] = 1;
    v15[2] = v9;
    v15[1] = v10;
    sub_1D6450(a1, 4, (unsigned __int8 *)v14, nullptr, (unsigned __int8 *)v15, a6, a7, a8);
    sub_11CDA0((__int64)v15);
    sub_11CDA0((__int64)v14);
  }
  return v16 - __readfsqword(0x28u);
}

