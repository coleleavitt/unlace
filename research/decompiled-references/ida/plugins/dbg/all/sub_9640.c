__int64 __fastcall sub_9640(unsigned __int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rcx
  char *v5; // rsi
  unsigned __int64 v6; // r11
  __int64 v7; // r13
  unsigned __int16 *v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // edx
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  char *v14; // r10
  char *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r12
  char v21[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v22; // [rsp+408h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 16);
  v22 = __readfsqword(0x28u);
  v5 = (char *)(v3 + 4);
  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 < v3 + 4 )
    goto LABEL_27;
  if ( v6 < v3 + 8 )
  {
    *(_QWORD *)(a2 + 16) = v5;
    goto LABEL_27;
  }
  *(_QWORD *)(a2 + 16) = v3 + 8;
  v7 = a1;
  if ( a3 )
  {
    v8 = (unsigned __int16 *)(v3 + 12);
    if ( v6 < v3 + 12 )
      goto LABEL_27;
    v9 = *(unsigned int *)(v3 + 8);
  }
  else
  {
    v8 = (unsigned __int16 *)(v3 + 10);
    if ( v6 < v3 + 10 )
      goto LABEL_27;
    v9 = *(unsigned __int16 *)(v3 + 8);
  }
  *(_QWORD *)(a2 + 16) = v8;
  if ( v6 < (unsigned __int64)(v8 + 1) )
    goto LABEL_27;
  v10 = *v8;
  *(_QWORD *)(a2 + 16) = v8 + 1;
  if ( v6 < (unsigned __int64)(v8 + 2) )
    goto LABEL_27;
  v5 = (char *)v8 + 5;
  v11 = v8[1];
  if ( v6 < (unsigned __int64)v8 + 5 )
  {
    *(_QWORD *)(a2 + 16) = v8 + 2;
    goto LABEL_27;
  }
  *(_QWORD *)(a2 + 16) = v5;
  v12 = *((unsigned __int8 *)v8 + 4);
  a1 = (unsigned int)(v6 - (_DWORD)v5);
  v13 = v12;
  if ( a1 <= v12 )
    v13 = (unsigned int)(v6 - (_DWORD)v5);
  v14 = &v5[v13];
  if ( v6 < (unsigned __int64)&v5[v13] || v14 < v5 )
LABEL_27:
    sub_3660(a1, v5);
  v15 = v21;
  if ( (unsigned int)v13 >= 8 )
  {
    qmemcpy(v21, v5, 8 * (v13 >> 3));
    v5 += 8 * (v13 >> 3);
    v15 = &v21[8 * (v13 >> 3)];
  }
  v16 = 0;
  if ( (v13 & 4) != 0 )
  {
    *(_DWORD *)v15 = *(_DWORD *)v5;
    v16 = 4;
  }
  if ( (v13 & 2) != 0 )
  {
    *(_WORD *)&v15[v16] = *(_WORD *)&v5[v16];
    v16 += 2;
  }
  if ( (v13 & 1) != 0 )
    v15[v16] = v5[v16];
  v21[v13] = 0;
  *(_QWORD *)(a2 + 16) = v14;
  v17 = sub_81F0(v7, (unsigned __int16)v11, v10, v16, a2, v11);
  v18 = v17;
  if ( v17 != -1 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 16LL) & (v9 + v17);
    sub_49D0(v17, (__int64)"with %s", v21);
    sub_49D0(v19, (__int64)"end of with");
  }
  return v18;
}

