char __fastcall sub_41260(__int64 a1, const char *a2)
{
  size_t v2; // rax

  v2 = strlen(a2);
  if ( !v2 )
    return 0;
  if ( a2[v2 - 1] == 10 )
    return v2 == write(*(_DWORD *)(a1 + 24), a2, v2);
  if ( under_debugger )
    BUG();
  interr();
  return sub_412D0(30130, a2);
}

