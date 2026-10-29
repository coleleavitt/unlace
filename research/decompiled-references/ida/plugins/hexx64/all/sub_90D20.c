unsigned __int64 __fastcall sub_90D20(__int64 a1, __int64 *a2, double a3)
{
  __int64 v4; // rax
  __int128 v5; // rt0
  char *v6; // rsi

  sub_8F680((__int64)a2, 4, "mcallarg.mop_t");
  sub_908D0((unsigned __int8 *)a1, (__int64)a2, a3);
  sub_8F680((__int64)a2, 4, "mcallarg.ea");
  v4 = a2[5] - *(_QWORD *)(a1 + 16);
  if ( v4 < 0 )
    v4 = *(_QWORD *)(a1 + 16) - a2[5];
  *(_QWORD *)&v5 = *(_QWORD *)(a1 + 16) - a2[5];
  *((_QWORD *)&v5 + 1) = v4;
  sub_7F940(a2, v5 >> 63);
  sub_8F680((__int64)a2, 4, "mcallarg.type");
  sub_7FD50(a2, (_BYTE *)(a1 + 24));
  sub_8F680((__int64)a2, 4, "mcallarg.name");
  v6 = (char *)s1;
  if ( *(_QWORD *)(a1 + 40) )
    v6 = *(char **)(a1 + 32);
  sub_7FC40(a2, v6);
  sub_8F680((__int64)a2, 4, "mcallarg.argloc");
  return sub_81A10(a2);
}

