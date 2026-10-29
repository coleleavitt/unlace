__int64 __fastcall sub_118CA0(_BYTE *a1, unsigned int a2, int a3, char *a4)
{
  __int64 result; // rax

  if ( !*a1 )
    return sub_1159D0((__int64)a1, a2, a3, a4, 0);
  if ( *a1 == 1 )
    return 4;
  result = sub_1171C0((__int64)a1);
  if ( !(_DWORD)result )
    return sub_1159D0((__int64)a1, a2, a3, a4, 0);
  return result;
}
