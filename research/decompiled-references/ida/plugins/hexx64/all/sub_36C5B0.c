void __fastcall sub_36C5B0(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  void *v9; // rdi

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
      clear_tinfo_t();
      sub_36BBD0(*(_QWORD **)(v2 + 48));
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    sub_36C5B0(v3);
    v4 = *(_QWORD **)(v2 + 16);
    if ( (*(_BYTE *)v4 & 2) != 0 )
      goto LABEL_23;
  }
  sub_36C5B0(v4);
LABEL_23:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v2 )
    qfree(v2);
LABEL_7:
  v5 = a1[2];
  if ( (*(_BYTE *)v5 & 2) != 0 )
    goto LABEL_14;
  v6 = *(_QWORD **)(v5 + 8);
  if ( (*(_BYTE *)v6 & 2) == 0 )
  {
    sub_36C5B0(v6);
    v7 = *(_QWORD **)(v5 + 16);
    if ( (*(_BYTE *)v7 & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v7 = *(_QWORD **)(v5 + 16);
  if ( (*(_BYTE *)v7 & 2) == 0 )
  {
LABEL_10:
    sub_36C5B0(v7);
LABEL_11:
    if ( (*(_BYTE *)v5 & 2) != 0 )
      goto LABEL_12;
  }
  clear_tinfo_t();
  sub_36BBD0(*(_QWORD **)(v5 + 48));
  *(_QWORD *)v5 |= 2uLL;
LABEL_12:
  if ( v5 )
    qfree(v5);
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    clear_tinfo_t();
    v8 = a1[6];
    while ( v8 )
    {
      sub_36BBD0(*(_QWORD **)(v8 + 24));
      v9 = (void *)v8;
      v8 = *(_QWORD *)(v8 + 16);
      operator delete(v9, 0x28u);
    }
    *a1 |= 2uLL;
  }
  if ( a1 )
    qfree((__int64)a1);
}

