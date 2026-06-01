__int64 __fastcall sub_8700(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned __int8 v4; // r9
  __int64 v5; // r10

  result = sub_8590(a1, a2, a3);
  *(_BYTE *)(v5 + 41) = 1;
  *(_BYTE *)(v5 + 45) = 0;
  *(_WORD *)(v5 + 46) = (v4 >> 4) + 20;
  return result;
}
