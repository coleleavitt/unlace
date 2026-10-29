__int64 __fastcall sub_8070(__int64 a1, __int64 a2, const char *a3)
{
  char *v4; // rax
  unsigned __int64 v5; // rax

  if ( !byte_379E2 || (v4 = strrchr(a3, 91)) == nullptr )
  {
    v4 = strrchr(a3, 46);
    if ( !v4 )
      v4 = (char *)&a3[strlen(a3)];
  }
  v5 = v4 - a3;
  if ( v5 > 0x3FF )
    v5 = 1023;
  *(_QWORD *)(a1 + 1064) = v5;
  qstrncpy();
  netnode_check();
  return 0;
}

