__int64 __fastcall sub_FE060(_QWORD *a1, int a2, __int64 a3, int *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rbp
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  __int64 v25[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = a1[16];
  v25[3] = __readfsqword(0x28u);
  v8 = a1[17];
  v9 = v8;
  v10 = v8 + 1;
  if ( a1[18] < (unsigned __int64)(v8 + 1) )
  {
    v17 = qvector_reserve();
    v8 = a1[17];
    a1[16] = v17;
    v7 = v17;
    v10 = v8 + 1;
  }
  v11 = a2;
  a1[17] = v10;
  v12 = (_QWORD *)(16 * v8 + v7);
  *v12 = a2;
  v12[1] = a3;
  v13 = a1[19];
  v14 = a1[20];
  v15 = v13;
  if ( a2 >= v14 )
  {
    v18 = a2 + 1;
    if ( v18 < v14 )
    {
      v22 = v18;
      do
      {
        ++v22;
        qfree();
      }
      while ( v22 < v14 );
      a1[20] = v18;
      v15 = a1[19];
    }
    else if ( v14 < v18 )
    {
      v19 = a1[21];
      if ( (unsigned __int64)(a1 + 36) < v13 || (unsigned __int64)(a1 + 36) >= v13 + 16 * v19 )
      {
        if ( v19 >= v18 || (v23 = qvector_reserve(), v14 = a1[20], a1[19] = v23, v15 = v23, v14 < v18) )
        {
          do
          {
            v21 = v14++;
            sub_5FE00((__int64 *)(16 * v21 + v15), (__int64)(a1 + 36));
            v15 = a1[19];
          }
          while ( v14 < v18 );
        }
        a1[20] = v18;
      }
      else
      {
        sub_5FE00(v25, (__int64)(a1 + 36));
        if ( a1[21] < v18 )
          a1[19] = qvector_reserve();
        v20 = a1[20];
        if ( v20 < v18 )
        {
          do
            sub_5FE00((__int64 *)(a1[19] + 16 * v20++), (__int64)v25);
          while ( v18 != v20 );
        }
        a1[20] = v18;
        qfree();
        v15 = a1[19];
      }
    }
  }
  sub_5FF90((__int64 *)(16 * v11 + v15), v9);
  return sub_5FF90((__int64 *)(a1[1] + 24LL * *a4), v9);
}

