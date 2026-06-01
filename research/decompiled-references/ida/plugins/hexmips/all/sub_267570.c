__int64 __fastcall sub_267570(__int64 a1, char a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned __int8 v4; // bp
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  if ( a2 )
  {
    v2 = sub_250760(*(_QWORD *)(a1 + 24));
    sub_250760(v3);
  }
  v4 = (get_tinfo_property() & 0xF) - 10;
  if ( *(_DWORD *)(a1 + 8) == 35 && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 1u )
  {
    if ( v4 > 1u || *(_DWORD *)(v2 + 8) != 52 )
      return *(_QWORD *)(a1 + 32);
  }
  else
  {
    result = 0;
    if ( v4 > 1u )
      return result;
  }
  return *(_QWORD *)(a1 + 24);
}

