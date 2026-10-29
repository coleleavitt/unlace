__int64 __fastcall sub_178230(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, int a5, unsigned int a6, __m128i a7)
{
  __int64 v8; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  unsigned __int64 *v22; // rax
  const void *v23; // rsi
  __int64 n; // [rsp+0h] [rbp-80h]
  __int64 v25; // [rsp+8h] [rbp-78h]
  __int64 v28; // [rsp+18h] [rbp-68h]
  unsigned __int64 *v29[2]; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 *v30; // [rsp+30h] [rbp-50h] BYREF
  __int128 v31; // [rsp+38h] [rbp-48h]
  unsigned __int64 v32; // [rsp+48h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 64);
  if ( a6 >= *(_DWORD *)(v8 + 64) )
    sub_1733C0(*(double *)a7.m128i_i64);
  v25 = *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8LL * a6);
  if ( a2 )
  {
    sub_64000((__int64 *)v29, (__int64)a3, *(double *)a7.m128i_i64);
    v12 = a3[3];
    a7 = 0;
    v30 = nullptr;
    v31 = 0;
    v28 = v12;
    if ( v12 )
    {
      n = 16 * v12;
      v22 = (unsigned __int64 *)qalloc_or_throw(16 * v12, (__int64)a3, 16 * v12, v11);
      v23 = (const void *)a3[2];
      v30 = v22;
      *((_QWORD *)&v31 + 1) = v28;
      memcpy(v22, v23, n);
      *(_QWORD *)&v31 = v28;
    }
    if ( sub_A9D90(a1, v29, a2, 0, 1u) )
    {
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree((__int64)v30);
      }
      goto LABEL_8;
    }
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree((__int64)v30);
    }
    qfree((__int64)v29[0]);
  }
  v14 = (_QWORD *)*a4;
  if ( !*a4 )
    return 1;
  if ( !a4[1] )
    return 1;
  v15 = v14[1];
  if ( v14 == (_QWORD *)v15 )
    return 1;
  while ( 1 )
  {
    v16 = *(_QWORD *)(a1 + 64);
    v29[0] = nullptr;
    v29[1] = nullptr;
    v30 = nullptr;
    v31 = 0;
    sub_103D60(v15 + 24, v16, (__int64 *)v29);
    if ( !(unsigned __int8)sub_64780(v29, a3) && !(unsigned __int8)sub_318470(&v30, (__int64)(a3 + 2)) )
      goto LABEL_20;
    v17 = *(_QWORD *)(v15 + 32);
    if ( v17 > 1 )
      goto LABEL_30;
    if ( v17 )
      break;
    if ( (*(_BYTE *)(a1 + 25) & 2) == 0 )
      goto LABEL_30;
LABEL_20:
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree((__int64)v30);
    }
    qfree((__int64)v29[0]);
    if ( (*(_QWORD *)v15 & 2) != 0 )
      goto LABEL_25;
    v18 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)v18 & 2) != 0 )
    {
      v19 = (_QWORD *)(*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL);
      v20 = *v19;
      if ( (*v19 & 2) == 0 && v19[2] == v15 )
      {
        do
        {
          v15 = v20 & 0xFFFFFFFFFFFFFFFCLL;
          v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v20 & 2) != 0 )
            goto LABEL_25;
          v21 = v19;
          v19 = (_QWORD *)v15;
        }
        while ( *(_QWORD **)(v15 + 16) == v21 );
      }
      v15 = (unsigned __int64)v19;
      if ( (_QWORD *)*a4 == v19 )
        return 1;
    }
    else
    {
      do
      {
        v15 = v18;
        v18 = *(_QWORD *)(v18 + 8);
      }
      while ( (*(_BYTE *)v18 & 2) == 0 );
LABEL_25:
      if ( *a4 == v15 )
        return 1;
    }
  }
  if ( **(_DWORD **)(v15 + 24) == a6
    && (unsigned __int8)sub_1778B0(v25, v29, *(_QWORD *)(v25 + 48), 0, 0, nullptr, a7, (__m128)0LL, a5) )
  {
    goto LABEL_20;
  }
LABEL_30:
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree((__int64)v30);
  }
LABEL_8:
  qfree((__int64)v29[0]);
  return 0;
}

