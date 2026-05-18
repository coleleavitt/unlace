void __fastcall sub_D75C0(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rdx

  if ( a2 )
  {
    v4 = a2;
    do
    {
      v5 = (_QWORD *)v4[10];
      sub_D7880(a1, v4[4]);
      sub_D8260(a1, v4[5]);
      if ( v4[6] )
        sub_D7720(a1);
      sub_D7880(a1, v4[7]);
      if ( v4[8] )
        sub_D7720(a1);
      sub_D7880(a1, v4[9]);
      if ( v4[12] )
        sub_D7720(a1);
      if ( v4[13] )
        sub_D7F20(a1);
      v6 = v4[15];
      if ( v6 )
      {
        do
        {
          v7 = *(_QWORD *)(v6 + 64);
          sub_D7AF0(a1);
          v6 = v7;
        }
        while ( v7 );
      }
LABEL_13:
      v8 = v4[14];
      while ( v8 )
      {
        v9 = *(_QWORD **)(v8 + 56);
        if ( v9 )
        {
          *v9 = *(_QWORD *)(v8 + 64);
          v10 = *(_QWORD *)(v8 + 64);
          if ( v10 )
            *(_QWORD *)(v10 + 56) = *(_QWORD *)(v8 + 56);
          *(_QWORD *)(v8 + 56) = 0;
          goto LABEL_13;
        }
      }
      if ( a3 )
        sub_C9250(a1, v4);
      v4 = v5;
      a3 = 1;
    }
    while ( v5 );
  }
}
