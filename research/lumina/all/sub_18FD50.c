__int64 __fastcall sub_18FD50(const char *src, int a2)
{
  size_t v2; // rbp
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  const char *v11; // rax
  const char *v12; // rbx
  size_t v13; // rax
  __int64 v14; // rbp
  size_t v15; // r13
  size_t v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rax
  unsigned __int64 v22; // rax
  void *v23; // r15
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax

  if ( !src || (v2 = strlen(src)) == 0 )
  {
    *(_QWORD *)(__readfsqword(0) - 48) = 0;
LABEL_4:
    v3 = 3;
    v4 = 2;
    v5 = 0;
    goto LABEL_5;
  }
  v22 = __readfsqword(0);
  v23 = *(void **)(v22 - 56);
  v24 = v22 - 256;
  if ( *(_QWORD *)(v22 - 40) < v2 + 1 )
  {
    v30 = sub_1987B0(v22 - 56, *(_QWORD *)(v22 - 56), v2 + 1, 1);
    *(_QWORD *)(v24 + 200) = v30;
    v23 = (void *)v30;
  }
  v25 = __readfsqword(0);
  v26 = v25 - 256;
  *(_QWORD *)(v25 - 48) = v2 + 1;
  memmove(v23, src, v2);
  *(_BYTE *)(*(_QWORD *)(v26 + 200) + v2) = 0;
  v27 = *(_QWORD *)(v26 + 208);
  if ( !v27 )
    goto LABEL_4;
  v5 = v27 - 1;
  v4 = v27 + 1;
  v3 = v27 + 2;
LABEL_5:
  v6 = __readfsqword(0);
  v7 = *(_QWORD *)(v6 - 56);
  v8 = v6 - 256;
  if ( *(_QWORD *)(v6 - 40) < v3 )
  {
    v28 = sub_1987B0(v6 - 56, *(_QWORD *)(v6 - 56), v3, 1);
    *(_QWORD *)(v8 + 200) = v28;
    v7 = v28;
  }
  v9 = __readfsqword(0);
  *(_QWORD *)(v9 - 48) = v3;
  v10 = v9 - 256;
  *(_BYTE *)(v7 + v4) = 0;
  *(_WORD *)(*(_QWORD *)(v9 - 56) + v5) = 8250;
  v11 = sub_2C700(a2);
  v12 = v11;
  if ( v11 )
  {
    v13 = strlen(v11);
    v14 = *(_QWORD *)(v10 + 208);
    v15 = v13;
    v16 = v13;
    if ( v14 )
    {
      --v14;
      v16 = v13 + v14;
    }
    v17 = __readfsqword(0);
    v18 = *(_QWORD *)(v17 - 56);
    v19 = v17 - 256;
    if ( *(_QWORD *)(v17 - 40) < v16 + 1 )
    {
      v29 = sub_1987B0(v17 - 56, v18, v16 + 1, 1);
      *(_QWORD *)(v19 + 200) = v29;
      v18 = v29;
    }
    v20 = __readfsqword(0);
    *(_QWORD *)(v20 - 48) = v16 + 1;
    *(_BYTE *)(v18 + v16) = 0;
    memmove((void *)(v14 + *(_QWORD *)(v20 - 56)), v12, v15);
  }
  return *(_QWORD *)(__readfsqword(0) - 56);
}
