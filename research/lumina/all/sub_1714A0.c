__int64 __fastcall sub_1714A0(_QWORD *a1, __int64 a2)
{
  const char *v2; // r12
  const char *v3; // r13
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r12

  v2 = *(const char **)(a2 + 40);
  if ( !v2 || (v3 = *(const char **)(a2 + 64), !(unsigned __int8)sub_197CA0(*(_QWORD *)(a2 + 40))) )
  {
    a1[8] = "certchain_not_found";
    return 0;
  }
  if ( !v3 || !(unsigned __int8)sub_197CA0(v3) )
  {
    a1[8] = "privkey_not_found";
    return 0;
  }
  if ( !(unsigned __int8)sub_170E00(&qword_242700, a1 + 8) )
    return 0;
  v5 = sub_1671B0(0);
  a1[4] = v5;
  if ( !(unsigned __int8)sub_167230(v5) )
  {
    a1[8] = "irs";
    return 0;
  }
  v6 = qword_242710;
  sub_19A520(qword_242710);
  v7 = qword_242730;
  if ( qword_242730 )
  {
    sub_19A570(v6);
    a1[10] = v7;
  }
  else
  {
    v8 = sub_170F50((__int64 **)&qword_242700, 0, v2, v3);
    qword_242730 = v8;
    sub_19A570(v6);
    a1[10] = v8;
    if ( !v8 )
      goto LABEL_15;
  }
  result = sub_1713B0((__int64)a1);
  if ( !(_BYTE)result )
  {
LABEL_15:
    a1[8] = "openssl";
    return 0;
  }
  return result;
}
