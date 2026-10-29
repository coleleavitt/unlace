void __fastcall sub_34140(__int64 a1, int a2, char a3)
{
  __int64 v4; // r8
  __int64 v5; // r15
  int v6; // r13d
  __int64 v7; // rdi
  int v8; // eax
  __int64 (__fastcall *v9)(__int64, int); // rsi
  __int64 (__fastcall *v10)(__int64, int); // rax
  int v11; // r9d
  __int64 v12; // rbx
  __int64 v13; // r12
  int v14; // edx
  void (__fastcall *hexdsp)(__int64, __int64 (__fastcall *)(__int64, int), _QWORD); // rax
  __int64 (__fastcall *v16)(__int64, int, int); // rax
  unsigned int v17; // [rsp+10h] [rbp-48h]
  __int64 (__fastcall *v19)(__int64, int); // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 560) + ((__int64)a2 << 6);
  v5 = v4;
  *(_DWORD *)(v4 + 20) = 0;
  if ( a3 )
    *(_QWORD *)(v4 + 32) = 0;
  v6 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 <= *(_DWORD *)(v4 + 4) )
  {
    v7 = v4 + 24;
    v8 = 0;
    v19 = (__int64 (__fastcall *)(__int64, int))(v4 + 24);
    while ( 1 )
    {
      *(_DWORD *)(v5 + 20) = *(_DWORD *)(*(_QWORD *)(a1 + 608) + 4LL * v6) + v8;
      if ( !a3 )
        goto LABEL_5;
      v9 = sub_BA40;
      v10 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
      if ( v10 == sub_BA40 )
      {
        if ( !*(_QWORD *)(a1 + 56) )
          goto LABEL_5;
        v11 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 24LL * v6 + 8);
      }
      else
      {
        v9 = (__int64 (__fastcall *)(__int64, int))(unsigned int)v6;
        v7 = a1;
        v11 = v10(a1, v6);
      }
      if ( v11 > 0 )
      {
        v12 = 0;
        v13 = v11;
        do
        {
          v16 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 112LL);
          if ( v16 == sub_BA80 )
          {
            v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL * v6) + 4 * v12);
          }
          else
          {
            v9 = (__int64 (__fastcall *)(__int64, int))(unsigned int)v6;
            v7 = a1;
            v14 = v16(a1, v6, v12);
          }
          if ( v14 > 0 )
          {
            v17 = v14;
            if ( v14 <= *(_DWORD *)(a1 + 204) )
            {
              hexdsp = (void (__fastcall *)(__int64, __int64 (__fastcall *)(__int64, int), _QWORD))get_hexdsp(v7, v9);
              v9 = v19;
              v7 = 205;
              hexdsp(205, v19, v17);
            }
          }
          ++v12;
        }
        while ( v12 != v13 );
      }
LABEL_5:
      if ( *(_DWORD *)(v5 + 4) < ++v6 )
        return;
      v8 = *(_DWORD *)(v5 + 20);
    }
  }
}

