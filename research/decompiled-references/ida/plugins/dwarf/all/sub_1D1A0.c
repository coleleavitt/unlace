__int64 __fastcall sub_1D1A0(__int64 a1, const char *a2)
{
  __int64 v2; // rbp
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // r12d
  int *v8; // rbx
  __int64 v9; // r13
  int *v10; // r15
  const char *v11; // rdi
  int v12; // eax
  __int64 v13; // r14
  const char *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // r14
  size_t v18; // r15
  __int64 v19; // r12
  unsigned int ordinal_limit; // eax
  unsigned int v21; // ebx
  unsigned int v22; // ebp
  __int64 v23; // r14
  __int64 v24; // rbx
  bool v25; // cf
  _QWORD *v26; // rbx
  _QWORD *v27; // rbp
  __int64 v28; // rdi
  void *v30; // rax
  const char *v31; // rsi
  const char *v32; // rdi
  __int64 v33; // [rsp+0h] [rbp-B8h]
  unsigned int v34; // [rsp+0h] [rbp-B8h]
  const char *v35; // [rsp+8h] [rbp-B0h]
  const char *v36; // [rsp+18h] [rbp-A0h]
  __int64 v37; // [rsp+20h] [rbp-98h] BYREF
  __int128 v38; // [rsp+28h] [rbp-90h]
  __int64 v39; // [rsp+40h] [rbp-78h] BYREF
  int v40; // [rsp+48h] [rbp-70h] BYREF
  void *v41; // [rsp+50h] [rbp-68h]
  int *v42; // [rsp+58h] [rbp-60h]
  int *v43; // [rsp+60h] [rbp-58h]
  __int64 v44; // [rsp+68h] [rbp-50h]
  unsigned __int64 v45; // [rsp+78h] [rbp-40h]

  v36 = a2;
  v45 = __readfsqword(0x28u);
  v40 = 0;
  v42 = &v40;
  v43 = &v40;
  v41 = nullptr;
  v44 = 0;
  v35 = a2 + 80;
  do
  {
    v2 = *((_QWORD *)v36 + 12);
    if ( v35 == (const char *)v2 )
      break;
    v3 = 0;
    do
    {
      v7 = sub_30A80(*(_QWORD *)(v2 + 48));
      if ( !(_BYTE)v7 )
        goto LABEL_4;
      v8 = (int *)v41;
      v9 = *(_QWORD *)(v2 + 48);
      if ( v41 )
      {
        v33 = *(_QWORD *)(v9 + 48);
        while ( 1 )
        {
          v13 = *((_QWORD *)v8 + 5);
          if ( !v13 )
            break;
          a2 = *((const char **)v8 + 4);
          v10 = v8;
          v11 = src;
          if ( v33 )
            goto LABEL_9;
LABEL_10:
          v12 = strcmp(v11, a2);
          v8 = *((int **)v10 + 3);
          a2 = nullptr;
          if ( v12 < 0 )
          {
            v8 = *((int **)v10 + 2);
            a2 = (const char *)v7;
          }
          if ( !v8 )
          {
            if ( !(_BYTE)a2 )
            {
              v8 = v10;
              goto LABEL_24;
            }
            if ( v42 != v10 )
              goto LABEL_23;
            v8 = v10;
            LOBYTE(v34) = v7;
            if ( v10 != &v40 )
            {
LABEL_54:
              v31 = src;
              if ( *((_QWORD *)v8 + 5) )
                v31 = *((const char **)v8 + 4);
              v32 = src;
              if ( *(_QWORD *)(v9 + 48) )
                v32 = *(const char **)(v9 + 40);
              v34 = (unsigned int)strcmp(v32, v31) >> 31;
            }
LABEL_29:
            v16 = operator new(0x38u);
            *(_QWORD *)(v16 + 32) = 0;
            v17 = (const char *)v16;
            *(_OWORD *)(v16 + 40) = 0;
            v18 = *(_QWORD *)(v9 + 48);
            if ( v18 )
            {
              v30 = (void *)qalloc_or_throw(*(_QWORD *)(v9 + 48));
              *((_QWORD *)v17 + 4) = v30;
              *((_QWORD *)v17 + 6) = v18;
              memcpy(v30, *(const void **)(v9 + 40), v18);
              *((_QWORD *)v17 + 5) = v18;
            }
            a2 = v17;
            std::_Rb_tree_insert_and_rebalance((unsigned __int8)v34, v17, v8, &v40);
            ++v44;
            goto LABEL_32;
          }
        }
        a2 = src;
        if ( !v33 )
        {
          v10 = *((int **)v8 + 3);
          if ( !v10 )
          {
LABEL_19:
            if ( !*(_QWORD *)(v9 + 48) )
              goto LABEL_32;
            a2 = *(const char **)(v9 + 40);
            v14 = src;
            goto LABEL_27;
          }
          while ( 1 )
          {
            v13 = *((_QWORD *)v10 + 5);
            if ( v13 )
              break;
            v8 = v10;
            v10 = *((int **)v10 + 3);
            if ( !v10 )
              goto LABEL_19;
          }
          a2 = *((const char **)v10 + 4);
          v11 = src;
          goto LABEL_10;
        }
LABEL_9:
        v11 = *(const char **)(v9 + 40);
        v10 = v8;
        goto LABEL_10;
      }
      v10 = &v40;
      if ( v42 == &v40 )
      {
        LOBYTE(v34) = v7;
        v8 = &v40;
        goto LABEL_29;
      }
LABEL_23:
      v8 = v10;
      v15 = std::_Rb_tree_decrement(v10, a2, v4, v5, v6);
      v13 = *(_QWORD *)(v15 + 40);
      v10 = (int *)v15;
LABEL_24:
      if ( !*(_QWORD *)(v9 + 48) )
      {
        a2 = src;
        if ( !v13 )
          goto LABEL_32;
LABEL_26:
        v14 = *((const char **)v10 + 4);
        goto LABEL_27;
      }
      a2 = *(const char **)(v9 + 40);
      v14 = src;
      if ( v13 )
        goto LABEL_26;
LABEL_27:
      if ( strcmp(v14, a2) < 0 )
      {
        LOBYTE(v34) = v7;
        if ( v8 != &v40 )
          goto LABEL_54;
        goto LABEL_29;
      }
LABEL_32:
      v3 = v7;
LABEL_4:
      v2 = std::_Rb_tree_increment(v2);
    }
    while ( v35 != (const char *)v2 );
  }
  while ( v3 );
  v37 = 0;
  v38 = 0;
  v19 = *((_QWORD *)v36 + 1);
  ordinal_limit = get_ordinal_limit(v19);
  v21 = *((_DWORD *)v36 + 50);
  v22 = ordinal_limit;
  if ( v21 < ordinal_limit )
  {
    do
      sub_169E0(v19, &v37, v21++, &v39);
    while ( v22 != v21 );
  }
  v23 = v38;
  v24 = v38 - 1;
  if ( (__int64)v38 - 1 >= 0 )
  {
    while ( 1 )
    {
      while ( !(unsigned __int8)sub_169E0(v19, nullptr, *(_DWORD *)(v37 + 4 * v24), &v39) )
      {
        v25 = v24-- == 0;
        if ( v25 )
          goto LABEL_41;
      }
      memmove((void *)(4 * v24 + v37), (const void *)(4 * v24 + v37 + 4), 4 * v38 - 4 - 4 * v24);
      *(_QWORD *)&v38 = v38 - 1;
      v25 = v24-- == 0;
      if ( v25 )
      {
LABEL_41:
        if ( (_QWORD)v38 == v23 )
          break;
        v23 = v38;
        v24 = v38 - 1;
        if ( (__int64)v38 - 1 < 0 )
          break;
      }
    }
  }
  LOBYTE(v19) = v44 != 0;
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  v26 = v41;
  if ( v41 )
  {
    do
    {
      v27 = v26;
      sub_15F20((_QWORD *)v26[3]);
      v28 = v26[4];
      v26 = (_QWORD *)v26[2];
      if ( v28 )
      {
        v27[5] = 0;
        qfree(v28);
      }
      operator delete(v27, 0x38u);
    }
    while ( v26 );
  }
  return (unsigned int)v19;
}

