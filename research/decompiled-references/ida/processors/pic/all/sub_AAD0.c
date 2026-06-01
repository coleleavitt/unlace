__int64 __fastcall sub_AAD0(__int64 a1, const char *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax

  if ( !a2 )
  {
    if ( *(_BYTE *)(a1 + 246) == 2 )
    {
      sub_9AB0((__int64)"PIC specific options\n%*\n <~C~hoose device name:B:0::>\n\n\n", a1, sub_A680);
      return 0;
    }
    if ( (unsigned __int8)getinf_flag() )
      *(_WORD *)(a1 + 244) |= 1u;
    if ( (unsigned int)sub_9AB0(
                         (__int64)"HELP\n"
                                  "PIC specific options\n"
                                  "\n"
                                  " Simplify instructions\n"
                                  "\n"
                                  "       If this option is on, IDA will simplify instructions and replace\n"
                                  "       them by clearer macro-instructions\n"
                                  "       For example,\n"
                                  "\n"
                                  "               btfsc   3,0\n"
                                  "\n"
                                  "       will be replaced by\n"
                                  "\n"
                                  "               skpnc\n"
                                  "\n"
                                  "       If macros are enabled, this options should be turned on.\n"
                                  "ENDHELP\n"
                                  "PIC specific options\n"
                                  "%/%*\n"
                                  " <~S~implify instructions:C1>>\n"
                                  "\n"
                                  " <~C~hoose device name:B:0::>\n"
                                  "\n"
                                  "\n",
                         sub_8B30,
                         a1,
                         a1 + 244,
                         sub_A680) != 1 )
      return 0;
LABEL_12:
    if ( a5 )
    {
      netnode_supset();
      return 0;
    }
    return 0;
  }
  if ( strcmp("PIC_SIMPLIFY", a2) )
    return 1;
  result = cfgopt_t__apply3();
  if ( !result )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 12LL) & 0x10) != 0 )
    {
      if ( (unsigned __int8)getinf_flag() )
        *(_WORD *)(a1 + 244) |= 1u;
    }
    goto LABEL_12;
  }
  return result;
}

