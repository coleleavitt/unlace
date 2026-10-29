unsigned __int64 __fastcall sub_16380(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // r15
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rbp
  const void *v9; // r13
  size_t v10; // rax
  size_t v11; // r14
  void *v12; // rbp
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  void *v17; // rdi
  size_t v18; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  size_t v30; // [rsp+8h] [rbp-68h]
  __int64 v31; // [rsp+20h] [rbp-50h] BYREF
  void *v32; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+30h] [rbp-40h]

  v3 = off_74F00;
  v33 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 40) = a1 + 88;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 1065353216;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)a1 = &off_70EF8;
  *(_QWORD *)(a1 + 104) = a3;
  *(_OWORD *)(a1 + 24) = 0;
  if ( off_74F00[0] )
  {
    do
    {
      v6 = *(_QWORD *)(a2 + 32);
      v7 = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a2 + 40) < (unsigned __int64)(v6 + 1) )
      {
        v16 = qvector_reserve();
        *(_QWORD *)(a2 + 24) = v16;
        v6 = *(_QWORD *)(a2 + 32);
        v7 = v16;
      }
      ++v3;
      v8 = v7 + 24 * v6;
      *(_QWORD *)v8 = 0;
      *(_OWORD *)(v8 + 8) = 0;
      ++*(_QWORD *)(a2 + 32);
      v9 = *(v3 - 1);
      if ( v9 && (v10 = strlen(*(v3 - 1)), (v11 = v10) != 0) )
      {
        v17 = *(void **)v8;
        v18 = v10 + 1;
        if ( *(_QWORD *)(v8 + 16) < v10 + 1 )
        {
          v30 = v10 + 1;
          v27 = qvector_reserve();
          *(_QWORD *)v8 = v27;
          v18 = v30;
          v17 = (void *)v27;
        }
        *(_QWORD *)(v8 + 8) = v18;
        memmove(v17, v9, v11);
        *(_BYTE *)(*(_QWORD *)v8 + v11) = 0;
      }
      else
      {
        *(_QWORD *)(v8 + 8) = 0;
      }
      v12 = *(void **)v8;
      v26 = *(_QWORD *)(a2 + 56);
      v25 = *(_QWORD *)(a2 + 48);
      v13 = *(_QWORD *)(a2 + 64);
      v32 = v12;
      v14 = v26 + 1;
      if ( (unsigned __int64)&v32 < v25 || (unsigned __int64)&v32 >= v25 + 8 * v13 )
      {
        if ( v13 < v14 )
        {
          v15 = qvector_reserve();
          *(_QWORD *)(a2 + 48) = v15;
          v25 = v15;
          v12 = v32;
          v26 = *(_QWORD *)(a2 + 56);
        }
      }
      else if ( v13 < v14 )
      {
        v24 = qvector_reserve();
        *(_QWORD *)(a2 + 48) = v24;
        v25 = v24;
        v26 = *(_QWORD *)(a2 + 56);
      }
      *(_QWORD *)(v25 + 8 * v26) = v12;
      v5 = *(_QWORD *)(a2 + 56) + 1LL;
      *(_QWORD *)(a2 + 56) = v5;
    }
    while ( *v3 );
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 56);
  }
  v19 = *(_QWORD *)(a2 + 48);
  v20 = *(_QWORD *)(a2 + 64);
  v21 = v5 + 1;
  v31 = 0;
  if ( (unsigned __int64)&v31 >= v19 && (unsigned __int64)&v31 < v19 + 8 * v20 )
  {
    if ( v20 < v21 )
    {
      v29 = qvector_reserve();
      *(_QWORD *)(a2 + 48) = v29;
      v5 = *(_QWORD *)(a2 + 56);
      v19 = v29;
    }
    *(_QWORD *)(v19 + 8 * v5) = 0;
  }
  else
  {
    v22 = 0;
    if ( v20 < v21 )
    {
      v28 = qvector_reserve();
      *(_QWORD *)(a2 + 48) = v28;
      v19 = v28;
      v5 = *(_QWORD *)(a2 + 56);
      v22 = v31;
    }
    *(_QWORD *)(v19 + 8 * v5) = v22;
  }
  ++*(_QWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 96) = 1;
  return v33 - __readfsqword(0x28u);
}

