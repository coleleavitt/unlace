__int64 __fastcall sub_252D40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // r12d
  __int64 v8; // rdx
  int v9; // eax
  int v10; // esi
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  int v19; // ecx
  void *v20; // r12
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-48h]
  int v29; // [rsp+8h] [rbp-40h]
  int v30; // [rsp+Ch] [rbp-3Ch]

  v5 = *(_DWORD *)(a2 + 12);
  if ( v5 == -1 )
    return 0;
  v8 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
  v9 = *(_DWORD *)(a2 + 8);
  v10 = v8;
  if ( (int)v8 < 0 )
  {
    if ( v9 != 76 )
      return 0;
LABEL_35:
    v13 = a2;
LABEL_8:
    *((_DWORD *)sub_2413C0(*(_QWORD *)(*(_QWORD *)(v13 + 24) + 64LL), -1, v8, a4, a5) + 3) = v5;
    *(_DWORD *)(a2 + 12) = -1;
    return 0;
  }
  v8 *= 8;
  if ( v9 > 69 )
  {
    if ( v9 != 76 )
      return 0;
    goto LABEL_35;
  }
  v11 = *(_QWORD *)(a1 + 16);
  v12 = a2;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v11 + v8);
    a4 = *(unsigned int *)(v13 + 8);
    if ( (int)a4 > 69 )
      break;
    if ( *(_QWORD *)(v13 + 24) == v12 )
    {
      --v10;
      v8 -= 8;
      v12 = v13;
      if ( v10 != -1 )
        continue;
    }
    goto LABEL_12;
  }
  if ( (_DWORD)a4 != 74 )
  {
    if ( (_DWORD)a4 == 76 )
      goto LABEL_8;
    goto LABEL_23;
  }
  if ( v12 == *(_QWORD *)(v13 + 24) + 72LL )
  {
LABEL_23:
    v12 = *(_QWORD *)(v11 + v8);
LABEL_12:
    if ( a2 == v12 )
      return 0;
    v15 = *(_DWORD *)(v12 + 12);
    if ( v15 == -1 )
    {
      *(_DWORD *)(v12 + 12) = v5;
LABEL_15:
      *(_DWORD *)(a2 + 12) = -1;
      return 0;
    }
    v16 = *(_QWORD *)(a1 + 80);
    if ( !v16 )
      goto LABEL_38;
    v17 = a1 + 72;
    do
    {
      if ( v5 <= *(_DWORD *)(v16 + 32) )
      {
        v17 = v16;
        v16 = *(_QWORD *)(v16 + 16);
      }
      else
      {
        v16 = *(_QWORD *)(v16 + 24);
      }
    }
    while ( v16 );
    if ( a1 + 72 == v17 )
    {
LABEL_38:
      v28 = a1 + 64;
      v25 = operator new(0x28u);
      v24 = *(_DWORD *)(a2 + 12);
      v26 = *(_QWORD *)(a1 + 104) == 0;
      *(_DWORD *)(v25 + 36) = 0;
      v20 = (void *)v25;
      *(_DWORD *)(v25 + 32) = v24;
      if ( !v26 )
      {
        v22 = *(_QWORD *)(a1 + 96);
        v17 = 0;
        if ( *(_DWORD *)(v22 + 32) < v24 )
        {
LABEL_31:
          if ( v22 )
          {
LABEL_32:
            v17 = (__int64)v20;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(v28 + 40);
            goto LABEL_33;
          }
LABEL_36:
          if ( v20 )
            operator delete(v20, 0x28u);
          goto LABEL_33;
        }
      }
    }
    else
    {
      if ( v5 >= *(_DWORD *)(v17 + 32) )
      {
LABEL_33:
        *(_DWORD *)(v17 + 36) = v15;
        goto LABEL_15;
      }
      v28 = a1 + 64;
      v18 = operator new(0x28u);
      v19 = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(v18 + 36) = 0;
      v20 = (void *)v18;
      *(_DWORD *)(v18 + 32) = v19;
      v21 = *(_DWORD *)(v17 + 32);
      if ( v21 <= v19 )
      {
        if ( v21 >= v19 )
          goto LABEL_36;
        if ( *(_QWORD *)(a1 + 96) != v17 )
        {
          v30 = v19;
          v27 = std::_Rb_tree_increment();
          v24 = v30;
          v22 = v27;
          if ( *(_DWORD *)(v27 + 32) <= v30 )
            goto LABEL_40;
          if ( *(_QWORD *)(v17 + 24) )
          {
            v17 = v27;
            goto LABEL_31;
          }
        }
        if ( v17 )
          goto LABEL_32;
        goto LABEL_36;
      }
      v22 = v17;
      if ( *(_QWORD *)(a1 + 88) == v17 )
        goto LABEL_31;
      v29 = v19;
      v23 = std::_Rb_tree_decrement();
      v24 = v29;
      v22 = v23;
      if ( *(_DWORD *)(v23 + 32) < v29 )
      {
        if ( *(_QWORD *)(v23 + 24) )
          v22 = v17;
        else
          v17 = 0;
        goto LABEL_31;
      }
    }
LABEL_40:
    v17 = sub_252C20(v28, v24);
    goto LABEL_31;
  }
  return 0;
}

