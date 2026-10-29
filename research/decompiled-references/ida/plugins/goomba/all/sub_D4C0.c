__int64 (__fastcall **__fastcall sub_D4C0(__int64 a1))()
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // r12
  _QWORD *v9; // r14
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rbp
  _QWORD *v14; // rsi
  __int64 v15; // rax

  *(_QWORD *)a1 = &off_4D698;
  v2 = a1 + 16;
  v3 = a1 + 56;
  *(_DWORD *)(v3 - 40) = 0;
  *(_QWORD *)(v3 - 32) = 0;
  *(_QWORD *)(v3 - 24) = v2;
  *(_QWORD *)(v3 - 16) = v2;
  *(_QWORD *)(v3 - 8) = 0;
  *(_QWORD *)v3 = 0;
  *(_OWORD *)(v3 + 8) = 0;
  v4 = qvector_reserve(v3, 0, 128, 24);
  *(_QWORD *)(a1 + 56) = v4;
  v5 = (_QWORD *)v4;
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 <= 0x7F )
  {
    v7 = 3 * v6;
    do
    {
      v8 = &v5[v7];
      v7 += 3;
      *v8 = 0;
      *(_OWORD *)(v8 + 1) = 0;
      v5 = *(_QWORD **)(a1 + 56);
    }
    while ( v7 != 384 );
  }
  *(_QWORD *)(a1 + 64) = 128;
  v9 = v5 + 384;
  do
  {
    v10 = v5[1];
    if ( v10 <= 4 )
    {
      v14 = (_QWORD *)*v5;
      if ( v5[2] <= 4u )
      {
        v15 = qvector_reserve(v5, v14, 5, 8);
        *v5 = v15;
        v10 = v5[1];
        v14 = (_QWORD *)v15;
      }
      memset(&v14[v10], 0, 8 * (5 - v10));
LABEL_7:
      v5[1] = 5;
      goto LABEL_8;
    }
    if ( v10 != 5 )
      goto LABEL_7;
LABEL_8:
    v11 = (_QWORD *)*v5;
    v12 = *v5 + 40LL;
    do
      *v11++ = sub_F670(8);
    while ( (_QWORD *)v12 != v11 );
    v5 += 3;
  }
  while ( v9 != v5 );
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)a1 = &off_4D6D8;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  return &off_4D6D8;
}

