__int64 *__fastcall sub_3FE370(__int64 *a1, __int64 a2, unsigned int a3, unsigned int a4, char a5, double a6)
{
  _QWORD v10[2]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v11; // [rsp+10h] [rbp-38h]
  char v12; // [rsp+12h] [rbp-36h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a2 + 745) )
  {
    sub_CF9B0();
    *(_BYTE *)(a2 + 745) = 1;
  }
  if ( (a5 & 0x10) != 0 )
  {
    *a1 = 0;
    if ( (unsigned __int8)sub_3FDEB0(a1, a2) )
      return a1;
    a5 |= 1u;
    clear_tinfo_t();
  }
  if ( a3 > 8 || a3 != a4 )
  {
    if ( (a5 & 2) != 0 )
    {
      if ( a4 == 16 )
      {
        if ( !under_debugger )
          sub_3835A0(0xC879u, a6);
        goto LABEL_31;
      }
      goto LABEL_9;
    }
    if ( (a5 & 1) != 0 )
    {
      if ( a4 != 16 )
        goto LABEL_9;
    }
    else if ( a4 != 16 )
    {
LABEL_9:
      if ( a4 > 8 || (a4 & (a4 - 1)) != 0 )
        sub_3EAF00(a6);
LABEL_11:
      v11 = 0;
      v10[0] = 0;
      v10[1] = 0;
      v12 = 48;
      if ( (unsigned __int8)sub_32A8C0((__int64)v10) )
      {
        *a1 = 0;
        copy_tinfo_t();
        clear_tinfo_t();
        return a1;
      }
      if ( !under_debugger )
        sub_3835A0(0xC870u, a6);
LABEL_31:
      BUG();
    }
    if ( a3 != 16 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC87Au, a6);
      goto LABEL_31;
    }
    goto LABEL_11;
  }
  if ( (a5 & 2) != 0 )
    sub_32C480(a1, a2, a3);
  else
    sub_32C760(a1, a2, a3, (a5 & 1) + 1);
  return a1;
}

