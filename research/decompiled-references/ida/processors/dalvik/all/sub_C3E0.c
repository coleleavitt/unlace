unsigned __int64 __fastcall sub_C3E0(_QWORD *a1)
{
  __int64 v2; // rdi
  const char *v3; // r14
  const char *v4; // rsi
  unsigned __int16 v5; // ax
  __int64 v6; // r13
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // [rsp+4h] [rbp-64h] BYREF
  __int64 v15; // [rsp+8h] [rbp-60h] BYREF
  __int64 v16; // [rsp+10h] [rbp-58h] BYREF
  __int128 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v14 = 0;
  netnode_hashval(*a1, "dex_version", a1 + 1, 4, 72);
  netnode_hashval(*a1, "optimized", &v14, 4, 72);
  v2 = *a1;
  v17 = 0;
  v16 = 0;
  *((_BYTE *)a1 + 12) = v14 != 0;
  if ( netnode_qgetblob(v2, &v16, 1, 0, 1) <= 0 )
  {
    v11 = a1[3];
    v12 = a1[4];
    v15 = 0;
    v4 = (const char *)a1[2];
    if ( v12 < v11 + 1 )
    {
      v13 = qvector_reserve(a1 + 2, v4, v11 + 1, 8);
      a1[2] = v13;
      v4 = (const char *)v13;
      v11 = a1[3];
    }
    *(_QWORD *)&v4[8 * v11] = 0;
    ++a1[3];
  }
  else
  {
    v15 = v16;
    v3 = (const char *)(v17 + v16);
    v4 = (const char *)(v17 + v16);
    v5 = unpack_dw(&v15, v17 + v16);
    v6 = v5;
    if ( a1[4] < (unsigned __int64)v5 )
    {
      a1[2] = qvector_reserve(a1 + 2, a1[2], v5, 8);
      a1[3] = v6;
    }
    else
    {
      a1[3] = v5;
      if ( !v5 )
        goto LABEL_6;
    }
    v7 = 8 * v6;
    v8 = 0;
    v9 = 0;
    do
    {
      v4 = v3;
      v9 += unpack_dq(&v15, v3);
      *(_QWORD *)(a1[2] + v8) = v9;
      v8 += 8;
    }
    while ( v8 != v7 );
  }
LABEL_6:
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, v4);
  }
  return v18 - __readfsqword(0x28u);
}

