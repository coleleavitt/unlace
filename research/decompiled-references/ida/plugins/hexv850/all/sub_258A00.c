_QWORD *__fastcall sub_258A00(_QWORD *a1, __int64 *a2, unsigned __int64 a3)
{
  _QWORD *v4; // rdi
  __int64 *v5; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *result; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 *v17; // rcx
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int64 *v20; // rcx
  __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rdx
  unsigned __int64 *v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rax
  unsigned __int64 *v30; // rdx
  unsigned __int64 v31; // rcx
  _QWORD *v32; // rdx

  v4 = (_QWORD *)*a1;
  v5 = (__int64 *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
  if ( a2 == v5 )
    goto LABEL_60;
  v7 = *a2;
  v8 = a2;
  while ( 1 )
  {
    if ( (v7 & 2) == 0 && (v7 & 1) != 0 )
      goto LABEL_5;
    v10 = *(_QWORD *)(a3 + 8);
    if ( (_QWORD *)v10 != v8 )
    {
      v11 = *(_QWORD *)v10;
      if ( (*(_QWORD *)v10 & 2) != 0 )
        goto LABEL_15;
      if ( (v11 & 1) == 0 )
        goto LABEL_11;
      *(_QWORD *)v10 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v15 = *(_QWORD *)(a3 + 8);
      v16 = *(_QWORD *)a3 | 1LL;
      *(_QWORD *)a3 = v16;
      if ( (*(_BYTE *)v15 & 2) != 0 )
        goto LABEL_45;
      v17 = *(unsigned __int64 **)(v15 + 16);
      *(_QWORD *)(a3 + 8) = v17;
      if ( (*v17 & 2) == 0 )
      {
        *v17 = *v17 & 3 | a3 & 0xFFFFFFFFFFFFFFFCLL;
        v16 = *(_QWORD *)a3;
      }
      *(_QWORD *)v15 = *(_QWORD *)v15 & 3LL | v16 & 0xFFFFFFFFFFFFFFFCLL;
      v18 = v15 & 0xFFFFFFFFFFFFFFFCLL;
      v19 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v19 == (_QWORD *)*a1 )
      {
        *v19 = v18 | *v19 & 3LL;
      }
      else if ( a3 == v19[2] )
      {
        v19[2] = v15;
      }
      else
      {
        v19[1] = v15;
      }
      *(_QWORD *)(v15 + 16) = a3;
      v10 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)a3 = v18 | *(_QWORD *)a3 & 3LL;
      v11 = *(_QWORD *)v10;
      if ( (*(_QWORD *)v10 & 2) == 0 )
      {
LABEL_11:
        v12 = *(unsigned __int64 **)(v10 + 16);
        v13 = *v12;
        v14 = *v12 & 2;
        if ( (**(_QWORD **)(v10 + 8) & 2) == 0 )
        {
          v24 = **(_QWORD **)(v10 + 8) & 1LL;
          if ( v14 || (v13 & 1) == 0 )
          {
            if ( !v24 )
              goto LABEL_13;
          }
          else if ( !v24 )
          {
            goto LABEL_48;
          }
          v25 = *(_QWORD *)v10;
          goto LABEL_38;
        }
        if ( !v14 )
        {
          while ( (v13 & 1) != 0 )
          {
LABEL_48:
            *v12 = v13 & 0xFFFFFFFFFFFFFFFELL;
            *(_QWORD *)v10 |= 1uLL;
            sub_258880(a1, v10);
            v10 = *(_QWORD *)(a3 + 8);
            v25 = *(_QWORD *)v10;
            if ( (*(_QWORD *)v10 & 2) == 0 )
            {
LABEL_38:
              if ( (*(_BYTE *)a3 & 1) != 0 )
                *(_QWORD *)v10 = v25 | 1;
              else
                *(_QWORD *)v10 = v25 & 0xFFFFFFFFFFFFFFFELL;
            }
            *(_QWORD *)a3 &= ~1uLL;
            v26 = *(_QWORD **)(v10 + 8);
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
              *(_QWORD *)a3 = v31 | *(_QWORD *)a3 & 3LL;
              v4 = (_QWORD *)*a1;
              v5 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
              goto LABEL_60;
            }
            if ( under_debugger )
              goto LABEL_76;
            interr();
LABEL_45:
            if ( under_debugger )
LABEL_76:
              BUG();
            v12 = (_QWORD *)(&stru_D68 + 9);
            v11 = interr();
          }
        }
LABEL_13:
        *(_QWORD *)v10 = v11 | 1;
      }
LABEL_14:
      v4 = (_QWORD *)*a1;
      goto LABEL_15;
    }
    v10 = *(_QWORD *)(a3 + 16);
    v11 = *(_QWORD *)v10;
    if ( (*(_QWORD *)v10 & 2) == 0 )
      break;
LABEL_15:
    v7 = *(_QWORD *)a3;
    v8 = (_QWORD *)a3;
    if ( a3 == (*v4 & 0xFFFFFFFFFFFFFFFCLL) )
    {
      v5 = (__int64 *)a3;
      v29 = *(_QWORD *)a3 & 2LL;
      goto LABEL_61;
    }
    a3 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
  }
  if ( (v11 & 1) != 0 )
  {
    *(_QWORD *)v10 = v11 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)a3 |= 1uLL;
    sub_258880(a1, a3);
    v10 = *(_QWORD *)(a3 + 16);
    v11 = *(_QWORD *)v10;
    if ( (*(_QWORD *)v10 & 2) != 0 )
      goto LABEL_14;
  }
  v20 = *(unsigned __int64 **)(v10 + 8);
  v21 = **(_QWORD **)(v10 + 16);
  v22 = *v20;
  if ( (*v20 & 2) != 0 )
  {
    if ( (v21 & 2) == 0 && (v21 & 1) != 0 )
      goto LABEL_32;
    goto LABEL_13;
  }
  if ( (v21 & 2) != 0 || (v21 & 1) == 0 )
  {
    if ( (v22 & 1) != 0 )
    {
      *v20 = v22 & 0xFFFFFFFFFFFFFFFELL;
      *(_QWORD *)v10 |= 1uLL;
      sub_258940(a1, v10);
      v10 = *(_QWORD *)(a3 + 16);
      v23 = *(_QWORD *)v10;
      if ( (*(_QWORD *)v10 & 2) == 0 )
        goto LABEL_33;
      goto LABEL_57;
    }
    goto LABEL_13;
  }
LABEL_32:
  v23 = *(_QWORD *)v10;
LABEL_33:
  if ( (*(_BYTE *)a3 & 1) != 0 )
    *(_QWORD *)v10 = v23 | 1;
  else
    *(_QWORD *)v10 = v23 & 0xFFFFFFFFFFFFFFFELL;
LABEL_57:
  *(_QWORD *)a3 &= ~1uLL;
  v28 = *(_QWORD **)(v10 + 16);
  if ( (*v28 & 2) == 0 )
    *v28 &= ~1uLL;
  sub_258880(a1, a3);
  v4 = (_QWORD *)*a1;
  v5 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
LABEL_60:
  v7 = *v5;
  v29 = *v5 & 2;
LABEL_61:
  if ( !v29 )
  {
    v8 = v5;
LABEL_5:
    *v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
    v4 = (_QWORD *)*a1;
  }
  result = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}

