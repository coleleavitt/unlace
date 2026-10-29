__int64 *__fastcall sub_E5910(__int64 a1, __int64 *a2, __int64 a3, __m128i *a4, __int64 a5, __int64 a6, __int64 *a7)
{
  __int64 v10; // r14
  const char *v11; // rdx
  _QWORD *v12; // rsi
  __int64 *v13; // rcx
  const __m128i *v15; // r10
  __int64 v16; // r8
  unsigned __int8 v17; // al
  __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 *v24; // [rsp+0h] [rbp-48h]
  __int64 *v25; // [rsp+0h] [rbp-48h]
  const __m128i *v26; // [rsp+0h] [rbp-48h]
  __int64 v28; // [rsp+8h] [rbp-40h]

  v10 = *(_QWORD *)a1;
  if ( a2 || !a7 )
  {
    v13 = sub_E5750((__int64 *)a1, a2, a3, a4);
    v15 = (const __m128i *)a3;
    v16 = a5;
    if ( !v13 )
    {
      if ( !a7 )
      {
LABEL_9:
        v13 = nullptr;
        if ( a6 )
        {
          sub_D75C0(v10, (_QWORD *)a6, 1);
          return nullptr;
        }
        return v13;
      }
      goto LABEL_5;
    }
  }
  else
  {
    v11 = "ON";
    if ( *a7 )
    {
LABEL_4:
      sub_DBD10(a1, "a JOIN clause is required before %s", v11);
      goto LABEL_5;
    }
    if ( a7[1] )
    {
      v11 = "USING";
      goto LABEL_4;
    }
    v26 = (const __m128i *)a3;
    v13 = sub_E5750((__int64 *)a1, nullptr, a3, a4);
    v15 = v26;
    v16 = a5;
    if ( !v13 )
    {
LABEL_5:
      if ( *a7 )
      {
        sub_D7720(v10, *a7);
      }
      else
      {
        v12 = (_QWORD *)a7[1];
        if ( v12 )
          sub_CF6E0(v10, v12);
      }
      goto LABEL_9;
    }
  }
  v17 = *(_BYTE *)(a1 + 292);
  v18 = *(_DWORD *)v13 - 1;
  if ( v17 > 1u )
  {
    v19 = v13[13 * v18 + 3];
    if ( v19 )
    {
      if ( a4 && a4->m128i_i64[0] )
        v15 = a4;
      if ( v17 != 3 )
      {
        v28 = v16;
        v24 = v13;
        sub_DC5F0((__int64 *)a1, v19, v15);
        v16 = v28;
        v13 = v24;
      }
    }
  }
  if ( *(_DWORD *)(v16 + 8) )
  {
    v25 = v13;
    v22 = sub_DCE50(v10, v16);
    v13 = v25;
    v25[13 * v18 + 4] = v22;
  }
  if ( a6 )
  {
    v20 = &v13[13 * v18];
    v20[6] = a6;
    if ( (*(_BYTE *)(a6 + 5) & 8) != 0 )
      *((_BYTE *)v20 + 70) |= 8u;
  }
  if ( a7 )
  {
    if ( a7[1] )
    {
      v21 = &v13[13 * v18];
      *((_BYTE *)v21 + 70) |= 2u;
      v21[10] = a7[1];
    }
    else
    {
      v13[13 * v18 + 10] = *a7;
    }
  }
  else
  {
    v13[13 * v18 + 10] = 0;
  }
  return v13;
}
