__int64 __fastcall sub_131E0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rdx

  result = 0;
  if ( *(_WORD *)(a1 + 40) == 69 && *(_BYTE *)(a1 + 57) == 2 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
    v2 = *(_QWORD *)(a1 + 376);
    v3 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)v2 |= 0x200u;
    *(_QWORD *)(v2 + 56) = v3;
    **(_DWORD **)(a1 + 376) |= 0x2000u;
    return 1;
  }
  return result;
}

