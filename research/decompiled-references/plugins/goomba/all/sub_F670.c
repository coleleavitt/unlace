__int64 __fastcall sub_F670(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rax
  bool v3; // cl
  char v4; // cl
  __int64 result; // rax

  v1 = a1;
  v2 = (unsigned int)(1103515245 * (1103515245 * dword_4E5B8 + 12345) + 12345);
  v3 = (unsigned int)(a1 - 1) > 1;
  LOBYTE(a1) = (_DWORD)a1 != 4;
  v4 = a1 & v3;
  if ( (unsigned int)(1103515245 * dword_4E5B8 + 12345) <= 0xB3333332 )
  {
    a1 = 3435973837LL;
    dword_4E5B8 = 1103515245 * (1103515245 * dword_4E5B8 + 12345) + 12345;
    result = qword_44A00[(unsigned int)v2 % 5];
    if ( !v4 )
      return ~(-1LL << (8 * (unsigned __int8)v1)) & result;
  }
  else
  {
    dword_4E5B8 = 1103515245 * v2 + 12345;
    result = (unsigned int)(1103515245 * v2 + 12345) | (unsigned __int64)(v2 << 32);
    if ( !v4 )
      return ~(-1LL << (8 * (unsigned __int8)v1)) & result;
  }
  if ( v1 != 8 )
  {
    sub_E560(a1);
    return sub_F730();
  }
  return result;
}
