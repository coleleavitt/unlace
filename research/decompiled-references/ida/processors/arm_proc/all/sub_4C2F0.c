void __fastcall sub_4C2F0(__int64 a1)
{
  _QWORD *v2; // r13
  _QWORD *v3; // r12
  _QWORD *v4; // rbp
  _QWORD *v5; // rbx
  void *v6; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  v3 = *(_QWORD **)a1;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v4 = (_QWORD *)v3[2];
      v5 = (_QWORD *)v3[1];
      if ( v4 != v5 )
      {
        do
        {
          v6 = (void *)v5[1];
          if ( v6 )
            operator delete(v6, v5[3] - (_QWORD)v6);
          v5 += 4;
        }
        while ( v4 != v5 );
        v5 = (_QWORD *)v3[1];
      }
      if ( v5 )
        operator delete(v5, v3[3] - (_QWORD)v5);
      v3 += 4;
    }
    while ( v2 != v3 );
    v3 = *(_QWORD **)a1;
  }
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
}

