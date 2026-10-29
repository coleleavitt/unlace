void __fastcall sub_2F860(__int64 a1, __int64 a2)
{
  size_t v3; // r12
  size_t v4; // r12
  void *v5; // rax
  const void *v6; // rsi
  void *v7; // rax
  const void *v8; // rsi

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v5 = (void *)sub_198760(*(_QWORD *)(a2 + 8));
    *(_QWORD *)(a1 + 16) = v3;
    v6 = *(const void **)a2;
    *(_QWORD *)a1 = v5;
    memcpy(v5, v6, v3);
    *(_QWORD *)(a1 + 8) = v3;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v4 = *(_QWORD *)(a2 + 32);
  if ( v4 )
  {
    v7 = (void *)sub_198760(*(_QWORD *)(a2 + 32));
    *(_QWORD *)(a1 + 40) = v4;
    v8 = *(const void **)(a2 + 24);
    *(_QWORD *)(a1 + 24) = v7;
    memcpy(v7, v8, v4);
    *(_QWORD *)(a1 + 32) = v4;
  }
}
