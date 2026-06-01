_BOOL8 __fastcall sub_70810(__int64 a1, __int64 a2, int a3, double a4)
{
  __int64 (__fastcall *v6)(__int64); // rax
  int v7; // eax
  __int64 v8; // rsi
  int v9; // r15d
  __int64 (__fastcall *v10)(__int64, int); // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64, int, int); // rcx
  _BOOL8 result; // rax
  int v15; // eax

  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
  if ( v6 == sub_65040 )
    v7 = *(_DWORD *)(a2 + 56);
  else
    v7 = v6(a2);
  if ( v7 <= a3 )
  {
    if ( !under_debugger )
      sub_383060(0xCE27u, a4);
LABEL_22:
    BUG();
  }
  v8 = *(_QWORD *)a2;
  while ( 1 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(a2 + 304) + 4LL * a3);
    v10 = *(__int64 (__fastcall **)(__int64, int))(v8 + 96);
    if ( v10 == sub_65090 )
    {
      if ( !*(_QWORD *)(a2 + 56) )
        break;
      v11 = *(_DWORD *)(*(_QWORD *)(a2 + 48) + 24LL * a3 + 8);
    }
    else
    {
      v11 = v10(a2, a3);
    }
    if ( v11 <= 0 )
      break;
    if ( !v9 )
    {
      if ( !under_debugger )
        sub_383060(0xCE28u, a4);
      goto LABEL_22;
    }
    v8 = *(_QWORD *)a2;
    v12 = (unsigned int)(v11 - 1);
    v13 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a2 + 112LL);
    if ( v13 == sub_650D0 )
    {
      a3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 24LL * a3) + 4LL * (int)v12);
    }
    else
    {
      v15 = v13(a2, a3, v12);
      v8 = *(_QWORD *)a2;
      a3 = v15;
    }
  }
  result = 0;
  if ( (unsigned __int64)a3 < *(_QWORD *)(a2 + 288) )
    return (*(_BYTE *)(*(_QWORD *)(a2 + 280) + 4LL * a3) & 8) != 0;
  return result;
}

