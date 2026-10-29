void __fastcall sub_75FE0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 i; // r12
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  void *v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // rbp
  _QWORD *v14; // rdi
  __int64 v15; // rsi

  *a1 = &off_B22A8;
  v2 = a1[22];
  if ( v2 )
  {
    a1[23] = 0;
    qfree(v2);
  }
  v3 = a1[19];
  if ( v3 )
  {
    a1[20] = 0;
    qfree(v3);
  }
  v4 = a1[13];
  if ( v4 )
  {
    v5 = a1[14];
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = (_QWORD *)(v4 + v6);
        v9 = *(_QWORD *)(v4 + v6 + 32);
        if ( v9 )
        {
          v8[5] = 0;
          qfree(v9);
        }
        v10 = v8[1];
        if ( v10 )
        {
          v8[2] = 0;
          qfree(v10);
        }
        v4 = a1[13];
        v6 += 56;
      }
    }
    a1[14] = 0;
    qfree(v4);
  }
  v11 = (void *)a1[12];
  if ( v11 )
    munmap(v11, a1[10]);
  a1[8] = 0;
  v12 = (_QWORD *)a1[3];
  v13 = a1 + 7;
  *(v13 - 7) = &unk_B2CD0;
  sub_75F30(v12);
  memset((void *)*(v13 - 6), 0, 8LL * *(v13 - 5));
  v14 = (_QWORD *)*(v13 - 6);
  v15 = *(v13 - 5);
  *(v13 - 3) = 0;
  *(v13 - 4) = 0;
  if ( v14 != v13 )
    operator delete(v14, 8 * v15);
}

