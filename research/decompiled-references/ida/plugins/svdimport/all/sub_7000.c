unsigned __int64 __fastcall sub_7000(__int64 *a1, const void **a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  const void *v10; // rbp
  const char *v11; // rsi
  const char *v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  void *v22; // r15
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // rax
  const void *v30; // r12
  void *v31; // rdi
  __int64 v32; // rax
  __int64 v34; // [rsp+8h] [rbp-50h]
  __int64 v35; // [rsp+10h] [rbp-48h]

  if ( a4 == -1 )
    a4 = a1[6];
  v7 = a1[5];
  v8 = v7 + 80 * a3;
  v9 = v7 + 80 * a4;
  v35 = v7;
  if ( v8 >= v9 )
    goto LABEL_37;
  v10 = a2[7];
  while ( 1 )
  {
    v13 = *(_QWORD *)(v8 + 56);
    if ( v10 )
    {
      v11 = (const char *)a2[6];
      v12 = s1;
      if ( !v13 )
        goto LABEL_6;
      goto LABEL_11;
    }
    if ( !v13 )
      break;
    v11 = s1;
LABEL_11:
    v12 = *(const char **)(v8 + 48);
LABEL_6:
    if ( !strcmp(v12, v11) )
      break;
    v8 += 80LL;
    if ( v8 >= v9 )
      goto LABEL_37;
  }
  if ( !v8 )
  {
LABEL_37:
    v14 = a1[6];
    sub_6DD0(a1 + 5, (__int64)a2);
    a5 = *(_DWORD *)(a1[5] + 80 * a1[6] - 8);
    goto LABEL_16;
  }
  if ( a5 )
  {
    if ( a2 != (const void **)v8 )
    {
      v26 = (unsigned __int64)a2[1];
      if ( v26 > 1 )
      {
        v30 = *a2;
        v31 = *(void **)v8;
        if ( *(_QWORD *)(v8 + 16) < v26 )
        {
          v32 = qvector_reserve();
          *(_QWORD *)v8 = v32;
          v31 = (void *)v32;
        }
        *(_QWORD *)(v8 + 8) = v26;
        memmove(v31, v30, v26 - 1);
        *(_BYTE *)(*(_QWORD *)v8 + v26 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v8 + 8) = 0;
      }
    }
    *(_DWORD *)(v8 + 72) = a5;
    v35 = a1[5];
  }
  else
  {
    a5 = *(_DWORD *)(v8 + 72);
  }
  v14 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v8 - v35) >> 4);
LABEL_16:
  if ( ((a5 - 2) & 0xFFFFFFFD) == 0 )
  {
    v16 = a1[8];
    v17 = a1[11];
    if ( !v17 )
      goto LABEL_41;
    v18 = (__int64)(a1 + 10);
    do
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)(v17 + 16);
        v20 = *(_QWORD *)(v17 + 24);
        if ( (int)v16 > *(_DWORD *)(v17 + 32) )
          break;
        v18 = v17;
        v17 = *(_QWORD *)(v17 + 16);
        if ( !v19 )
          goto LABEL_23;
      }
      v17 = *(_QWORD *)(v17 + 24);
    }
    while ( v20 );
LABEL_23:
    if ( a1 + 10 == (__int64 *)v18 )
    {
LABEL_41:
      v34 = (__int64)(a1 + 9);
      v27 = operator new(0x30u);
      v28 = a1[14] == 0;
      *(_DWORD *)(v27 + 32) = v16;
      v22 = (void *)v27;
      *(_QWORD *)(v27 + 40) = 0;
      if ( !v28 )
      {
        v24 = a1[13];
        v18 = 0;
        if ( (int)v16 > *(_DWORD *)(v24 + 32) )
        {
LABEL_30:
          if ( v24 )
          {
LABEL_31:
            v18 = (__int64)v22;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(v34 + 40);
            goto LABEL_32;
          }
LABEL_39:
          if ( v22 )
          {
            operator delete(v22, 0x30u);
            *(_QWORD *)(v18 + 40) = v14;
            ++a1[8];
            return v14;
          }
          goto LABEL_32;
        }
      }
    }
    else
    {
      if ( (int)v16 >= *(_DWORD *)(v18 + 32) )
      {
LABEL_32:
        *(_QWORD *)(v18 + 40) = v14;
        ++a1[8];
        return v14;
      }
      v34 = (__int64)(a1 + 9);
      v21 = operator new(0x30u);
      *(_DWORD *)(v21 + 32) = v16;
      v22 = (void *)v21;
      *(_QWORD *)(v21 + 40) = 0;
      v23 = *(_DWORD *)(v18 + 32);
      if ( (int)v16 >= v23 )
      {
        if ( (int)v16 <= v23 )
          goto LABEL_39;
        if ( a1[13] == v18 )
        {
          if ( v18 )
            goto LABEL_31;
          goto LABEL_39;
        }
        v29 = std::_Rb_tree_increment();
        v24 = v29;
        if ( (int)v16 < *(_DWORD *)(v29 + 32) )
        {
          if ( !*(_QWORD *)(v18 + 24) )
          {
            if ( v18 )
              goto LABEL_31;
            goto LABEL_39;
          }
          v18 = v29;
          goto LABEL_30;
        }
      }
      else
      {
        v24 = v18;
        if ( a1[12] == v18 )
          goto LABEL_30;
        v25 = std::_Rb_tree_decrement();
        v24 = v25;
        if ( (int)v16 > *(_DWORD *)(v25 + 32) )
        {
          if ( *(_QWORD *)(v25 + 24) )
            v24 = v18;
          else
            v18 = 0;
          goto LABEL_30;
        }
      }
    }
    v18 = sub_44E0(v34, v16);
    goto LABEL_30;
  }
  return v14;
}

