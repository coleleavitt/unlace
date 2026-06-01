__int64 __fastcall sub_3B87E0(
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
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  const char *v22; // rcx
  __m128i v23; // [rsp+0h] [rbp-48h] BYREF
  __int64 v24; // [rsp+10h] [rbp-38h]
  unsigned __int64 v25; // [rsp+18h] [rbp-30h]

  v14 = *(_DWORD *)(a3 + 80) == 1;
  v25 = __readfsqword(0x28u);
  if ( v14 )
  {
    v18 = *(_QWORD *)(a3 + 88);
    v19 = *(_QWORD *)(a3 + 32);
    v23 = 0;
    if ( (unsigned __int8)sub_208580(v19, &v23, v18, (__m128i)0LL, a6, a7) )
    {
      v22 = "Split variable...";
      if ( *(_DWORD *)(*(_QWORD *)(a3 + 88) + 8LL) == 65 )
        v22 = "Split variable";
      callui(140, "hx:SplitVar", 1, v22, v20, v21, v23.m128i_i64[0], v23.m128i_i64[1], v24, v25);
      callui(131, a1, a2, "hx:SplitVar", 0, 0, v23.m128i_i64[0], v23.m128i_i64[1], v24, v25);
    }
  }
  if ( a4 && (*(_BYTE *)(a4 + 26) & 1) != 0 )
    return callui(131, a1, a2, "hx:UnsplitVar", 0, 0, a10, a11, a12, a13);
  else
    return v25 - __readfsqword(0x28u);
}

