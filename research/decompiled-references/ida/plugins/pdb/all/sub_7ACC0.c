__int64 *__fastcall sub_7ACC0(__int64 *a1, __int64 *a2)
{
  __int64 *result; // rax
  int v3; // edx

  result = a2;
  do
  {
    if ( *(_DWORD *)result )
    {
      sub_37FD0(a1, (__int64)"%08X", *(_DWORD *)a2);
      sub_47240(a1, (__int64)"%04X%04X", *((unsigned __int16 *)a2 + 2), *((unsigned __int16 *)a2 + 3));
      sub_47240(
        a1,
        (__int64)"%02X%02X%02X%02X%02X%02X%02X%02X",
        *((unsigned __int8 *)a2 + 8),
        *((unsigned __int8 *)a2 + 9),
        *((unsigned __int8 *)a2 + 10),
        *((unsigned __int8 *)a2 + 11),
        *((unsigned __int8 *)a2 + 12),
        *((unsigned __int8 *)a2 + 13),
        *((unsigned __int8 *)a2 + 14),
        *((unsigned __int8 *)a2 + 15));
      return sub_47240(a1, (__int64)"%X", *((_DWORD *)a2 + 5));
    }
    result = (__int64 *)((char *)result + 4);
  }
  while ( a2 + 2 != result );
  v3 = *((_DWORD *)a2 + 4);
  if ( v3 )
    return sub_37FD0(a1, (__int64)"%08x%x", v3, *((_DWORD *)a2 + 5));
  return result;
}

