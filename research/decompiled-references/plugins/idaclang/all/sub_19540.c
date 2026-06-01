__int64 __fastcall sub_19540(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128i a4,
        __m128i a5,
        __m128i a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int128 a11,
        __int128 a12)
{
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  const char *v24; // rdx
  const char *v25; // rdi
  const char *v26; // rsi
  __int128 v27; // xmm0
  int v28; // eax
  const char *v29; // [rsp+20h] [rbp-38h] BYREF
  __int64 v30; // [rsp+28h] [rbp-30h]
  unsigned __int64 v31; // [rsp+38h] [rbp-20h]

  v31 = __readfsqword(0x28u);
  v13 = sub_BB20();
  if ( (unsigned int)sub_B760(v13) )
  {
    if ( (*(_BYTE *)(a1 + 108) & 2) == 0 )
      return 1;
    sub_C260((__int64)&v29);
    v26 = s1;
    if ( v30 )
      v26 = v29;
    sub_7470((__int64)"skipping invalid declaration: %s\n", v26);
    v25 = v29;
    if ( !v29 )
      return 1;
    goto LABEL_11;
  }
  v18 = 0;
  if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0 )
  {
    v13 = sub_BB20();
    if ( (unsigned int)sub_B460(v13) == 2 )
      return 1;
  }
  if ( (unsigned __int8)sub_BC70(v13, a2, v14, v15, v16, v17, (__int128)_mm_loadu_si128((const __m128i *)&a11)) )
  {
    if ( (*(_BYTE *)(a1 + 108) & 2) == 0 )
      return 1;
    sub_10160(
      (__int64)&v29,
      a2,
      v20,
      v21,
      v22,
      v23,
      (__int128)_mm_loadu_si128((const __m128i *)&a11),
      (__int128)_mm_loadu_si128((const __m128i *)&a12));
    v24 = s1;
    if ( v30 )
      v24 = v29;
    sub_7470((__int64)"%-12s %s\n", "template", v24);
    v25 = v29;
    if ( !v29 )
      return 1;
LABEL_11:
    v30 = 0;
    qfree(v25);
    return 1;
  }
  v27 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
  v28 = sub_18660(
          nullptr,
          (_QWORD *)a1,
          *(double *)&v27,
          a4,
          a5,
          a6,
          v20,
          v21,
          v22,
          v23,
          (__int128)_mm_loadu_si128((const __m128i *)&a11),
          v27);
  if ( v28 != 1 )
  {
    v18 = 2;
    if ( v28 != 2 )
      return 1;
  }
  return v18;
}
