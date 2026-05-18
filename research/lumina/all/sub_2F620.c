__int64 __fastcall sub_2F620(__int64 a1, __int64 a2)
{
  size_t v3; // r12
  size_t v4; // r12
  size_t v5; // r12
  size_t v6; // r12
  __int64 result; // rax
  void *v8; // rax
  const void *v9; // rsi
  void *v10; // rax
  const void *v11; // rsi
  void *v12; // rax
  const void *v13; // rsi
  void *v14; // rax
  const void *v15; // rsi

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v8 = (void *)sub_198760(*(_QWORD *)(a2 + 8));
    *(_QWORD *)(a1 + 16) = v3;
    v9 = *(const void **)a2;
    *(_QWORD *)a1 = v8;
    memcpy(v8, v9, v3);
    *(_QWORD *)(a1 + 8) = v3;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v4 = *(_QWORD *)(a2 + 32);
  if ( v4 )
  {
    v14 = (void *)sub_198760(*(_QWORD *)(a2 + 32));
    *(_QWORD *)(a1 + 24) = v14;
    v15 = *(const void **)(a2 + 24);
    *(_QWORD *)(a1 + 40) = v4;
    memcpy(v14, v15, v4);
    *(_QWORD *)(a1 + 32) = v4;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v5 = *(_QWORD *)(a2 + 56);
  if ( v5 )
  {
    v12 = (void *)sub_198760(*(_QWORD *)(a2 + 56));
    *(_QWORD *)(a1 + 48) = v12;
    v13 = *(const void **)(a2 + 48);
    *(_QWORD *)(a1 + 64) = v5;
    memcpy(v12, v13, v5);
    *(_QWORD *)(a1 + 56) = v5;
  }
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  v6 = *(_QWORD *)(a2 + 80);
  if ( v6 )
  {
    v10 = (void *)sub_198760(*(_QWORD *)(a2 + 80));
    *(_QWORD *)(a1 + 72) = v10;
    v11 = *(const void **)(a2 + 72);
    *(_QWORD *)(a1 + 88) = v6;
    memcpy(v10, v11, v6);
    *(_QWORD *)(a1 + 80) = v6;
  }
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  result = *(unsigned int *)(a2 + 112);
  *(_DWORD *)(a1 + 112) = result;
  return result;
}
