__int64 __fastcall sub_339000(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 840);
  *(_DWORD *)(a1 + 604) ^= a2;
  *(_BYTE *)(result + 286) |= 1u;
  return result;
}

