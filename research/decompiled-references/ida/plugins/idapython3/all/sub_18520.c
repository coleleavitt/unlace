__int64 __fastcall sub_18520(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  unsigned int v6; // ebx

  v6 = (*(__int64 (**)(void))(qword_24798 + 536))();
  LODWORD(a4) = sub_17D00(a1, a2, a3, a4, (__int64 *)"IDAPython_ExecScript", 0, 0);
  (*(void (__fastcall **)(_QWORD, __int64 *))(qword_24798 + 552))(v6, a2);
  return (unsigned int)a4;
}

