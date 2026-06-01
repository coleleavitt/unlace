__int64 __fastcall sub_3B7A0(__int64 a1, _QWORD *a2, _QWORD *a3, const char *a4)
{
  _QWORD *v6; // rax

  v6 = sub_2FE60(a1, a2);
  if ( !v6 || sub_2FC60((__int64)v6, a3) == -1 )
    return sub_3B560(a1, 0, 11, (__int64)a3, a4, 0);
  else
    return 1;
}

