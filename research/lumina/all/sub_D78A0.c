void __fastcall sub_D78A0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  int v4; // ebp
  _QWORD *v5; // rsi
  bool v6; // zf

  v2 = *(_QWORD **)(a2 + 8);
  if ( v2 )
  {
    if ( *(__int16 *)(a2 + 54) <= 0 )
      goto LABEL_16;
    v4 = 0;
    do
    {
      if ( *v2 )
        sub_C9250(a1, (_QWORD *)*v2);
      ++v4;
      v2 += 2;
    }
    while ( *(__int16 *)(a2 + 54) > v4 );
    v2 = *(_QWORD **)(a2 + 8);
    if ( v2 )
    {
LABEL_16:
      sub_C9250(a1, v2);
      if ( *(_BYTE *)(a2 + 63) )
        goto LABEL_9;
    }
    else if ( *(_BYTE *)(a2 + 63) )
    {
      goto LABEL_9;
    }
    v5 = *(_QWORD **)(a2 + 80);
    if ( v5 )
    {
      sub_D7810(a1, v5);
      if ( a1 )
      {
LABEL_10:
        if ( *(_QWORD *)(a1 + 760) )
          return;
      }
LABEL_14:
      v6 = *(_BYTE *)(a2 + 63) == 0;
      *(_QWORD *)(a2 + 8) = 0;
      *(_WORD *)(a2 + 54) = 0;
      if ( v6 )
        *(_QWORD *)(a2 + 80) = 0;
      return;
    }
LABEL_9:
    if ( a1 )
      goto LABEL_10;
    goto LABEL_14;
  }
}
