__int64 __fastcall sub_E54F0(__int64 *a1, __int64 a2)
{
  if ( *(_BYTE *)a2 != 0xA8 || *(_QWORD *)(a2 + 56) )
    return 0;
  sub_DBD10(*a1, "misuse of aggregate: %s()", *(const char **)(a2 + 8));
  return 0;
}
