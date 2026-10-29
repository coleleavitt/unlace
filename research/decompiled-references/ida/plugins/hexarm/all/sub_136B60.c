__int64 __fastcall sub_136B60(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  __int64 v3; // rbp

  v1 = a1[1];
  if ( (*(_BYTE *)v1 & 2) != 0 )
    goto LABEL_9;
  if ( (**(_BYTE **)(v1 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
    {
LABEL_4:
      if ( *(_QWORD *)(v1 + 48) )
      {
        *(_QWORD *)(v1 + 56) = 0;
        qfree();
      }
      result = qfree();
      *(_QWORD *)v1 |= 2uLL;
      goto LABEL_7;
    }
  }
  else
  {
    result = sub_136B60();
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
      goto LABEL_25;
  }
  result = sub_136B60();
LABEL_25:
  if ( (*(_BYTE *)v1 & 2) == 0 )
    goto LABEL_4;
LABEL_7:
  if ( v1 )
    result = qfree();
LABEL_9:
  v3 = a1[2];
  if ( (*(_BYTE *)v3 & 2) != 0 )
    goto LABEL_16;
  if ( (**(_BYTE **)(v3 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_28;
  }
  else
  {
    result = sub_136B60();
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_13;
  }
  result = sub_136B60();
LABEL_13:
  if ( (*(_BYTE *)v3 & 2) == 0 )
  {
LABEL_28:
    if ( *(_QWORD *)(v3 + 48) )
    {
      *(_QWORD *)(v3 + 56) = 0;
      qfree();
    }
    result = qfree();
    *(_QWORD *)v3 |= 2uLL;
  }
  if ( v3 )
    result = qfree();
LABEL_16:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    if ( a1[6] )
    {
      a1[7] = 0;
      qfree();
    }
    result = qfree();
    *a1 |= 2uLL;
  }
  if ( a1 )
    return qfree();
  return result;
}

