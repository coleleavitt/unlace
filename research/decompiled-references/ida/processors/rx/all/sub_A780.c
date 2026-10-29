__int64 __fastcall sub_A780(__int64 a1, const char *a2, __int64 a3, __int64 a4, char a5)
{
  bool v6; // zf
  __int64 v7; // rdx
  _UNKNOWN **v8; // rax
  __int16 v10; // [rsp+1Eh] [rbp-2Ah] BYREF
  __int64 v11; // [rsp+20h] [rbp-28h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v10 = 0;
  if ( a2 )
  {
    if ( !strcmp("RX_ALIASES", a2) )
      return cfgopt_t__apply3();
    else
      return 1;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 130) & 2) != 0 )
      v10 = 2;
    sub_A630(
      (__int64)"HELP\n"
               "Renesas RX family specific options\n"
               "\n"
               " Use registers aliases\n"
               "\n"
               "       If checked, IDA will use aliases for the following registers :\n"
               "\n"
               "           r0   ->  sp    \n"
               "           dcr0 ->  dpsw  \n"
               "           dcr1 ->  dcmr  \n"
               "           dcr2 ->  decnt \n"
               "           dcr3 ->  depc  \n"
               "\n"
               "ENDHELP\n"
               "RX related options\n"
               "%/\n"
               " <Use ~a~liases:C1>>\n"
               "\n",
      sub_A5E0,
      &v10);
    v6 = (v10 & 2) == 0;
    *(_WORD *)(a1 + 130) = 0;
    v7 = *(_QWORD *)(a1 + 16);
    if ( v6 )
    {
      v8 = &off_13620;
    }
    else
    {
      *(_WORD *)(a1 + 130) = 2;
      v8 = &off_13360;
    }
    *(_QWORD *)(v7 + 56) = v8;
    if ( a5 )
    {
      v11 = *(unsigned __int16 *)(a1 + 130);
      netnode_supset();
    }
    return 0;
  }
}

