void __fastcall sub_29F060(__int64 a1, double a2)
{
  __int64 v2; // rbp
  _BYTE *v4; // rdi
  _BYTE *v5; // rdi
  __int64 v6; // rbp
  _BYTE *v7; // rdi
  _BYTE *v8; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_7;
  v4 = *(_BYTE **)(v2 + 8);
  if ( (*v4 & 2) != 0 )
  {
    v5 = *(_BYTE **)(v2 + 16);
    if ( (*v5 & 2) != 0 )
    {
LABEL_4:
      *(_DWORD *)(v2 + 56) = -1;
      sub_29EC30(v2 + 40, a2);
      sub_29EC30(v2 + 24, a2);
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    sub_29F060((__int64)v4);
    v5 = *(_BYTE **)(v2 + 16);
    if ( (*v5 & 2) != 0 )
      goto LABEL_21;
  }
  sub_29F060((__int64)v5);
LABEL_21:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v2 )
    qfree(v2);
LABEL_7:
  v6 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)v6 & 2) != 0 )
    goto LABEL_14;
  v7 = *(_BYTE **)(v6 + 8);
  if ( (*v7 & 2) == 0 )
  {
    sub_29F060((__int64)v7);
    v8 = *(_BYTE **)(v6 + 16);
    if ( (*v8 & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v8 = *(_BYTE **)(v6 + 16);
  if ( (*v8 & 2) == 0 )
  {
LABEL_10:
    sub_29F060((__int64)v8);
LABEL_11:
    if ( (*(_BYTE *)v6 & 2) != 0 )
      goto LABEL_12;
  }
  *(_DWORD *)(v6 + 56) = -1;
  sub_29EC30(v6 + 40, a2);
  sub_29EC30(v6 + 24, a2);
  *(_QWORD *)v6 |= 2uLL;
LABEL_12:
  if ( v6 )
    qfree(v6);
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    *(_DWORD *)(a1 + 56) = -1;
    sub_29EC30(a1 + 40, a2);
    sub_29EC30(a1 + 24, a2);
    *(_QWORD *)a1 |= 2uLL;
  }
  if ( a1 )
    qfree(a1);
}

