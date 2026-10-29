void __fastcall sub_29A360(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbp

  v1 = a1[1];
  if ( (*(_BYTE *)v1 & 2) != 0 )
    goto LABEL_7;
  if ( (**(_BYTE **)(v1 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
    {
LABEL_4:
      sub_29A030(v1 + 32);
      *(_QWORD *)v1 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    sub_29A360();
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
      goto LABEL_21;
  }
  sub_29A360();
LABEL_21:
  if ( (*(_BYTE *)v1 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v1 )
    qfree();
LABEL_7:
  v2 = a1[2];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_14;
  if ( (**(_BYTE **)(v2 + 8) & 2) == 0 )
  {
    sub_29A360();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (**(_BYTE **)(v2 + 16) & 2) == 0 )
  {
LABEL_10:
    sub_29A360();
LABEL_11:
    if ( (*(_BYTE *)v2 & 2) != 0 )
      goto LABEL_12;
  }
  sub_29A030(v2 + 32);
  *(_QWORD *)v2 |= 2uLL;
LABEL_12:
  if ( v2 )
    qfree();
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    sub_29A030((__int64)(a1 + 4));
    *a1 |= 2uLL;
  }
  if ( a1 )
    qfree();
}

