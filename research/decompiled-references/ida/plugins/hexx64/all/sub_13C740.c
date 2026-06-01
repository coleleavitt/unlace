__int64 __fastcall sub_13C740(__int64 a1, __m128 a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  __int64 i; // rsi

  v2 = *(_QWORD *)(a1 + 520);
  if ( !v2 )
    return 0;
  v3 = 0;
  do
  {
    for ( i = *(_QWORD *)(v2 + 48); i; i = sub_A3480(v2, (_BYTE *)i) )
    {
      while ( *(_DWORD *)i != 61 )
      {
        i = *(_QWORD *)(i + 8);
        if ( !i )
          goto LABEL_7;
      }
      ++v3;
    }
LABEL_7:
    v2 = *(_QWORD *)(v2 + 8);
  }
  while ( v2 );
  if ( v3 <= 0 )
    return (unsigned int)v3;
  sub_66FA0(a1, 1);
  if ( !sub_6A500((unsigned int *)a1, (_UNKNOWN ***)&byte_1, a2) )
    return (unsigned int)v3;
  sub_69F70(a1);
  return (unsigned int)(v3 + 1);
}

