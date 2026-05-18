void __fastcall sub_CD520(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rsi

  a2 = (int)a2;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = a1;
  v8 = a1 + 56LL * (int)a2;
  if ( *(_QWORD *)(v6 + 760) )
  {
    do
    {
      if ( *(_DWORD *)(v7 + 32) )
      {
        v9 = *(_QWORD **)(v7 + 40);
        if ( v9 )
          sub_C9250(v6, v9);
      }
      v7 += 56LL;
    }
    while ( v8 > v7 );
  }
  else
  {
    do
    {
      if ( (*(_WORD *)(v7 + 20) & 0x9000) != 0 )
      {
        sub_C9690(v7, a2, a3, a4, a5, a6);
        a4 = 0;
        *(_WORD *)(v7 + 20) = 0;
      }
      else
      {
        a3 = *(unsigned int *)(v7 + 32);
        if ( (_DWORD)a3 )
        {
          a2 = *(_QWORD *)(v7 + 40);
          sub_C9250(v6, (_QWORD *)a2);
          *(_DWORD *)(v7 + 32) = 0;
          *(_WORD *)(v7 + 20) = 0;
        }
      }
      v7 += 56LL;
    }
    while ( v8 > v7 );
  }
}
