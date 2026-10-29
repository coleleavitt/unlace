void __fastcall sub_4230(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  int v4; // ebx
  __int64 v5; // r14
  int v6; // eax
  _QWORD *v7; // r14
  _QWORD *v8; // r13
  __int64 v9; // rdi

  if ( *a1 )
  {
    v2 = a1;
    v4 = 0;
    do
    {
      v5 = v2[2];
      v6 = *((unsigned __int16 *)v2 + 4);
      v7 = (_QWORD *)(a2 + v5);
      if ( v6 == 7 )
      {
        if ( !*v7 )
          goto LABEL_9;
      }
      else
      {
        if ( v6 != 10 )
          goto LABEL_9;
        v8 = (_QWORD *)*v7;
        if ( !*v7 )
          goto LABEL_9;
        if ( *v8 )
        {
          do
          {
            qfree();
            v9 = v8[1];
            ++v8;
          }
          while ( v9 );
        }
      }
      qfree();
      *v7 = 0;
LABEL_9:
      v2 = &a1[4 * ++v4];
    }
    while ( *v2 );
  }
}

