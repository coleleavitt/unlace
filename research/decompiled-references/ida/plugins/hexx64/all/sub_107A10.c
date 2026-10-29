unsigned __int64 __fastcall sub_107A10(__m128i *a1, const __m128i *a2, int a3, int a4, __m128i a5)
{
  _QWORD *v6; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // dl
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 *v17; // [rsp+8h] [rbp-70h] BYREF
  __int64 v18; // [rsp+10h] [rbp-68h] BYREF
  __int128 v19; // [rsp+18h] [rbp-60h]
  __m128 v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+38h] [rbp-40h]
  int v22; // [rsp+3Ch] [rbp-3Ch]
  char v23; // [rsp+40h] [rbp-38h]
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]

  v6 = (_QWORD *)a1->m128i_i64[0];
  v24 = __readfsqword(0x28u);
  if ( v6 )
  {
    v8 = 24;
    v9 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v9 )
      goto LABEL_10;
    if ( (*(_BYTE *)v9 & 2) == 0 )
    {
      v10 = a2->m128i_i64[0];
      v11 = a2->m128i_u8[8];
      while ( 1 )
      {
        v12 = *(_BYTE *)(v9 + 56);
        v8 = v9 + 24;
        if ( v11 >= v12 )
        {
          if ( v12 < v11 )
            goto LABEL_20;
          if ( v10 >= *(_QWORD *)(v9 + 48) )
            break;
        }
        v9 = *(_QWORD *)(v9 + 8);
LABEL_14:
        if ( (*(_BYTE *)v9 & 2) != 0 )
          goto LABEL_15;
      }
      if ( v10 <= *(_QWORD *)(v9 + 48) )
      {
        if ( v6 != (_QWORD *)v9 )
          goto LABEL_10;
        goto LABEL_15;
      }
LABEL_20:
      v9 = *(_QWORD *)(v9 + 16);
      goto LABEL_14;
    }
  }
LABEL_15:
  v21 = a3;
  v19 = 0;
  a5 = _mm_loadu_si128(a2);
  v18 = 0;
  v22 = -1;
  v23 = 1;
  v17 = &v18;
  v20 = (__m128)a5;
  v9 = (unsigned __int64)sub_1078B0(a1, (__int64)&v18, &v17);
  v8 = v9 + 24;
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
LABEL_10:
  if ( *(_DWORD *)(v8 + 40) != a3 )
  {
    if ( !under_debugger )
      sub_383060(0xC3E8u, *(double *)a5.m128i_i64);
    BUG();
  }
  if ( a4 != -1 )
  {
    v14 = *(_QWORD *)(v8 + 8);
    v15 = *(_QWORD *)(v9 + 24);
    if ( *(_QWORD *)(v8 + 16) < (unsigned __int64)(v14 + 1) )
    {
      v16 = qvector_reserve(v8, v15, v14 + 1, 4);
      *(_QWORD *)(v9 + 24) = v16;
      v15 = v16;
      v14 = *(_QWORD *)(v8 + 8);
    }
    *(_DWORD *)(v15 + 4 * v14) = a4;
    ++*(_QWORD *)(v8 + 8);
  }
  return v9;
}

