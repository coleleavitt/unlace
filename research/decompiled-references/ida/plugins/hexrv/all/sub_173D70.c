__int64 __fastcall sub_173D70(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, int a5, unsigned int a6)
{
  __int64 v7; // rdx
  __int64 v10; // rax
  _QWORD *v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  void *v20; // rax
  const void *v21; // rsi
  __int64 n; // [rsp+0h] [rbp-80h]
  __int64 v23; // [rsp+8h] [rbp-78h]
  __int64 v26; // [rsp+18h] [rbp-68h]
  __int64 v27[2]; // [rsp+20h] [rbp-60h] BYREF
  void *v28; // [rsp+30h] [rbp-50h] BYREF
  __int128 v29; // [rsp+38h] [rbp-48h]
  unsigned __int64 v30; // [rsp+48h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 64);
  if ( a6 >= *(_DWORD *)(v7 + 64) )
    sub_16EF00();
  v23 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL * a6);
  if ( a2 )
  {
    sub_5FC80(v27, (__int64)a3);
    v10 = a3[3];
    v28 = nullptr;
    v29 = 0;
    v26 = v10;
    if ( v10 )
    {
      n = 16 * v10;
      v20 = (void *)qalloc_or_throw();
      v21 = (const void *)a3[2];
      v28 = v20;
      *((_QWORD *)&v29 + 1) = v26;
      memcpy(v20, v21, n);
      *(_QWORD *)&v29 = v26;
    }
    if ( sub_A58D0(a1, v27, a2, 0, 1u) )
    {
      if ( v28 )
      {
        *(_QWORD *)&v29 = 0;
        qfree();
      }
      goto LABEL_8;
    }
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
    qfree();
  }
  v12 = (_QWORD *)*a4;
  if ( !*a4 )
    return 1;
  if ( !a4[1] )
    return 1;
  v13 = v12[1];
  if ( v12 == (_QWORD *)v13 )
    return 1;
  while ( 1 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    v27[0] = 0;
    v27[1] = 0;
    v28 = nullptr;
    v29 = 0;
    sub_FF8A0(v13 + 24, v14, (__int64)v27);
    if ( !(unsigned __int8)sub_60400(v27, a3) && !(unsigned __int8)sub_313370(&v28, a3 + 2) )
      goto LABEL_20;
    v15 = *(_QWORD *)(v13 + 32);
    if ( v15 > 1 )
      goto LABEL_30;
    if ( v15 )
      break;
    if ( (*(_BYTE *)(a1 + 25) & 2) == 0 )
      goto LABEL_30;
LABEL_20:
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
    qfree();
    if ( (*(_QWORD *)v13 & 2) != 0 )
      goto LABEL_25;
    v16 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)v16 & 2) != 0 )
    {
      v17 = (_QWORD *)(*(_QWORD *)v13 & 0xFFFFFFFFFFFFFFFCLL);
      v18 = *v17;
      if ( (*v17 & 2) == 0 && v17[2] == v13 )
      {
        do
        {
          v13 = v18 & 0xFFFFFFFFFFFFFFFCLL;
          v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v18 & 2) != 0 )
            goto LABEL_25;
          v19 = v17;
          v17 = (_QWORD *)v13;
        }
        while ( *(_QWORD **)(v13 + 16) == v19 );
      }
      v13 = (unsigned __int64)v17;
      if ( (_QWORD *)*a4 == v17 )
        return 1;
    }
    else
    {
      do
      {
        v13 = v16;
        v16 = *(_QWORD *)(v16 + 8);
      }
      while ( (*(_BYTE *)v16 & 2) == 0 );
LABEL_25:
      if ( *a4 == v13 )
        return 1;
    }
  }
  if ( **(_DWORD **)(v13 + 24) == a6 && (unsigned __int8)sub_1733F0(v23, v27, *(_QWORD *)(v23 + 48), 0, 0, nullptr, a5) )
    goto LABEL_20;
LABEL_30:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
LABEL_8:
  qfree();
  return 0;
}

