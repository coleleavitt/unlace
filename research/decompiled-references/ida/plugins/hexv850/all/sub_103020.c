_QWORD *__fastcall sub_103020(_QWORD *a1, __int64 *a2, unsigned __int64 a3)
{
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _QWORD *result; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 *v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 *v15; // rcx
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  __int64 v22; // rdx
  _QWORD *v23; // rdx

  v5 = (_QWORD *)*a1;
  v6 = *a2;
  if ( a2 != (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL) )
  {
    while ( 1 )
    {
      if ( (v6 & 2) == 0 && (v6 & 1) != 0 )
        goto LABEL_4;
      v8 = *(_QWORD *)(a3 + 8);
      if ( a2 != (__int64 *)v8 )
        break;
      v13 = *(_QWORD *)(a3 + 16);
      v14 = *(_QWORD *)v13;
      if ( (*(_QWORD *)v13 & 2) == 0 )
      {
        if ( (v14 & 1) == 0
          || (*(_QWORD *)v13 = v14 & 0xFFFFFFFFFFFFFFFELL,
              *(_QWORD *)a3 |= 1uLL,
              sub_102530(a1, a3),
              v13 = *(_QWORD *)(a3 + 16),
              v14 = *(_QWORD *)v13,
              (*(_QWORD *)v13 & 2) == 0) )
        {
          v15 = *(unsigned __int64 **)(v13 + 8);
          v16 = **(_QWORD **)(v13 + 16);
          v17 = *v15;
          if ( (*v15 & 2) != 0 )
          {
            if ( (v16 & 2) == 0 && (v16 & 1) != 0 )
              goto LABEL_25;
          }
          else
          {
            if ( (v16 & 2) == 0 && (v16 & 1) != 0 )
            {
LABEL_25:
              v18 = *(_QWORD *)v13;
LABEL_26:
              if ( (*(_BYTE *)a3 & 1) != 0 )
                *(_QWORD *)v13 = v18 | 1;
              else
                *(_QWORD *)v13 = v18 & 0xFFFFFFFFFFFFFFFELL;
LABEL_47:
              *(_QWORD *)a3 &= ~1uLL;
              v23 = *(_QWORD **)(v13 + 16);
              if ( (*v23 & 2) == 0 )
                *v23 &= ~1uLL;
              sub_102530(a1, a3);
              v5 = (_QWORD *)*a1;
              a2 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
LABEL_35:
              v6 = *a2;
              v22 = *a2 & 2;
              goto LABEL_36;
            }
            if ( (v17 & 1) != 0 )
            {
              *v15 = v17 & 0xFFFFFFFFFFFFFFFELL;
              *(_QWORD *)v13 |= 1uLL;
              sub_1025F0(a1, v13);
              v13 = *(_QWORD *)(a3 + 16);
              v18 = *(_QWORD *)v13;
              if ( (*(_QWORD *)v13 & 2) == 0 )
                goto LABEL_26;
              goto LABEL_47;
            }
          }
          *(_QWORD *)v13 = v14 | 1;
        }
LABEL_16:
        v5 = (_QWORD *)*a1;
      }
LABEL_17:
      v6 = *(_QWORD *)a3;
      a2 = (__int64 *)a3;
      if ( a3 == (*v5 & 0xFFFFFFFFFFFFFFFCLL) )
        goto LABEL_52;
      a3 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
    }
    v9 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 2) != 0 )
      goto LABEL_17;
    if ( (v9 & 1) == 0
      || (*(_QWORD *)v8 = v9 & 0xFFFFFFFFFFFFFFFELL,
          *(_QWORD *)a3 |= 1uLL,
          sub_1025F0(a1, a3),
          v8 = *(_QWORD *)(a3 + 8),
          v9 = *(_QWORD *)v8,
          (*(_QWORD *)v8 & 2) == 0) )
    {
      v10 = *(unsigned __int64 **)(v8 + 16);
      v11 = *v10;
      v12 = *v10 & 2;
      if ( (**(_QWORD **)(v8 + 8) & 2) != 0 )
      {
        if ( !v12 && (v11 & 1) != 0 )
          goto LABEL_31;
      }
      else
      {
        v19 = **(_QWORD **)(v8 + 8) & 1LL;
        if ( !v12 && (v11 & 1) != 0 )
        {
          if ( v19 )
          {
LABEL_39:
            v20 = *(_QWORD *)v8;
          }
          else
          {
LABEL_31:
            *v10 = v11 & 0xFFFFFFFFFFFFFFFELL;
            *(_QWORD *)v8 |= 1uLL;
            sub_102530(a1, v8);
            v8 = *(_QWORD *)(a3 + 8);
            v20 = *(_QWORD *)v8;
            if ( (*(_QWORD *)v8 & 2) != 0 )
            {
LABEL_32:
              *(_QWORD *)a3 &= ~1uLL;
              v21 = *(_QWORD **)(v8 + 8);
              if ( (*v21 & 2) == 0 )
                *v21 &= ~1uLL;
              sub_1025F0(a1, a3);
              v5 = (_QWORD *)*a1;
              a2 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
              goto LABEL_35;
            }
          }
          if ( (*(_BYTE *)a3 & 1) != 0 )
            *(_QWORD *)v8 = v20 | 1;
          else
            *(_QWORD *)v8 = v20 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_32;
        }
        if ( v19 )
          goto LABEL_39;
      }
      *(_QWORD *)v8 = v9 | 1;
    }
    goto LABEL_16;
  }
LABEL_52:
  v22 = v6 & 2;
LABEL_36:
  if ( !v22 )
  {
LABEL_4:
    *a2 = v6 & 0xFFFFFFFFFFFFFFFELL;
    v5 = (_QWORD *)*a1;
  }
  result = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}

