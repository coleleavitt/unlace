unsigned __int64 __fastcall sub_159480(__int64 *a1, __int64 a2, unsigned __int8 a3, double a4)
{
  __int64 v4; // r12
  bool v5; // zf
  unsigned __int8 v6; // r13
  __int64 v7; // r8
  _QWORD *v8; // rbx
  __int64 *v9; // r15
  _QWORD *v10; // r14
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  _DWORD *v19; // rbx
  unsigned __int8 v20; // r12
  char v21; // al
  __int64 v22; // rax
  __int64 *v23; // r13
  _QWORD *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rbx
  char v28; // al
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+8h] [rbp-50h]
  __int64 v35; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v36; // [rsp+18h] [rbp-40h]

  while ( 1 )
  {
    v4 = a2;
    v5 = *(_BYTE *)a2 == 4;
    v36 = __readfsqword(0x28u);
    v6 = a3;
    if ( !v5 )
      break;
    v19 = *(_DWORD **)(a2 + 8);
    if ( (unsigned int)(*v19 - 12) > 1 )
      return v36 - __readfsqword(0x28u);
    v20 = a3;
    sub_159480(a1, (__int64)(v19 + 8), a3);
    if ( *v19 == 13 )
      v20 = v6 ^ 1;
    a2 = (__int64)(v19 + 12);
    a3 = v20;
  }
  v35 = 0;
  if ( !(unsigned __int8)sub_159410(a2, &v35, 1) || (v7 = v35) == 0 )
  {
    if ( (*(_BYTE *)a2 & 0xFB) != 1 )
      return v36 - __readfsqword(0x28u);
    v7 = v35;
  }
  if ( v6 )
  {
    v8 = (_QWORD *)a1[1];
    v9 = a1 + 1;
    v10 = &v8[2 * a1[2]];
    if ( v8 == v10 )
      goto LABEL_49;
  }
  else
  {
    v8 = (_QWORD *)a1[4];
    v9 = a1 + 4;
    v10 = &v8[2 * a1[5]];
    if ( v8 == v10 )
      goto LABEL_35;
  }
  if ( v7 )
  {
    do
    {
      if ( v7 == *v8 )
      {
        if ( v8 != (_QWORD *)(*v9 + 16 * v9[1]) )
          goto LABEL_13;
        if ( !v6 )
        {
          v8 = (_QWORD *)a1[1];
          v22 = a1[2];
          goto LABEL_36;
        }
        goto LABEL_49;
      }
      v8 += 2;
    }
    while ( v10 != v8 );
LABEL_33:
    if ( v8 != (_QWORD *)(*v9 + 16 * v9[1]) )
      goto LABEL_13;
    if ( v6 )
      goto LABEL_49;
LABEL_35:
    v8 = (_QWORD *)a1[1];
    v22 = a1[2];
    v23 = a1 + 1;
    if ( !v7 )
      goto LABEL_50;
LABEL_36:
    v23 = a1 + 1;
    v9 = a1 + 1;
    v24 = &v8[2 * v22];
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 96) + 24LL) + 16LL) & -v7;
    if ( v24 == v8 )
    {
      v26 = (__int64)v8;
    }
    else
    {
      if ( v25 )
      {
        do
        {
          if ( v25 == *v8 )
            break;
          v8 += 2;
        }
        while ( v8 != v24 );
      }
      else
      {
        do
        {
          v33 = v7;
          v28 = sub_125B60((unsigned __int8 *)a2, v8[1], 0, a4);
          v7 = v33;
          if ( v28 )
            break;
          v8 += 2;
        }
        while ( v24 != v8 );
      }
      v22 = a1[2];
      v26 = a1[1];
      if ( (_QWORD *)(v26 + 16 * v22) != v8 )
      {
        v11 = v8[1];
        if ( *(_BYTE *)a2 != 10 || *(_BYTE *)v11 != 10 )
          goto LABEL_16;
      }
    }
    v8 = (_QWORD *)v26;
    goto LABEL_50;
  }
  while ( 1 )
  {
    v32 = v7;
    v21 = sub_125B60((unsigned __int8 *)a2, v8[1], 0, a4);
    v7 = v32;
    if ( v21 )
      break;
    v8 += 2;
    if ( v8 == v10 )
      goto LABEL_33;
  }
  if ( v8 == (_QWORD *)(*v9 + 16 * v9[1]) )
  {
    if ( !v6 )
    {
      v8 = (_QWORD *)a1[1];
      v22 = a1[2];
      v23 = a1 + 1;
LABEL_50:
      if ( v23[2] < (unsigned __int64)(v22 + 1) )
      {
        v34 = v7;
        v31 = qvector_reserve((__int64)v23, (__int64)v8, v22 + 1, 16);
        v7 = v34;
        *v23 = v31;
        v8 = (_QWORD *)v31;
        v22 = v23[1];
      }
      v27 = &v8[2 * v22];
      *v27 = v7;
      v27[1] = a2;
      ++v23[1];
      return v36 - __readfsqword(0x28u);
    }
LABEL_49:
    v22 = a1[5];
    v8 = (_QWORD *)a1[4];
    v23 = a1 + 4;
    goto LABEL_50;
  }
LABEL_13:
  v11 = v8[1];
  if ( v6 )
  {
    if ( *(_BYTE *)a2 == 10 && *(_BYTE *)v11 != 10 )
      goto LABEL_49;
    v4 = v8[1];
    v11 = a2;
  }
  else if ( *(_BYTE *)v11 == 10 && *(_BYTE *)a2 != 10 )
  {
    v22 = a1[2];
    v8 = (_QWORD *)a1[1];
    v23 = a1 + 1;
    goto LABEL_50;
  }
LABEL_16:
  sub_120A10(v4, (unsigned __int64 *)*a1, 0, *(_DWORD *)(v4 + 4), a1[10], 0);
  v12 = a1[8];
  v13 = a1[7];
  if ( a1[9] < (unsigned __int64)(v12 + 1) )
  {
    v30 = qvector_reserve((__int64)(a1 + 7), v13, v12 + 1, 8);
    a1[7] = v30;
    v13 = v30;
    v12 = a1[8];
  }
  *(_QWORD *)(v13 + 8 * v12) = v4;
  v14 = (unsigned __int64 *)*a1;
  ++a1[8];
  v15 = a1[10];
  ++*((_DWORD *)a1 + 22);
  sub_120A10(v11, v14, 0, *(_DWORD *)(v11 + 4), v15, 0);
  v16 = a1[8];
  v17 = a1[7];
  if ( a1[9] < (unsigned __int64)(v16 + 1) )
  {
    v29 = qvector_reserve((__int64)(a1 + 7), v17, v16 + 1, 8);
    a1[7] = v29;
    v17 = v29;
    v16 = a1[8];
  }
  *(_QWORD *)(v17 + 8 * v16) = v11;
  ++a1[8];
  ++*((_DWORD *)a1 + 22);
  memmove(v8, v8 + 2, *v9 + 16 * v9[1]-- - (_QWORD)v8 - 16);
  return v36 - __readfsqword(0x28u);
}

