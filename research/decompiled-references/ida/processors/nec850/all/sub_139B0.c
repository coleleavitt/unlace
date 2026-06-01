__int64 __fastcall sub_139B0(__int64 a1, const char *a2, unsigned int a3, __int64 *a4, char a5)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r15
  const char **v11; // r14
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rbp
  __int64 v16; // rbp
  __int16 v17; // di
  __int64 v18; // rsi
  __int16 v19; // cx
  __int16 v20; // ax
  __int16 v21; // cx
  __int16 v22; // cx
  __int16 v23; // ax
  __int16 v24; // cx
  __int16 v25; // cx
  __int16 v26; // ax
  __int16 v27; // cx
  __int16 v28; // cx
  __int16 v29; // ax
  __int16 v30; // cx
  __int16 v31; // cx
  __int16 v32; // ax
  __int16 v33; // cx
  int v34; // edx
  __int16 v37; // [rsp+16h] [rbp-62h] BYREF
  __int64 v38; // [rsp+18h] [rbp-60h] BYREF
  __int64 v39; // [rsp+20h] [rbp-58h] BYREF
  __int64 v40; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v41[9]; // [rsp+30h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(a1 + 168);
  v8 = *(_QWORD *)(a1 + 176);
  v9 = *(_QWORD *)(a1 + 160);
  v41[1] = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 152);
  v39 = v9;
  v40 = v7;
  v41[0] = v8;
  v38 = v10;
  if ( a2 )
  {
    v11 = (const char **)&off_2D500;
    do
    {
      if ( !strcmp(*v11, a2) )
      {
        result = cfgopt_t__apply3(v11, 0, a3, a4, a1);
        if ( !result )
          goto LABEL_50;
        return result;
      }
      v11 += 5;
    }
    while ( v11 != (const char **)&unk_2D5C8 );
    if ( !strcmp(a2, "V850_CTBP_EA") )
    {
      result = 2;
      if ( a3 != 2 )
        return result;
      v13 = *a4;
      v38 = *a4;
      goto LABEL_8;
    }
    if ( !strcmp(a2, "V850_GP_EA") )
    {
      result = 2;
      if ( a3 != 2 )
        return result;
      v39 = *a4;
    }
    else
    {
      if ( strcmp(a2, "V850_TP_EA") )
      {
        v34 = strcmp(a2, "V850_EP_EA");
        result = 1;
        if ( !v34 )
        {
          result = 2;
          if ( a3 == 2 )
          {
            v41[0] = *a4;
            goto LABEL_10;
          }
        }
        return result;
      }
      result = 2;
      if ( a3 != 2 )
        return result;
      v40 = *a4;
    }
  }
  else
  {
    v17 = *(_WORD *)(a1 + 184);
    v18 = v17 & 1;
    if ( v9 != -1 || (v17 & 2) != 0 )
      LOWORD(v18) = v18 | 2;
    if ( v7 != -1 || (v17 & 4) != 0 )
      LOWORD(v18) = v18 | 4;
    if ( v8 != -1 || (v17 & 8) != 0 )
      LOWORD(v18) = v18 | 8;
    if ( (v17 & 0x10) != 0 )
      LOWORD(v18) = v18 | 0x10;
    v37 = v18;
    if ( (unsigned int)sub_13430(
                         (__int64)"HELP\n"
                                  "V850 specific options\n"
                                  "\n"
                                  " Allow hidden R1 modifications\n"
                                  "\n"
                                  "       Allow hidden modification of the R1 register in macros\n"
                                  "ENDHELP\n"
                                  "NEC V850x analyzer options\n"
                                  "%/\n"
                                  " <CALLT ~B~ase pointer     :$::18::>\n"
                                  " <~G~lobal Pointer address :$1::18::>\n"
                                  " <~T~ext Pointer address   :$2::18::>\n"
                                  " <~E~lement Pointer address:$3::18::>\n"
                                  "\n"
                                  " <Allow ~h~idden R1 modifications:C>\n"
                                  " <GP is ~c~allee-saved:C11>\n"
                                  " <TP is c~a~llee-saved:C12>\n"
                                  " <EP is ca~l~lee-saved:C13>\n"
                                  " <R~2~ is callee-saved:C>>\n"
                                  "\n"
                                  "\n",
                         sub_13090,
                         &v38,
                         &v39,
                         &v40,
                         v41,
                         &v37) != 1 )
      return 0;
    v19 = *(_WORD *)(a1 + 184);
    v20 = v19 & 0xFFFE;
    v21 = v19 | 1;
    if ( (v37 & 1) != 0 )
      v20 = v21;
    v22 = v20;
    v23 = v20 & 0xFFFD;
    v24 = v22 | 2;
    if ( (v37 & 2) != 0 )
      v23 = v24;
    v25 = v23;
    v26 = v23 & 0xFFFB;
    v27 = v25 | 4;
    if ( (v37 & 4) != 0 )
      v26 = v27;
    v28 = v26;
    v29 = v26 & 0xFFF7;
    v30 = v28 | 8;
    if ( (v37 & 8) != 0 )
      v29 = v30;
    v31 = v29;
    v32 = v29 & 0xFFEF;
    v33 = v31 | 0x10;
    if ( (v37 & 0x10) != 0 )
      v32 = v33;
    *(_WORD *)(a1 + 184) = v32;
LABEL_50:
    v13 = v38;
    v10 = *(_QWORD *)(a1 + 152);
LABEL_8:
    if ( v10 != v13 )
    {
      *(_QWORD *)(a1 + 152) = v13;
      set_default_sreg_value(0, 134);
    }
  }
LABEL_10:
  v14 = v39;
  if ( v39 != *(_QWORD *)(a1 + 160) )
  {
    *(_QWORD *)(a1 + 160) = v39;
    set_default_sreg_value(0, 132);
  }
  if ( v14 != -1 )
    *(_WORD *)(a1 + 184) |= 2u;
  v15 = v40;
  if ( v40 != *(_QWORD *)(a1 + 168) )
  {
    *(_QWORD *)(a1 + 168) = v40;
    set_default_sreg_value(0, 133);
  }
  if ( v15 != -1 )
    *(_WORD *)(a1 + 184) |= 4u;
  v16 = v41[0];
  if ( v41[0] != *(_QWORD *)(a1 + 176) )
  {
    *(_QWORD *)(a1 + 176) = v41[0];
    set_default_sreg_value(0, 135);
  }
  if ( v16 != -1 )
    *(_WORD *)(a1 + 184) |= 8u;
  if ( !a5 )
    return 0;
  sub_13690(a1);
  return 0;
}

