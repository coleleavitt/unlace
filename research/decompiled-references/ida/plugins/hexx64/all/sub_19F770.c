__int64 __fastcall sub_19F770(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  int v3; // edx
  char v4; // dl
  int v5; // eax

  result = *(_BYTE *)(a1 + 52) & 1;
  if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
    return 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  v3 = *(_DWORD *)(v2 + 72);
  if ( v3 != 128
    && ((v3 & 0xFFFFFFF0) == 208 || (v3 & 0xFFFFFFF0) == 64 || !*(_BYTE *)(v2 + 320) && (*(_BYTE *)(v2 + 4) & 0x20) == 0)
    && *(int *)(v2 + 64) > 2
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 528) + 8LL) + 76LL) != 6 )
  {
    sub_32AD90(*(_QWORD *)(a1 + 8));
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    v5 = *(_DWORD *)(a1 + 52);
    if ( v4 )
    {
      v5 |= 1u;
      *(_DWORD *)(a1 + 52) = v5;
    }
    return v5 & 1;
  }
  return result;
}

