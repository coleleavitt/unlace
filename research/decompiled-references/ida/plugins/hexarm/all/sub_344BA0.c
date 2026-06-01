__int64 __fastcall sub_344BA0(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbp
  __int64 result; // rax

  v1 = a1[1];
  if ( (*(_BYTE *)v1 & 2) != 0 )
    goto LABEL_9;
  if ( (**(_BYTE **)(v1 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
    {
LABEL_4:
      if ( *(_QWORD *)(v1 + 32) )
      {
        *(_QWORD *)(v1 + 40) = 0;
        qfree();
      }
      *(_QWORD *)v1 |= 2uLL;
      goto LABEL_7;
    }
  }
  else
  {
    sub_344BA0();
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
      goto LABEL_25;
  }
  sub_344BA0();
LABEL_25:
  if ( (*(_BYTE *)v1 & 2) == 0 )
    goto LABEL_4;
LABEL_7:
  if ( v1 )
    qfree();
LABEL_9:
  v2 = a1[2];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_16;
  if ( (**(_BYTE **)(v2 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_28;
  }
  else
  {
    sub_344BA0();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_13;
  }
  sub_344BA0();
LABEL_13:
  if ( (*(_BYTE *)v2 & 2) == 0 )
  {
LABEL_28:
    if ( *(_QWORD *)(v2 + 32) )
    {
      *(_QWORD *)(v2 + 40) = 0;
      qfree();
    }
    *(_QWORD *)v2 |= 2uLL;
  }
  if ( v2 )
    qfree();
LABEL_16:
  result = *a1;
  if ( (*a1 & 2) == 0 )
  {
    if ( a1[4] )
    {
      a1[5] = 0;
      qfree();
      result = *a1;
    }
    result |= 2uLL;
    *a1 = result;
  }
  if ( a1 )
    return qfree();
  return result;
}

