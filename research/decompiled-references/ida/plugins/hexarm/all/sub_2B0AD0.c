__int64 __fastcall sub_2B0AD0(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  __int64 v3; // rbp

  v1 = a1[1];
  if ( (*(_BYTE *)v1 & 2) != 0 )
    goto LABEL_7;
  if ( (**(_BYTE **)(v1 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
    {
LABEL_4:
      cleanup_argloc();
      result = cleanup_argloc();
      *(_QWORD *)v1 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    result = sub_2B0AD0();
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
      goto LABEL_21;
  }
  result = sub_2B0AD0();
LABEL_21:
  if ( (*(_BYTE *)v1 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v1 )
    result = qfree();
LABEL_7:
  v3 = a1[2];
  if ( (*(_BYTE *)v3 & 2) != 0 )
    goto LABEL_14;
  if ( (**(_BYTE **)(v3 + 8) & 2) == 0 )
  {
    result = sub_2B0AD0();
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (**(_BYTE **)(v3 + 16) & 2) == 0 )
  {
LABEL_10:
    result = sub_2B0AD0();
LABEL_11:
    if ( (*(_BYTE *)v3 & 2) != 0 )
      goto LABEL_12;
  }
  cleanup_argloc();
  result = cleanup_argloc();
  *(_QWORD *)v3 |= 2uLL;
LABEL_12:
  if ( v3 )
    result = qfree();
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    cleanup_argloc();
    result = cleanup_argloc();
    *a1 |= 2uLL;
  }
  if ( a1 )
    return qfree();
  return result;
}

