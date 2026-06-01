__int64 __fastcall sub_E3E30(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 *v3; // rdi
  __int64 *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 *v7; // rdi
  __int64 *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi

  v2 = a1[1];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_9;
  v3 = *(__int64 **)(v2 + 8);
  if ( (*(_BYTE *)v3 & 2) != 0 )
  {
    v4 = *(__int64 **)(v2 + 16);
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
LABEL_4:
      v5 = *(_QWORD *)(v2 + 24);
      if ( v5 )
      {
        *(_QWORD *)(v2 + 32) = 0;
        qfree(v5);
      }
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_7;
    }
  }
  else
  {
    sub_E3E30(v3);
    v4 = *(__int64 **)(v2 + 16);
    if ( (*(_BYTE *)v4 & 2) != 0 )
      goto LABEL_25;
  }
  sub_E3E30(v4);
LABEL_25:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_4;
LABEL_7:
  if ( v2 )
    qfree(v2);
LABEL_9:
  v6 = a1[2];
  if ( (*(_BYTE *)v6 & 2) != 0 )
    goto LABEL_16;
  v7 = *(__int64 **)(v6 + 8);
  if ( (*(_BYTE *)v7 & 2) != 0 )
  {
    v8 = *(__int64 **)(v6 + 16);
    if ( (*(_BYTE *)v8 & 2) != 0 )
      goto LABEL_28;
  }
  else
  {
    sub_E3E30(v7);
    v8 = *(__int64 **)(v6 + 16);
    if ( (*(_BYTE *)v8 & 2) != 0 )
      goto LABEL_13;
  }
  sub_E3E30(v8);
LABEL_13:
  if ( (*(_BYTE *)v6 & 2) == 0 )
  {
LABEL_28:
    v11 = *(_QWORD *)(v6 + 24);
    if ( v11 )
    {
      *(_QWORD *)(v6 + 32) = 0;
      qfree(v11);
    }
    *(_QWORD *)v6 |= 2uLL;
  }
  if ( v6 )
    qfree(v6);
LABEL_16:
  result = *a1;
  if ( (*a1 & 2) == 0 )
  {
    v10 = a1[3];
    if ( v10 )
    {
      a1[4] = 0;
      qfree(v10);
      result = *a1;
    }
    result |= 2uLL;
    *a1 = result;
  }
  if ( a1 )
    return qfree((__int64)a1);
  return result;
}

