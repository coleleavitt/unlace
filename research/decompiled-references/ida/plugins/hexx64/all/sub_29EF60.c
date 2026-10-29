void __fastcall sub_29EF60(_QWORD *a1, double a2)
{
  __int64 v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi

  v3 = a1[1];
  if ( (*(_BYTE *)v3 & 2) != 0 )
    goto LABEL_7;
  v4 = *(_QWORD **)(v3 + 8);
  if ( (*(_BYTE *)v4 & 2) != 0 )
  {
    v5 = *(_QWORD **)(v3 + 16);
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
LABEL_4:
      sub_29EC30(v3 + 32, a2);
      *(_QWORD *)v3 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    sub_29EF60(v4);
    v5 = *(_QWORD **)(v3 + 16);
    if ( (*(_BYTE *)v5 & 2) != 0 )
      goto LABEL_21;
  }
  sub_29EF60(v5);
LABEL_21:
  if ( (*(_BYTE *)v3 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v3 )
    qfree(v3);
LABEL_7:
  v6 = a1[2];
  if ( (*(_BYTE *)v6 & 2) != 0 )
    goto LABEL_14;
  v7 = *(_QWORD **)(v6 + 8);
  if ( (*(_BYTE *)v7 & 2) == 0 )
  {
    sub_29EF60(v7);
    v8 = *(_QWORD **)(v6 + 16);
    if ( (*(_BYTE *)v8 & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v8 = *(_QWORD **)(v6 + 16);
  if ( (*(_BYTE *)v8 & 2) == 0 )
  {
LABEL_10:
    sub_29EF60(v8);
LABEL_11:
    if ( (*(_BYTE *)v6 & 2) != 0 )
      goto LABEL_12;
  }
  sub_29EC30(v6 + 32, a2);
  *(_QWORD *)v6 |= 2uLL;
LABEL_12:
  if ( v6 )
    qfree(v6);
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    sub_29EC30((__int64)(a1 + 4), a2);
    *a1 |= 2uLL;
  }
  if ( a1 )
    qfree((__int64)a1);
}

