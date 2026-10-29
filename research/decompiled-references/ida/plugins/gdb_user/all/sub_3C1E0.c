__int64 __fastcall sub_3C1E0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v6; // rax

  sub_38150((__int64)a1);
  if ( (unsigned __int8)qgetenv() && (v6 = qfopen(), (a1[30] = v6) == 0) )
  {
    __errno_location();
    winerr();
    sub_F710(a4);
    return 0;
  }
  else
  {
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64 *))(*a1 + 16LL))(a1, a2, a3, a4);
  }
}

