unsigned __int64 __fastcall sub_102E50(__m128i *a1, const __m128i *a2, int a3, int a4)
{
  _QWORD *v5; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // dl
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 *v17; // [rsp+8h] [rbp-70h] BYREF
  __int64 v18; // [rsp+10h] [rbp-68h] BYREF
  __int128 v19; // [rsp+18h] [rbp-60h]
  __m128i v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+38h] [rbp-40h]
  int v22; // [rsp+3Ch] [rbp-3Ch]
  char v23; // [rsp+40h] [rbp-38h]
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]

  v5 = (_QWORD *)a1->m128i_i64[0];
  v24 = __readfsqword(0x28u);
  if ( v5 )
  {
    v7 = 24;
    v8 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v8 )
      goto LABEL_10;
    if ( (*(_BYTE *)v8 & 2) == 0 )
    {
      v9 = a2->m128i_i64[0];
      v10 = a2->m128i_u8[8];
      while ( 1 )
      {
        v11 = *(_BYTE *)(v8 + 56);
        v7 = v8 + 24;
        if ( v10 >= v11 )
        {
          if ( v11 < v10 )
            goto LABEL_20;
          if ( v9 >= *(_QWORD *)(v8 + 48) )
            break;
        }
        v8 = *(_QWORD *)(v8 + 8);
LABEL_14:
        if ( (*(_BYTE *)v8 & 2) != 0 )
          goto LABEL_15;
      }
      if ( v9 <= *(_QWORD *)(v8 + 48) )
      {
        if ( v5 != (_QWORD *)v8 )
          goto LABEL_10;
        goto LABEL_15;
      }
LABEL_20:
      v8 = *(_QWORD *)(v8 + 16);
      goto LABEL_14;
    }
  }
LABEL_15:
  v21 = a3;
  v19 = 0;
  v13 = _mm_loadu_si128(a2);
  v18 = 0;
  v22 = -1;
  v23 = 1;
  v17 = &v18;
  v20 = v13;
  v8 = sub_102CF0(a1, (__int64)&v18, &v17);
  v7 = v8 + 24;
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
LABEL_10:
  if ( *(_DWORD *)(v7 + 40) != a3 )
  {
    if ( !under_debugger )
      sub_37CFE0(50152);
    BUG();
  }
  if ( a4 != -1 )
  {
    v14 = *(_QWORD *)(v7 + 8);
    v15 = *(_QWORD *)(v8 + 24);
    if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v14 + 1) )
    {
      v16 = qvector_reserve();
      *(_QWORD *)(v8 + 24) = v16;
      v15 = v16;
      v14 = *(_QWORD *)(v7 + 8);
    }
    *(_DWORD *)(v15 + 4 * v14) = a4;
    ++*(_QWORD *)(v7 + 8);
  }
  return v8;
}

