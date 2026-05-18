__int64 __fastcall sub_39980(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  _DWORD *v4; // rax
  _DWORD *v5; // rdx
  __int64 v7; // r13
  _QWORD *v8; // r15
  __int64 v9; // rsi
  bool v10; // al
  __int64 v11; // rdx
  int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rdx
  _DWORD *v17; // rax
  __int64 v18; // r8
  void *v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  _BOOL8 v25; // rdi
  _DWORD *v27; // rax
  bool v28; // zf
  __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-48h]
  int v31; // [rsp+Ch] [rbp-3Ch]

  v2 = a1[3];
  v3 = *(_DWORD *)(a2 + 168);
  v4 = *(_DWORD **)(v2 + 16);
  v5 = &v4[*(_QWORD *)(v2 + 24)];
  if ( v4 != v5 )
  {
    while ( v3 != *v4 )
    {
      if ( v5 == ++v4 )
        return 0;
    }
    if ( v5 != v4 )
    {
      v7 = *(_QWORD *)(a2 + 504);
      v8 = a1 + 6;
      sub_19A520(v7);
      *(_BYTE *)(a2 + 512) = 0;
      sub_19A570(v7);
      sub_1672A0(a2 + 136, 2);
      unk_241EC8(a1[1] + 368LL, a2 + 368, a1[4] + 40LL);
      v9 = a1[1];
      v10 = sub_38BA0((_QWORD *)a1[4], v9);
      v11 = a1[4];
      *(_QWORD *)(v11 + 48) = 0;
      v12 = -v10;
      *(_DWORD *)(v11 + 64) = -1;
      v13 = a1[7];
      if ( !v13 )
        goto LABEL_28;
      v14 = (__int64)(a1 + 6);
      do
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(v13 + 16);
          v16 = *(_QWORD *)(v13 + 24);
          if ( *(_DWORD *)(v13 + 32) < v3 )
            break;
          v14 = v13;
          v13 = *(_QWORD *)(v13 + 16);
          if ( !v15 )
            goto LABEL_11;
        }
        v13 = *(_QWORD *)(v13 + 24);
      }
      while ( v16 );
LABEL_11:
      if ( v8 == (_QWORD *)v14 )
      {
LABEL_28:
        v30 = (__int64)(a1 + 5);
        v27 = (_DWORD *)operator new(0x28u);
        v28 = a1[10] == 0;
        v27[8] = v3;
        v19 = v27;
        v27[9] = 0;
        if ( !v28 )
        {
          v21 = a1[9];
          v14 = 0;
          if ( *(_DWORD *)(v21 + 32) < v3 )
          {
LABEL_18:
            if ( v21 )
            {
              if ( v14 || v8 == (_QWORD *)v21 )
              {
                v25 = 1;
LABEL_22:
                v14 = (__int64)v19;
                std::_Rb_tree_insert_and_rebalance(v25, v19, v21, a1 + 6);
                ++*(_QWORD *)(v30 + 40);
                goto LABEL_23;
              }
              LODWORD(v20) = *(_DWORD *)(v21 + 32);
LABEL_36:
              v25 = v3 < (unsigned int)v20;
              goto LABEL_22;
            }
LABEL_26:
            if ( v19 )
            {
              operator delete(v19, 0x28u);
              *(_DWORD *)(v14 + 36) = v12;
              return 0;
            }
            goto LABEL_23;
          }
        }
      }
      else
      {
        if ( v3 >= *(_DWORD *)(v14 + 32) )
        {
LABEL_23:
          *(_DWORD *)(v14 + 36) = v12;
          return 0;
        }
        v30 = (__int64)(a1 + 5);
        v17 = (_DWORD *)operator new(0x28u);
        v17[8] = v3;
        v19 = v17;
        v17[9] = 0;
        v20 = *(unsigned int *)(v14 + 32);
        if ( v3 >= (unsigned int)v20 )
        {
          if ( (unsigned int)v20 >= v3 )
            goto LABEL_26;
          if ( a1[9] != v14 )
          {
            v31 = *(_DWORD *)(v14 + 32);
            v29 = std::_Rb_tree_increment(v14);
            v21 = v29;
            if ( v3 >= *(_DWORD *)(v29 + 32) )
              goto LABEL_30;
            LODWORD(v20) = v31;
            if ( *(_QWORD *)(v14 + 24) )
            {
              v14 = v29;
              goto LABEL_18;
            }
          }
          v21 = v14;
          if ( v14 )
            goto LABEL_36;
          goto LABEL_26;
        }
        v21 = v14;
        if ( a1[8] == v14 )
          goto LABEL_18;
        v22 = std::_Rb_tree_decrement(v14, v9, v14, v20, v18);
        v21 = v22;
        if ( *(_DWORD *)(v22 + 32) < v3 )
        {
          if ( *(_QWORD *)(v22 + 24) )
            v21 = v14;
          else
            v14 = 0;
          goto LABEL_18;
        }
      }
LABEL_30:
      v14 = sub_2CC40(v30, v3, v21, v23, v24);
      goto LABEL_18;
    }
  }
  return 0;
}
