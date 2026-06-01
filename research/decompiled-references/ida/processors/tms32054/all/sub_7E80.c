__int64 __fastcall sub_7E80(__int64 a1, char a2)
{
  char *v2; // rax
  __int64 v3; // rcx

  v2 = sub_7DA0(a2);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v3 + 56LL))(v3, v2, 33);
  if ( under_debugger )
    BUG();
  interr();
  return sub_7ED0(256);
}

