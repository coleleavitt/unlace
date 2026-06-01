__int64 __fastcall sub_8B60(unsigned __int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rcx
  char *v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // r8
  unsigned int *v9; // rdx
  unsigned __int16 *v10; // rcx
  unsigned int v11; // ebx
  unsigned __int8 *v12; // rdx
  unsigned __int16 v13; // bp
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  char *v16; // r12
  unsigned __int64 v17; // rdx
  _BYTE *v18; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int16 *v22; // rdx
  _BYTE v23[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v24; // [rsp+408h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 16);
  v24 = __readfsqword(0x28u);
  v5 = (char *)(v3 + 4);
  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 < v3 + 4 )
    goto LABEL_43;
  v7 = a1;
  a1 = v3 + 8;
  if ( v6 < v3 + 8 )
  {
    *(_QWORD *)(a2 + 16) = v5;
    goto LABEL_43;
  }
  v5 = (char *)(v3 + 12);
  if ( v6 < v3 + 12 )
  {
    *(_QWORD *)(a2 + 16) = a1;
    goto LABEL_43;
  }
  *(_QWORD *)(a2 + 16) = v5;
  if ( a3 )
  {
    if ( v6 < v3 + 16 )
      goto LABEL_43;
    v5 = (char *)(v3 + 20);
    v8 = *(unsigned int *)(v3 + 12);
    if ( v6 < v3 + 20 )
    {
      *(_QWORD *)(a2 + 16) = v3 + 16;
      goto LABEL_43;
    }
    v9 = (unsigned int *)(v3 + 24);
    if ( v6 < v3 + 24 )
    {
      *(_QWORD *)(a2 + 16) = v5;
      goto LABEL_43;
    }
    *(_QWORD *)(a2 + 16) = v9;
    if ( *(_DWORD *)(v7 + 132) == 11 )
    {
      v9 = (unsigned int *)(v3 + 28);
      if ( v6 < v3 + 28 )
        goto LABEL_43;
      *(_QWORD *)(a2 + 16) = v9;
    }
    v10 = (unsigned __int16 *)(v9 + 1);
    if ( v6 < (unsigned __int64)(v9 + 1) )
      goto LABEL_43;
    v11 = *v9;
  }
  else
  {
    if ( v6 < v3 + 14 )
      goto LABEL_43;
    v5 = (char *)(v3 + 16);
    v8 = *(unsigned __int16 *)(v3 + 12);
    if ( v6 < v3 + 16 )
    {
      *(_QWORD *)(a2 + 16) = v3 + 14;
      goto LABEL_43;
    }
    v22 = (unsigned __int16 *)(v3 + 18);
    if ( v6 < v3 + 18 )
    {
      *(_QWORD *)(a2 + 16) = v5;
      goto LABEL_43;
    }
    *(_QWORD *)(a2 + 16) = v22;
    if ( *(_DWORD *)(v7 + 132) == 11 )
    {
      v22 = (unsigned __int16 *)(v3 + 22);
      if ( v6 < v3 + 22 )
        goto LABEL_43;
      *(_QWORD *)(a2 + 16) = v22;
    }
    v10 = v22 + 1;
    if ( v6 < (unsigned __int64)(v22 + 1) )
      goto LABEL_43;
    v11 = *v22;
  }
  v12 = (unsigned __int8 *)(v10 + 1);
  *(_QWORD *)(a2 + 16) = v10;
  if ( v6 < (unsigned __int64)(v10 + 1) )
    goto LABEL_43;
  v13 = *v10;
  *(_QWORD *)(a2 + 16) = v12;
  if ( *(_DWORD *)(v7 + 132) != 11 )
  {
    v12 = (unsigned __int8 *)(v10 + 2);
    if ( v6 < (unsigned __int64)(v10 + 2) )
      goto LABEL_43;
    *(_QWORD *)(a2 + 16) = v12;
  }
  if ( v6 < (unsigned __int64)(v12 + 1) )
    goto LABEL_43;
  v5 = (char *)(v12 + 2);
  *(_QWORD *)(a2 + 16) = v12 + 1;
  v14 = *v12;
  if ( v6 < (unsigned __int64)(v12 + 2) )
    goto LABEL_43;
  *(_QWORD *)(a2 + 16) = v5;
  v15 = v12[1];
  a1 = (unsigned int)(v6 - (_DWORD)v5);
  if ( a1 <= v15 )
    v15 = (unsigned int)(v6 - (_DWORD)v5);
  v16 = &v5[v15];
  v17 = v15;
  if ( v6 < (unsigned __int64)&v5[v15] || v16 < v5 )
LABEL_43:
    sub_3660(a1, v5);
  v18 = v23;
  if ( (unsigned int)v15 >= 8 )
  {
    v19 = v15 >> 3;
    qmemcpy(v23, v5, 8 * v19);
    v5 += 8 * v19;
    v18 = &v23[8 * v19];
  }
  v20 = 0;
  if ( (v17 & 4) != 0 )
  {
    *(_DWORD *)v18 = *(_DWORD *)v5;
    v20 = 4;
  }
  if ( (v17 & 2) != 0 )
  {
    *(_WORD *)&v18[v20] = *(_WORD *)&v5[v20];
    v20 += 2;
  }
  if ( (v17 & 1) != 0 )
    v18[v20] = v5[v20];
  v23[v17] = 0;
  *(_QWORD *)(a2 + 16) = v16;
  return sub_8750(v7, v13, v11, (__int64)v23, v8, v14);
}
