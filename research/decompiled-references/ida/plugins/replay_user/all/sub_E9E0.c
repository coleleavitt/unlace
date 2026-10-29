unsigned __int64 __fastcall sub_E9E0(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v4; // r13
  __int64 v5; // rbp
  const void *v6; // r14
  size_t v7; // rax
  size_t v8; // r15
  __int64 v9; // rax
  void *v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  void *v17; // rdi
  size_t v18; // rdx
  __int64 v19; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  size_t v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( *a2 )
  {
    v4 = a2;
    do
    {
      v13 = *(_QWORD *)(a1 + 32);
      v14 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v13 + 1) )
      {
        v15 = qvector_reserve();
        v13 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 24) = v15;
        v14 = v15;
      }
      ++v4;
      v5 = v14 + 24 * v13;
      *(_QWORD *)v5 = 0;
      *(_OWORD *)(v5 + 8) = 0;
      ++*(_QWORD *)(a1 + 32);
      v6 = (const void *)*(v4 - 1);
      if ( v6 && (v7 = strlen((const char *)*(v4 - 1)), (v8 = v7) != 0) )
      {
        v17 = *(void **)v5;
        v18 = v7 + 1;
        if ( *(_QWORD *)(v5 + 16) < v7 + 1 )
        {
          v24 = v7 + 1;
          v21 = qvector_reserve();
          v18 = v24;
          *(_QWORD *)v5 = v21;
          v17 = (void *)v21;
        }
        *(_QWORD *)(v5 + 8) = v18;
        memmove(v17, v6, v8);
        *(_BYTE *)(*(_QWORD *)v5 + v8) = 0;
      }
      else
      {
        *(_QWORD *)(v5 + 8) = 0;
      }
      v9 = *(_QWORD *)(a1 + 56);
      v10 = *(void **)v5;
      v11 = *(_QWORD *)(a1 + 48);
      if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v9 + 1) )
      {
        v16 = qvector_reserve();
        *(_QWORD *)(a1 + 48) = v16;
        v11 = v16;
        v9 = *(_QWORD *)(a1 + 56);
      }
      *(_QWORD *)(v11 + 8 * v9) = v10;
      v12 = *(_QWORD *)(a1 + 56) + 1LL;
      *(_QWORD *)(a1 + 56) = v12;
    }
    while ( *v4 );
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 56);
  }
  v19 = *(_QWORD *)(a1 + 48);
  if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v12 + 1) )
  {
    v22 = qvector_reserve();
    v12 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 48) = v22;
    v19 = v22;
  }
  *(_QWORD *)(v19 + 8 * v12) = 0;
  ++*(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 96) = a3;
  return v25 - __readfsqword(0x28u);
}

