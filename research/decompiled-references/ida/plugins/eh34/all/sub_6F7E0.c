__int64 __fastcall sub_6F7E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_BYTE *)(a2 + 1) & 0xFC | 2u;
  *(_BYTE *)(a2 + 1) = *(_BYTE *)(a2 + 1) & 0xFC | 2;
  return result;
}

