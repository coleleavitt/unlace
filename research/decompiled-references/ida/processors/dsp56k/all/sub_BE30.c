__int64 __fastcall sub_BE30(__int64 a1, __int64 a2, int a3)
{
  int v3; // ecx

  v3 = 65408;
  if ( *(_DWORD *)(a1 + 600) == 2 )
    v3 = 16777088;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 2;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = v3 + a3;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

