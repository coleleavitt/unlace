__int64 __fastcall sub_BD60(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax

  v3 = 65472;
  if ( *(_DWORD *)(a1 + 600) == 2 )
    v3 = 16777152;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 2;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = a3 + v3;
  return 1;
}

