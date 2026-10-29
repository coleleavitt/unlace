_QWORD *__fastcall sub_344AD0(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // rbp
  __int64 *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *result; // rax
  __int64 v13; // rax
  unsigned __int64 *v14; // r8
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax

  v2 = a2;
  v3 = (__int64 *)(*a2 & 0xFFFFFFFFFFFFFFFCLL);
  v4 = *v3;
  if ( (*v3 & 2) == 0 )
  {
    while ( 1 )
    {
      if ( (v4 & 1) == 0 )
        goto LABEL_13;
      v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      v6 = *(__int64 **)((v4 & 0xFFFFFFFFFFFFFFFCLL) + 8);
      if ( v6 != v3 )
        break;
      v6 = *(__int64 **)(v5 + 16);
      if ( (*v6 & 2) != 0 || (*v6 & 1) == 0 )
      {
        if ( (__int64 *)v3[2] == v2 )
        {
          v2 = v3;
          sub_344950(a1, (unsigned __int64)v3);
          v13 = *(_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
          v3 = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
          v5 = v13 & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          v13 = *v3;
        }
        *v3 = v13 & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD *)v5 |= 1uLL;
        sub_344A10(a1, v5);
        v11 = *v2;
        goto LABEL_12;
      }
LABEL_11:
      v2 = (__int64 *)v5;
      *v3 = v4 & 0xFFFFFFFFFFFFFFFELL;
      *v6 &= ~1uLL;
      v11 = *(_QWORD *)v5 | 1LL;
      *(_QWORD *)v5 = v11;
LABEL_12:
      v3 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
      v4 = *v3;
      if ( (*v3 & 2) != 0 )
        goto LABEL_13;
    }
    v7 = *v6;
    if ( (*v6 & 2) == 0 )
      goto LABEL_10;
    while ( 1 )
    {
      if ( (__int64 *)v3[1] == v2 )
      {
        v2 = v3;
        sub_344A10(a1, (unsigned __int64)v3);
        v8 = *(_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
        v3 = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
        v5 = v8 & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        v8 = *v3;
      }
      *v3 = v8 & 0xFFFFFFFFFFFFFFFELL;
      v9 = *(unsigned __int64 **)(v5 + 16);
      v10 = *(_QWORD *)v5 | 1LL;
      *(_QWORD *)v5 = v10;
      if ( (*(_BYTE *)v9 & 2) == 0 )
      {
        v14 = (unsigned __int64 *)v9[1];
        *(_QWORD *)(v5 + 16) = v14;
        if ( (*v14 & 2) == 0 )
        {
          *v14 = v5 | *v14 & 3;
          v10 = *(_QWORD *)v5;
        }
        *v9 = *v9 & 3 | v10 & 0xFFFFFFFFFFFFFFFCLL;
        v15 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL;
        v16 = (_QWORD *)(*(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v16 == (_QWORD *)*a1 )
        {
          *v16 = v15 | *v16 & 3LL;
        }
        else if ( v5 == v16[1] )
        {
          v16[1] = v9;
        }
        else
        {
          v16[2] = v9;
        }
        v9[1] = v5;
        *(_QWORD *)v5 = v15 | *(_QWORD *)v5 & 3LL;
        v11 = *v2;
        goto LABEL_12;
      }
      if ( under_debugger )
        BUG();
      a1 = (_QWORD *)(&stru_D68 + 8);
      v4 = interr();
LABEL_10:
      if ( (v7 & 1) != 0 )
        goto LABEL_11;
    }
  }
LABEL_13:
  result = (_QWORD *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}

