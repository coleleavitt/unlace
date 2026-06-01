__int64 __fastcall sub_227370(_QWORD *a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi

  v2 = a1[1];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_11;
  v3 = *(_QWORD **)(v2 + 8);
  if ( (*(_BYTE *)v3 & 2) != 0 )
  {
    v4 = *(_QWORD **)(v2 + 16);
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
LABEL_4:
      v5 = *(_QWORD *)(v2 + 88);
      if ( v5 )
      {
        *(_QWORD *)(v2 + 96) = 0;
        qfree(v5);
      }
      result = clear_tinfo_t();
      v7 = *(_QWORD *)(v2 + 24);
      if ( v7 )
      {
        *(_QWORD *)(v2 + 32) = 0;
        result = qfree(v7);
      }
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_9;
    }
  }
  else
  {
    result = sub_227370(v3);
    v4 = *(_QWORD **)(v2 + 16);
    if ( (*(_BYTE *)v4 & 2) != 0 )
      goto LABEL_35;
  }
  result = sub_227370(v4);
LABEL_35:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_4;
LABEL_9:
  if ( v2 )
    result = qfree(v2);
LABEL_11:
  v8 = a1[2];
  if ( (*(_BYTE *)v8 & 2) != 0 )
    goto LABEL_24;
  v9 = *(_QWORD **)(v8 + 8);
  if ( (*(_BYTE *)v9 & 2) != 0 )
  {
    v10 = *(_QWORD **)(v8 + 16);
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
LABEL_14:
      v11 = *(_QWORD *)(v8 + 88);
      if ( v11 )
      {
        *(_QWORD *)(v8 + 96) = 0;
        qfree(v11);
      }
      result = clear_tinfo_t();
      v12 = *(_QWORD *)(v8 + 24);
      if ( v12 )
      {
        *(_QWORD *)(v8 + 32) = 0;
        result = qfree(v12);
      }
      *(_QWORD *)v8 |= 2uLL;
      goto LABEL_22;
    }
  }
  else
  {
    result = sub_227370(v9);
    v10 = *(_QWORD **)(v8 + 16);
    if ( (*(_BYTE *)v10 & 2) != 0 )
      goto LABEL_21;
  }
  result = sub_227370(v10);
LABEL_21:
  if ( (*(_BYTE *)v8 & 2) == 0 )
    goto LABEL_14;
LABEL_22:
  if ( v8 )
    result = qfree(v8);
LABEL_24:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    v13 = a1[11];
    if ( v13 )
    {
      a1[12] = 0;
      qfree(v13);
    }
    result = clear_tinfo_t();
    v14 = a1[3];
    if ( v14 )
    {
      a1[4] = 0;
      result = qfree(v14);
    }
    *a1 |= 2uLL;
  }
  if ( a1 )
    return qfree((__int64)a1);
  return result;
}

