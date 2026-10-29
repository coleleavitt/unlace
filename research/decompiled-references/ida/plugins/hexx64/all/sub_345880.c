_QWORD *__fastcall sub_345880(_QWORD *a1, __int64 *a2, unsigned __int64 a3)
{
  _QWORD *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rax
  _QWORD *result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 *v16; // rdi
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 *v23; // rcx
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rax
  unsigned __int64 *v26; // rcx
  __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  _QWORD *v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 *v32; // rdx
  unsigned __int64 v33; // rcx
  _QWORD *v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // r9
  unsigned __int64 v37; // rax
  _QWORD *v38; // rdx
  __int64 v39; // rax
  unsigned __int64 *v40; // rdx
  unsigned __int64 v41; // rcx
  _QWORD *v42; // rdx

  v5 = (_QWORD *)*a1;
  v6 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( a2 == v6 )
    goto LABEL_62;
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
          goto LABEL_47;
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
        else if ( v15[2] == a3 )
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
          goto LABEL_51;
        goto LABEL_23;
      }
      a2 = (__int64 *)(**(_QWORD **)(v9 + 8) & 1LL);
      if ( v18 )
      {
LABEL_38:
        if ( a2 )
          goto LABEL_39;
LABEL_23:
        *(_QWORD *)v9 = v10 | 1;
        goto LABEL_24;
      }
      while ( 1 )
      {
        if ( (v17 & 1) == 0 )
          goto LABEL_38;
        if ( a2 )
          break;
LABEL_51:
        a2 = (__int64 *)v9;
        *v16 = v17 & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD *)v9 |= 1uLL;
        sub_2D2260(a1, (unsigned __int64 *)v9);
        v9 = *(_QWORD *)(a3 + 8);
        v29 = *(_QWORD *)v9;
        if ( (*(_QWORD *)v9 & 2) == 0 )
          goto LABEL_40;
LABEL_42:
        *(_QWORD *)a3 &= ~1uLL;
        v30 = *(_QWORD **)(v9 + 8);
        if ( (*v30 & 2) == 0 )
          *v30 &= ~1uLL;
        v31 = *(_QWORD *)(a3 + 8);
        if ( (*(_BYTE *)v31 & 2) == 0 )
        {
          v32 = *(unsigned __int64 **)(v31 + 16);
          *(_QWORD *)(a3 + 8) = v32;
          if ( (*v32 & 2) == 0 )
            *v32 = a3 & 0xFFFFFFFFFFFFFFFCLL | *v32 & 3;
          *(_QWORD *)v31 = *(_QWORD *)v31 & 3LL | *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
          v33 = v31 & 0xFFFFFFFFFFFFFFFCLL;
          v34 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
          if ( v34 == (_QWORD *)*a1 )
          {
            *v34 = v33 | *v34 & 3LL;
          }
          else if ( v34[2] == a3 )
          {
            v34[2] = v31;
          }
          else
          {
            v34[1] = v31;
          }
          *(_QWORD *)(v31 + 16) = a3;
          goto LABEL_61;
        }
        if ( under_debugger )
          goto LABEL_98;
        interr();
LABEL_47:
        if ( under_debugger )
          goto LABEL_98;
        v16 = (_QWORD *)(&stru_D68 + 9);
        v9 = interr();
      }
LABEL_39:
      v29 = *(_QWORD *)v9;
LABEL_40:
      if ( (*(_BYTE *)a3 & 1) != 0 )
        *(_QWORD *)v9 = v29 | 1;
      else
        *(_QWORD *)v9 = v29 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_42;
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
      v35 = *(_QWORD *)a3 & 2LL;
      goto LABEL_63;
    }
    a3 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
  }
  if ( (v20 & 1) == 0 )
    goto LABEL_34;
  *(_QWORD *)v19 = v20 & 0xFFFFFFFFFFFFFFFELL;
  v21 = *(_QWORD *)(a3 + 16);
  v22 = *(_QWORD *)a3 | 1LL;
  *(_QWORD *)a3 = v22;
  if ( (*(_BYTE *)v21 & 2) == 0 )
  {
    v23 = *(unsigned __int64 **)(v21 + 8);
    *(_QWORD *)(a3 + 16) = v23;
    if ( (*v23 & 2) == 0 )
    {
      *v23 = *v23 & 3 | a3 & 0xFFFFFFFFFFFFFFFCLL;
      v22 = *(_QWORD *)a3;
    }
    *(_QWORD *)v21 = *(_QWORD *)v21 & 3LL | v22 & 0xFFFFFFFFFFFFFFFCLL;
    v24 = v21 & 0xFFFFFFFFFFFFFFFCLL;
    v25 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( v25 == (_QWORD *)*a1 )
    {
      *v25 = v24 | *v25 & 3LL;
    }
    else if ( v25[1] == a3 )
    {
      v25[1] = v21;
    }
    else
    {
      v25[2] = v21;
    }
    *(_QWORD *)(v21 + 8) = a3;
    v19 = *(_QWORD *)(a3 + 16);
    *(_QWORD *)a3 = v24 | *(_QWORD *)a3 & 3LL;
    v20 = *(_QWORD *)v19;
    if ( (*(_QWORD *)v19 & 2) == 0 )
    {
LABEL_34:
      v26 = *(unsigned __int64 **)(v19 + 8);
      v27 = **(_QWORD **)(v19 + 16);
      v28 = *v26;
      if ( (*v26 & 2) != 0 )
      {
        if ( (v27 & 2) == 0 && (v27 & 1) != 0 )
        {
LABEL_75:
          v37 = *(_QWORD *)v19;
LABEL_76:
          if ( (*(_BYTE *)a3 & 1) != 0 )
            *(_QWORD *)v19 = v37 | 1;
          else
            *(_QWORD *)v19 = v37 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_69;
        }
      }
      else
      {
        v36 = *v26 & 1;
        if ( (v27 & 2) == 0 )
          goto LABEL_74;
        while ( v36 )
        {
          *v26 = v28 & 0xFFFFFFFFFFFFFFFELL;
          *(_QWORD *)v19 |= 1uLL;
          sub_2D2320(a1, (unsigned __int64 *)v19);
          v19 = *(_QWORD *)(a3 + 16);
          v37 = *(_QWORD *)v19;
          if ( (*(_QWORD *)v19 & 2) == 0 )
            goto LABEL_76;
LABEL_69:
          *(_QWORD *)a3 &= ~1uLL;
          v38 = *(_QWORD **)(v19 + 16);
          if ( (*v38 & 2) == 0 )
            *v38 &= ~1uLL;
          v39 = *(_QWORD *)(a3 + 16);
          if ( (*(_BYTE *)v39 & 2) == 0 )
          {
            v40 = *(unsigned __int64 **)(v39 + 8);
            *(_QWORD *)(a3 + 16) = v40;
            v41 = *v40;
            if ( (*v40 & 2) != 0 )
              goto LABEL_79;
            goto LABEL_86;
          }
          if ( under_debugger )
            goto LABEL_98;
          LOBYTE(v27) = 112;
          v20 = interr();
LABEL_74:
          if ( (v27 & 1) != 0 )
            goto LABEL_75;
        }
      }
      *(_QWORD *)v19 = v20 | 1;
    }
LABEL_24:
    v5 = (_QWORD *)*a1;
    goto LABEL_11;
  }
  if ( under_debugger )
LABEL_98:
    BUG();
  v39 = interr();
LABEL_86:
  *v40 = a3 & 0xFFFFFFFFFFFFFFFCLL | v41 & 3;
LABEL_79:
  *(_QWORD *)v39 = *(_QWORD *)v39 & 3LL | *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
  v33 = v39 & 0xFFFFFFFFFFFFFFFCLL;
  v42 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( v42 == (_QWORD *)*a1 )
  {
    *v42 = v33 | *v42 & 3LL;
  }
  else if ( v42[1] == a3 )
  {
    v42[1] = v39;
  }
  else
  {
    v42[2] = v39;
  }
  *(_QWORD *)(v39 + 8) = a3;
LABEL_61:
  *(_QWORD *)a3 = v33 | *(_QWORD *)a3 & 3LL;
  v5 = (_QWORD *)*a1;
  v6 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
LABEL_62:
  v7 = *v6;
  v35 = *v6 & 2;
LABEL_63:
  if ( !v35 )
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

