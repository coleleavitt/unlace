__int64 __fastcall sub_324B80(__int64 a1, unsigned __int64 a2)
{
  char v2; // dl
  __int64 result; // rax

  v2 = *(_BYTE *)(a1 + 4);
  *(_QWORD *)(a1 + 32) = a2;
  result = a1;
  if ( v2 > 1 )
    a2 = a2 & ~(15LL << (4 * v2 + 24)) & 0xFFFFFFFFF0FFFFFFLL | (((15LL << (4 * v2 + 24)) & a2) >> (4 * v2));
  *(_DWORD *)a1 = a2;
  return result;
}

