__int64 __fastcall sub_30CD90(_QWORD *a1, int a2)
{
  int v2; // r14d
  __int64 result; // rax
  __int64 (__fastcall *v5)(__int64, int); // rax
  int v6; // ebp
  int v7; // ebp
  __int64 v8; // r13
  __int64 i; // r12
  __int64 (__fastcall *v10)(__int64, int, int); // rax
  __int64 v11; // rsi

  v2 = *(_DWORD *)(a1[38] + 4LL * a2);
  result = (unsigned int)a2;
  if ( !v2 )
    return result;
  v5 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
  if ( v5 == sub_60D10 )
  {
    if ( !a1[7] )
      return 0xFFFFFFFFLL;
    v6 = *(_DWORD *)(a1[6] + 24LL * a2 + 8);
  }
  else
  {
    v6 = v5((__int64)a1, a2);
  }
  v7 = v6 - 1;
  if ( v7 < 0 )
    return 0xFFFFFFFFLL;
  v8 = 24LL * a2;
  for ( i = 4LL * v7; ; i -= 4 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
    v11 = v10 == sub_60D50 ? *(unsigned int *)(*(_QWORD *)(a1[6] + v8) + i) : (unsigned int)v10((__int64)a1, a2, v7);
    result = sub_30CD90(a1, v11);
    if ( (_DWORD)result != -1 && (v2 != 5 || *(_DWORD *)(*(_QWORD *)(a1[22] + 8LL) + 64LL) > (int)result) )
      break;
    if ( --v7 == -1 )
      return 0xFFFFFFFFLL;
  }
  return result;
}

