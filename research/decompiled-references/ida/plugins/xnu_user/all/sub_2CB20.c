__int64 __fastcall sub_2CB20(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v5; // rdx
  int v6; // eax
  int v8; // ecx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // r12
  int v18; // esi
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  unsigned __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rax
  size_t v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  bool v32; // zf
  int v33; // [rsp+8h] [rbp-40h]
  int v34; // [rsp+8h] [rbp-40h]

  v5 = qword_9AD30;
  v6 = *(_DWORD *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 120);
  if ( !v6 )
  {
    v22 = a4[1];
    v24 = v22 + 3;
    if ( v22 >= 0xFFFFFFFFFFFFFFFDLL )
    {
      v24 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v25 = *a4;
      v26 = a4[1];
      v27 = 3;
      if ( a4[2] < v24 )
      {
        v30 = qvector_reserve();
        *a4 = v30;
        v25 = v30;
        v26 = a4[1];
        v27 = v24 - v26;
      }
      memset((void *)(v25 + v26), 0, v27);
    }
    v28 = *a4;
    a4[1] = v24;
    *(_WORD *)(v28 + v22) = -5172;
    *(_BYTE *)(v28 + v22 + 2) = -2;
    return 0;
  }
  if ( v6 != 13 )
    return 0;
  v8 = *(_DWORD *)(a1 + 1192);
  if ( v8 <= 0 )
    return 0;
  v10 = a3[2];
  v11 = *(_QWORD *)(a2 + 32);
  if ( !v10 )
    goto LABEL_32;
  v12 = (__int64)(a3 + 1);
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v10 + 16);
      v14 = *(_QWORD *)(v10 + 24);
      if ( v8 > *(_DWORD *)(v10 + 32) )
        break;
      v12 = v10;
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v13 )
        goto LABEL_10;
    }
    v10 = *(_QWORD *)(v10 + 24);
  }
  while ( v14 );
LABEL_10:
  if ( a3 + 1 == (_QWORD *)v12 )
  {
LABEL_32:
    v31 = operator new(0x48u);
    v20 = *(_DWORD *)(a1 + 1192);
    *(_OWORD *)(v31 + 56) = 0;
    v32 = a3[5] == 0;
    v17 = v31;
    *(_DWORD *)(v31 + 32) = v20;
    *(_DWORD *)(v31 + 40) = -2;
    *(_QWORD *)(v31 + 48) = -1;
    if ( !v32 )
    {
      v21 = a3[4];
      v12 = 0;
      if ( *(_DWORD *)(v21 + 32) < v20 )
        goto LABEL_18;
    }
    goto LABEL_34;
  }
  if ( v8 < *(_DWORD *)(v12 + 32) )
  {
    v15 = operator new(0x48u);
    v16 = *(_DWORD *)(a1 + 1192);
    *(_DWORD *)(v15 + 40) = -2;
    v17 = v15;
    *(_DWORD *)(v15 + 32) = v16;
    *(_QWORD *)(v15 + 48) = -1;
    *(_OWORD *)(v15 + 56) = 0;
    v18 = *(_DWORD *)(v12 + 32);
    if ( v18 > v16 )
    {
      v21 = v12;
      if ( a3[3] == v12 )
        goto LABEL_18;
      v34 = v16;
      v29 = std::_Rb_tree_decrement();
      v20 = v34;
      v21 = v29;
      if ( *(_DWORD *)(v29 + 32) < v34 )
      {
        if ( *(_QWORD *)(v29 + 24) )
          v21 = v12;
        else
          v12 = 0;
        goto LABEL_18;
      }
    }
    else
    {
      if ( v18 >= v16 )
      {
LABEL_40:
        if ( !v17 )
          goto LABEL_20;
        goto LABEL_39;
      }
      if ( a3[4] == v12 )
      {
LABEL_42:
        if ( v12 )
          goto LABEL_19;
        goto LABEL_40;
      }
      v33 = v16;
      v19 = std::_Rb_tree_increment();
      v20 = v33;
      v21 = v19;
      if ( *(_DWORD *)(v19 + 32) > v33 )
      {
        if ( *(_QWORD *)(v12 + 24) )
        {
          v12 = v19;
LABEL_18:
          if ( v21 )
          {
LABEL_19:
            v12 = v17;
            std::_Rb_tree_insert_and_rebalance();
            ++a3[5];
LABEL_20:
            v5 = qword_9AD30;
            goto LABEL_21;
          }
          if ( !v17 )
            goto LABEL_20;
          if ( *(int *)(v17 + 40) >= -1 )
          {
            if ( *(_QWORD *)(v17 + 48) )
            {
              *(_QWORD *)(v17 + 56) = 0;
              qfree();
            }
          }
LABEL_39:
          operator delete((void *)v17, 0x48u);
          goto LABEL_20;
        }
        goto LABEL_42;
      }
    }
LABEL_34:
    v12 = sub_2AEA0((__int64)a3, v20);
    goto LABEL_18;
  }
LABEL_21:
  *(_QWORD *)(v12 + 48) = v11;
  return *(unsigned int *)(v5 + 144LL * *(int *)(a1 + 1176) + 128);
}

