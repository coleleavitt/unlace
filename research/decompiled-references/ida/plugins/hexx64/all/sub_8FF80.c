__int64 __fastcall sub_8FF80(_QWORD *a1, __int64 *a2, double a3)
{
  __int64 v3; // rax
  __int128 v4; // rt0
  __int64 v5; // rax
  __int128 v6; // rt0
  __int64 v7; // rax
  __int128 v8; // rt0
  __int64 result; // rax

  sub_8F680((__int64)a2, 4, "gva_attrs.block");
  sub_7F8E0(a2);
  sub_8F680((__int64)a2, 4, "gva_attrs.flags");
  sub_7F8E0(a2);
  sub_8F680((__int64)a2, 4, "gva_attrs.ra");
  sub_8FEB0((__int64)(a1 + 2), a2);
  sub_8F680((__int64)a2, 4, "gva_attrs.va_addr");
  v3 = -a1[9];
  if ( (__int64)a1[9] > 0 )
    v3 = a1[9];
  *(_QWORD *)&v4 = a1[9];
  *((_QWORD *)&v4 + 1) = v3;
  sub_7F940(a2, v4 >> 63);
  sub_8F680((__int64)a2, 4, "gva_attrs.ovl_off");
  v5 = -a1[10];
  if ( (__int64)a1[10] > 0 )
    v5 = a1[10];
  *(_QWORD *)&v6 = a1[10];
  *((_QWORD *)&v6 + 1) = v5;
  sub_7F940(a2, v6 >> 63);
  sub_8F680((__int64)a2, 4, "gva_attrs.orig");
  v7 = -a1[11];
  if ( (__int64)a1[11] > 0 )
    v7 = a1[11];
  *(_QWORD *)&v8 = a1[11];
  *((_QWORD *)&v8 + 1) = v7;
  result = sub_7F940(a2, v8 >> 63);
  if ( a1[13] )
  {
    if ( !under_debugger )
      sub_383060(0xCBC5u, a3);
LABEL_14:
    BUG();
  }
  if ( a1[15] )
  {
    if ( !under_debugger )
      sub_383060(0xCBC6u, a3);
    goto LABEL_14;
  }
  return result;
}

