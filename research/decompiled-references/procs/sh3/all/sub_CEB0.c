__int64 __fastcall sub_CEB0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 result; // rax
  char *v4; // rsi
  __int64 v5; // rdx
  const char *v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 240);
  v8 = __readfsqword(0x28u);
  v2 = sub_9450(*(_QWORD *)(a1 + 616), v1);
  result = 0;
  if ( v2 )
  {
    v6 = nullptr;
    v7 = 0;
    if ( get_ea_name(&v6, v2, 3, 0) <= 0 )
    {
      v4 = "%0*a";
      sub_CD40(a1, (__int64)"%0*a", 8, 0.0);
    }
    else
    {
      v4 = "%s";
      sub_CD40(a1, (__int64)"%s", v6);
    }
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree(v6, v4, v5, 0.0);
    }
    return 1;
  }
  return result;
}
