__int64 __fastcall sub_D2A40(__int64 a1, __int64 a2)
{
  int v2; // ecx

  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
  return (unsigned int)(((v2 + *(_DWORD *)(a2 + 88) - 1) & -v2) / v2);
}

