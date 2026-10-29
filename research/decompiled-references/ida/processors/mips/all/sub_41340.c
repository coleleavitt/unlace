unsigned __int64 __fastcall sub_41340(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // eax
  bool v13; // zf
  __int16 v14; // r13
  int v15; // r10d
  int v16; // esi
  int v17; // edi
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  int v21; // [rsp+8h] [rbp-80h] BYREF
  int v22; // [rsp+Ch] [rbp-7Ch] BYREF
  int v23; // [rsp+10h] [rbp-78h] BYREF
  int v24; // [rsp+14h] [rbp-74h] BYREF
  int v25; // [rsp+18h] [rbp-70h] BYREF
  int v26; // [rsp+1Ch] [rbp-6Ch] BYREF
  __m128i v27; // [rsp+20h] [rbp-68h] BYREF
  int *v28; // [rsp+30h] [rbp-58h]
  __m128i v29; // [rsp+40h] [rbp-48h] BYREF
  int *v30; // [rsp+50h] [rbp-38h]
  unsigned __int64 v31; // [rsp+58h] [rbp-30h]

  v9 = a4;
  v13 = *(_QWORD *)(a1 + 616) == 0;
  v14 = *(_WORD *)(a2 + 24);
  v31 = __readfsqword(0x28u);
  v15 = a9;
  v16 = a7;
  v17 = a8;
  v21 = a4;
  v22 = a5;
  v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v22, (__m128i)(unsigned __int64)&v24);
  v23 = a6;
  v24 = a7;
  v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v21, (__m128i)(unsigned __int64)&v23);
  v25 = a8;
  v26 = a9;
  if ( !v13 )
  {
    v13 = *(_WORD *)(a2 + 26) == 4;
    v27 = v19;
    v28 = &v25;
    v30 = &v26;
    v29 = v18;
    if ( v13 )
    {
      sub_407D0((__int64)&v27, (__int64)&v29, 3);
      v15 = v26;
      v17 = v25;
      v16 = v24;
      a6 = v23;
      a5 = v22;
      v9 = v21;
    }
    sub_1B6E0(a1, a2, v14, a3, v9, a5, a6, v16, v17, v15);
  }
  return v31 - __readfsqword(0x28u);
}

