__int64 __fastcall sub_5DB0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  unsigned int v3; // edx
  __int64 v5; // rax
  __int64 v6; // r13
  int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 dtype_size; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v2 = *(_WORD *)(a2 + 24);
  if ( v2 == 7 )
  {
    v12 = *(_QWORD *)(a2 + 48);
    if ( v12 == 2 )
    {
      *(_BYTE *)(a1 + 72) = 1;
    }
    else
    {
      v3 = 2;
      if ( v12 )
        return v3;
      *(_BYTE *)(a1 + 72) = 0;
    }
    return 1;
  }
  v3 = 2;
  if ( v2 == 8 )
  {
    if ( !*(_BYTE *)(a1 + 72) || (unsigned __int16)(*(_WORD *)(a2 + 46) - 8) > 3u )
      return v3;
    v5 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 64) -= 2LL;
    v6 = *(_QWORD *)(a2 + 16);
    v7 = *(unsigned __int16 *)(a2 + 46);
    v8 = v5 + 1;
    v9 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v5 + 1) )
    {
      v13 = qvector_reserve();
      *(_QWORD *)(a1 + 16) = v13;
      v9 = v13;
      v5 = *(_QWORD *)(a1 + 24);
      v8 = v5 + 1;
    }
    *(_QWORD *)(a1 + 24) = v8;
    v10 = v9 + 32 * v5;
    *(_QWORD *)v10 = v6;
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(a1 + 64);
    dtype_size = get_dtype_size();
    *(_DWORD *)(v10 + 24) = v7;
    *(_QWORD *)(v10 + 16) = dtype_size;
    return 1;
  }
  if ( v2 == 1 && *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 12 && *(_BYTE *)(a2 + 81) == 5 )
  {
    v3 = 0;
    *(_QWORD *)(a1 + 64) -= *(_QWORD *)(a2 + 88);
  }
  return v3;
}

