__int64 __fastcall sub_8F9C0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int128 v3; // rt0
  __int64 v4; // rax
  __int128 v5; // rt0
  __int64 v6; // rax
  __int128 v7; // rt0
  __int64 result; // rax

  sub_8F0C0((__int64)a2, 4, "gva_attrs.block");
  sub_7F320(a2);
  sub_8F0C0((__int64)a2, 4, "gva_attrs.flags");
  sub_7F320(a2);
  sub_8F0C0((__int64)a2, 4, "gva_attrs.ra");
  sub_8F8F0((__int64)(a1 + 2), a2);
  sub_8F0C0((__int64)a2, 4, "gva_attrs.va_addr");
  v2 = -a1[9];
  if ( (__int64)a1[9] > 0 )
    v2 = a1[9];
  *(_QWORD *)&v3 = a1[9];
  *((_QWORD *)&v3 + 1) = v2;
  sub_7F380(a2, v3 >> 63);
  sub_8F0C0((__int64)a2, 4, "gva_attrs.ovl_off");
  v4 = -a1[10];
  if ( (__int64)a1[10] > 0 )
    v4 = a1[10];
  *(_QWORD *)&v5 = a1[10];
  *((_QWORD *)&v5 + 1) = v4;
  sub_7F380(a2, v5 >> 63);
  sub_8F0C0((__int64)a2, 4, "gva_attrs.orig");
  v6 = -a1[11];
  if ( (__int64)a1[11] > 0 )
    v6 = a1[11];
  *(_QWORD *)&v7 = a1[11];
  *((_QWORD *)&v7 + 1) = v6;
  result = sub_7F380(a2, v7 >> 63);
  if ( a1[13] )
  {
    if ( !under_debugger )
      sub_3835A0(52165);
LABEL_14:
    BUG();
  }
  if ( a1[15] )
  {
    if ( !under_debugger )
      sub_3835A0(52166);
    goto LABEL_14;
  }
  return result;
}

