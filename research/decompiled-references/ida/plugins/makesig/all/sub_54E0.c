__int64 __fastcall sub_54E0(int a1, __int64 (__fastcall ***a2)(_QWORD, __int64, __int64))
{
  __int64 v3; // rbp
  const char *v4; // rsi
  __int64 v5; // rbp
  const char *v6; // rsi

  if ( a1 != -2 )
  {
    if ( a1 == -1 )
    {
      v3 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64)))(*a2)[9])(a2);
      if ( !(unsigned __int8)sub_52E0(v3 + 8200, (__int64)a2) )
      {
        v4 = s1;
        if ( *(_QWORD *)(v3 + 8208) )
          v4 = *(const char **)(v3 + 8200);
        sub_4C20((__int64)"%s: could not load\n", v4);
        return 0;
      }
    }
    return 1;
  }
  v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64)))(*a2)[9])(a2);
  if ( (unsigned __int8)sub_5440(v5 + 8200, a2) )
    return 1;
  v6 = s1;
  if ( *(_QWORD *)(v5 + 8208) )
    v6 = *(const char **)(v5 + 8200);
  sub_4C20((__int64)"%s: could not save\n", v6);
  return 0;
}

