__int64 __fastcall sub_31ACF0(__int64 *a1)
{
  __int64 *v2; // rbp
  __int64 v3; // rax
  __int64 *v4; // rdi
  __int64 *v5; // rdi
  __int64 *v6; // rbp
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 *v9; // rdi
  __int64 result; // rax

  v2 = (__int64 *)a1[1];
  v3 = *v2;
  if ( (*v2 & 2) != 0 )
    goto LABEL_7;
  v4 = (__int64 *)v2[1];
  if ( (*(_BYTE *)v4 & 2) != 0 )
  {
    v5 = (__int64 *)v2[2];
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
LABEL_4:
      *v2 = v3 | 2;
      goto LABEL_5;
    }
  }
  else
  {
    sub_31ACF0(v4);
    v5 = (__int64 *)v2[2];
    if ( (*(_BYTE *)v5 & 2) != 0 )
      goto LABEL_21;
  }
  sub_31ACF0(v5);
LABEL_21:
  v3 = *v2;
  if ( (*v2 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v2 )
    qfree((__int64)v2);
LABEL_7:
  v6 = (__int64 *)a1[2];
  v7 = *v6;
  if ( (*v6 & 2) != 0 )
    goto LABEL_14;
  v8 = (__int64 *)v6[1];
  if ( (*(_BYTE *)v8 & 2) == 0 )
  {
    sub_31ACF0(v8);
    v9 = (__int64 *)v6[2];
    if ( (*(_BYTE *)v9 & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v9 = (__int64 *)v6[2];
  if ( (*(_BYTE *)v9 & 2) == 0 )
  {
LABEL_10:
    sub_31ACF0(v9);
LABEL_11:
    v7 = *v6;
    if ( (*v6 & 2) != 0 )
      goto LABEL_12;
  }
  *v6 = v7 | 2;
LABEL_12:
  if ( v6 )
    qfree((__int64)v6);
LABEL_14:
  result = *a1;
  if ( (*a1 & 2) == 0 )
  {
    result |= 2uLL;
    *a1 = result;
  }
  if ( a1 )
    return qfree((__int64)a1);
  return result;
}

