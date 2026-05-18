void __fastcall sub_171E60(__int64 *a1, int a2)
{
  int i; // r13d
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax

  if ( a2 > 0 )
  {
    for ( i = 0; i != a2; ++i )
    {
      v7 = a1[1];
      if ( v7 )
      {
        v4 = v7 + 1;
        v5 = v7 + 2;
        v6 = *a1;
        --v7;
        if ( a1[2] < v5 )
          goto LABEL_7;
      }
      else
      {
        v6 = *a1;
        v5 = 3;
        v4 = 2;
        if ( (unsigned __int64)a1[2] < 3 )
        {
LABEL_7:
          v8 = sub_1987B0(a1, v6, v5, 1);
          *a1 = v8;
          v6 = v8;
        }
      }
      a1[1] = v5;
      *(_BYTE *)(v6 + v4) = 0;
      *(_WORD *)(*a1 + v7) = 8224;
    }
  }
}
