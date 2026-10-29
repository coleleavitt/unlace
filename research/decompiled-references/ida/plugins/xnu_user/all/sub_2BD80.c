unsigned __int64 __fastcall sub_2BD80(__int64 a1, __int64 a2)
{
  __int64 i; // rsi
  unsigned int v3; // eax
  unsigned __int64 result; // rax

  for ( i = a1 + 16 * a2; a1 != i; *(_QWORD *)(a1 - 8) = result )
  {
    v3 = *(_DWORD *)a1;
    *(_WORD *)(a1 + 6) = __ROL2__(*(_WORD *)(a1 + 6), 8);
    a1 += 16;
    *(_DWORD *)(a1 - 16) = _byteswap_ulong(v3);
    result = _byteswap_uint64(*(_QWORD *)(a1 - 8));
  }
  return result;
}

