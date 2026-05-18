__int64 __fastcall sub_BCC00(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v3; // r12
  int v4; // eax

  v3 = *(_QWORD *)a1;
  v4 = mysql_stmt_execute(*(_QWORD *)(*(_QWORD *)a1 + 24LL));
  LOBYTE(v2) = v4 == 0;
  if ( v4 )
    sub_BCB40(a2, *(_QWORD *)(v3 + 16), a1);
  return v2;
}
