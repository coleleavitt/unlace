__int64 __fastcall sub_FF200(int a1, const char *a2)
{
  __int64 v2; // rax

  v2 = sub_FF150(nullptr, a2);
  if ( v2 )
    return (unsigned int)((*(int (__fastcall **)(__int64, _QWORD))(v2 + 112))(v2, (unsigned int)(1000 * a1)) / 1000);
  else
    return 0;
}
