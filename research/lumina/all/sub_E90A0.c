__int64 __fastcall sub_E90A0(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  _BYTE *v5; // rdx
  __int64 v6; // rdi

  result = sub_C3B70(a1, a2, a3);
  if ( (_DWORD)result )
  {
    *a3 = 0;
  }
  else
  {
    v5 = (_BYTE *)*a3;
    v6 = *(_QWORD *)(*a3 + 112LL);
    if ( *(__int16 *)(v6 + 54) > 1 )
    {
      if ( v5 )
        sub_C36A0(v6);
      *a3 = 0;
      sub_E8BB0(
        0xBu,
        "%s at line %d of [%.10s]",
        "database corruption",
        69065,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      return 11;
    }
    else
    {
      *v5 = 0;
    }
  }
  return result;
}
