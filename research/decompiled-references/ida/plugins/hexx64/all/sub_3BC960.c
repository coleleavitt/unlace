void __fastcall sub_3BC960(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  bool v14; // zf
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  const char *v21; // rcx
  __m128i v22; // [rsp+0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+10h] [rbp-38h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v14 = *(_DWORD *)(a3 + 80) == 1;
  v24 = __readfsqword(0x28u);
  if ( v14 )
  {
    v17 = *(_QWORD *)(a3 + 88);
    v18 = *(_QWORD *)(a3 + 32);
    v22 = 0;
    if ( (unsigned __int8)sub_20C200(v18, &v22, v17, (__m128i)0LL, a6, a7) )
    {
      v21 = "Split variable...";
      if ( *(_DWORD *)(*(_QWORD *)(a3 + 88) + 8LL) == 65 )
        v21 = "Split variable";
      callui(140, "hx:SplitVar", 1, v21, v19, v20, v22.m128i_i64[0], v22.m128i_i64[1], v23, v24);
      callui(131, a1, a2, "hx:SplitVar", 0, 0, v22.m128i_i64[0], v22.m128i_i64[1], v23, v24);
    }
  }
  if ( a4 )
  {
    if ( (*(_BYTE *)(a4 + 26) & 1) != 0 )
      callui(131, a1, a2, "hx:UnsplitVar", 0, 0, a10, a11, a12, a13);
  }
}

