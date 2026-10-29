_QWORD *__fastcall sub_141080(_QWORD *a1, __int64 *a2, unsigned __int64 a3)
{
  _QWORD *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rax
  _QWORD *result; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 *v16; // rdi
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 *v21; // rcx
  __int64 v22; // rdi
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rdx
  unsigned __int64 *v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rax
  unsigned __int64 *v30; // rdx
  unsigned __int64 v31; // rcx
  _QWORD *v32; // rdx
  __int64 v33; // rsi
  unsigned __int64 *v34; // rdx
  _QWORD *v35; // rdx

  v5 = (_QWORD *)*a1;
  v6 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( a2 == v6 )
    goto LABEL_69;
  v7 = *a2;
  while ( 1 )
  {
    if ( (v7 & 2) == 0 && (v7 & 1) != 0 )
      goto LABEL_5;
    v9 = *(_QWORD *)(a3 + 8);
    if ( (__int64 *)v9 != a2 )
    {
      v10 = *(_QWORD *)v9;
      if ( (*(_QWORD *)v9 & 2) != 0 )
        goto LABEL_11;
      if ( (v10 & 1) != 0 )
      {
        *(_QWORD *)v9 = v10 & 0xFFFFFFFFFFFFFFFELL;
        v11 = *(_QWORD *)(a3 + 8);
        v12 = *(_QWORD *)a3 | 1LL;
        *(_QWORD *)a3 = v12;
        if ( (*(_BYTE *)v11 & 2) != 0 )
          goto LABEL_44;
        v13 = *(unsigned __int64 **)(v11 + 16);
        *(_QWORD *)(a3 + 8) = v13;
        if ( (*v13 & 2) == 0 )
        {
          *v13 = *v13 & 3 | a3 & 0xFFFFFFFFFFFFFFFCLL;
          v12 = *(_QWORD *)a3;
        }
        *(_QWORD *)v11 = *(_QWORD *)v11 & 3LL | v12 & 0xFFFFFFFFFFFFFFFCLL;
        v14 = v11 & 0xFFFFFFFFFFFFFFFCLL;
        v15 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v15 == (_QWORD *)*a1 )
        {
          *v15 = v14 | *v15 & 3LL;
        }
        else if ( a3 == v15[2] )
        {
          v15[2] = v11;
        }
        else
        {
          v15[1] = v11;
        }
        *(_QWORD *)(v11 + 16) = a3;
        *(_QWORD *)a3 = v14 | *(_QWORD *)a3 & 3LL;
        v9 = *(_QWORD *)(a3 + 8);
        v10 = *(_QWORD *)v9;
        if ( (*(_QWORD *)v9 & 2) != 0 )
          goto LABEL_24;
      }
      v16 = *(unsigned __int64 **)(v9 + 16);
      v17 = *v16;
      v18 = *v16 & 2;
      if ( (**(_QWORD **)(v9 + 8) & 2) != 0 )
      {
        if ( !v18 && (v17 & 1) != 0 )
          goto LABEL_48;
        goto LABEL_23;
      }
      a2 = (__int64 *)(**(_QWORD **)(v9 + 8) & 1LL);
      if ( v18 )
      {
LABEL_35:
        if ( a2 )
          goto LABEL_36;
LABEL_23:
        *(_QWORD *)v9 = v10 | 1;
        goto LABEL_24;
      }
      while ( 1 )
      {
        if ( (v17 & 1) == 0 )
          goto LABEL_35;
        if ( a2 )
          break;
LABEL_48:
        a2 = (__int64 *)v9;
        *v16 = v17 & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD *)v9 |= 1uLL;
        sub_140B50(a1, v9);
        v9 = *(_QWORD *)(a3 + 8);
        v25 = *(_QWORD *)v9;
        if ( (*(_QWORD *)v9 & 2) == 0 )
          goto LABEL_37;
LABEL_39:
        *(_QWORD *)a3 &= ~1uLL;
        v26 = *(_QWORD **)(v9 + 8);
        if ( (*v26 & 2) == 0 )
          *v26 &= ~1uLL;
        v27 = *(unsigned __int64 **)(a3 + 8);
        if ( (*(_BYTE *)v27 & 2) == 0 )
        {
          v30 = (unsigned __int64 *)v27[2];
          *(_QWORD *)(a3 + 8) = v30;
          if ( (*v30 & 2) == 0 )
            *v30 = a3 & 0xFFFFFFFFFFFFFFFCLL | *v30 & 3;
          *v27 = *v27 & 3 | *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
          v31 = (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFCLL;
          v32 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
          if ( v32 == (_QWORD *)*a1 )
          {
            *v32 = v31 | *v32 & 3LL;
          }
          else if ( a3 == v32[2] )
          {
            v32[2] = v27;
          }
          else
          {
            v32[1] = v27;
          }
          v27[2] = a3;
          goto LABEL_68;
        }
        if ( under_debugger )
          goto LABEL_87;
        interr();
LABEL_44:
        if ( under_debugger )
          goto LABEL_87;
        v16 = (_QWORD *)(&stru_D68 + 9);
        v9 = interr();
      }
LABEL_36:
      v25 = *(_QWORD *)v9;
LABEL_37:
      if ( (*(_BYTE *)a3 & 1) != 0 )
        *(_QWORD *)v9 = v25 | 1;
      else
        *(_QWORD *)v9 = v25 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_39;
    }
    v19 = *(_QWORD *)(a3 + 16);
    v20 = *(_QWORD *)v19;
    if ( (*(_QWORD *)v19 & 2) == 0 )
      break;
LABEL_11:
    v7 = *(_QWORD *)a3;
    a2 = (__int64 *)a3;
    if ( a3 == (*v5 & 0xFFFFFFFFFFFFFFFCLL) )
    {
      v6 = (__int64 *)a3;
      v33 = *(_QWORD *)a3 & 2LL;
      goto LABEL_70;
    }
    a3 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
  }
  if ( (v20 & 1) != 0 )
  {
    *(_QWORD *)v19 = v20 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)a3 |= 1uLL;
    sub_140B50(a1, a3);
    v19 = *(_QWORD *)(a3 + 16);
    v20 = *(_QWORD *)v19;
    if ( (*(_QWORD *)v19 & 2) != 0 )
      goto LABEL_24;
  }
  v21 = *(unsigned __int64 **)(v19 + 8);
  v22 = **(_QWORD **)(v19 + 16);
  v23 = *v21;
  if ( (*v21 & 2) != 0 )
  {
    if ( (v22 & 2) == 0 && (v22 & 1) != 0 )
      goto LABEL_31;
LABEL_61:
    *(_QWORD *)v19 = v20 | 1;
LABEL_24:
    v5 = (_QWORD *)*a1;
    goto LABEL_11;
  }
  if ( (v22 & 2) == 0 && (v22 & 1) != 0 )
  {
LABEL_31:
    v24 = *(_QWORD *)v19;
LABEL_32:
    if ( (*(_BYTE *)a3 & 1) != 0 )
      *(_QWORD *)v19 = v24 | 1;
    else
      *(_QWORD *)v19 = v24 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_56;
  }
  if ( (v23 & 1) == 0 )
    goto LABEL_61;
  *v21 = v23 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)v19 |= 1uLL;
  sub_140C10(a1, v19);
  v19 = *(_QWORD *)(a3 + 16);
  v24 = *(_QWORD *)v19;
  if ( (*(_QWORD *)v19 & 2) == 0 )
    goto LABEL_32;
LABEL_56:
  *(_QWORD *)a3 &= ~1uLL;
  v28 = *(_QWORD **)(v19 + 16);
  if ( (*v28 & 2) == 0 )
    *v28 &= ~1uLL;
  v29 = *(_QWORD *)(a3 + 16);
  if ( (*(_BYTE *)v29 & 2) != 0 )
  {
    if ( under_debugger )
LABEL_87:
      BUG();
    v20 = interr();
    goto LABEL_61;
  }
  v34 = *(unsigned __int64 **)(v29 + 8);
  *(_QWORD *)(a3 + 16) = v34;
  if ( (*v34 & 2) == 0 )
    *v34 = a3 & 0xFFFFFFFFFFFFFFFCLL | *v34 & 3;
  *(_QWORD *)v29 = *(_QWORD *)v29 & 3LL | *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
  v31 = v29 & 0xFFFFFFFFFFFFFFFCLL;
  v35 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( v35 == (_QWORD *)*a1 )
  {
    *v35 = v31 | *v35 & 3LL;
  }
  else if ( a3 == v35[1] )
  {
    v35[1] = v29;
  }
  else
  {
    v35[2] = v29;
  }
  *(_QWORD *)(v29 + 8) = a3;
LABEL_68:
  *(_QWORD *)a3 = v31 | *(_QWORD *)a3 & 3LL;
  v5 = (_QWORD *)*a1;
  v6 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
LABEL_69:
  v7 = *v6;
  v33 = *v6 & 2;
LABEL_70:
  if ( !v33 )
  {
    a2 = v6;
LABEL_5:
    *a2 = v7 & 0xFFFFFFFFFFFFFFFELL;
    v5 = (_QWORD *)*a1;
  }
  result = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}

