unsigned __int64 __fastcall sub_41670(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 **v7; // rdi
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  bool v10; // zf
  __int64 **v11; // rdi
  int v13; // [rsp+0h] [rbp-48h] BYREF
  int v14; // [rsp+4h] [rbp-44h] BYREF
  int v15; // [rsp+8h] [rbp-40h] BYREF
  int v16; // [rsp+Ch] [rbp-3Ch] BYREF
  __m128i v17; // [rsp+10h] [rbp-38h] BYREF
  __m128i v18; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-10h]

  v7 = *(__int64 ***)(a1 + 616);
  v16 = a3;
  v15 = a4;
  v14 = a5;
  v13 = a6;
  v19 = __readfsqword(0x28u);
  v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v15, (__m128i)(unsigned __int64)&v13);
  v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v16, (__m128i)(unsigned __int64)&v14);
  if ( v7 )
  {
    v10 = *(_WORD *)(a2 + 26) == 4;
    v17 = v9;
    v18 = v8;
    if ( !v10 || (sub_407D0((__int64)&v17, (__int64)&v18, 2), (v7 = *(__int64 ***)(a1 + 616)) != nullptr) )
    {
      sub_1B520(v7, v16, v16, v15);
      if ( v13 != -1 )
      {
        v11 = *(__int64 ***)(a1 + 616);
        if ( v11 )
          sub_1B520(v11, v14, v14, v13);
      }
    }
  }
  return v19 - __readfsqword(0x28u);
}
