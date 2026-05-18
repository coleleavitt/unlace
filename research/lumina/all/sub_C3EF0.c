__int64 __fastcall sub_C3EF0(__int64 *a1, char a2)
{
  __int64 result; // rax

  result = *a1;
  *(_BYTE *)(result + 23) = a2;
  *(_WORD *)(result + 20) |= 0x800u;
  return result;
}
