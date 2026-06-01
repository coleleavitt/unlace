__int64 __fastcall sub_1967A0(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v3)(__int64, __int64, double); // rdx
  int v4; // esi
  unsigned int v5; // ecx
  int v6; // edx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(__int64 (__fastcall **)(__int64, __int64, double))(*(_QWORD *)v2 + 64LL);
  if ( v3 != sub_195380 )
    return ((__int64 (__fastcall *)(_QWORD, __int64))v3)(*(_QWORD *)(a1 + 16), a1 + 144);
  if ( (*(_BYTE *)(v2 + 288) & 1) == 0 )
    sub_195360(a2);
  v4 = *(_DWORD *)(v2 + 8);
  v5 = 0;
  if ( v4 != 1 )
  {
    v6 = *(_DWORD *)(a1 + 208);
    if ( v6 >= *(_DWORD *)(v2 + 48) )
    {
      v5 = *(_DWORD *)(a1 + 184);
      if ( (int)v5 >= v6 )
        v6 = *(_DWORD *)(a1 + 184);
      if ( v4 == 4 )
        v5 = v6;
      LOBYTE(v5) = v5 != *(_DWORD *)(v2 + 24);
    }
  }
  return v5;
}

