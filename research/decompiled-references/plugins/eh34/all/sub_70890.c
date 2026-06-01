__int64 __fastcall sub_70890(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  size_t v8; // r15
  size_t v9; // r13
  size_t v10; // r12
  bool v11; // zf
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  void *v17; // rax
  const void *v18; // rsi
  void *v19; // rax
  const void *v20; // rsi
  void *v21; // rax
  const void *v22; // rsi

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v8 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)a1 = off_8CA90;
  if ( v8 )
  {
    v17 = (void *)qalloc_or_throw(v8);
    *(_QWORD *)(a1 + 32) = v8;
    v18 = *(const void **)a3;
    *(_QWORD *)(a1 + 16) = v17;
    memcpy(v17, v18, v8);
    *(_QWORD *)(a1 + 24) = v8;
  }
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v9 = *(_QWORD *)(a4 + 8);
  if ( v9 )
  {
    v21 = (void *)qalloc_or_throw(*(_QWORD *)(a4 + 8));
    *(_QWORD *)(a1 + 40) = v21;
    v22 = *(const void **)a4;
    *(_QWORD *)(a1 + 56) = v9;
    memcpy(v21, v22, v9);
    *(_QWORD *)(a1 + 48) = v9;
  }
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  v10 = *(_QWORD *)(a5 + 8);
  if ( v10 )
  {
    v19 = (void *)qalloc_or_throw(*(_QWORD *)(a5 + 8));
    *(_QWORD *)(a1 + 64) = v19;
    v20 = *(const void **)a5;
    *(_QWORD *)(a1 + 80) = v10;
    memcpy(v19, v20, v10);
    *(_QWORD *)(a1 + 72) = v10;
  }
  v11 = *(_QWORD *)(a1 + 24) == 0;
  *(_DWORD *)(a1 + 88) = 64;
  v12 = s1;
  if ( !v11 )
    v12 = *(const char **)(a1 + 16);
  v11 = *(_QWORD *)(a1 + 48) == 0;
  *(_QWORD *)(a1 + 96) = v12;
  v13 = s1;
  if ( !v11 )
    v13 = *(const char **)(a1 + 40);
  *(_QWORD *)(a1 + 104) = v13;
  v14 = s1;
  *(_QWORD *)(a1 + 112) = a1;
  *(_QWORD *)(a1 + 120) = a2;
  if ( v10 )
    v14 = *(const char **)(a1 + 64);
  *(_QWORD *)(a1 + 128) = v14;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0x4FFFFFFFFLL;
  *(_BYTE *)(a1 + 152) = 0;
  return 0x4FFFFFFFFLL;
}
