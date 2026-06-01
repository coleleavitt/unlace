__int64 __fastcall sub_3783C0(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbp
  __int64 *v9; // r14
  __int64 v10; // rax
  const void *v11; // r15
  size_t v12; // rax
  size_t v13; // r13
  __int64 v14; // rsi
  void *v16; // rdi
  size_t v17; // rdx
  __int64 *v18; // r13
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // r8
  unsigned __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-40h]
  size_t v26; // [rsp+8h] [rbp-40h]

  sub_6B2B0(*a2);
  v8 = a5 << 6;
  sub_6B2B0(*a2 + 3);
  v9 = *a2;
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 192) + v8 + 56) & 3;
  v11 = *(&off_4E0AE0 + v10);
  if ( v11 && (v12 = strlen((const char *)*(&off_4E0AE0 + v10)), (v13 = v12) != 0) )
  {
    v16 = (void *)v9[6];
    v17 = v12 + 1;
    if ( v9[8] < v12 + 1 )
    {
      v26 = v12 + 1;
      v24 = qvector_reserve();
      v17 = v26;
      v9[6] = v24;
      v16 = (void *)v24;
    }
    v9[7] = v17;
    memmove(v16, v11, v13);
    *(_BYTE *)(v9[6] + v13) = 0;
  }
  else
  {
    v9[7] = 0;
  }
  v14 = v8 + *(_QWORD *)(a1 + 192);
  if ( *(_QWORD *)(v14 + 40) )
  {
    v18 = *a2;
    v19 = (*a2)[7];
    if ( v19 )
    {
      v22 = v19 + 1;
      v21 = (*a2)[7];
      v20 = v18[6];
      --v19;
      if ( v18[8] >= v22 )
        goto LABEL_11;
    }
    else
    {
      v20 = v18[6];
      v21 = 1;
      v22 = 2;
      if ( (unsigned __int64)v18[8] >= 2 )
        goto LABEL_11;
    }
    v25 = v21;
    v23 = qvector_reserve();
    v21 = v25;
    v18[6] = v23;
    v20 = v23;
LABEL_11:
    v18[7] = v22;
    *(_BYTE *)(v20 + v19) = 47;
    *(_BYTE *)(v18[6] + v21) = 0;
    v14 = v8 + *(_QWORD *)(a1 + 192);
    if ( v14 + 8 != *(_QWORD *)(v14 + 24) )
    {
      do
        sub_FA510(*a2 + 6);
      while ( v14 + 8 != std::_Rb_tree_increment() );
      v14 = v8 + *(_QWORD *)(a1 + 192);
    }
  }
  return sub_32BB20(*a2 + 9, v14 + 48, nullptr);
}

