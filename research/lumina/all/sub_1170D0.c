__int64 __fastcall sub_1170D0(__int64 a1, char *a2, __int64 a3, unsigned int a4, int *a5)
{
  unsigned int v5; // ebp
  __int64 v6; // r14
  __int64 *v8; // r12
  __int64 result; // rax
  unsigned __int16 v10; // ax
  int v11; // eax
  unsigned int v12; // [rsp+Ch] [rbp-3Ch]

  v5 = a3;
  if ( !a2 )
    return sub_117600(a1, a3, a4, a5);
  v6 = *(_QWORD *)(a1 + 128);
  v8 = sub_DCB00(v6);
  result = 7;
  if ( v8 )
  {
    sub_CD5F0((_BYTE *)(v6 + 4), (__int64 *)(v6 + 16), v5, a2, (__int64)v8);
    v10 = *((_WORD *)v8 + 14);
    if ( v10 && v10 <= *(_WORD *)(v6 + 8) )
    {
      v11 = sub_116C30(a1, (__int64)v8, a5);
    }
    else
    {
      sub_E8BB0(
        0xBu,
        "%s at line %d of [%.10s]",
        "database corruption",
        67527,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      v11 = 11;
    }
    v12 = v11;
    sub_C9250(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL), v8);
    return v12;
  }
  return result;
}
