__int64 __fastcall sub_DAEB0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  if ( (*(_BYTE *)(a1 + 24) & 8) != 0 )
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 136LL) + *(_DWORD *)(*(_QWORD *)(a1 + 64) + 116LL));
  return result;
}

