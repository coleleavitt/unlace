__int64 *__fastcall sub_1B4280(_QWORD **a1, __int64 *a2, unsigned __int64 a3)
{
  _QWORD *v3; // r8
  _QWORD **v4; // rcx
  __int64 *v5; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 *v15; // rdi
  unsigned __int64 v16; // rdi
  _QWORD *v17; // rdx
  unsigned __int64 *v18; // r9
  unsigned __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // rsi
  __int64 v22; // rdx
  unsigned __int64 *v23; // rdi
  unsigned __int64 v24; // rdi
  _QWORD *v25; // rdx
  __int64 *v26; // r9
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  unsigned __int64 v32; // rsi
  __int64 v33; // rdi
  _QWORD *v34; // rsi
  __int64 v35; // rdx
  unsigned __int64 *v36; // rsi
  unsigned __int64 v37; // rdi
  _QWORD *v38; // rsi
  __int64 *v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // r11
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rsi
  unsigned __int64 v45; // rdi
  unsigned __int64 *v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // rdi
  unsigned __int64 *v49; // r8
  unsigned __int64 v50; // rdi
  _QWORD *v51; // r8
  unsigned __int64 *v52; // rsi
  __int64 v53; // rdi
  unsigned __int64 *v54; // r8
  unsigned __int64 v55; // rdi
  _QWORD *v56; // r8
  unsigned __int64 *v57; // rsi
  _QWORD *v58; // rsi

  v3 = *a1;
  v4 = a1;
  v5 = (__int64 *)(**a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( a2 == v5 )
  {
    v7 = *v5;
    if ( (*v5 & 2) != 0 )
    {
LABEL_13:
      result = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*result & 2) == 0 )
        *result &= ~1uLL;
      return result;
    }
    a2 = v5;
LABEL_12:
    *a2 = v7 & 0xFFFFFFFFFFFFFFFELL;
    v3 = *v4;
    goto LABEL_13;
  }
  v7 = *a2;
  if ( (*a2 & 2) == 0 && (v7 & 1) != 0 )
    goto LABEL_12;
  while ( 1 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    if ( (__int64 *)v8 != a2 )
    {
      v9 = *(_QWORD *)v8;
      if ( (*(_QWORD *)v8 & 2) != 0 )
        goto LABEL_5;
      if ( (v9 & 1) == 0 )
        goto LABEL_23;
      *(_QWORD *)v8 = v9 & 0xFFFFFFFFFFFFFFFELL;
      v13 = *(_QWORD *)(a3 + 8);
      v14 = *(_QWORD *)a3 | 1LL;
      *(_QWORD *)a3 = v14;
      if ( (*(_BYTE *)v13 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_123;
        a3 = interr();
        goto LABEL_57;
      }
      v15 = *(unsigned __int64 **)(v13 + 16);
      *(_QWORD *)(a3 + 8) = v15;
      if ( (*v15 & 2) == 0 )
      {
        *v15 = *v15 & 3 | a3 & 0xFFFFFFFFFFFFFFFCLL;
        v14 = *(_QWORD *)a3;
      }
      *(_QWORD *)v13 = *(_QWORD *)v13 & 3LL | v14 & 0xFFFFFFFFFFFFFFFCLL;
      v16 = v13 & 0xFFFFFFFFFFFFFFFCLL;
      v17 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v17 == *v4 )
      {
        *v17 = v16 | *v17 & 3LL;
      }
      else if ( v17[2] == a3 )
      {
        v17[2] = v13;
      }
      else
      {
        v17[1] = v13;
      }
      *(_QWORD *)(v13 + 16) = a3;
      *(_QWORD *)a3 = v16 | *(_QWORD *)a3 & 3LL;
      v8 = *(_QWORD *)(a3 + 8);
      v9 = *(_QWORD *)v8;
      if ( (*(_QWORD *)v8 & 2) == 0 )
      {
LABEL_23:
        v18 = *(unsigned __int64 **)(v8 + 16);
        v19 = *v18;
        v20 = *v18 & 2;
        if ( (**(_QWORD **)(v8 + 8) & 2) != 0 )
        {
          if ( !v20 && (v19 & 1) != 0 )
            goto LABEL_88;
        }
        else
        {
          v29 = **(_QWORD **)(v8 + 8) & 1LL;
          if ( !v20 && (v19 & 1) != 0 )
          {
            if ( v29 )
            {
LABEL_44:
              v30 = *(_QWORD *)v8;
              goto LABEL_45;
            }
LABEL_88:
            *v18 = v19 & 0xFFFFFFFFFFFFFFFELL;
            v52 = *(unsigned __int64 **)(v8 + 16);
            v53 = *(_QWORD *)v8 | 1LL;
            *(_QWORD *)v8 = v53;
            if ( (*(_BYTE *)v52 & 2) == 0 )
            {
              v54 = (unsigned __int64 *)v52[1];
              *(_QWORD *)(v8 + 16) = v54;
              if ( (*v54 & 2) == 0 )
              {
                *v54 = *v54 & 3 | v8 & 0xFFFFFFFFFFFFFFFCLL;
                v53 = *(_QWORD *)v8;
              }
              *v52 = *v52 & 3 | v53 & 0xFFFFFFFFFFFFFFFCLL;
              v55 = (unsigned __int64)v52 & 0xFFFFFFFFFFFFFFFCLL;
              v56 = (_QWORD *)(*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL);
              if ( v56 == *v4 )
              {
                *v56 = v55 | *v56 & 3LL;
              }
              else if ( v56[1] == v8 )
              {
                v56[1] = v52;
              }
              else
              {
                v56[2] = v52;
              }
              v52[1] = v8;
              *(_QWORD *)v8 = v55 | *(_QWORD *)v8 & 3LL;
              v8 = *(_QWORD *)(a3 + 8);
              v30 = *(_QWORD *)v8;
              if ( (*(_QWORD *)v8 & 2) == 0 )
              {
LABEL_45:
                v31 = v30;
                v32 = v30 & 0xFFFFFFFFFFFFFFFELL;
                v33 = v31 | 1;
                if ( (*(_BYTE *)a3 & 1) != 0 )
                  v32 = v33;
                *(_QWORD *)v8 = v32;
              }
              *(_QWORD *)a3 &= ~1uLL;
              v34 = *(_QWORD **)(v8 + 8);
              if ( (*v34 & 2) == 0 )
                *v34 &= ~1uLL;
              v35 = *(_QWORD *)(a3 + 8);
              if ( (*(_BYTE *)v35 & 2) != 0 )
              {
                if ( !under_debugger )
                {
                  result = (__int64 *)interr();
                  goto LABEL_53;
                }
LABEL_123:
                BUG();
              }
LABEL_57:
              v36 = *(unsigned __int64 **)(v35 + 16);
              *(_QWORD *)(a3 + 8) = v36;
              if ( (*v36 & 2) == 0 )
                *v36 = a3 & 0xFFFFFFFFFFFFFFFCLL | *v36 & 3;
              *(_QWORD *)v35 = *(_QWORD *)v35 & 3LL | *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
              v37 = v35 & 0xFFFFFFFFFFFFFFFCLL;
              v38 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
              if ( v38 == *v4 )
              {
                *v38 = v37 | *v38 & 3LL;
              }
              else if ( a3 == v38[2] )
              {
                v38[2] = v35;
              }
              else
              {
                v38[1] = v35;
              }
              *(_QWORD *)(v35 + 16) = a3;
LABEL_63:
              *(_QWORD *)a3 = v37 | *(_QWORD *)a3 & 3LL;
              v3 = *v4;
              v39 = (__int64 *)(**v4 & 0xFFFFFFFFFFFFFFFCLL);
              v10 = *v39;
              v40 = *v39 & 2;
              goto LABEL_64;
            }
LABEL_101:
            if ( under_debugger )
              goto LABEL_123;
            interr();
LABEL_103:
            if ( under_debugger )
              goto LABEL_123;
            a3 = interr();
LABEL_105:
            v57 = (unsigned __int64 *)v46[1];
            *(_QWORD *)(a3 + 16) = v57;
            if ( (*v57 & 2) == 0 )
              *v57 = a3 & 0xFFFFFFFFFFFFFFFCLL | *v57 & 3;
            *v46 = *v46 & 3 | *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
            v37 = (unsigned __int64)v46 & 0xFFFFFFFFFFFFFFFCLL;
            v58 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
            if ( v58 == *v4 )
            {
              *v58 = v37 | *v58 & 3LL;
            }
            else if ( v58[1] == a3 )
            {
              v58[1] = v46;
            }
            else
            {
              v58[2] = v46;
            }
            v46[1] = a3;
            goto LABEL_63;
          }
          if ( v29 )
            goto LABEL_44;
        }
LABEL_26:
        *(_QWORD *)v8 = v9 | 1;
      }
      goto LABEL_27;
    }
    v8 = *(_QWORD *)(a3 + 16);
    v9 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 2) == 0 )
    {
      if ( (v9 & 1) == 0 )
        goto LABEL_37;
      *(_QWORD *)v8 = v9 & 0xFFFFFFFFFFFFFFFELL;
      v21 = *(_QWORD *)(a3 + 16);
      v22 = *(_QWORD *)a3 | 1LL;
      *(_QWORD *)a3 = v22;
      if ( (*(_BYTE *)v21 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_123;
        interr();
        goto LABEL_101;
      }
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
      if ( v25 == *v4 )
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
      *(_QWORD *)a3 = v24 | *(_QWORD *)a3 & 3LL;
      v8 = *(_QWORD *)(a3 + 16);
      v9 = *(_QWORD *)v8;
      if ( (*(_QWORD *)v8 & 2) == 0 )
      {
LABEL_37:
        v26 = *(__int64 **)(v8 + 8);
        v27 = **(_QWORD **)(v8 + 16);
        v28 = *v26;
        if ( (*v26 & 2) != 0 )
        {
          if ( (v27 & 2) == 0 && (v27 & 1) != 0 )
            goto LABEL_70;
        }
        else
        {
          v41 = *v26 & 1;
          if ( (v27 & 2) == 0 && (v27 & 1) != 0 )
          {
LABEL_70:
            v42 = *(_QWORD *)v8;
LABEL_71:
            v43 = v42;
            v44 = v42 | 1;
            v45 = v43 & 0xFFFFFFFFFFFFFFFELL;
            if ( (*(_BYTE *)a3 & 1) == 0 )
              v44 = v45;
            *(_QWORD *)v8 = v44;
            goto LABEL_74;
          }
          while ( v41 )
          {
            *v26 = v28 & 0xFFFFFFFFFFFFFFFELL;
            v47 = *(_QWORD *)(v8 + 8);
            v48 = *(_QWORD *)v8 | 1LL;
            *(_QWORD *)v8 = v48;
            if ( (*(_BYTE *)v47 & 2) != 0 )
              goto LABEL_103;
            v49 = *(unsigned __int64 **)(v47 + 16);
            *(_QWORD *)(v8 + 8) = v49;
            if ( (*v49 & 2) == 0 )
            {
              *v49 = *v49 & 3 | v8 & 0xFFFFFFFFFFFFFFFCLL;
              v48 = *(_QWORD *)v8;
            }
            *(_QWORD *)v47 = *(_QWORD *)v47 & 3LL | v48 & 0xFFFFFFFFFFFFFFFCLL;
            v50 = v47 & 0xFFFFFFFFFFFFFFFCLL;
            v51 = (_QWORD *)(*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL);
            if ( v51 == *v4 )
            {
              *v51 = v50 | *v51 & 3LL;
            }
            else if ( v8 == v51[2] )
            {
              v51[2] = v47;
            }
            else
            {
              v51[1] = v47;
            }
            *(_QWORD *)(v47 + 16) = v8;
            *(_QWORD *)v8 = v50 | *(_QWORD *)v8 & 3LL;
            v8 = *(_QWORD *)(a3 + 16);
            v42 = *(_QWORD *)v8;
            if ( (*(_QWORD *)v8 & 2) == 0 )
              goto LABEL_71;
LABEL_74:
            *(_QWORD *)a3 &= ~1uLL;
            v9 = *(_QWORD *)(v8 + 16);
            if ( (*(_QWORD *)v9 & 2) == 0 )
              *(_QWORD *)v9 &= ~1uLL;
            v46 = *(unsigned __int64 **)(a3 + 16);
            if ( (*(_BYTE *)v46 & 2) == 0 )
              goto LABEL_105;
            if ( under_debugger )
              goto LABEL_123;
            v28 = 3440;
            a3 = interr();
          }
        }
        goto LABEL_26;
      }
LABEL_27:
      v3 = *v4;
    }
LABEL_5:
    v10 = *(_QWORD *)a3;
    a2 = (__int64 *)a3;
    if ( a3 == (*v3 & 0xFFFFFFFFFFFFFFFCLL) )
      break;
    a3 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v10 & 2) == 0 && (v10 & 1) != 0 )
      goto LABEL_8;
  }
  v39 = (__int64 *)a3;
  v40 = *(_QWORD *)a3 & 2LL;
LABEL_64:
  if ( !v40 )
  {
    a2 = v39;
LABEL_8:
    *a2 = v10 & 0xFFFFFFFFFFFFFFFELL;
    v3 = *v4;
  }
  result = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
  v12 = *result;
  if ( (*result & 2) == 0 )
LABEL_53:
    *result = v12 & 0xFFFFFFFFFFFFFFFELL;
  return result;
}

