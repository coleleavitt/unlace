__int64 __fastcall sub_130D0(__int64 a1)
{
  bool (__fastcall *v2)(__int64); // rax
  int v3; // eax
  int v4; // edx
  __int64 v5; // rdi
  __int64 result; // rax
  int v7; // edx

  v2 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL);
  if ( v2 == sub_12770 )
  {
    v3 = *(_DWORD *)(a1 + 96);
    if ( (v3 & 0x1F) != 0 )
      goto LABEL_3;
    return 0;
  }
  if ( !((unsigned __int8 (*)(void))v2)() )
    return 0;
  v3 = *(_DWORD *)(a1 + 96);
LABEL_3:
  v4 = v3 & 1;
  if ( (v3 & 2) != 0 )
    v4 |= 2u;
  *(_DWORD *)(a1 + 112) = v4;
  if ( (v3 & 4) != 0 )
    *(_DWORD *)(a1 + 112) |= 8u;
  if ( (v3 & 0x10) != 0 )
    *(_DWORD *)(a1 + 112) |= 0x10u;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 1072LL);
  if ( !v5 )
    return 0;
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 80LL))(v5, a1 + 112);
  if ( !(_BYTE)result )
    return 0;
  v7 = *(_DWORD *)(a1 + 96);
  if ( (v7 & 1) != 0 && (*(_BYTE *)(a1 + 112) & 1) == 0 )
    return 0;
  if ( (v7 & 2) != 0 && (*(_BYTE *)(a1 + 112) & 2) == 0
    || (v7 & 0xC) != 0 && (v7 & 4) != 0 && (*(_BYTE *)(a1 + 112) & 8) == 0 )
  {
    return 0;
  }
  if ( (v7 & 0x10) != 0 )
    return (*(_BYTE *)(a1 + 112) & 0x10) != 0;
  return result;
}

