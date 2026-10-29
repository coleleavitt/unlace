__int64 __fastcall sub_1D60C0(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, double a5)
{
  __int64 v7; // rax
  bool (__fastcall *v8)(__int64); // rdx
  __int64 v10; // r14

  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = 0;
  if ( v7 )
  {
    *(_QWORD *)(a2 + 56) = v7;
    a5 = NAN;
    *(_DWORD *)(a2 + 64) = 16;
    *(_OWORD *)(a2 + 40) = -1;
    create_qflow_chart();
  }
  else
  {
    *(_DWORD *)(a2 + 64) = 16;
    create_multirange_qflow_chart();
  }
  if ( !*(_BYTE *)(a2 + 8) )
  {
    nullsub_116();
    v8 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 128LL);
    if ( v8 == sub_64FE0 )
    {
      if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
        return sub_33E140(*(_QWORD *)(a1 + 1496), 0, a2, a1, a3, a4);
    }
    else if ( v8(a2) )
    {
      return sub_33E140(*(_QWORD *)(a1 + 1496), 0, a2, a1, a3, a4);
    }
    if ( *(int *)(a1 + 312) <= 0 )
    {
      v10 = *(_QWORD *)(a1 + 1496);
      *(_DWORD *)(v10 + 992) = sub_1D3620((__int64 *)a2, a3, a5);
    }
    return sub_33E140(*(_QWORD *)(a1 + 1496), 0, a2, a1, a3, a4);
  }
  return 4294967278LL;
}

