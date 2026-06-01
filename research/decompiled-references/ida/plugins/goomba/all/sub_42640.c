__int64 __fastcall sub_42640(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // r12
  _QWORD *v9; // r14
  unsigned __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 v12; // rbp
  __int64 result; // rax
  __int64 *v14; // rsi
  __int64 v15; // rax

  *a1 = &off_4D698;
  v2 = a1 + 2;
  v3 = a1 + 7;
  *((_DWORD *)v3 - 10) = 0;
  *(v3 - 4) = 0;
  *(v3 - 3) = v2;
  *(v3 - 2) = v2;
  *(v3 - 1) = 0;
  *v3 = 0;
  *(_OWORD *)(v3 + 1) = 0;
  v4 = qvector_reserve(v3, 0, 128, 24);
  a1[7] = v4;
  v5 = (_QWORD *)v4;
  v6 = a1[8];
  if ( v6 <= 0x7F )
  {
    v7 = 3 * v6;
    do
    {
      v8 = &v5[v7];
      v7 += 3;
      *v8 = 0;
      *(_OWORD *)(v8 + 1) = 0;
      v5 = (_QWORD *)a1[7];
    }
    while ( v7 != 384 );
  }
  a1[8] = 128;
  v9 = v5 + 384;
  do
  {
    v10 = v5[1];
    if ( v10 <= 4 )
    {
      v14 = (__int64 *)*v5;
      if ( v5[2] <= 4u )
      {
        v15 = qvector_reserve(v5, v14, 5, 8);
        *v5 = v15;
        v10 = v5[1];
        v14 = (__int64 *)v15;
      }
      memset(&v14[v10], 0, 8 * (5 - v10));
LABEL_7:
      v5[1] = 5;
      goto LABEL_8;
    }
    if ( v10 != 5 )
      goto LABEL_7;
LABEL_8:
    v11 = (__int64 *)*v5;
    v12 = *v5 + 40LL;
    do
    {
      result = sub_F670(8);
      *v11++ = result;
    }
    while ( (__int64 *)v12 != v11 );
    v5 += 3;
  }
  while ( v5 != v9 );
  return result;
}

