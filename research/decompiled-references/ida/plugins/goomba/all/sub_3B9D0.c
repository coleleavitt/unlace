__int64 __fastcall sub_3B9D0(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rsi
  int *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  void (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rdi
  _QWORD *v24; // rcx
  __int64 v25; // r12
  void (__fastcall *v27)(__int64, __int64); // rax
  __int64 v28; // rsi
  char *v29; // rbp
  char *v30; // rdi
  char *v31; // r13
  void (__fastcall *v32)(__int64, char *); // rax
  unsigned __int8 v33; // al
  _QWORD *v34; // [rsp+0h] [rbp-38h]

  v6 = operator new(0x70u);
  v7 = *a3;
  v8 = v6;
  LODWORD(v6) = *(_DWORD *)v7;
  v9 = v8 + 48;
  *(_DWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 32) = v6;
  *(_QWORD *)(v8 + 64) = v8 + 48;
  *(_QWORD *)(v8 + 72) = v8 + 48;
  *(_QWORD *)(v8 + 80) = 0;
  v10 = *(int **)(v7 + 24);
  if ( v10 )
  {
    v11 = sub_324E0(v10, v9);
    v12 = v11;
    do
    {
      v13 = v12;
      v12 = *(_QWORD *)(v12 + 16);
    }
    while ( v12 );
    *(_QWORD *)(v8 + 64) = v13;
    v14 = v11;
    do
    {
      v15 = v14;
      v14 = *(_QWORD *)(v14 + 24);
    }
    while ( v14 );
    *(_QWORD *)(v8 + 72) = v15;
    v16 = *(_QWORD *)(v7 + 48);
    *(_QWORD *)(v8 + 56) = v11;
    *(_QWORD *)(v8 + 80) = v16;
  }
  hexdsp = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v10, v9);
  hexdsp(273, v8 + 88, v7 + 56);
  *(_DWORD *)(v8 + 104) = 0;
  v18 = a1;
  v21 = sub_3B880(a1, a2, v8 + 32, v19, v20);
  if ( v22 )
  {
    v23 = 1;
    v24 = a1 + 1;
    if ( !v21 && v22 != v24 )
    {
      v34 = v22;
      v33 = sub_35D60(v8 + 32, (__int64)(v22 + 4));
      v24 = a1 + 1;
      v22 = v34;
      v23 = v33;
    }
    std::_Rb_tree_insert_and_rebalance(v23, v8, v22, v24);
    ++a1[5];
    return v8;
  }
  v25 = v21;
  if ( !v8 )
    return v25;
  v27 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v18, a2);
  v28 = v8 + 88;
  v27(276, v8 + 88);
  v29 = *(char **)(v8 + 56);
  while ( v29 )
  {
    v30 = *((char **)v29 + 3);
    v31 = v29;
    sub_32480(v30, v28);
    v29 = *((char **)v29 + 2);
    v32 = (void (__fastcall *)(__int64, char *))get_hexdsp(v30, v28);
    v32(276, v31 + 32);
    v28 = 48;
    operator delete(v31, 0x30u);
  }
  operator delete((void *)v8, 0x70u);
  return v25;
}

