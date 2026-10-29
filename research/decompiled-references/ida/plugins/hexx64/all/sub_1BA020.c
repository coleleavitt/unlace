__int64 __fastcall sub_1BA020(__int64 a1, double a2, __m128 a3, __m128 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx
  _DWORD *v6; // rsi
  int v7; // eax

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 520);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD **)(v5 + 56);
      if ( !v6 )
        goto LABEL_3;
      if ( *v6 != 54 )
        goto LABEL_3;
      v7 = sub_1B98C0(v5, (__int64)v6, a2, a3, a4);
      if ( !v7 )
        goto LABEL_3;
      if ( v7 < 0 )
      {
        if ( v7 != -17 )
          return (unsigned int)-4;
        v4 = -17;
LABEL_3:
        v5 = *(_QWORD *)(v5 + 8);
        if ( !v5 )
          return v4;
      }
      else
      {
        v5 = *(_QWORD *)(v5 + 8);
        if ( !v4 )
          v4 = 1;
        if ( !v5 )
          return v4;
      }
    }
  }
  return v4;
}

