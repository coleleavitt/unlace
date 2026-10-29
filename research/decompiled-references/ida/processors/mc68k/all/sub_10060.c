__int64 __fastcall sub_10060(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 116 )
    return 0;
  if ( (*(_BYTE *)(a1 + 89) & 3) != 0 )
    return 0;
  result = sub_FF80((_QWORD *)a1, v4, nullptr, a1 + 56);
  if ( !(_BYTE)result )
    return 0;
  v2 = *(_QWORD *)(a1 + 376);
  v3 = v4[0];
  *(_DWORD *)v2 |= 0x200u;
  *(_QWORD *)(v2 + 56) = v3;
  **(_DWORD **)(a1 + 376) |= 0x2000u;
  LOBYTE(v2) = *(_BYTE *)(a1 + 88);
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v2 & 0xF;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = ((v2 & 0x10) == 0) + 1;
  return result;
}

