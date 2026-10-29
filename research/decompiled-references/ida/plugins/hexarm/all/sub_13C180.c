__int64 __fastcall sub_13C180(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ebp
  __int64 i; // rsi

  v1 = *(_QWORD *)(a1 + 520);
  if ( !v1 )
    return 0;
  v2 = 0;
  do
  {
    for ( i = *(_QWORD *)(v1 + 48); i; i = sub_A2EC0(v1, i) )
    {
      while ( *(_DWORD *)i != 61 )
      {
        i = *(_QWORD *)(i + 8);
        if ( !i )
          goto LABEL_7;
      }
      ++v2;
    }
LABEL_7:
    v1 = *(_QWORD *)(v1 + 8);
  }
  while ( v1 );
  if ( v2 <= 0 )
    return (unsigned int)v2;
  sub_669A0(a1, 1u, (__int64)"removed %d m_und insns", v2);
  if ( !sub_69F40(a1) )
    return (unsigned int)v2;
  sub_699B0(a1);
  return (unsigned int)(v2 + 1);
}

