_QWORD *__fastcall sub_19E8E0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, double a6)
{
  __int64 v6; // r10
  __int64 v9; // r8

  v6 = *(_QWORD *)(a1 + 64);
  v9 = *(_QWORD *)(a1 + 104) + *(_DWORD *)(a1 + 112) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  if ( a3 )
    v9 = *(_QWORD *)(v6 + 40LL * (a3 - 1) + 24);
  return sub_19E700(
           a1,
           a2,
           *(_QWORD *)(a1 + 104) + *(_DWORD *)(a1 + 112) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL),
           *(_QWORD *)(v6 + 40LL * a3 + 24),
           v9,
           a4,
           a6,
           a5);
}

