void __fastcall sub_3B0790(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  __int64 v10; // rdi

  v4 = a1[1];
  if ( (*(_BYTE *)v4 & 2) != 0 )
    goto LABEL_7;
  v5 = *(_QWORD **)(v4 + 8);
  if ( (*(_BYTE *)v5 & 2) != 0 )
  {
    v6 = *(_QWORD **)(v4 + 16);
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
LABEL_4:
      sub_3ACAB0(v4 + 32, a3);
      *(_QWORD *)v4 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    sub_3B0790(v5, a2);
    v6 = *(_QWORD **)(v4 + 16);
    if ( (*(_BYTE *)v6 & 2) != 0 )
      goto LABEL_23;
  }
  sub_3B0790(v6, a2);
LABEL_23:
  if ( (*(_BYTE *)v4 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v4 )
    qfree(v4);
LABEL_7:
  v7 = a1[2];
  if ( (*(_BYTE *)v7 & 2) != 0 )
    goto LABEL_14;
  v8 = *(_QWORD **)(v7 + 8);
  if ( (*(_BYTE *)v8 & 2) == 0 )
  {
    sub_3B0790(v8, a2);
    v9 = *(_QWORD **)(v7 + 16);
    if ( (*(_BYTE *)v9 & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v9 = *(_QWORD **)(v7 + 16);
  if ( (*(_BYTE *)v9 & 2) == 0 )
  {
LABEL_10:
    sub_3B0790(v9, a2);
LABEL_11:
    if ( (*(_BYTE *)v7 & 2) != 0 )
      goto LABEL_12;
  }
  sub_3ACAB0(v7 + 32, a3);
  *(_QWORD *)v7 |= 2uLL;
LABEL_12:
  if ( v7 )
    qfree(v7);
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    sub_140140((__int64 **)a1 + 7);
    v10 = a1[4];
    if ( v10 )
    {
      a1[5] = 0;
      qfree(v10);
    }
    *a1 |= 2uLL;
  }
  if ( a1 )
    qfree((__int64)a1);
}

