__int64 __fastcall sub_7B880(_QWORD *a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi

  v2 = a1[1];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_9;
  v3 = *(_QWORD **)(v2 + 8);
  if ( (*(_BYTE *)v3 & 2) != 0 )
  {
    v4 = *(_QWORD **)(v2 + 16);
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
LABEL_4:
      result = clear_tinfo_t();
      v6 = *(_QWORD *)(v2 + 24);
      if ( v6 )
      {
        *(_QWORD *)(v2 + 32) = 0;
        result = qfree(v6);
      }
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_7;
    }
  }
  else
  {
    result = sub_7B880(v3);
    v4 = *(_QWORD **)(v2 + 16);
    if ( (*(_BYTE *)v4 & 2) != 0 )
      goto LABEL_25;
  }
  result = sub_7B880(v4);
LABEL_25:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_4;
LABEL_7:
  if ( v2 )
    result = qfree(v2);
LABEL_9:
  v7 = a1[2];
  if ( (*(_BYTE *)v7 & 2) != 0 )
    goto LABEL_16;
  v8 = *(_QWORD **)(v7 + 8);
  if ( (*(_BYTE *)v8 & 2) != 0 )
  {
    v9 = *(_QWORD **)(v7 + 16);
    if ( (*(_BYTE *)v9 & 2) != 0 )
      goto LABEL_28;
  }
  else
  {
    result = sub_7B880(v8);
    v9 = *(_QWORD **)(v7 + 16);
    if ( (*(_BYTE *)v9 & 2) != 0 )
      goto LABEL_13;
  }
  result = sub_7B880(v9);
LABEL_13:
  if ( (*(_BYTE *)v7 & 2) == 0 )
  {
LABEL_28:
    result = clear_tinfo_t();
    v11 = *(_QWORD *)(v7 + 24);
    if ( v11 )
    {
      *(_QWORD *)(v7 + 32) = 0;
      result = qfree(v11);
    }
    *(_QWORD *)v7 |= 2uLL;
  }
  if ( v7 )
    result = qfree(v7);
LABEL_16:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    result = clear_tinfo_t();
    v10 = a1[3];
    if ( v10 )
    {
      a1[4] = 0;
      result = qfree(v10);
    }
    *a1 |= 2uLL;
  }
  if ( a1 )
    return qfree((__int64)a1);
  return result;
}

