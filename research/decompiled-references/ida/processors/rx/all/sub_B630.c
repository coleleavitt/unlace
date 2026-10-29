__int64 __fastcall sub_B630(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rdx

  result = 0;
  if ( *(_WORD *)(a1 + 40) == 5 && *(_BYTE *)(a1 + 57) == 1 && *(_BYTE *)(a1 + 49) == 3 )
  {
    **(_DWORD **)(a1 + 376) |= 0x2000u;
    v2 = *(_QWORD *)(a1 + 376);
    v3 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)v2 |= 0x200u;
    *(_QWORD *)(v2 + 56) = v3;
    LOWORD(v3) = *(_WORD *)(a1 + 62);
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v3;
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 1;
    return 1;
  }
  return result;
}

