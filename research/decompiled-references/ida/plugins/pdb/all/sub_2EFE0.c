__int64 __fastcall sub_2EFE0(_QWORD *a1, unsigned __int64 *a2, unsigned __int64 a3, double a4, double a5, double a6)
{
  unsigned int v8; // ebx
  __int64 v9; // r14
  unsigned int v10; // eax
  _BYTE *v11; // rdx
  size_t v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 *v15; // r12
  __int64 v16; // rax
  _QWORD *v17; // r15
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  void *v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  _BOOL8 v31; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  bool v35; // zf
  _BYTE *v36; // [rsp+0h] [rbp-48h]
  __int64 v37; // [rsp+0h] [rbp-48h]
  int v38; // [rsp+Ch] [rbp-3Ch]

  v8 = unpack_dd(a2, a3);
  v9 = unpack_dq(a2, a3);
  v10 = unpack_dd(a2, a3);
  v11 = (_BYTE *)*a2;
  v12 = v10;
  v13 = v10 + *a2;
  if ( __CFADD__(v12, *a2) || a3 < v13 )
    v11 = nullptr;
  else
    *a2 = v13;
  v36 = v11;
  v14 = v9;
  v15 = (__int64 *)operator new(0x2F0u);
  sub_2CAB0(v15, v9, v36, v12, 1, (__int64)(a1 + 144));
  v16 = a1[7];
  v17 = a1 + 6;
  if ( !v16 )
    goto LABEL_29;
  v18 = (__int64)(a1 + 6);
  do
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)(v16 + 16);
      v20 = *(_QWORD *)(v16 + 24);
      if ( *(_DWORD *)(v16 + 32) < v8 )
        break;
      v18 = v16;
      v16 = *(_QWORD *)(v16 + 16);
      if ( !v19 )
        goto LABEL_9;
    }
    v16 = *(_QWORD *)(v16 + 24);
  }
  while ( v20 );
LABEL_9:
  if ( v17 == (_QWORD *)v18 )
  {
LABEL_29:
    v37 = (__int64)(a1 + 5);
    v34 = operator new(0x30u);
    v35 = a1[10] == 0;
    *(_DWORD *)(v34 + 32) = v8;
    v25 = (void *)v34;
    *(_QWORD *)(v34 + 40) = 0;
    if ( !v35 )
    {
      v27 = a1[9];
      v18 = 0;
      if ( *(_DWORD *)(v27 + 32) < v8 )
      {
LABEL_16:
        if ( v27 )
        {
          if ( v17 == (_QWORD *)v27 || v18 )
          {
            v31 = 1;
LABEL_20:
            v18 = (__int64)v25;
            std::_Rb_tree_insert_and_rebalance(v31, v25, v27, a1 + 6, a4, a5, a6);
            ++*(_QWORD *)(v37 + 40);
            goto LABEL_21;
          }
          LODWORD(v26) = *(_DWORD *)(v27 + 32);
LABEL_34:
          v31 = v8 < (unsigned int)v26;
          goto LABEL_20;
        }
        goto LABEL_23;
      }
    }
LABEL_31:
    v18 = sub_24D80(v37, v8, v27, v29, v30);
    goto LABEL_16;
  }
  if ( v8 >= *(_DWORD *)(v18 + 32) )
    goto LABEL_21;
  v37 = (__int64)(a1 + 5);
  v21 = operator new(0x30u);
  *(_DWORD *)(v21 + 32) = v8;
  v25 = (void *)v21;
  *(_QWORD *)(v21 + 40) = 0;
  v26 = *(unsigned int *)(v18 + 32);
  if ( v8 < (unsigned int)v26 )
  {
    v27 = v18;
    if ( a1[8] == v18 )
      goto LABEL_16;
    v28 = std::_Rb_tree_decrement(v18, v14, v18, v26, v23);
    v27 = v28;
    if ( *(_DWORD *)(v28 + 32) < v8 )
    {
      if ( *(_QWORD *)(v28 + 24) )
        v27 = v18;
      else
        v18 = 0;
      goto LABEL_16;
    }
    goto LABEL_31;
  }
  if ( (unsigned int)v26 < v8 )
  {
    if ( a1[9] != v18 )
    {
      v38 = *(_DWORD *)(v18 + 32);
      v33 = std::_Rb_tree_increment(v18, v14, v22, v26, v23, v24, a4, a5, a6);
      v27 = v33;
      if ( v8 >= *(_DWORD *)(v33 + 32) )
        goto LABEL_31;
      LODWORD(v26) = v38;
      if ( *(_QWORD *)(v18 + 24) )
      {
        v18 = v33;
        goto LABEL_16;
      }
    }
    v27 = v18;
    if ( v18 )
      goto LABEL_34;
  }
LABEL_23:
  if ( v25 )
    operator delete(v25, 0x30u);
LABEL_21:
  *(_QWORD *)(v18 + 40) = v15;
  return v8;
}

