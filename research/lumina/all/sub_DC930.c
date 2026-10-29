__int64 __fastcall sub_DC930(__int64 *a1, __int64 *a2, void (__fastcall *a3)(__int64, __int64), __int64 a4)
{
  __int64 *v6; // rax

  v6 = sub_DBFF0(*a1, 24);
  if ( v6 )
  {
    *v6 = *a2;
    *a2 = (__int64)v6;
    v6[1] = a4;
    v6[2] = (__int64)a3;
    return a4;
  }
  else
  {
    a3(*a1, a4);
    return 0;
  }
}
