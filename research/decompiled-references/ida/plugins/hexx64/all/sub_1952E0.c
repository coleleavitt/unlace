bool __fastcall sub_1952E0(__int64 a1, __int64 a2, double a3)
{
  int v3; // edx
  int v4; // ecx
  __int64 v5; // rax

  v3 = *(_DWORD *)(a1 + 240);
  if ( !v3 )
    v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 64LL) + 1504LL) + 80LL);
  v4 = *(_DWORD *)(a2 + 68);
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
    return (unsigned int)sub_194D60(a2 + 48, v5, 0, v3 - v4, a3) == 1;
  v5 = *(_QWORD *)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 56) )
    return (unsigned int)sub_194D60(a2 + 48, v5, 0, v3 - v4, a3) == 1;
  else
    return (unsigned int)sub_194D60(a2 + 48, v5, -v3, -v4, a3) == 1;
}

