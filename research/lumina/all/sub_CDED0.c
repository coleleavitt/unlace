__int64 __fastcall sub_CDED0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  if ( !a2 )
    return 0;
  v4 = a2;
  do
  {
    if ( !(unsigned int)sub_CDDC0(a1, *(int **)(v4 + 24)) && !(unsigned int)sub_CDDC0(a1, *(int **)(v4 + 16)) )
    {
      v5 = *(_QWORD *)(v4 + 72);
      if ( !v5 || !(unsigned int)sub_CDCD0(a1, v5) )
      {
        v6 = *(_QWORD *)(v4 + 40);
        if ( !v6 || !(unsigned int)sub_CDCD0(a1, v6) )
        {
          v7 = *(_QWORD *)(v4 + 48);
          if ( !v7 || !(unsigned int)sub_CDCD0(a1, v7) )
            goto LABEL_10;
        }
      }
    }
    return 2;
LABEL_10:
    if ( a3 )
      break;
    v4 = *(_QWORD *)(v4 + 64);
  }
  while ( v4 );
  return 0;
}
