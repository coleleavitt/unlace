_BOOL8 __fastcall sub_6CDD0(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall *v5)(__int64); // rax
  int v6; // eax
  __int64 v7; // rsi
  int v8; // r15d
  __int64 (__fastcall *v9)(__int64, int); // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, int, int); // rcx
  _BOOL8 result; // rax
  int v14; // eax

  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
  if ( v5 == sub_61600 )
    v6 = *(_DWORD *)(a2 + 56);
  else
    v6 = v5(a2);
  if ( v6 <= a3 )
  {
    if ( !under_debugger )
      sub_37EEE0(52775);
LABEL_22:
    BUG();
  }
  v7 = *(_QWORD *)a2;
  while ( 1 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(a2 + 304) + 4LL * a3);
    v9 = *(__int64 (__fastcall **)(__int64, int))(v7 + 96);
    if ( v9 == sub_61650 )
    {
      if ( !*(_QWORD *)(a2 + 56) )
        break;
      v10 = *(_DWORD *)(*(_QWORD *)(a2 + 48) + 24LL * a3 + 8);
    }
    else
    {
      v10 = v9(a2, a3);
    }
    if ( v10 <= 0 )
      break;
    if ( !v8 )
    {
      if ( !under_debugger )
        sub_37EEE0(52776);
      goto LABEL_22;
    }
    v7 = *(_QWORD *)a2;
    v11 = (unsigned int)(v10 - 1);
    v12 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a2 + 112LL);
    if ( v12 == sub_61690 )
    {
      a3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 24LL * a3) + 4LL * (int)v11);
    }
    else
    {
      v14 = v12(a2, a3, v11);
      v7 = *(_QWORD *)a2;
      a3 = v14;
    }
  }
  result = 0;
  if ( (unsigned __int64)a3 < *(_QWORD *)(a2 + 288) )
    return (*(_BYTE *)(*(_QWORD *)(a2 + 280) + 4LL * a3) & 8) != 0;
  return result;
}

