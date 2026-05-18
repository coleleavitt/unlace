__int64 __fastcall sub_E1770(_QWORD *a1, char a2, unsigned int a3, unsigned int a4, unsigned int a5, int a6)
{
  __int64 result; // rax
  __int64 v8; // rdx

  result = sub_E1710((__int64)a1, a2, a3, a4, a5);
  if ( !*(_BYTE *)(*a1 + 103LL) )
  {
    v8 = a1[17] + 24LL * (int)result;
    *(_BYTE *)(v8 + 1) = -3;
    *(_DWORD *)(v8 + 16) = a6;
  }
  return result;
}
