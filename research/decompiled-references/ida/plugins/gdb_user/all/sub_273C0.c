unsigned __int64 __fastcall sub_273C0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  const char *v9; // r12
  _QWORD *v10; // r13
  __int64 v11; // rbp
  const void *v12; // r15
  size_t v13; // rax
  size_t v14; // r14
  __int64 v15; // rax
  void *v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  void *v23; // rdi
  size_t v24; // rdx
  __int64 v25; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  size_t v29; // [rsp+0h] [rbp-70h]
  _QWORD *v30; // [rsp+18h] [rbp-58h]
  __int128 v31; // [rsp+20h] [rbp-50h]
  unsigned __int64 v32; // [rsp+30h] [rbp-40h]

  v2 = *a2;
  v32 = __readfsqword(0x28u);
  v31 = 0;
  v30 = nullptr;
  v4 = *a2 + 24 * a2[1];
  if ( v4 == *a2 )
    goto LABEL_28;
  v5 = 0;
  v6 = 0;
  v7 = nullptr;
  do
  {
    v9 = s;
    if ( *(_QWORD *)(v2 + 8) )
      v9 = *(const char **)v2;
    if ( v6 < v5 + 1 )
    {
      v30 = (_QWORD *)qvector_reserve();
      v7 = v30;
      v5 = v31;
    }
    v7[v5] = v9;
    v8 = v31;
    v2 += 24;
    v7 = v30;
    v6 = *((_QWORD *)&v31 + 1);
    v5 = v31 + 1;
    *(_QWORD *)&v31 = v31 + 1;
  }
  while ( v4 != v2 );
  if ( v8 != -2 )
  {
LABEL_28:
    v30 = (_QWORD *)qvector_reserve();
    v7 = v30;
    v5 = v31;
  }
  v7[v5] = 0;
  v10 = v30;
  if ( *v30 )
  {
    do
    {
      v19 = *(_QWORD *)(a1 + 704);
      v20 = *(_QWORD *)(a1 + 696);
      if ( *(_QWORD *)(a1 + 712) < (unsigned __int64)(v19 + 1) )
      {
        v21 = qvector_reserve();
        *(_QWORD *)(a1 + 696) = v21;
        v19 = *(_QWORD *)(a1 + 704);
        v20 = v21;
      }
      ++v10;
      v11 = v20 + 24 * v19;
      *(_QWORD *)v11 = 0;
      *(_OWORD *)(v11 + 8) = 0;
      ++*(_QWORD *)(a1 + 704);
      v12 = (const void *)*(v10 - 1);
      if ( v12 && (v13 = strlen((const char *)*(v10 - 1)), (v14 = v13) != 0) )
      {
        v23 = *(void **)v11;
        v24 = v13 + 1;
        if ( *(_QWORD *)(v11 + 16) < v13 + 1 )
        {
          v29 = v13 + 1;
          v27 = qvector_reserve();
          *(_QWORD *)v11 = v27;
          v24 = v29;
          v23 = (void *)v27;
        }
        *(_QWORD *)(v11 + 8) = v24;
        memmove(v23, v12, v14);
        *(_BYTE *)(*(_QWORD *)v11 + v14) = 0;
      }
      else
      {
        *(_QWORD *)(v11 + 8) = 0;
      }
      v15 = *(_QWORD *)(a1 + 728);
      v16 = *(void **)v11;
      v17 = *(_QWORD *)(a1 + 720);
      if ( *(_QWORD *)(a1 + 736) < (unsigned __int64)(v15 + 1) )
      {
        v22 = qvector_reserve();
        *(_QWORD *)(a1 + 720) = v22;
        v17 = v22;
        v15 = *(_QWORD *)(a1 + 728);
      }
      *(_QWORD *)(v17 + 8 * v15) = v16;
      v18 = *(_QWORD *)(a1 + 728) + 1LL;
      *(_QWORD *)(a1 + 728) = v18;
    }
    while ( *v10 );
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 728);
  }
  v25 = *(_QWORD *)(a1 + 720);
  if ( *(_QWORD *)(a1 + 736) < (unsigned __int64)(v18 + 1) )
  {
    v28 = qvector_reserve();
    *(_QWORD *)(a1 + 720) = v28;
    v18 = *(_QWORD *)(a1 + 728);
    v25 = v28;
  }
  *(_QWORD *)(v25 + 8 * v18) = 0;
  ++*(_QWORD *)(a1 + 728);
  *(_DWORD *)(a1 + 768) = 0;
  if ( v30 )
    qfree();
  return v32 - __readfsqword(0x28u);
}

