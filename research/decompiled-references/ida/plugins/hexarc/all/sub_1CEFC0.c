__int64 __fastcall sub_1CEFC0(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 v6; // rax
  bool (__fastcall *v7)(__int64); // rdx
  __int64 v9; // r14

  v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = 0;
  if ( v6 )
  {
    *(_QWORD *)(a2 + 56) = v6;
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
    v7 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 128LL);
    if ( v7 == sub_5EA60 )
    {
      if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
        return sub_3368C0(*(_QWORD *)(a1 + 1496), 0, a2, a1, (_DWORD)a3, a4);
    }
    else if ( v7(a2) )
    {
      return sub_3368C0(*(_QWORD *)(a1 + 1496), 0, a2, a1, (_DWORD)a3, a4);
    }
    if ( *(int *)(a1 + 312) <= 0 )
    {
      v9 = *(_QWORD *)(a1 + 1496);
      *(_DWORD *)(v9 + 992) = sub_1CC520((__int64 *)a2, a3);
    }
    return sub_3368C0(*(_QWORD *)(a1 + 1496), 0, a2, a1, (_DWORD)a3, a4);
  }
  return 4294967278LL;
}

