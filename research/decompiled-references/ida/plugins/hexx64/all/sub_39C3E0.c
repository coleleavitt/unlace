_QWORD *__fastcall sub_39C3E0(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 *v5; // r8
  unsigned __int64 v6; // rsi
  __int64 *v7; // r9
  __int64 v8; // r10
  __int64 v9; // rcx
  unsigned __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *result; // rax
  __int64 v14; // rcx
  unsigned __int64 *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 *v17; // r9
  unsigned __int64 v18; // r8
  _QWORD *v19; // rax
  unsigned __int64 *v20; // r9
  _QWORD *v21; // rax
  unsigned __int64 *v22; // rsi
  unsigned __int64 v23; // rsi
  _QWORD *v24; // rcx
  __int64 v25; // r8
  unsigned __int64 *v26; // rsi
  unsigned __int64 v27; // rsi
  _QWORD *v28; // rcx
  __int64 v29; // r8

  v2 = *a2 & 0xFFFFFFFFFFFFFFFCLL;
  v3 = *(_QWORD *)v2;
  if ( (*(_QWORD *)v2 & 2) == 0 )
  {
    v4 = (unsigned __int64)a2;
    v5 = (__int64 *)(*a2 & 0xFFFFFFFFFFFFFFFCLL);
    while ( 1 )
    {
      if ( (v3 & 1) == 0 )
        goto LABEL_14;
      v6 = v3 & 0xFFFFFFFFFFFFFFFCLL;
      v7 = *(__int64 **)((v3 & 0xFFFFFFFFFFFFFFFCLL) + 8);
      if ( v7 != (__int64 *)v2 )
        break;
      v7 = *(__int64 **)(v6 + 16);
      if ( (*v7 & 2) != 0 || (*v7 & 1) == 0 )
      {
        if ( *(_QWORD *)(v2 + 16) != v4 )
        {
          v14 = *(_QWORD *)v2;
          goto LABEL_19;
        }
        if ( (*(_BYTE *)v4 & 2) != 0 )
        {
          if ( under_debugger )
LABEL_63:
            BUG();
          a1 = (_QWORD *)(&stru_D68 + 8);
          v19 = (_QWORD *)interr();
LABEL_51:
          *v19 = v18 | *v19 & 3LL;
          goto LABEL_25;
        }
        v26 = *(unsigned __int64 **)(v4 + 8);
        *(_QWORD *)(v2 + 16) = v26;
        if ( (*v26 & 2) == 0 )
          *v26 = v2 | *v26 & 3;
        *(_QWORD *)v4 = *(_QWORD *)v4 & 3LL | *(_QWORD *)v2 & 0xFFFFFFFFFFFFFFFCLL;
        v27 = v4 & 0xFFFFFFFFFFFFFFFCLL;
        v28 = (_QWORD *)(*(_QWORD *)v2 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v28 == (_QWORD *)*a1 )
        {
          *v28 = v27 | *v28 & 3LL;
        }
        else if ( v2 == v28[1] )
        {
          v28[1] = v4;
        }
        else
        {
          v28[2] = v4;
        }
        *(_QWORD *)(v4 + 8) = v2;
        v4 = v2;
        v29 = v27 | *(_QWORD *)v2 & 3LL;
        *(_QWORD *)v2 = v29;
        v5 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
        v14 = *v5;
        v6 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
LABEL_19:
        *v5 = v14 & 0xFFFFFFFFFFFFFFFELL;
        v15 = *(unsigned __int64 **)(v6 + 8);
        v16 = *(_QWORD *)v6 | 1LL;
        *(_QWORD *)v6 = v16;
        if ( (*(_BYTE *)v15 & 2) == 0 )
        {
          v17 = (unsigned __int64 *)v15[2];
          *(_QWORD *)(v6 + 8) = v17;
          if ( (*v17 & 2) == 0 )
          {
            *v17 = v6 | *v17 & 3;
            v16 = *(_QWORD *)v6;
          }
          *v15 = *v15 & 3 | v16 & 0xFFFFFFFFFFFFFFFCLL;
          v18 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFCLL;
          v19 = (_QWORD *)(*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL);
          if ( v19 == (_QWORD *)*a1 )
            goto LABEL_51;
          if ( v6 == v19[2] )
            v19[2] = v15;
          else
            v19[1] = v15;
LABEL_25:
          v15[2] = v6;
LABEL_32:
          *(_QWORD *)v6 = v18 | *(_QWORD *)v6 & 3LL;
          v12 = *(_QWORD *)v4;
          goto LABEL_13;
        }
        if ( under_debugger )
          goto LABEL_63;
        a1 = (_QWORD *)(&stru_D68 + 9);
        v21 = (_QWORD *)interr();
LABEL_37:
        *v21 = v18 | *v21 & 3LL;
LABEL_31:
        v10[1] = v6;
        goto LABEL_32;
      }
LABEL_12:
      v4 = v6;
      *(_QWORD *)v2 = v3 & 0xFFFFFFFFFFFFFFFELL;
      *v7 &= ~1uLL;
      v12 = *(_QWORD *)v6 | 1LL;
      *(_QWORD *)v6 = v12;
LABEL_13:
      v2 = v12 & 0xFFFFFFFFFFFFFFFCLL;
      v3 = *(_QWORD *)v2;
      v5 = (__int64 *)v2;
      if ( (*(_QWORD *)v2 & 2) != 0 )
        goto LABEL_14;
    }
    v8 = *v7;
    if ( (*v7 & 2) == 0 )
      goto LABEL_11;
    while ( 1 )
    {
      if ( *(_QWORD *)(v2 + 8) == v4 )
      {
        if ( (*(_BYTE *)v4 & 2) != 0 )
        {
          if ( under_debugger )
            goto LABEL_63;
          a1 = (_QWORD *)(&stru_D68 + 9);
          v21 = (_QWORD *)interr();
          goto LABEL_41;
        }
        v22 = *(unsigned __int64 **)(v4 + 16);
        *(_QWORD *)(v2 + 8) = v22;
        if ( (*v22 & 2) == 0 )
          *v22 = v2 | *v22 & 3;
        *(_QWORD *)v4 = *(_QWORD *)v4 & 3LL | *(_QWORD *)v2 & 0xFFFFFFFFFFFFFFFCLL;
        v23 = v4 & 0xFFFFFFFFFFFFFFFCLL;
        v24 = (_QWORD *)(*(_QWORD *)v2 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v24 == (_QWORD *)*a1 )
        {
          *v24 = v23 | *v24 & 3LL;
        }
        else if ( v2 == v24[2] )
        {
          v24[2] = v4;
        }
        else
        {
          v24[1] = v4;
        }
        *(_QWORD *)(v4 + 16) = v2;
        v4 = v2;
        v25 = v23 | *(_QWORD *)v2 & 3LL;
        *(_QWORD *)v2 = v25;
        v5 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
        v9 = *v5;
        v6 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        v9 = *(_QWORD *)v2;
      }
      *v5 = v9 & 0xFFFFFFFFFFFFFFFELL;
      v10 = *(unsigned __int64 **)(v6 + 16);
      v11 = *(_QWORD *)v6 | 1LL;
      *(_QWORD *)v6 = v11;
      if ( (*(_BYTE *)v10 & 2) == 0 )
      {
        v20 = (unsigned __int64 *)v10[1];
        *(_QWORD *)(v6 + 16) = v20;
        if ( (*v20 & 2) == 0 )
        {
          *v20 = v6 | *v20 & 3;
          v11 = *(_QWORD *)v6;
        }
        *v10 = *v10 & 3 | v11 & 0xFFFFFFFFFFFFFFFCLL;
        v18 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL;
        v21 = (_QWORD *)(*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v21 == (_QWORD *)*a1 )
          goto LABEL_37;
        if ( v6 != v21[1] )
        {
          v21[2] = v10;
          goto LABEL_31;
        }
LABEL_41:
        v21[1] = v10;
        goto LABEL_31;
      }
      if ( under_debugger )
        goto LABEL_63;
      a1 = (_QWORD *)(&stru_D68 + 8);
      v2 = interr();
LABEL_11:
      if ( (v8 & 1) != 0 )
        goto LABEL_12;
    }
  }
LABEL_14:
  result = (_QWORD *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}

