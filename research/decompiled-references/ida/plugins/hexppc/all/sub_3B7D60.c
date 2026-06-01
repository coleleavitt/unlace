__int64 __fastcall sub_3B7D60(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdi

  v2 = a1[28];
  *a1 = &unk_4D9520;
  a1[4] = &unk_4D9558;
  a1[27] = &off_4D9618;
  if ( v2 )
  {
    v3 = a1[29];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 48 * i;
        if ( *(_QWORD *)(v5 + 16) )
        {
          *(_QWORD *)(v5 + 24) = 0;
          qfree();
          v2 = a1[28];
        }
      }
    }
    a1[29] = 0;
    qfree();
  }
  v6 = a1 + 26;
  a1[4] = &unk_4D8D28;
  v7 = a1 + 14;
  while ( v7 != v6 )
  {
    while ( 1 )
    {
      v8 = *(v6 - 3);
      v6 -= 3;
      if ( !v8 )
        break;
      v6[1] = 0;
      qfree();
      if ( v7 == v6 )
        goto LABEL_12;
    }
  }
LABEL_12:
  v9 = a1[1];
  *a1 = &off_4D4688;
  if ( v9 )
  {
    a1[2] = 0;
    qfree();
  }
  return qfree();
}

