void __fastcall sub_4B520(_QWORD *a1)
{
  _QWORD *v1; // r14
  _QWORD *v2; // r13
  _QWORD *v3; // r12
  _QWORD *v4; // rbx
  _QWORD *v5; // r15
  _QWORD *v6; // rbp
  void *v7; // rdi

  v1 = (_QWORD *)a1[1];
  v2 = (_QWORD *)*a1;
  if ( v1 != (_QWORD *)*a1 )
  {
    do
    {
      v3 = (_QWORD *)v2[2];
      v4 = (_QWORD *)v2[1];
      if ( v3 != v4 )
      {
        do
        {
          v5 = (_QWORD *)v4[2];
          v6 = (_QWORD *)v4[1];
          if ( v5 != v6 )
          {
            do
            {
              v7 = (void *)v6[1];
              if ( v7 )
                operator delete(v7, v6[3] - (_QWORD)v7);
              v6 += 4;
            }
            while ( v5 != v6 );
            v6 = (_QWORD *)v4[1];
          }
          if ( v6 )
            operator delete(v6, v4[3] - (_QWORD)v6);
          v4 += 4;
        }
        while ( v3 != v4 );
        v4 = (_QWORD *)v2[1];
      }
      if ( v4 )
        operator delete(v4, v2[3] - (_QWORD)v4);
      v2 += 4;
    }
    while ( v1 != v2 );
    v2 = (_QWORD *)*a1;
  }
  if ( v2 )
    operator delete(v2, a1[2] - (_QWORD)v2);
}

