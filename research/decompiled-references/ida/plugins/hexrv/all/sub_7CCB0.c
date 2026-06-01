void *__fastcall sub_7CCB0(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // r13
  size_t v4; // rax
  size_t v5; // rax
  __int64 v6; // rax
  char v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  char v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  char v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  char v20; // r12
  const char *v21; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE v27[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-30h]

  v2 = a1 + 9;
  v28 = __readfsqword(0x28u);
  v4 = pack_dq() - (_QWORD)v27;
  if ( v4 )
    sub_77B40(v2, v27, v4);
  v5 = pack_dq() - (_QWORD)v27;
  if ( v5 )
    sub_77B40(v2, v27, v5);
  v6 = a1[10];
  v7 = *(_BYTE *)(a2 + 12);
  v8 = a1[9];
  if ( a1[11] < (unsigned __int64)(v6 + 1) )
  {
    v23 = qvector_reserve();
    a1[9] = v23;
    v8 = v23;
    v6 = a1[10];
  }
  *(_BYTE *)(v8 + v6) = v7;
  v9 = a1[10];
  v10 = a1[9];
  v11 = v9 + 1;
  a1[10] = v9 + 1;
  v12 = *(_BYTE *)(a2 + 13);
  if ( a1[11] < (unsigned __int64)(v9 + 2) )
  {
    v26 = qvector_reserve();
    a1[9] = v26;
    v10 = v26;
    v11 = a1[10];
  }
  *(_BYTE *)(v10 + v11) = v12;
  v13 = a1[10];
  v14 = a1[9];
  v15 = v13 + 1;
  a1[10] = v13 + 1;
  v16 = *(_BYTE *)(a2 + 14);
  if ( a1[11] < (unsigned __int64)(v13 + 2) )
  {
    v25 = qvector_reserve();
    a1[9] = v25;
    v14 = v25;
    v15 = a1[10];
  }
  *(_BYTE *)(v14 + v15) = v16;
  v17 = a1[10];
  v18 = a1[9];
  v19 = v17 + 1;
  a1[10] = v17 + 1;
  v20 = *(_BYTE *)(a2 + 15);
  if ( a1[11] < (unsigned __int64)(v17 + 2) )
  {
    v24 = qvector_reserve();
    a1[9] = v24;
    v18 = v24;
    v19 = a1[10];
  }
  *(_BYTE *)(v18 + v19) = v20;
  v21 = s1;
  ++a1[10];
  if ( *(_QWORD *)(a2 + 24) )
    v21 = *(const char **)(a2 + 16);
  return sub_784D0(v2, v21);
}

