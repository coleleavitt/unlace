__int64 __fastcall sub_38240(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = sub_30F80(0);
  a1[4] = v2;
  if ( !(unsigned __int8)sub_31010(v2) )
  {
    a1[8] = "irs";
    return 0;
  }
  a1[10] = *(_QWORD *)(a2 + 80);
  result = sub_381C0((__int64)a1);
  if ( !(_BYTE)result )
  {
    a1[8] = "openssl";
    return 0;
  }
  return result;
}

