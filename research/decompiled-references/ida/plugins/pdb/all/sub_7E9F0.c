void __fastcall sub_7E9F0(_QWORD *a1)
{
  _QWORD *v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rdi

  v2 = (_QWORD *)a1[5];
  *a1 = &off_B2370;
  if ( v2 )
  {
    v3 = v2[7];
    if ( v3 )
    {
      v2[8] = 0;
      qfree(v3);
    }
    v4 = v2[4];
    if ( v4 )
    {
      v2[5] = 0;
      qfree(v4);
    }
    v5 = v2[1];
    if ( v5 )
    {
      v2[2] = 0;
      qfree(v5);
    }
    operator delete(v2, 0x50u);
  }
  v6 = *(__int64 **)((char *)a1 + 141);
  if ( v6 )
  {
    v7 = *v6;
    if ( *v6 )
    {
      v6[1] = 0;
      qfree(v7);
    }
    qfree(v6);
  }
  v8 = *(_QWORD *)((char *)a1 + 85);
  if ( v8 )
  {
    *(_QWORD *)((char *)a1 + 93) = 0;
    qfree(v8);
  }
}

