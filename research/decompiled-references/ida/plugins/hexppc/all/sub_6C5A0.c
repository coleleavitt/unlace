__int64 __fastcall sub_6C5A0(_QWORD *a1, int a2)
{
  __int64 v2; // rbp
  int v3; // r14d
  int i; // eax
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, int, int); // r15
  __int64 (__fastcall *v7)(__int64, int); // rax

  v2 = a2;
  v3 = a2;
  for ( i = *(_DWORD *)(a1[38] + 4LL * a2); i == 1; i = *(_DWORD *)(a1[38] + 4LL * v3) )
  {
    v6 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
    v7 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
    if ( v7 == sub_61650 )
    {
      v5 = 0xFFFFFFFFLL;
      if ( a1[7] )
        v5 = (unsigned int)*(_QWORD *)(a1[6] + 24 * v2 + 8) - 1;
      if ( v6 != sub_61690 )
      {
LABEL_10:
        v3 = v6((__int64)a1, v3, v5);
        goto LABEL_7;
      }
    }
    else
    {
      v5 = (unsigned int)v7((__int64)a1, v3) - 1;
      if ( v6 != sub_61690 )
        goto LABEL_10;
    }
    v3 = *(_DWORD *)(*(_QWORD *)(a1[6] + 24 * v2) + 4LL * (int)v5);
LABEL_7:
    v2 = v3;
  }
  if ( i )
    return (unsigned int)-1;
  return (unsigned int)v3;
}

