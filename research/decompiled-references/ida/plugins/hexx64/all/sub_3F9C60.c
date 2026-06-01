unsigned __int64 __fastcall sub_3F9C60(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        char a5,
        __m128i a6,
        __m128 a7,
        __m128 a8)
{
  bool v11; // zf
  unsigned int v13; // edi
  int dtype_size; // r14d
  _QWORD v16[2]; // [rsp+0h] [rbp-60h] BYREF
  _DWORD v17[6]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-38h]

  v11 = *(_WORD *)(a1 + 48) == 92;
  v18 = __readfsqword(0x28u);
  if ( !v11 )
    sub_3EFB80(a1, (unsigned __int8 *)a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL), *(double *)a6.m128i_i64);
  if ( !a4 )
    return v18 - __readfsqword(0x28u);
  v13 = (unsigned __int8)sub_3EE260(a1 + 24);
  if ( a5 )
  {
    v16[1] = 0;
    v16[0] = 0xFFFFFFFF00000000LL;
    dtype_size = get_dtype_size();
    sub_120BF0(
      (__int64)v16,
      *(_QWORD *)(a1 + 800),
      *(_QWORD *)(a1 + 40),
      (unsigned __int8 *)a2,
      *(_QWORD *)(a2 + 16),
      dtype_size,
      a6,
      0,
      -1);
    v17[0] = 1;
    v17[1] = dtype_size;
    v17[2] = a3;
    sub_1D6450(a1, 12, (unsigned __int8 *)v16, (unsigned __int8 *)v17, (unsigned __int8 *)v17, a6, a7, a8);
    sub_11CDA0((__int64)v17);
    sub_11CDA0((__int64)v16);
    return v18 - __readfsqword(0x28u);
  }
  return sub_3F9B20(a1, (unsigned __int8 *)a2, v13, *(_QWORD *)(a2 + 16), a3, a6, a7, a8);
}

