__int64 __fastcall sub_B920(__int64 a1, __int64 a2, int a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 5;
  if ( *(_DWORD *)(a1 + 600) == 1 )
    a3 = (unsigned __int8)a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = a3;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

