__int64 __fastcall sub_80CC0(__m128i *a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  char v8; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const __m128i *v13; // rax
  const __m128i *v14; // r15
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // ebp
  __int64 v19; // rdx
  __int64 v21; // rcx
  unsigned __int32 v22; // eax
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  const __m128i *v26; // rax
  const __m128i *v27; // r15
  const __m128i *v28; // rax
  const __m128i *v29; // r15
  int *v30; // rax
  int *v31; // r14
  __int64 v32; // rdi
  unsigned int v33; // eax
  unsigned int v34; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v35; // [rsp+8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  a1[1].m128i_i64[0] = 0;
  a1[2].m128i_i64[1] = 0;
  a1[4].m128i_i64[0] = 0;
  v5 = *a3;
  if ( (((_WORD)v5 - 387) & 0xFFFD) == 0 )
    return 0;
  v8 = a4;
  if ( (_BYTE)a4 )
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
  if ( !v9 || !*((_DWORD *)a3 + 2) )
    return 0;
  qlseek(*(_QWORD *)(a1->m128i_i64[0] + 8), *(_QWORD *)(a1->m128i_i64[0] + 16) + (int)v9, 0, a4);
  v10 = *a3;
  v11 = *((unsigned int *)a3 + 2);
  if ( v8 || (unsigned __int16)(v10 - 352) > 1u )
  {
    if ( (a3[1] & 2) != 0 )
    {
      v28 = (const __m128i *)sub_7EFC0(a2, 20, v11);
      v29 = v28;
      if ( v28 )
      {
        sub_80890(a1, v28, *((_DWORD *)a3 + 2), v8);
        qfree(v29);
      }
    }
    else
    {
      LOWORD(v10) = v10 - 487;
      if ( (unsigned __int16)v10 <= 0x10u && (v12 = 65793, _bittest64(&v12, v10)) )
      {
        v13 = (const __m128i *)sub_7EFC0(a2, 18, v11);
        v14 = v13;
        if ( v13 )
        {
          sub_80740(a1, v13, *((_DWORD *)a3 + 2), v8);
          qfree(v14);
        }
      }
      else
      {
        v26 = (const __m128i *)sub_7EFC0(a2, 18, v11);
        v27 = v26;
        if ( v26 )
        {
          sub_80610(a1, v26, *((_DWORD *)a3 + 2), v8);
          qfree(v27);
        }
      }
    }
  }
  else
  {
    v30 = (int *)sub_7EFC0(a2, 24, v11);
    v31 = v30;
    if ( v30 )
    {
      sub_809C0(a1, v30, *((_DWORD *)a3 + 2), 0);
      qfree(v31);
    }
  }
  v15 = a1[4].m128i_u64[0];
  if ( !v15 )
    return 0;
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
  if ( qlread(a2, &v34, 4) != 4 )
    return 0;
  v22 = v34;
  if ( v8 )
  {
    v22 = _byteswap_ulong(v34);
    v34 = v22;
  }
  if ( v22 <= 4 )
    return 0;
  qlseek(a2, -4, 1, v21);
  v18 = sub_80C10(a2, &v34, 1u, -1, -1);
  if ( !(_BYTE)v18 )
    return 0;
  v23 = qalloc(v34 + 1);
  v24 = v23;
  if ( !v23 )
    return 0;
  v25 = qlread(a2, v23, v34);
  if ( v25 != v34 )
  {
    qfree(v24);
    return 0;
  }
  *(_BYTE *)(v24 + v25) = 0;
  v32 = a1->m128i_i64[1];
  if ( v32 )
  {
    a1[1].m128i_i64[0] = 0;
    qfree(v32);
  }
  v33 = v34;
  a1->m128i_i64[1] = v24;
  a1[1] = _mm_unpacklo_epi64((__m128i)(v33 + 1), (__m128i)(v33 + 1));
  return v18;
}
