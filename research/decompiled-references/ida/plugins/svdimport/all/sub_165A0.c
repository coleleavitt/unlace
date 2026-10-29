__int64 __fastcall sub_165A0(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  unsigned int v5; // r13d

  if ( !(unsigned __int8)qfileexist() || (v4 = sub_CA90(a2), (*a1 = v4) == 0) )
  {
    sub_7490(a3);
    return 0;
  }
  a1[1] = 0;
  sub_14AC0((__int64)a1);
  if ( *a1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
    *a1 = 0;
  }
  if ( !(unsigned __int8)sub_16220(a1) || (v5 = sub_148F0((__int64)a1), !(_BYTE)v5) )
  {
    sub_13540((__int64)a1, a2, a3);
    return 0;
  }
  sub_5990((__int64)"Applied svd file, renamed %d, failed on %d addresses\n", *((_DWORD *)a1 + 2), *((_DWORD *)a1 + 3));
  return v5;
}

