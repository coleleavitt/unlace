_QWORD *__fastcall sub_3D8CF0(_QWORD *a1, __int64 *a2)
{
  __int64 i; // rbx
  __int64 *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 *v8; // rdx
  __int64 v9; // rax
  _QWORD *result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 *v14; // r9
  unsigned __int64 v15; // r8
  _QWORD *v16; // rax
  unsigned __int64 *v17; // r9
  _QWORD *v18; // rax

LABEL_1:
  for ( i = *a2; ; *(_QWORD *)v5 = i )
  {
    v3 = (__int64 *)(i & 0xFFFFFFFFFFFFFFFCLL);
    v4 = *v3;
    if ( (*v3 & 2) != 0 || (v4 & 1) == 0 )
      goto LABEL_11;
    v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
    v6 = *(__int64 **)((v4 & 0xFFFFFFFFFFFFFFFCLL) + 8);
    if ( v6 != v3 )
      break;
    v6 = *(__int64 **)(v5 + 16);
    if ( (*v6 & 2) != 0 || (*v6 & 1) == 0 )
    {
      if ( (__int64 *)v3[2] == a2 )
      {
        sub_3D8B70(a1, (unsigned __int64)v3);
        a2 = v3;
        v11 = *(_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
        v3 = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
        v5 = v11 & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        v11 = *v3;
      }
      *v3 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v12 = *(_QWORD *)(v5 + 8);
      v13 = *(_QWORD *)v5 | 1LL;
      *(_QWORD *)v5 = v13;
      if ( (*(_BYTE *)v12 & 2) != 0 )
      {
        if ( !under_debugger )
        {
          a1 = (_QWORD *)(&stru_D68 + 9);
          v18 = (_QWORD *)interr();
LABEL_36:
          v18[1] = v8;
LABEL_30:
          v8[1] = v5;
          goto LABEL_31;
        }
LABEL_42:
        BUG();
      }
      v14 = *(unsigned __int64 **)(v12 + 16);
      *(_QWORD *)(v5 + 8) = v14;
      if ( (*v14 & 2) == 0 )
      {
        *v14 = v5 | *v14 & 3;
        v13 = *(_QWORD *)v5;
      }
      *(_QWORD *)v12 = *(_QWORD *)v12 & 3LL | v13 & 0xFFFFFFFFFFFFFFFCLL;
      v15 = v12 & 0xFFFFFFFFFFFFFFFCLL;
      v16 = (_QWORD *)(*(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v16 == (_QWORD *)*a1 )
      {
        *v16 = v15 | *v16 & 3LL;
      }
      else if ( v5 == v16[2] )
      {
        v16[2] = v12;
      }
      else
      {
        v16[1] = v12;
      }
      *(_QWORD *)(v12 + 16) = v5;
LABEL_31:
      *(_QWORD *)v5 = v15 | *(_QWORD *)v5 & 3LL;
      goto LABEL_1;
    }
LABEL_14:
    a2 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    *v3 = v4 & 0xFFFFFFFFFFFFFFFELL;
    *v6 &= ~1uLL;
    i = *(_QWORD *)v5 | 1LL;
  }
  if ( (*v6 & 2) == 0 && (*v6 & 1) != 0 )
    goto LABEL_14;
  if ( (__int64 *)v3[1] == a2 )
  {
    sub_3D8C30(a1, (unsigned __int64)v3);
    a2 = v3;
    v7 = *(_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
    v3 = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
    v5 = v7 & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    v7 = *v3;
  }
  *v3 = v7 & 0xFFFFFFFFFFFFFFFELL;
  v8 = *(unsigned __int64 **)(v5 + 16);
  v9 = *(_QWORD *)v5 | 1LL;
  *(_QWORD *)v5 = v9;
  if ( (*(_BYTE *)v8 & 2) == 0 )
  {
    v17 = (unsigned __int64 *)v8[1];
    *(_QWORD *)(v5 + 16) = v17;
    if ( (*v17 & 2) == 0 )
    {
      *v17 = v5 | *v17 & 3;
      v9 = *(_QWORD *)v5;
    }
    *v8 = *v8 & 3 | v9 & 0xFFFFFFFFFFFFFFFCLL;
    v15 = (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFCLL;
    v18 = (_QWORD *)(*(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL);
    if ( v18 == (_QWORD *)*a1 )
    {
      *v18 = v15 | *v18 & 3LL;
    }
    else
    {
      if ( v5 == v18[1] )
        goto LABEL_36;
      v18[2] = v8;
    }
    goto LABEL_30;
  }
  if ( under_debugger )
    goto LABEL_42;
  a1 = (_QWORD *)(&stru_D68 + 8);
  interr();
LABEL_11:
  result = (_QWORD *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}

