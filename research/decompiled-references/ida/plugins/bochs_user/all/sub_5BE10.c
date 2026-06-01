__int64 __fastcall sub_5BE10(__int64 a1, const char *a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( !(unsigned int)sub_58D60(a1) && (*(_DWORD *)debug & 0x10000) != 0 )
    sub_E960((__int64)"load_module_scripting: loaded IDS info for module <%s>\n", a2);
  v4 = sub_5BBC0(a1, (__int64)a2, a3);
  v5 = v4;
  if ( v4 == 36 )
  {
    if ( (*(_DWORD *)debug & 0x10000) != 0 )
      sub_E960((__int64)"load_module_scripting: Failed to load API script for module <%s>\n", a2);
    return v5;
  }
  if ( v4 )
    return v4 != 28;
  if ( (*(_DWORD *)debug & 0x10000) == 0 )
    return v5;
  sub_E960((__int64)"load_module_scripting: loaded API script for module <%s>\n", a2);
  return v5;
}

