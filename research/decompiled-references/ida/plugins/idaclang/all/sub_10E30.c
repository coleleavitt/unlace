__int64 __fastcall sub_10E30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rax
  const char *v9; // rdx
  __int64 v10; // rax
  __int64 *v12; // rbx
  const char *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  const char *v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]
  unsigned __int64 v22; // [rsp+38h] [rbp-10h]

  v8 = *(_QWORD *)(a1 + 8);
  v22 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(v8 + 108) & 2) != 0 )
  {
    sub_10160(
      (__int64)&v19,
      a2,
      a3,
      a4,
      a5,
      a6,
      (__int128)_mm_loadu_si128((const __m128i *)&a7),
      (__int128)_mm_loadu_si128((const __m128i *)&a8));
    v9 = s1;
    if ( v20 )
      v9 = v19;
    sub_7470((__int64)"%-12s %s\n", "attribute", v9);
    if ( v19 )
    {
      v20 = 0;
      qfree(v19);
    }
  }
  v10 = sub_BB20();
  if ( (unsigned int)sub_A170(v10) == 406 )
  {
    sub_C260((__int64)&v19);
    v12 = *(__int64 **)a1;
    v13 = v19;
    if ( v12 )
    {
      v14 = v12[1];
      v15 = *v12;
      if ( v12[2] < (unsigned __int64)(v14 + 1) )
      {
        v18 = qvector_reserve(v12, v15, v14 + 1, 24);
        *v12 = v18;
        v14 = v12[1];
        v15 = v18;
      }
      v16 = v15 + 24 * v14;
      *(_OWORD *)(v16 + 8) = 0;
      *(_QWORD *)v16 = 0;
      ++v12[1];
      v13 = *(const char **)v16;
      v17 = *(_QWORD *)(v16 + 16);
      *(_QWORD *)v16 = v19;
      *(_QWORD *)(v16 + 8) = v20;
      *(_QWORD *)(v16 + 16) = v21;
      v19 = v13;
      v21 = v17;
    }
    if ( v13 )
    {
      v20 = 0;
      qfree(v13);
    }
  }
  return 1;
}

