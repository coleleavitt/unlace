__int64 __fastcall sub_1BAF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  const char *v5; // r12
  __int64 v6; // r12
  __int64 v7; // rax
  const char *v8; // r14

  if ( *(_DWORD *)(a2 + 8) != 17 )
    return 0;
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 57 )
    return 0;
  v4 = *(_QWORD *)(v3 + 24);
  if ( *(_DWORD *)(v4 + 8) != 68 )
    return 0;
  v5 = *(const char **)(v4 + 24);
  if ( strcmp(v5, "__eh34_catch_type") )
  {
    if ( strcmp(v5, "__eh34_catch_ellipsis") )
      return 0;
  }
  v6 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(v6 + 8) == 57
    && (v7 = *(_QWORD *)(v6 + 24), *(_DWORD *)(v7 + 8) == 68)
    && ((v8 = *(const char **)(v7 + 24), !strcmp(v8, "__eh34_catch_type")) || !strcmp(v8, "__eh34_catch_ellipsis")) )
  {
    sub_1B3E0(a1, v6);
  }
  else if ( !(unsigned __int8)sub_1BAF0(a1, v6) )
  {
    return 0;
  }
  sub_1B3E0(a1, *(_QWORD *)(a2 + 24));
  return 1;
}

