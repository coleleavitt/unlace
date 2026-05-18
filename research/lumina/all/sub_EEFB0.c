const char *__fastcall sub_EEFB0(__int64 a1, __int64 a2, __int64 a3, double a4, __int64 a5, int a6, int a7)
{
  char v7; // al
  bool v9; // cl
  __int64 v10; // rdi
  const char *v11; // rbp
  __int64 v12; // rdi
  int v14; // edi

  if ( a1 )
  {
    v7 = *(_BYTE *)(a1 + 113);
    v9 = v7 != -70;
    LOBYTE(a3) = v7 != 118;
    if ( v7 != 118 && v9 && v7 != 109 && !(unsigned int)sub_EA5B0() )
    {
      v11 = "bad parameter or other API misuse";
      sub_E8BB0(
        0x15u,
        "%s at line %d of [%.10s]",
        "misuse",
        172554,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      return v11;
    }
    v10 = *(_QWORD *)(a1 + 24);
    if ( v10 )
    {
      xmmword_241500(v10);
      v11 = "out of memory";
      if ( *(_BYTE *)(a1 + 103) )
        goto LABEL_6;
LABEL_10:
      v14 = *(_DWORD *)(a1 + 80);
      if ( v14 )
      {
        a2 = 1;
        v11 = (const char *)sub_D9DB0(*(_QWORD *)(a1 + 392), 1u, a4, a3, v9, a6, a7);
        if ( v11 )
        {
LABEL_6:
          v12 = *(_QWORD *)(a1 + 24);
          if ( v12 )
            xmmword_241510(v12, a2, a3);
          return v11;
        }
        v14 = *(_DWORD *)(a1 + 80);
      }
      v11 = sub_D1BA0(v14);
      goto LABEL_6;
    }
    if ( !*(_BYTE *)(a1 + 103) )
      goto LABEL_10;
  }
  return "out of memory";
}
