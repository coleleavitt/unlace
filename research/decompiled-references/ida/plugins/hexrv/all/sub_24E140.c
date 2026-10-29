__int64 __fastcall sub_24E140(__int64 a1, __int64 a2)
{
  int v2; // r12d
  __int64 v5; // rdx
  int v6; // eax
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // ecx
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  int v18; // ecx
  void *v19; // r12
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-48h]
  int v28; // [rsp+8h] [rbp-40h]
  int v29; // [rsp+Ch] [rbp-3Ch]

  v2 = *(_DWORD *)(a2 + 12);
  if ( v2 == -1 )
    return 0;
  v5 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
  v6 = *(_DWORD *)(a2 + 8);
  v7 = v5;
  if ( (int)v5 < 0 )
  {
    if ( v6 != 76 )
      return 0;
LABEL_35:
    v11 = a2;
LABEL_8:
    *((_DWORD *)sub_23C7C0(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 64LL), -1) + 3) = v2;
    *(_DWORD *)(a2 + 12) = -1;
    return 0;
  }
  v8 = 8 * v5;
  if ( v6 > 69 )
  {
    if ( v6 != 76 )
      return 0;
    goto LABEL_35;
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = a2;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v9 + v8);
    v12 = *(_DWORD *)(v11 + 8);
    if ( v12 > 69 )
      break;
    if ( *(_QWORD *)(v11 + 24) == v10 )
    {
      --v7;
      v8 -= 8;
      v10 = v11;
      if ( v7 != -1 )
        continue;
    }
    goto LABEL_12;
  }
  if ( v12 != 74 )
  {
    if ( v12 == 76 )
      goto LABEL_8;
    goto LABEL_23;
  }
  if ( v10 == *(_QWORD *)(v11 + 24) + 72LL )
  {
LABEL_23:
    v10 = *(_QWORD *)(v9 + v8);
LABEL_12:
    if ( a2 == v10 )
      return 0;
    v14 = *(_DWORD *)(v10 + 12);
    if ( v14 == -1 )
    {
      *(_DWORD *)(v10 + 12) = v2;
LABEL_15:
      *(_DWORD *)(a2 + 12) = -1;
      return 0;
    }
    v15 = *(_QWORD *)(a1 + 80);
    if ( !v15 )
      goto LABEL_38;
    v16 = a1 + 72;
    do
    {
      if ( v2 <= *(_DWORD *)(v15 + 32) )
      {
        v16 = v15;
        v15 = *(_QWORD *)(v15 + 16);
      }
      else
      {
        v15 = *(_QWORD *)(v15 + 24);
      }
    }
    while ( v15 );
    if ( a1 + 72 == v16 )
    {
LABEL_38:
      v27 = a1 + 64;
      v24 = operator new(0x28u);
      v23 = *(_DWORD *)(a2 + 12);
      v25 = *(_QWORD *)(a1 + 104) == 0;
      *(_DWORD *)(v24 + 36) = 0;
      v19 = (void *)v24;
      *(_DWORD *)(v24 + 32) = v23;
      if ( !v25 )
      {
        v21 = *(_QWORD *)(a1 + 96);
        v16 = 0;
        if ( *(_DWORD *)(v21 + 32) < v23 )
        {
LABEL_31:
          if ( v21 )
          {
LABEL_32:
            v16 = (__int64)v19;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(v27 + 40);
            goto LABEL_33;
          }
LABEL_36:
          if ( v19 )
            operator delete(v19, 0x28u);
          goto LABEL_33;
        }
      }
    }
    else
    {
      if ( v2 >= *(_DWORD *)(v16 + 32) )
      {
LABEL_33:
        *(_DWORD *)(v16 + 36) = v14;
        goto LABEL_15;
      }
      v27 = a1 + 64;
      v17 = operator new(0x28u);
      v18 = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(v17 + 36) = 0;
      v19 = (void *)v17;
      *(_DWORD *)(v17 + 32) = v18;
      v20 = *(_DWORD *)(v16 + 32);
      if ( v20 <= v18 )
      {
        if ( v20 >= v18 )
          goto LABEL_36;
        if ( *(_QWORD *)(a1 + 96) != v16 )
        {
          v29 = v18;
          v26 = std::_Rb_tree_increment();
          v23 = v29;
          v21 = v26;
          if ( *(_DWORD *)(v26 + 32) <= v29 )
            goto LABEL_40;
          if ( *(_QWORD *)(v16 + 24) )
          {
            v16 = v26;
            goto LABEL_31;
          }
        }
        if ( v16 )
          goto LABEL_32;
        goto LABEL_36;
      }
      v21 = v16;
      if ( *(_QWORD *)(a1 + 88) == v16 )
        goto LABEL_31;
      v28 = v18;
      v22 = std::_Rb_tree_decrement();
      v23 = v28;
      v21 = v22;
      if ( *(_DWORD *)(v22 + 32) < v28 )
      {
        if ( *(_QWORD *)(v22 + 24) )
          v21 = v16;
        else
          v16 = 0;
        goto LABEL_31;
      }
    }
LABEL_40:
    v16 = sub_24E020(v27, v23);
    goto LABEL_31;
  }
  return 0;
}

