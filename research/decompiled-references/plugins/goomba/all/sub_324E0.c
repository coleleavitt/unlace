__int64 __fastcall sub_324E0(int *a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // rdx
  void (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rdi
  int *v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rdx
  void (__fastcall *v14)(__int64, __int64, __int64); // rax
  int v15; // eax
  __int64 v16; // rdi

  v4 = operator new(0x30u);
  hexdsp = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(48, a2, v5);
  v7 = v4 + 32;
  hexdsp(273, v4 + 32, (__int64)(a1 + 8));
  v8 = *a1;
  v9 = *((_QWORD *)a1 + 3);
  *(_QWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 24) = 0;
  *(_DWORD *)v4 = v8;
  *(_QWORD *)(v4 + 8) = a2;
  if ( v9 )
  {
    v7 = v4;
    *(_QWORD *)(v4 + 24) = sub_324E0(v9, v4);
  }
  v10 = *((int **)a1 + 2);
  if ( v10 )
  {
    v11 = v4;
    do
    {
      v12 = v11;
      v11 = operator new(0x30u);
      v14 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(48, v7, v13);
      v7 = v11 + 32;
      v14(273, v11 + 32, (__int64)(v10 + 8));
      v15 = *v10;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *(_DWORD *)v11 = v15;
      *(_QWORD *)(v12 + 16) = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v16 = *((_QWORD *)v10 + 3);
      if ( v16 )
      {
        v7 = v11;
        *(_QWORD *)(v11 + 24) = sub_324E0(v16, v11);
      }
      v10 = *((int **)v10 + 2);
    }
    while ( v10 );
  }
  return v4;
}
