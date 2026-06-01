__int64 __fastcall sub_3C4EB0(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 result; // rax

  v1 = a1[1];
  v2 = *(_QWORD *)v1;
  if ( (*(_QWORD *)v1 & 2) != 0 )
    goto LABEL_7;
  if ( (**(_BYTE **)(v1 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
    {
LABEL_4:
      *(_QWORD *)v1 = v2 | 2;
      goto LABEL_5;
    }
  }
  else
  {
    sub_3C4EB0();
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
      goto LABEL_21;
  }
  sub_3C4EB0();
LABEL_21:
  v2 = *(_QWORD *)v1;
  if ( (*(_QWORD *)v1 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v1 )
    qfree();
LABEL_7:
  v3 = a1[2];
  v4 = *(_QWORD *)v3;
  if ( (*(_QWORD *)v3 & 2) != 0 )
    goto LABEL_14;
  if ( (**(_BYTE **)(v3 + 8) & 2) == 0 )
  {
    sub_3C4EB0();
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (**(_BYTE **)(v3 + 16) & 2) == 0 )
  {
LABEL_10:
    sub_3C4EB0();
LABEL_11:
    v4 = *(_QWORD *)v3;
    if ( (*(_QWORD *)v3 & 2) != 0 )
      goto LABEL_12;
  }
  *(_QWORD *)v3 = v4 | 2;
LABEL_12:
  if ( v3 )
    qfree();
LABEL_14:
  result = *a1;
  if ( (*a1 & 2) == 0 )
  {
    result |= 2uLL;
    *a1 = result;
  }
  if ( a1 )
    return qfree();
  return result;
}

