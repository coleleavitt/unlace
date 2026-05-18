__int64 __fastcall sub_BC8B0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rbp
  char v4; // al

  v3 = *a1;
  v4 = mysql_commit(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 16LL));
  LOBYTE(v2) = v4 == 0;
  if ( a2 && v4 )
    sub_BC630(a2, *(_QWORD *)(v3 + 16));
  *(_DWORD *)(v3 + 24) = 1;
  return v2;
}
