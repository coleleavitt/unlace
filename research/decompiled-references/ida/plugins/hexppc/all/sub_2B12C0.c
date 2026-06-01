__int64 __fastcall sub_2B12C0(__int64 a1, __int64 a2, __m128i *a3, int a4, int a5, __int64 a6, __m128i a7)
{
  unsigned __int64 v11; // rsi
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v16; // rsi
  unsigned int v17; // eax
  unsigned int v18; // edx
  __m128i v19; // [rsp+0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+10h] [rbp-68h]
  __int64 v21; // [rsp+18h] [rbp-60h]
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+30h] [rbp-48h]
  char v25; // [rsp+34h] [rbp-44h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v11 = a3->m128i_u64[1];
  v26 = __readfsqword(0x28u);
  if ( a4 > 120 )
  {
    v13 = *(_QWORD *)(a1 + 112);
    v14 = _mm_loadl_epi64(a3);
    v25 = 0;
    v21 = v13;
    v19 = _mm_unpacklo_epi64(v14, (__m128i)v11);
    v22 = a6;
    v20 = 0;
    v23 = 0;
    v24 = (a4 != 121) + 10;
    sub_7A390(a2, (__int64)&v19);
    a7 = _mm_load_si128(&v19);
    *a3 = a7;
    if ( !a5 )
      return 1;
    goto LABEL_10;
  }
  if ( a4 > 117 )
  {
    if ( a3->m128i_i64[0] < v11 && !*(_BYTE *)a3->m128i_i64[0] )
    {
      cleanup_argloc();
      *(_DWORD *)a2 = 1;
      *(_QWORD *)(a2 + 8) = 0;
      ++a3->m128i_i64[0];
      goto LABEL_8;
    }
    if ( (unsigned __int8)extract_argloc() )
    {
LABEL_8:
      v16 = a6;
      goto LABEL_9;
    }
LABEL_18:
    sub_69660((__int64)"%a: encountered illegal lvar locator, skipping...\n", *(double *)a7.m128i_i64);
    return 0;
  }
  v17 = unpack_dd();
  v18 = v17 & 0xC0000000;
  if ( (v17 & 0xC0000000) == 0x80000000 )
  {
    *(_DWORD *)a2 = 3;
    *(_DWORD *)(a2 + 8) = v17 & 0x7FFFFFFF;
  }
  else if ( v18 == -1073741824 )
  {
    *(_DWORD *)a2 = 4;
    *(_DWORD *)(a2 + 8) = (2 * v17) & 0x7FFF0000 | v17 & 0x7FFF;
  }
  else
  {
    if ( v18 )
      goto LABEL_18;
    *(_DWORD *)a2 = 1;
    *(_QWORD *)(a2 + 8) = v17;
  }
  if ( a4 > 112 )
    goto LABEL_8;
  v16 = 0;
LABEL_9:
  *(_QWORD *)(a2 + 16) = sub_32DF80(a3, v16);
  sub_335710(*(_QWORD *)(a1 + 112), a2, (unsigned int)a4);
  if ( !a5 )
    return 1;
LABEL_10:
  if ( sub_2A9840((int *)a2, a5) )
    return 1;
  sub_69660(
    (__int64)"%a: lvar locator (virtual register in a pair) cannot be imported, skipping...\n",
    *(double *)a7.m128i_i64);
  return 0;
}

