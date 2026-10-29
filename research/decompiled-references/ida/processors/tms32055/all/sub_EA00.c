__int64 __fastcall sub_EA00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 result; // rax

  result = (unsigned __int8)*a5;
  if ( (_BYTE)result == 0xFF
    || (result = a4 + 40 * result, *(_BYTE *)(result + 41) != 1)
    || (result = *(unsigned __int16 *)(result + 46), result != a2) )
  {
    *(_BYTE *)(a3 + 1) = 1;
    *(_BYTE *)(a3 + 5) = 1;
    *(_WORD *)(a3 + 6) = a2;
    *a5 = -1;
    ++*(_WORD *)(a4 + 24);
  }
  return result;
}

