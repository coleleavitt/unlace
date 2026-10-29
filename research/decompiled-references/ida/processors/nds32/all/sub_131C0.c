__int64 __fastcall sub_131C0(__int64 a1, const char *a2, unsigned int a3, __int64 a4, char a5)
{
  int v6; // r14d
  const char **i; // r12
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int16 v11; // dx
  __int16 v12; // cx
  __int16 v13; // ax
  __int64 v14; // rdx
  __int16 v15; // cx
  __int16 v16; // ax
  __int16 v17; // cx
  __int16 v18; // cx
  __int16 v19; // ax
  __int16 v20; // cx
  __int16 v21; // cx
  __int16 v22; // ax
  __int16 v23; // cx
  __int16 v24; // cx
  __int16 v25; // ax
  __int16 v26; // cx
  __int16 v27; // cx
  __int16 v28; // cx
  __int16 v31; // [rsp+1Eh] [rbp-4Ah] BYREF
  _QWORD v32[9]; // [rsp+20h] [rbp-48h] BYREF

  v32[1] = __readfsqword(0x28u);
  if ( !a2 )
  {
    v11 = *(_WORD *)(a1 + 168);
    v12 = (v11 >> 2) & 1 | 2;
    if ( (v11 & 8) == 0 )
      v12 = (v11 >> 2) & 1;
    v13 = v12 | (4 * (*(_WORD *)(a1 + 168) & 1));
    if ( (v11 & 2) != 0 )
      v13 |= 8u;
    v14 = v11 & 0x10;
    if ( (_DWORD)v14 )
      v13 |= 0x10u;
    v31 = v13;
    if ( !(unsigned int)sub_130F0(
                          (__int64)"HELP\n"
                                   "NDS32 specific options\n"
                                   "\n"
                                   " Simplify instruction sequences:\n"
                                   "   Combine multiple instructions into pseudo-instructions.\n"
                                   "   For example, sethi+ori are combined into a single 'movi' showing\n"
                                   "   the full 32-bit immediate value.\n"
                                   "\n"
                                   " Simplify instructions using gp:\n"
                                   "   When the GP (global pointer) value is known, display GP-relative\n"
                                   "   addresses as their resolved values instead of showing the offset.\n"
                                   "   For example, display 'lwi.gp [gp_var_name]' instead of\n"
                                   "   'lwi.gp [$gp+#0x1234]'.\n"
                                   "\n"
                                   " Hide encoding suffixes:\n"
                                   "   Display 'add' instead of 'add45', 'mov' instead of 'mov55', etc.\n"
                                   "   The numeric suffixes indicate 16-bit encoding variants.\n"
                                   "\n"
                                   " Hide register $ prefix:\n"
                                   "   Display 'r0' instead of '$r0', 'sp' instead of '$sp', etc.\n"
                                   "\n"
                                   " Resolve ex9.it instructions:\n"
                                   "   When the ITB (Instruction Table Base) value is known, decode\n"
                                   "   ex9.it instructions as their resolved 32-bit equivalents.\n"
                                   "\n"
                                   "ENDHELP\n"
                                   "NDS32 specific options\n"
                                   "\n"
                                   " <~S~implify instruction sequences:C>\n"
                                   " <Simplify instructions using ~g~p:C>\n"
                                   " <~H~ide encoding suffixes (45, 333, etc.):C>\n"
                                   " <Hide register ~$~ prefix:C>\n"
                                   " <~R~esolve ex9.it instructions:C>>\n"
                                   "\n",
                          &v31,
                          v14) )
      return 0;
    v15 = *(_WORD *)(a1 + 168);
    v16 = v15 & 0xFFFB;
    v17 = v15 | 4;
    if ( (v31 & 1) != 0 )
      v16 = v17;
    v18 = v16;
    v19 = v16 & 0xFFF7;
    v20 = v18 | 8;
    if ( (v31 & 2) != 0 )
      v19 = v20;
    v21 = v19;
    v22 = v19 & 0xFFFE;
    v23 = v21 | 1;
    if ( (v31 & 4) != 0 )
      v22 = v23;
    v24 = v22;
    v25 = v22 & 0xFFFD;
    v26 = v24 | 2;
    if ( (v31 & 8) != 0 )
      v25 = v26;
    v27 = v25;
    LOWORD(v9) = v25 & 0xFFEF;
    v28 = v27 | 0x10;
    if ( (v31 & 0x10) != 0 )
      LOWORD(v9) = v28;
    *(_WORD *)(a1 + 168) = v9;
    v9 = (unsigned __int16)v9;
LABEL_11:
    v10 = *(_QWORD *)(a1 + 120);
    v32[0] = v9;
    netnode_supset(v10, -1, v32, 8, 65);
    return 0;
  }
  v6 = 0;
  for ( i = (const char **)&off_29100; strcmp(*i, a2); i += 5 )
  {
    if ( ++v6 == 5 )
      return 1;
  }
  result = cfgopt_t__apply3(&(&off_29100)[5 * v6], 0, a3, a4, a1);
  if ( !result )
  {
    if ( !a5 )
      return 0;
    v9 = *(unsigned __int16 *)(a1 + 168);
    goto LABEL_11;
  }
  return result;
}

