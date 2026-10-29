__int64 __fastcall sub_222AF0(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  __int64 v3; // rbp

  v1 = a1[1];
  if ( (*(_BYTE *)v1 & 2) != 0 )
    goto LABEL_11;
  if ( (**(_BYTE **)(v1 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
    {
LABEL_4:
      if ( *(_QWORD *)(v1 + 88) )
      {
        *(_QWORD *)(v1 + 96) = 0;
        qfree();
      }
      result = clear_tinfo_t();
      if ( *(_QWORD *)(v1 + 24) )
      {
        *(_QWORD *)(v1 + 32) = 0;
        result = qfree();
      }
      *(_QWORD *)v1 |= 2uLL;
      goto LABEL_9;
    }
  }
  else
  {
    result = sub_222AF0();
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
      goto LABEL_35;
  }
  result = sub_222AF0();
LABEL_35:
  if ( (*(_BYTE *)v1 & 2) == 0 )
    goto LABEL_4;
LABEL_9:
  if ( v1 )
    result = qfree();
LABEL_11:
  v3 = a1[2];
  if ( (*(_BYTE *)v3 & 2) != 0 )
    goto LABEL_24;
  if ( (**(_BYTE **)(v3 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
    {
LABEL_14:
      if ( *(_QWORD *)(v3 + 88) )
      {
        *(_QWORD *)(v3 + 96) = 0;
        qfree();
      }
      result = clear_tinfo_t();
      if ( *(_QWORD *)(v3 + 24) )
      {
        *(_QWORD *)(v3 + 32) = 0;
        result = qfree();
      }
      *(_QWORD *)v3 |= 2uLL;
      goto LABEL_22;
    }
  }
  else
  {
    result = sub_222AF0();
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_21;
  }
  result = sub_222AF0();
LABEL_21:
  if ( (*(_BYTE *)v3 & 2) == 0 )
    goto LABEL_14;
LABEL_22:
  if ( v3 )
    result = qfree();
LABEL_24:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    if ( a1[11] )
    {
      a1[12] = 0;
      qfree();
    }
    result = clear_tinfo_t();
    if ( a1[3] )
    {
      a1[4] = 0;
      result = qfree();
    }
    *a1 |= 2uLL;
  }
  if ( a1 )
    return qfree();
  return result;
}

