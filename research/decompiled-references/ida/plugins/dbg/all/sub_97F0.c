unsigned __int64 __fastcall sub_97F0(unsigned __int64 a1, _QWORD *a2, char a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  unsigned int *v5; // rcx
  unsigned __int64 v7; // rdx
  unsigned int *v8; // rax
  unsigned int v9; // r11d
  unsigned __int16 v10; // r10
  char v11; // bl
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  char *v14; // rbp
  _BYTE *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbp
  _BYTE v20[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v21; // [rsp+408h] [rbp-20h]

  v3 = a1;
  v4 = (__int64)a2;
  v5 = (unsigned int *)a2[2];
  v21 = __readfsqword(0x28u);
  v7 = a2[3];
  if ( a3 )
  {
    v8 = v5 + 1;
    if ( v7 < (unsigned __int64)(v5 + 1) )
      goto LABEL_25;
    v9 = *v5;
  }
  else
  {
    v8 = (unsigned int *)((char *)v5 + 2);
    if ( v7 < (unsigned __int64)v5 + 2 )
      goto LABEL_25;
    v9 = *(unsigned __int16 *)v5;
  }
  a2 = (_QWORD *)((char *)v8 + 2);
  *(_QWORD *)(v4 + 16) = v8;
  if ( v7 < (unsigned __int64)v8 + 2 )
    goto LABEL_25;
  v10 = *(_WORD *)v8;
  if ( v7 < (unsigned __int64)v8 + 3 )
  {
    *(_QWORD *)(v4 + 16) = a2;
    goto LABEL_25;
  }
  a2 = v8 + 1;
  *(_QWORD *)(v4 + 16) = (char *)v8 + 3;
  v11 = *((_BYTE *)v8 + 2);
  if ( v7 < (unsigned __int64)(v8 + 1) )
    goto LABEL_25;
  *(_QWORD *)(v4 + 16) = a2;
  v12 = *((unsigned __int8 *)v8 + 3);
  a1 = (unsigned int)(v7 - (_DWORD)a2);
  v13 = v12;
  if ( a1 <= v12 )
    v13 = (unsigned int)(v7 - (_DWORD)a2);
  v14 = (char *)a2 + v13;
  if ( __CFADD__(v13, a2) || v7 < (unsigned __int64)v14 )
LABEL_25:
    sub_3660(a1, a2);
  v15 = v20;
  if ( (unsigned int)v13 >= 8 )
  {
    qmemcpy(v20, a2, 8 * (v13 >> 3));
    a2 += v13 >> 3;
    v15 = &v20[8 * (v13 >> 3)];
    v12 = 0;
  }
  v16 = 0;
  if ( (v13 & 4) != 0 )
  {
    *(_DWORD *)v15 = *(_DWORD *)a2;
    v16 = 4;
  }
  if ( (v13 & 2) != 0 )
  {
    v12 = *(unsigned __int16 *)((char *)a2 + v16);
    *(_WORD *)&v15[v16] = v12;
    v16 += 2;
  }
  if ( (v13 & 1) != 0 )
  {
    v12 = *((unsigned __int8 *)a2 + v16);
    v15[v16] = v12;
  }
  *(_QWORD *)(v4 + 16) = v14;
  v20[v13] = 0;
  v17 = sub_81F0(v3, v10, v9, v12, v4, v3);
  v18 = v17;
  if ( v17 != -1 )
  {
    set_name(v17, v20, 1281);
    sub_4AD0(v18, v11);
  }
  return v21 - __readfsqword(0x28u);
}

