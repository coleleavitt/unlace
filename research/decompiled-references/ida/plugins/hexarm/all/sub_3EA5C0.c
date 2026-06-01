__int64 __fastcall sub_3EA5C0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rbx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx

  qstpncpy();
  v4 = parse_decl();
  if ( !(_BYTE)v4 )
    goto LABEL_8;
  if ( *(_DWORD *)a1 != 56 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8D7u, 0.0);
LABEL_15:
    BUG();
  }
  sub_11CEE0(a1 + 32);
  qstrncpy();
  if ( !(unsigned __int8)parse_decl() )
  {
    if ( !under_debugger )
      sub_3835A0(0xC70Au, 0.0);
    goto LABEL_15;
  }
  v5 = *(_QWORD *)(a1 + 72);
  v4 = sub_335360(v5);
  if ( !(_BYTE)v4 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC707u, 0.0);
    goto LABEL_15;
  }
  v6 = *(_DWORD *)(v5 + 280);
  v7 = v6 | 0x20;
  v8 = v6 | 0x30;
  if ( a4 )
    v7 = v8;
  *(_DWORD *)(v5 + 280) = v7;
LABEL_8:
  clear_tinfo_t();
  return v4;
}

