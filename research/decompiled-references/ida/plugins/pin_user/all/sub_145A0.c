__int64 __fastcall sub_145A0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // rax
  unsigned __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = *(_QWORD *)(a1 + 24);
  v13[0] = a3;
  v7 = v6;
  if ( a3 != -1 )
  {
    *(_QWORD *)sub_14340((char **)(a1 + 40), v13) = v6;
    v7 = *(_QWORD *)(a1 + 24);
  }
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v7 + 1;
  if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v7 + 1) )
  {
    v12 = qvector_reserve();
    v7 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 16) = v12;
    v8 = v12;
    v9 = v7 + 1;
  }
  *(_QWORD *)(a1 + 24) = v9;
  v10 = v8 + 40 * v7;
  *(_QWORD *)(v10 + 8) = a3;
  *(_DWORD *)v10 = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  sub_12580(
    *(__int64 **)(a1 + 8),
    *(const void **)a2,
    *(_DWORD *)(a2 + 8),
    *(_BYTE *)(a2 + 13),
    *(_BYTE *)(a2 + 12),
    *(_QWORD *)(a2 + 16),
    *(_QWORD *)(a2 + 24));
  return v6;
}

