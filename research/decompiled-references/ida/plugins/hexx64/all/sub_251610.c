__int64 __fastcall sub_251610(_QWORD *a1, int a2, __int64 a3, unsigned __int8 a4, double a5)
{
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(__int64, int); // rax
  int v9; // eax
  int v10; // edi
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, int, int); // rax
  __int64 (__fastcall *v14)(__int64, int, int); // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned int v18; // eax
  int v20; // [rsp+8h] [rbp-40h]

  v7 = *a1;
  v8 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
  if ( v8 == sub_65090 )
  {
    v20 = -1;
    if ( !a1[7] )
      goto LABEL_10;
    v9 = *(_DWORD *)(a1[6] + 24LL * a2 + 8);
  }
  else
  {
    v9 = v8((__int64)a1, a2);
    v7 = *a1;
  }
  v10 = v9 - 1;
  v20 = v9 - 1;
  if ( v9 - 1 > 0 )
  {
    v11 = 0;
    do
    {
      v13 = *(__int64 (__fastcall **)(__int64, int, int))(v7 + 112);
      if ( v13 == sub_650D0 )
        v12 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24LL * a2) + 4 * v11);
      else
        v12 = (unsigned int)v13((__int64)a1, a2, v11);
      ++v11;
      sub_250510((__int64)a1, v12, a3, 0, a5);
      v7 = *a1;
    }
    while ( v11 != v10 );
  }
LABEL_10:
  v14 = *(__int64 (__fastcall **)(__int64, int, int))(v7 + 112);
  v15 = a4;
  if ( v14 == sub_650D0 )
  {
    v16 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24LL * a2) + 4LL * v20);
  }
  else
  {
    v18 = v14((__int64)a1, a2, v20);
    v15 = a4;
    v16 = v18;
  }
  return sub_250510((__int64)a1, v16, a3, v15, a5);
}

