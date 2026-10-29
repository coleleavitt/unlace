__int64 __fastcall sub_1698E0(const __m128i *a1, __m128i a2, __m128 a3)
{
  unsigned int *v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // r13d
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rbp
  int v18; // eax
  int v19; // eax
  __int64 v20; // rsi

  if ( a1[4].m128i_i32[3] != 4 )
    return 0;
  v4 = (unsigned int *)a1[3].m128i_i64[1];
  if ( *((_BYTE *)v4 + 64) != 7 )
    return 0;
  if ( sub_32ED00(*v4) )
  {
    v6 = a1[4].m128i_i64[0];
    v7 = v4[18];
    if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 64) )
      goto LABEL_40;
    v8 = a1->m128i_i64[1];
    v9 = 1;
    v10 = *(_QWORD *)(*(_QWORD *)(v6 + 528) + 8 * v7);
    v11 = *(_QWORD *)(v10 + 48);
    if ( v11 && *(_DWORD *)v11 == 44 && *(_BYTE *)(v11 + 64) == 7 && *(_DWORD *)(v11 + 72) == *(_DWORD *)(v8 + 72) )
    {
      if ( sub_32ED00(*v4) )
      {
        if ( sub_1686F0(a1, v4, v11, a2, a3) )
        {
          *v4 = sub_32EC60(*v4);
          if ( *(_DWORD *)(v10 + 352) == 1
            && sub_330DE0(v10) == 1
            && (unsigned __int8)sub_169270(*(_QWORD *)(a1[30].m128i_i64[0] + 112), (_BYTE *)v11) )
          {
            sub_11D5A0(v11);
            v19 = *(_DWORD *)(v10 + 24);
            v20 = *(_QWORD *)(v10 + 8);
            BYTE1(v19) &= ~2u;
            LOBYTE(v19) = v19 | 0x80;
            *(_DWORD *)(v10 + 24) = v19;
            sub_112550(v10, v20, a1->m128i_i64[1]);
          }
          goto LABEL_27;
        }
        v8 = a1->m128i_i64[1];
        v9 = 1;
      }
      else
      {
        v8 = a1->m128i_i64[1];
      }
    }
  }
  else
  {
    if ( !sub_32ED20(*v4) )
      return 0;
    v8 = a1->m128i_i64[1];
    v9 = 0;
  }
  if ( *(_DWORD *)(v8 + 352) != 1 || sub_330DE0(v8) != 1 )
    return 0;
  v12 = a1->m128i_i64[1];
  v13 = *(_QWORD *)(v12 + 56);
  if ( *(_DWORD *)v13 == 44 )
  {
    if ( !v9 && v4[18] != *(_DWORD *)(v13 + 72) )
      return 0;
  }
  else if ( v9 || *(_DWORD *)v13 != 43 || v4[18] != *(_DWORD *)(*(_QWORD *)(v12 + 8) + 72LL) )
  {
    return 0;
  }
  v14 = a1[4].m128i_i64[0];
  v15 = *(unsigned int *)(v13 + 72);
  if ( (unsigned int)v15 >= *(_DWORD *)(v14 + 64) )
LABEL_40:
    sub_167AF0(*(double *)a2.m128i_i64);
  v16 = *(_QWORD *)(*(_QWORD *)(v14 + 528) + 8 * v15);
  if ( !sub_1686F0(a1, v4, v13, a2, a3)
    || (*(_BYTE *)(v13 + 6) & 2) != 0
    || (unsigned __int8)sub_1205A0((_BYTE *)v13, *(_QWORD *)(a1[30].m128i_i64[0] + 112), 0) )
  {
    return 0;
  }
  if ( *(_DWORD *)v13 == 43 )
  {
    sub_168420((__int64)a1, *(_QWORD *)(a1->m128i_i64[1] + 8), v16, *(double *)a2.m128i_i64);
    *v4 = sub_32EA00(*v4);
    sub_11CA10((char *)v4 + 64, (char *)(v13 + 64));
  }
  else if ( !v9 )
  {
    *v4 = sub_32EBC0(*v4);
  }
  v17 = a1->m128i_i64[1];
  sub_11D5A0(v13);
  v18 = *(_DWORD *)(v17 + 24);
  BYTE1(v18) &= ~2u;
  LOBYTE(v18) = v18 | 0x80;
  *(_DWORD *)(v17 + 24) = v18;
  sub_13B2C0(*(_QWORD *)(a1->m128i_i64[1] + 8));
  sub_112550(a1->m128i_i64[1], *(_QWORD *)(a1->m128i_i64[1] + 8), v16);
LABEL_27:
  sub_66FA0(a1[4].m128i_i64[0], 1);
  return 1;
}

