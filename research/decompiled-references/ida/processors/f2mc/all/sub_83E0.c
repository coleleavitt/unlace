__int64 __fastcall sub_83E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4)
{
  __int64 result; // rax

  result = sub_8360(a1, a2, a3, a4);
  *(_BYTE *)(a3 + 33) = 1;
  *(_BYTE *)(a3 + 35) = a2;
  return result;
}

