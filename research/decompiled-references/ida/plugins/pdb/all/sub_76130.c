void __fastcall sub_76130(char *a1)
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
  char *v13; // rdi

  *(_QWORD *)a1 = &off_B22A8;
  v2 = *((_QWORD *)a1 + 22);
  if ( v2 )
  {
    *((_QWORD *)a1 + 23) = 0;
    qfree(v2);
  }
  v3 = *((_QWORD *)a1 + 19);
  if ( v3 )
  {
    *((_QWORD *)a1 + 20) = 0;
    qfree(v3);
  }
  v4 = *((_QWORD *)a1 + 13);
  if ( v4 )
  {
    v5 = *((_QWORD *)a1 + 14);
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
        v4 = *((_QWORD *)a1 + 13);
        v6 += 56;
      }
    }
    *((_QWORD *)a1 + 14) = 0;
    qfree(v4);
  }
  v11 = *((void **)a1 + 12);
  if ( v11 )
    munmap(v11, *((_QWORD *)a1 + 10));
  *((_QWORD *)a1 + 8) = 0;
  v12 = *((_QWORD **)a1 + 3);
  *(_QWORD *)a1 = &unk_B2CD0;
  sub_75F30(v12);
  memset(*((void **)a1 + 1), 0, 8LL * *((_QWORD *)a1 + 2));
  v13 = *((char **)a1 + 1);
  *((_QWORD *)a1 + 4) = 0;
  *((_QWORD *)a1 + 3) = 0;
  if ( v13 != a1 + 56 )
    operator delete(v13, 8LL * *((_QWORD *)a1 + 2));
  operator delete(a1, 0xD0u);
}

