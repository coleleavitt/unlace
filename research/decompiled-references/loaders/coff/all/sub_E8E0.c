__int64 __fastcall sub_E8E0(__m128i *a1, __int64 a2, unsigned __int16 *a3, char a4)
{
  unsigned __int64 v5; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  void *v12; // rcx
  const __m128i *v13; // rax
  const __m128i *v14; // r15
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v19; // rdx
  unsigned __int32 v20; // eax
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  const __m128i *v24; // rax
  const __m128i *v25; // r15
  const __m128i *v26; // rax
  const __m128i *v27; // r15
  int *v28; // rax
  int *v29; // r14
  __int64 v30; // rdi
  unsigned int v31; // eax
  unsigned int v32; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v33; // [rsp+8h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  a1[1].m128i_i64[0] = 0;
  a1[2].m128i_i64[1] = 0;
  a1[4].m128i_i64[0] = 0;
  v5 = *a3;
  if ( (((_WORD)v5 - 387) & 0xFFFD) == 0 )
    return 0;
  if ( a4 )
  {
    LOWORD(v5) = v5 - 320;
    if ( (unsigned __int16)v5 <= 0x23u )
    {
      v19 = 0x900000001LL;
      if ( _bittest64(&v19, v5) )
        return 0;
    }
  }
  else if ( (v5 & 0xFFDF) == 0x142 )
  {
    return 0;
  }
  v9 = *((_QWORD *)a3 + 2);
  if ( v9 && *((_DWORD *)a3 + 2) )
  {
    qlseek(*(_QWORD *)(a1->m128i_i64[0] + 8), *(_QWORD *)(a1->m128i_i64[0] + 16) + (int)v9, 0);
    v10 = *a3;
    v11 = *((unsigned int *)a3 + 2);
    if ( a4 || (unsigned __int16)(v10 - 352) > 1u )
    {
      if ( (a3[1] & 2) != 0 )
      {
        v26 = (const __m128i *)sub_5C00(a2, 20, v11);
        v27 = v26;
        if ( v26 )
        {
          sub_8B70(a1, v26, *((_DWORD *)a3 + 2), a4);
          qfree(v27);
        }
      }
      else
      {
        LOWORD(v10) = v10 - 487;
        if ( (unsigned __int16)v10 <= 0x10u && (v12 = &loc_10101, _bittest64((const __int64 *)&v12, v10)) )
        {
          v13 = (const __m128i *)sub_5C00(a2, 18, v11);
          v14 = v13;
          if ( v13 )
          {
            sub_89D0(a1, v13, *((_DWORD *)a3 + 2), a4);
            qfree(v14);
          }
        }
        else
        {
          v24 = (const __m128i *)sub_5C00(a2, 18, v11);
          v25 = v24;
          if ( v24 )
          {
            sub_8870(a1, v24, *((_DWORD *)a3 + 2), a4);
            qfree(v25);
          }
        }
      }
    }
    else
    {
      v28 = (int *)sub_5C00(a2, 24, v11);
      v29 = v28;
      if ( v28 )
      {
        sub_8CE0(a1, v28, *((_DWORD *)a3 + 2), 0);
        qfree(v29);
      }
    }
    v15 = a1[4].m128i_u64[0];
    if ( v15 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = a1[3].m128i_i64[1] + 24 * v16;
        if ( !*(_DWORD *)v17 )
          break;
        v16 += *(unsigned __int8 *)(v17 + 23) + 1LL;
        if ( v16 >= v15 )
          return 1;
      }
      if ( qlread(a2, &v32, 4) == 4 )
      {
        v20 = v32;
        if ( a4 )
        {
          v20 = _byteswap_ulong(v32);
          v32 = v20;
        }
        if ( v20 > 4 )
        {
          qlseek(a2, -4, 1);
          sub_DB90(a2, &v32, 1u, "String table size", -1, -1);
          v21 = qalloc(v32 + 1);
          v22 = v21;
          if ( v21 )
          {
            v23 = qlread(a2, v21, v32);
            if ( v23 == v32 )
            {
              *(_BYTE *)(v22 + v23) = 0;
              v30 = a1->m128i_i64[1];
              if ( v30 )
              {
                a1[1].m128i_i64[0] = 0;
                qfree(v30);
              }
              v31 = v32;
              a1->m128i_i64[1] = v22;
              a1[1] = _mm_unpacklo_epi64((__m128i)(v31 + 1), (__m128i)(v31 + 1));
              return 1;
            }
            qfree(v22);
          }
        }
      }
    }
  }
  return 0;
}
