void __fastcall sub_3AC9B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rbp
  unsigned __int64 *v5; // rax
  unsigned __int64 *v6; // rax
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r13
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r13
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_8;
  if ( (**(_BYTE **)(v2 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_26;
  }
  else
  {
    sub_3AC9B0();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_5;
  }
  sub_3AC9B0();
LABEL_5:
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_6;
LABEL_26:
  v6 = *(unsigned __int64 **)(v2 + 48);
  if ( v6 )
  {
    if ( !*(_QWORD *)(v2 + 56) )
    {
      sub_3AC970((unsigned __int64 *)(v2 + 48));
      goto LABEL_29;
    }
    v12 = *v6;
    v13 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
LABEL_54:
      sub_3AC970((unsigned __int64 *)(v2 + 48));
      *(_QWORD *)(v2 + 56) = 0;
LABEL_29:
      if ( *(_QWORD *)(v2 + 48) )
        qfree();
      goto LABEL_31;
    }
    v14 = *(_QWORD **)(v13 + 8);
    if ( (*(_BYTE *)v14 & 2) != 0 )
    {
      v15 = *(_QWORD **)(v13 + 16);
      if ( (*(_BYTE *)v15 & 2) != 0 )
      {
LABEL_66:
        sub_3A8930(v13 + 32);
        *(_QWORD *)v13 |= 2uLL;
LABEL_52:
        if ( v12 > 3 )
          qfree();
        goto LABEL_54;
      }
    }
    else
    {
      sub_3AC720(v14, a2);
      v15 = *(_QWORD **)(v13 + 16);
      if ( (*(_BYTE *)v15 & 2) != 0 )
        goto LABEL_51;
    }
    sub_3AC720(v15, a2);
LABEL_51:
    if ( (*(_BYTE *)v13 & 2) != 0 )
      goto LABEL_52;
    goto LABEL_66;
  }
LABEL_31:
  clear_tinfo_t();
  *(_QWORD *)v2 |= 2uLL;
LABEL_6:
  if ( v2 )
    qfree();
LABEL_8:
  v4 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)v4 & 2) != 0 )
    goto LABEL_15;
  if ( (**(_BYTE **)(v4 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v4 + 16) & 2) != 0 )
      goto LABEL_33;
  }
  else
  {
    sub_3AC9B0();
    if ( (**(_BYTE **)(v4 + 16) & 2) != 0 )
      goto LABEL_12;
  }
  sub_3AC9B0();
LABEL_12:
  if ( (*(_BYTE *)v4 & 2) != 0 )
    goto LABEL_13;
LABEL_33:
  v7 = *(unsigned __int64 **)(v4 + 48);
  if ( v7 )
  {
    if ( !*(_QWORD *)(v4 + 56) )
    {
      sub_3AC970((unsigned __int64 *)(v4 + 48));
      goto LABEL_36;
    }
    v16 = *v7;
    v17 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v17 & 2) != 0 )
    {
LABEL_64:
      sub_3AC970((unsigned __int64 *)(v4 + 48));
      *(_QWORD *)(v4 + 56) = 0;
LABEL_36:
      if ( *(_QWORD *)(v4 + 48) )
        qfree();
      goto LABEL_38;
    }
    v18 = *(_QWORD **)(v17 + 8);
    if ( (*(_BYTE *)v18 & 2) != 0 )
    {
      v19 = *(_QWORD **)(v17 + 16);
      if ( (*(_BYTE *)v19 & 2) != 0 )
      {
LABEL_68:
        sub_3A8930(v17 + 32);
        *(_QWORD *)v17 |= 2uLL;
LABEL_62:
        if ( v16 > 3 )
          qfree();
        goto LABEL_64;
      }
    }
    else
    {
      sub_3AC720(v18, a2);
      v19 = *(_QWORD **)(v17 + 16);
      if ( (*(_BYTE *)v19 & 2) != 0 )
        goto LABEL_61;
    }
    sub_3AC720(v19, a2);
LABEL_61:
    if ( (*(_BYTE *)v17 & 2) != 0 )
      goto LABEL_62;
    goto LABEL_68;
  }
LABEL_38:
  clear_tinfo_t();
  *(_QWORD *)v4 |= 2uLL;
LABEL_13:
  if ( v4 )
    qfree();
LABEL_15:
  if ( (*(_BYTE *)a1 & 2) != 0 )
    goto LABEL_22;
  v5 = *(unsigned __int64 **)(a1 + 48);
  if ( v5 )
  {
    if ( !*(_QWORD *)(a1 + 56) )
    {
      sub_3AC970((unsigned __int64 *)(a1 + 48));
      goto LABEL_19;
    }
    v8 = *v5;
    v9 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
LABEL_46:
      sub_3AC970((unsigned __int64 *)(a1 + 48));
      *(_QWORD *)(a1 + 56) = 0;
LABEL_19:
      if ( *(_QWORD *)(a1 + 48) )
        qfree();
      goto LABEL_21;
    }
    v10 = *(_QWORD **)(v9 + 8);
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v11 = *(_QWORD **)(v9 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
      {
LABEL_56:
        sub_3A8930(v9 + 32);
        *(_QWORD *)v9 |= 2uLL;
LABEL_44:
        if ( v8 > 3 )
          qfree();
        goto LABEL_46;
      }
    }
    else
    {
      sub_3AC720(v10, a2);
      v11 = *(_QWORD **)(v9 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_43;
    }
    sub_3AC720(v11, a2);
LABEL_43:
    if ( (*(_BYTE *)v9 & 2) != 0 )
      goto LABEL_44;
    goto LABEL_56;
  }
LABEL_21:
  clear_tinfo_t();
  *(_QWORD *)a1 |= 2uLL;
LABEL_22:
  if ( a1 )
    qfree();
}

