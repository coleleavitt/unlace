__int64 __fastcall sub_CEFE0(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 31);
  if ( (unsigned __int8)result <= 7u )
  {
    *(_BYTE *)(a1 + 31) = result + 1;
    *(_DWORD *)(a1 + 4 * result + 216) = a2;
  }
  return result;
}
