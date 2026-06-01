__int64 __fastcall sub_11E950(__int64 *a1, _DWORD *a2)
{
  __int64 result; // rax

  *a1 = 0;
  a1[1] = 0;
  if ( (unsigned int)(*a2 - 12) > 1
    || !(unsigned __int8)sub_11E7B0(a1, (__int64)(a2 + 8), 0)
    || (result = sub_11E7B0(a1, (__int64)(a2 + 12), *a2 == 13), !(_BYTE)result)
    || !a1[1] )
  {
    a1[1] = 0;
    return 0;
  }
  return result;
}

