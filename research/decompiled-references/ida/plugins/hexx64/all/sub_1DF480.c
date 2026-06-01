__int64 __fastcall sub_1DF480(_QWORD *a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi

  v2 = a1[1];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_7;
  v3 = *(_QWORD **)(v2 + 8);
  if ( (*(_BYTE *)v3 & 2) != 0 )
  {
    v4 = *(_QWORD **)(v2 + 16);
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
LABEL_4:
      result = sub_312B80(v2 + 40);
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    result = sub_1DF480(v3);
    v4 = *(_QWORD **)(v2 + 16);
    if ( (*(_BYTE *)v4 & 2) != 0 )
      goto LABEL_21;
  }
  result = sub_1DF480(v4);
LABEL_21:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v2 )
    result = qfree(v2);
LABEL_7:
  v6 = a1[2];
  if ( (*(_BYTE *)v6 & 2) != 0 )
    goto LABEL_14;
  v7 = *(_QWORD **)(v6 + 8);
  if ( (*(_BYTE *)v7 & 2) == 0 )
  {
    result = sub_1DF480(v7);
    v8 = *(_QWORD **)(v6 + 16);
    if ( (*(_BYTE *)v8 & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v8 = *(_QWORD **)(v6 + 16);
  if ( (*(_BYTE *)v8 & 2) == 0 )
  {
LABEL_10:
    result = sub_1DF480(v8);
LABEL_11:
    if ( (*(_BYTE *)v6 & 2) != 0 )
      goto LABEL_12;
  }
  result = sub_312B80(v6 + 40);
  *(_QWORD *)v6 |= 2uLL;
LABEL_12:
  if ( v6 )
    result = qfree(v6);
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    result = sub_312B80((__int64)(a1 + 5));
    *a1 |= 2uLL;
  }
  if ( a1 )
    return qfree((__int64)a1);
  return result;
}

