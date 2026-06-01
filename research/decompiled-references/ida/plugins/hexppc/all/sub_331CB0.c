_QWORD *__fastcall sub_331CB0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rbp
  unsigned __int64 v10; // r15
  size_t v11; // r8
  const void *v12; // r9
  void *v13; // rax
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 i; // r13
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 j; // rbp
  _QWORD *v20; // rbx
  __int64 v22; // rbp
  __int64 v23; // r14
  size_t v24; // r15
  __int64 v25; // rbp
  __int64 v26; // rcx
  size_t v27; // r15
  void *v28; // rax
  void *v29; // rax
  const void *v30; // [rsp+10h] [rbp-108h]
  const void **v31; // [rsp+18h] [rbp-100h]
  __int64 v32; // [rsp+18h] [rbp-100h]
  __int64 v33; // [rsp+20h] [rbp-F8h]
  __int64 src; // [rsp+28h] [rbp-F0h]
  __int64 v35; // [rsp+70h] [rbp-A8h]
  __int64 v36; // [rsp+78h] [rbp-A0h]

  v3 = *(int *)(a2 + 8);
  v35 = 0;
  v36 = 0;
  if ( *(_DWORD *)(a2 + 8) )
  {
    v4 = 0;
    v35 = qvector_reserve();
    v5 = v35;
    if ( v3 )
    {
      while ( 1 )
      {
        v6 = 80 * v4 + v5;
        *(_DWORD *)v6 = 0;
        copy_argloc();
        *(_QWORD *)(v6 + 16) = 0;
        *(_OWORD *)(v6 + 24) = 0;
        *(_QWORD *)(v6 + 40) = 0;
        *(_OWORD *)(v6 + 48) = 0;
        *(_QWORD *)(v6 + 64) = 0;
        copy_tinfo_t();
        ++v4;
        *(_DWORD *)(v6 + 72) = 0;
        if ( v3 == v4 )
          break;
        v5 = v35;
      }
    }
    v36 = v3;
    clear_tinfo_t();
    cleanup_argloc();
    if ( *(int *)(a2 + 8) > 0 )
    {
      v7 = 0;
      do
      {
        v8 = 80 * v7 + *(_QWORD *)(a2 + 24);
        v9 = v35 + 80 * v7;
        copy_tinfo_t();
        copy_argloc();
        if ( v9 + 16 != v8 + 32 )
        {
          v10 = *(_QWORD *)(v8 + 40);
          if ( !v10 || (v11 = v10 - 1, v10 == 1) )
          {
            *(_QWORD *)(v9 + 24) = 0;
          }
          else
          {
            v12 = *(const void **)(v8 + 32);
            v13 = *(void **)(v9 + 16);
            if ( *(_QWORD *)(v9 + 32) < v10 )
            {
              v30 = *(const void **)(v8 + 32);
              v13 = (void *)qvector_reserve();
              v12 = v30;
              v11 = v10 - 1;
              *(_QWORD *)(v9 + 16) = v13;
            }
            *(_QWORD *)(v9 + 24) = v10;
            memmove(v13, v12, v11);
            *(_BYTE *)(*(_QWORD *)(v9 + 16) + v10 - 1) = 0;
          }
        }
        ++v7;
        *(_DWORD *)(v9 + 72) = *(_DWORD *)(v8 + 72);
      }
      while ( *(_DWORD *)(a2 + 8) > (int)v7 );
    }
  }
  copy_tinfo_t();
  copy_argloc();
  *a1 = 0;
  create_tinfo();
  v14 = *(_QWORD *)(a2 + 296);
  v33 = 0;
  src = 0;
  if ( v14 )
  {
    v33 = qalloc_or_throw();
    v22 = v33;
    v23 = 0;
    while ( 1 )
    {
      v25 = 48 * v23 + v22;
      v26 = *(_QWORD *)(a2 + 288) + 48 * v23;
      *(_QWORD *)v25 = 0;
      *(_OWORD *)(v25 + 8) = 0;
      v27 = *(_QWORD *)(v26 + 8);
      if ( v27 )
      {
        v31 = (const void **)v26;
        v28 = (void *)qalloc_or_throw();
        *(_QWORD *)v25 = v28;
        *(_QWORD *)(v25 + 16) = v27;
        memcpy(v28, *v31, v27);
        *(_QWORD *)(v25 + 8) = v27;
        v26 = (__int64)v31;
      }
      *(_QWORD *)(v25 + 24) = 0;
      *(_OWORD *)(v25 + 32) = 0;
      v24 = *(_QWORD *)(v26 + 32);
      if ( v24 )
      {
        v32 = v26;
        v29 = (void *)qalloc_or_throw();
        *(_QWORD *)(v25 + 24) = v29;
        *(_QWORD *)(v25 + 40) = v24;
        ++v23;
        memcpy(v29, *(const void **)(v32 + 24), v24);
        *(_QWORD *)(v25 + 32) = v24;
        if ( v14 == v23 )
        {
LABEL_46:
          src = v14;
          break;
        }
      }
      else if ( v14 == ++v23 )
      {
        goto LABEL_46;
      }
      v22 = v33;
    }
  }
  set_tinfo_attrs();
  if ( (unsigned int)verify_tinfo() )
  {
    if ( !under_debugger )
      sub_37EEE0(50657);
    BUG();
  }
  v15 = v33;
  if ( v33 )
  {
    if ( src )
    {
      for ( i = 0; i != src; ++i )
      {
        v17 = (_QWORD *)(v15 + 48 * i);
        if ( v17[3] )
        {
          v17[4] = 0;
          qfree();
        }
        if ( *v17 )
        {
          v17[1] = 0;
          qfree();
        }
        v15 = v33;
      }
    }
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v18 = v35;
  if ( v35 )
  {
    if ( v36 )
    {
      for ( j = 0; j != v36; ++j )
      {
        v20 = (_QWORD *)(v18 + 80 * j);
        clear_tinfo_t();
        if ( v20[5] )
        {
          v20[6] = 0;
          qfree();
        }
        if ( v20[2] )
        {
          v20[3] = 0;
          qfree();
        }
        cleanup_argloc();
        v18 = v35;
      }
    }
    qfree();
  }
  return a1;
}

