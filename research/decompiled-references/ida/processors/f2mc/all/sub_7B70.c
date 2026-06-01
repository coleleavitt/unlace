__int64 __fastcall sub_7B70(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 result; // rax

  *((_WORD *)a3 + 3) = 0;
  *(_BYTE *)(a4 + 32) = 26;
  result = *a3;
  *(_BYTE *)(a4 + 28) = result;
  a3[1] = 3;
  ++a3[32];
  a3[5] = 1;
  return result;
}

