__int64 __fastcall sub_DC20(__int64 a1, char a2)
{
  __int16 v2; // ax
  int v4; // eax

  if ( (unsigned int)sub_D3F0(
                       (__int64)"HELP\n"
                                "ST9 Related options :\n"
                                "\n"
                                " General registers print style\n"
                                "\n"
                                "       Select the format which will be used by IDA to\n"
                                "       to print general registers.\n"
                                "\n"
                                "       For example,\n"
                                "\n"
                                "           R10                    (decimal) \n"
                                "           R0x0A                (hexadecimal) \n"
                                "           R00001010b      (binary) \n"
                                "\n"
                                "ENDHELP\n"
                                "ST9 related options\n"
                                "<##General registers print style##~D~ecimal (default):R>\n"
                                "<~H~exadecimal:R>\n"
                                "<~B~inary:R>>\n",
                       a1 + 4680) )
  {
    v2 = *(_WORD *)(a1 + 4680);
    *(_DWORD *)(a1 + 4676) = 0;
    if ( v2 == 1 )
    {
      v4 = 2;
    }
    else if ( v2 == 2 )
    {
      v4 = 4;
    }
    else
    {
      if ( v2 )
        goto LABEL_5;
      v4 = 1;
    }
    *(_DWORD *)(a1 + 4676) = v4;
    sub_D770(a1);
  }
LABEL_5:
  if ( a2 )
    netnode_supset();
  return 0;
}

