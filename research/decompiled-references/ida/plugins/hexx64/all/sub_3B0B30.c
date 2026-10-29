void __fastcall sub_3B0B30(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  _BYTE *v5; // rdi
  _BYTE *v6; // rdi
  __int64 v7; // rbp
  _BYTE *v8; // rdi
  _BYTE *v9; // rdi
  unsigned __int64 *v10; // rax
  __int64 v11; // rdi
  unsigned __int64 *v12; // rax
  __int64 v13; // rdi
  unsigned __int64 *v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r12
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r13
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // r13
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi

  v3 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)v3 & 2) != 0 )
    goto LABEL_8;
  v5 = *(_BYTE **)(v3 + 8);
  if ( (*v5 & 2) != 0 )
  {
    v6 = *(_BYTE **)(v3 + 16);
    if ( (*v6 & 2) != 0 )
      goto LABEL_26;
  }
  else
  {
    sub_3B0B30((__int64)v5, a2);
    v6 = *(_BYTE **)(v3 + 16);
    if ( (*v6 & 2) != 0 )
      goto LABEL_5;
  }
  sub_3B0B30((__int64)v6, a2);
LABEL_5:
  if ( (*(_BYTE *)v3 & 2) != 0 )
    goto LABEL_6;
LABEL_26:
  v12 = *(unsigned __int64 **)(v3 + 48);
  if ( v12 )
  {
    if ( !*(_QWORD *)(v3 + 56) )
    {
      sub_3B0AF0((unsigned __int64 *)(v3 + 48));
      goto LABEL_29;
    }
    v20 = *v12;
    v21 = *v12 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
LABEL_54:
      sub_3B0AF0((unsigned __int64 *)(v3 + 48));
      *(_QWORD *)(v3 + 56) = 0;
LABEL_29:
      v13 = *(_QWORD *)(v3 + 48);
      if ( v13 )
        qfree(v13);
      goto LABEL_31;
    }
    v22 = *(_QWORD **)(v21 + 8);
    if ( (*(_BYTE *)v22 & 2) != 0 )
    {
      v23 = *(_QWORD **)(v21 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
      {
LABEL_66:
        sub_3ACAB0(v21 + 32, a3);
        *(_QWORD *)v21 |= 2uLL;
LABEL_52:
        if ( v20 > 3 )
          qfree(v21);
        goto LABEL_54;
      }
    }
    else
    {
      sub_3B08A0(v22, a2, a3);
      v23 = *(_QWORD **)(v21 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
        goto LABEL_51;
    }
    sub_3B08A0(v23, a2, a3);
LABEL_51:
    if ( (*(_BYTE *)v21 & 2) != 0 )
      goto LABEL_52;
    goto LABEL_66;
  }
LABEL_31:
  clear_tinfo_t();
  *(_QWORD *)v3 |= 2uLL;
LABEL_6:
  if ( v3 )
    qfree(v3);
LABEL_8:
  v7 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)v7 & 2) != 0 )
    goto LABEL_15;
  v8 = *(_BYTE **)(v7 + 8);
  if ( (*v8 & 2) != 0 )
  {
    v9 = *(_BYTE **)(v7 + 16);
    if ( (*v9 & 2) != 0 )
      goto LABEL_33;
  }
  else
  {
    sub_3B0B30((__int64)v8, a2);
    v9 = *(_BYTE **)(v7 + 16);
    if ( (*v9 & 2) != 0 )
      goto LABEL_12;
  }
  sub_3B0B30((__int64)v9, a2);
LABEL_12:
  if ( (*(_BYTE *)v7 & 2) != 0 )
    goto LABEL_13;
LABEL_33:
  v14 = *(unsigned __int64 **)(v7 + 48);
  if ( v14 )
  {
    if ( !*(_QWORD *)(v7 + 56) )
    {
      sub_3B0AF0((unsigned __int64 *)(v7 + 48));
      goto LABEL_36;
    }
    v24 = *v14;
    v25 = *v14 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v25 & 2) != 0 )
    {
LABEL_64:
      sub_3B0AF0((unsigned __int64 *)(v7 + 48));
      *(_QWORD *)(v7 + 56) = 0;
LABEL_36:
      v15 = *(_QWORD *)(v7 + 48);
      if ( v15 )
        qfree(v15);
      goto LABEL_38;
    }
    v26 = *(_QWORD **)(v25 + 8);
    if ( (*(_BYTE *)v26 & 2) != 0 )
    {
      v27 = *(_QWORD **)(v25 + 16);
      if ( (*(_BYTE *)v27 & 2) != 0 )
      {
LABEL_68:
        sub_3ACAB0(v25 + 32, a3);
        *(_QWORD *)v25 |= 2uLL;
LABEL_62:
        if ( v24 > 3 )
          qfree(v25);
        goto LABEL_64;
      }
    }
    else
    {
      sub_3B08A0(v26, a2, a3);
      v27 = *(_QWORD **)(v25 + 16);
      if ( (*(_BYTE *)v27 & 2) != 0 )
        goto LABEL_61;
    }
    sub_3B08A0(v27, a2, a3);
LABEL_61:
    if ( (*(_BYTE *)v25 & 2) != 0 )
      goto LABEL_62;
    goto LABEL_68;
  }
LABEL_38:
  clear_tinfo_t();
  *(_QWORD *)v7 |= 2uLL;
LABEL_13:
  if ( v7 )
    qfree(v7);
LABEL_15:
  if ( (*(_BYTE *)a1 & 2) != 0 )
    goto LABEL_22;
  v10 = *(unsigned __int64 **)(a1 + 48);
  if ( v10 )
  {
    if ( !*(_QWORD *)(a1 + 56) )
    {
      sub_3B0AF0((unsigned __int64 *)(a1 + 48));
      goto LABEL_19;
    }
    v16 = *v10;
    v17 = *v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v17 & 2) != 0 )
    {
LABEL_46:
      sub_3B0AF0((unsigned __int64 *)(a1 + 48));
      *(_QWORD *)(a1 + 56) = 0;
LABEL_19:
      v11 = *(_QWORD *)(a1 + 48);
      if ( v11 )
        qfree(v11);
      goto LABEL_21;
    }
    v18 = *(_QWORD **)(v17 + 8);
    if ( (*(_BYTE *)v18 & 2) != 0 )
    {
      v19 = *(_QWORD **)(v17 + 16);
      if ( (*(_BYTE *)v19 & 2) != 0 )
      {
LABEL_56:
        sub_3ACAB0(v17 + 32, a3);
        *(_QWORD *)v17 |= 2uLL;
LABEL_44:
        if ( v16 > 3 )
          qfree(v17);
        goto LABEL_46;
      }
    }
    else
    {
      sub_3B08A0(v18, a2, a3);
      v19 = *(_QWORD **)(v17 + 16);
      if ( (*(_BYTE *)v19 & 2) != 0 )
        goto LABEL_43;
    }
    sub_3B08A0(v19, a2, a3);
LABEL_43:
    if ( (*(_BYTE *)v17 & 2) != 0 )
      goto LABEL_44;
    goto LABEL_56;
  }
LABEL_21:
  clear_tinfo_t();
  *(_QWORD *)a1 |= 2uLL;
LABEL_22:
  if ( a1 )
    qfree(a1);
}

