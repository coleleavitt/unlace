__int64 __fastcall sub_4F960(__int64 a1, const char *a2, int a3, __int64 *a4, char a5, double a6, double a7)
{
  __int64 result; // rax
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  __int64 v14; // rdi
  __int64 v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // rdx
  unsigned int v18; // edx
  unsigned int v19; // eax
  int v20; // edx
  __int64 v21; // rdi
  unsigned int v22; // r13d
  int v23; // eax
  __int16 v24; // cx
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // dx
  int v27; // eax
  __int16 v28; // ax
  __int64 v29; // rdi
  __int64 v30; // rdi
  int v31; // edx
  unsigned int v32; // edx
  unsigned int v33; // eax
  int v34; // edx
  unsigned int v35; // edx
  unsigned int v36; // eax
  int v37; // edx
  unsigned int v38; // eax
  unsigned int v39; // eax
  __int16 v40; // [rsp+22h] [rbp-66h] BYREF
  __int16 v41; // [rsp+24h] [rbp-64h] BYREF
  __int16 v42; // [rsp+26h] [rbp-62h] BYREF
  __int64 v43; // [rsp+28h] [rbp-60h] BYREF
  __int64 v44; // [rsp+30h] [rbp-58h] BYREF
  __int64 v45; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v46[9]; // [rsp+40h] [rbp-48h] BYREF

  v46[1] = __readfsqword(0x28u);
  if ( !a2 )
  {
    v40 = *(_WORD *)(a1 + 472) & 3;
    v22 = *(_DWORD *)(a1 + 460);
    v41 = v22 & 0xF;
    v42 = (v22 >> 5) & 1;
    v43 = *(_QWORD *)(a1 + 424);
    v44 = *(_QWORD *)(a1 + 432);
    v45 = *(_QWORD *)(a1 + 440);
    while ( 1 )
    {
      v23 = sub_4C1B0(
              (__int64)"HELP\n"
                       "\n"
                       "TOC base is the value of the r2 register. This register is used as\n"
                       "TOC pointer in the AIX and 64-bit System V ABI or as SDA2 (Small\n"
                       "Data Area 2) pointer in the Embedded System V ABI.\n"
                       "SDA base is the value of the r13 register. This register is used as\n"
                       "Small Data Area pointer in the System V ABI.\n"
                       "\n"
                       "Aggressively convert lis/addi to offsets\n"
                       "  handles sequences like this:\n"
                       "\n"
                       "  lis     r9, 4\n"
                       "  addi    r9, r9, -0xDFC\n"
                       "\n"
                       "  If set, IDA will always convert immediate operands to offsets\n"
                       "  when the full constant (0x3F204 here) is an existing address.\n"
                       "  If not set, IDA will perform the conversion only if the full\n"
                       "  constant points to a defined data item, or inside a string,\n"
                       "  or the start of a basic block, or an address\n"
                       "  with a name or with a reference.\n"
                       "\n"
                       "Create subi pseudo-instructions\n"
                       "  If enabled, IDA will replace addi instructions\n"
                       "  with negative values by subi instructions\n"
                       "ISA Server environment\n"
                       "  Decode server environment instructions (off = Embedded environment)\n"
                       "ENDHELP\n"
                       "PowerPC specific analyzer options\n"
                       "%/%*\n"
                       " <~T~OC/SDA2 (r2) address :N::18::>\n"
                       " <S~D~A (r13) address:N::18::>\n"
                       " <~M~MIO base        :N7::18::>\n"
                       "\n"
                       " <Aggressively convert lis/addi to ~o~ffsets:C>\n"
                       " <Create s~u~bi instructions:C>>\n"
                       "\n"
                       " <##Instruction set support#Also known as Velocity Engine or VMX#~A~ltiVec:R> <#Signal Processing"
                       " Engine#~S~PE:R> <#Advanced VMX implementation (Xbox360)#VM~X~128:R> <#Paired Singles (Gekko)#~P~"
                       "S:R> <#Lightweight Signal Processing#LSP:R>4>\n"
                       " <#ISA Server or Embedded environment#ISA S~e~rver environment:C>5>\n"
                       " <~C~hoose a device:B8:1:::>\n"
                       "\n",
              sub_4AFE0,
              a1,
              &v43,
              &v44,
              &v45,
              &v40,
              &v41,
              &v42,
              sub_4CF10);
      v24 = v41;
      if ( (v41 & 0xFu) <= 4 )
        break;
      if ( v23 <= 0 )
        return 0;
      sub_33700((__int64)"AltiVec, SPE, VMX128, and Paired Singles extensions are mutually exclusive. Please choose one.");
    }
    if ( v23 <= 0 )
      return 0;
    v25 = v41 | v22 & 0x780;
    v26 = v40 | *(_WORD *)(a1 + 472) & 0xFFFC;
    *(_WORD *)(a1 + 472) = v26;
    if ( (v42 & 1) != 0 )
      v27 = v25 | 0x8020;
    else
      v27 = v24 & 0x7FDF | v22 & 0x780 | 0x8000;
    *(_DWORD *)(a1 + 460) = v27;
    if ( a5 )
    {
      v29 = *(_QWORD *)(a1 + 120);
      v46[0] = v26;
      netnode_supset(v29, -3, v46, 8, 65);
      v30 = *(_QWORD *)(a1 + 120);
      v46[0] = *(unsigned int *)(a1 + 460);
      netnode_supset(v30, -4, v46, 8, 65);
    }
    sub_4F5D0(a1, v43, a5, 0);
    if ( v44 != *(_QWORD *)(a1 + 432) )
      sub_4B0C0(a1, v44, a5);
    sub_4F8B0((_QWORD *)a1, v45, a5, a6, a7);
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL) = (*(_DWORD *)(a1 + 460) & 0x100) == 0 ? 16LL : 8LL;
    setinf(66, *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 120LL));
    return 0;
  }
  if ( !strcmp(a2, "PPC_LISOFF") )
  {
    result = 2;
    if ( a3 != 3 )
      return result;
    v28 = *(_WORD *)(a1 + 472);
    if ( *(_DWORD *)a4 )
      v13 = v28 | 1;
    else
      v13 = v28 & 0xFFFE;
    goto LABEL_9;
  }
  if ( strcmp(a2, "PPC_CREATE_SUBI") )
  {
    if ( strcmp(a2, "PPC_ISA_SUPPORT") )
    {
      if ( !strcmp(a2, "PPC_TOC") )
      {
        result = 2;
        if ( a3 == 2 )
        {
          sub_4F5D0(a1, *a4, a5, 0);
          return 0;
        }
        return result;
      }
      if ( strcmp(a2, "PPC_SDA_BASE") )
      {
        if ( !strcmp(a2, "PPC_MMIO_BASE") )
        {
          result = 2;
          if ( a3 == 2 )
          {
            sub_4F8B0((_QWORD *)a1, *a4, a5, a6, a7);
            return 0;
          }
        }
        else if ( !strcmp(a2, "PPC_SDAREFS") )
        {
          result = 2;
          if ( a3 == 2 )
          {
            result = 3;
            if ( (unsigned __int64)*a4 <= 2 )
            {
              *(_DWORD *)(a1 + 468) = *a4;
              return 0;
            }
          }
        }
        else
        {
          v31 = strcmp(a2, "PPC_FIX_GNU_VLEADRELOC_BUG");
          result = 1;
          if ( !v31 )
          {
            result = 2;
            if ( a3 == 3 )
            {
              *(_BYTE *)(a1 + 556) = *(_DWORD *)a4 != 0;
              return 0;
            }
          }
        }
        return result;
      }
      result = 2;
      if ( a3 != 2 )
        return result;
      if ( *a4 != *(_QWORD *)(a1 + 432) )
      {
        sub_4B0C0(a1, *a4, a5);
        return 0;
      }
      return 0;
    }
    result = 2;
    if ( a3 != 2 )
      return result;
    v15 = *a4;
    v16 = *(_DWORD *)(a1 + 460);
    v17 = *a4 & 0xB;
    if ( v17 == 3 )
    {
      v35 = v16 & 0xFFFFFF80;
      v36 = v16 & 0xFFFFFF80 | 2;
      v37 = v35 | 0x22;
      if ( (v15 & 0x100) != 0 )
        v36 = v37;
      *(_DWORD *)(a1 + 460) = v36;
    }
    else if ( v17 > 3 )
    {
      if ( v17 != 8 )
      {
LABEL_64:
        v38 = v16 & 0xFFFFFF8F;
        if ( (v15 & 0x100) != 0 )
          v38 |= 0x20u;
        *(_DWORD *)(a1 + 460) = v38;
        if ( (v38 & 0xF) > 4 )
        {
          sub_337D0((__int64)"Bad SIMD flags in ida.cfg; assuming AltiVec decoding.\n");
          *(_DWORD *)(a1 + 460) &= 0xFFFFFFF0;
        }
        goto LABEL_24;
      }
      v32 = v16 & 0xFFFFFF80;
      v33 = v16 & 0xFFFFFF80 | 3;
      v34 = v32 | 0x23;
      if ( (v15 & 0x100) != 0 )
        v33 = v34;
      *(_DWORD *)(a1 + 460) = v33;
    }
    else
    {
      if ( v17 != 1 )
      {
        if ( v17 == 2 )
        {
          v18 = v16 & 0xFFFFFF80;
          v19 = v16 & 0xFFFFFF80 | 1;
          v20 = v18 | 0x21;
          if ( (v15 & 0x100) != 0 )
            v19 = v20;
          *(_DWORD *)(a1 + 460) = v19;
          goto LABEL_24;
        }
        goto LABEL_64;
      }
      v39 = v16 & 0xFFFFFF80;
      if ( (v15 & 0x100) != 0 )
        v39 |= 0x20u;
      *(_DWORD *)(a1 + 460) = v39;
    }
LABEL_24:
    if ( a5 )
    {
      v21 = *(_QWORD *)(a1 + 120);
      v46[0] = *(unsigned int *)(a1 + 460);
      netnode_supset(v21, -4, v46, 8, 65);
      return 0;
    }
    return 0;
  }
  result = 2;
  if ( a3 == 3 )
  {
    v12 = *(_WORD *)(a1 + 472);
    if ( *(_DWORD *)a4 )
      v13 = v12 | 2;
    else
      v13 = v12 & 0xFFFD;
LABEL_9:
    *(_WORD *)(a1 + 472) = v13;
    if ( a5 )
    {
      v14 = *(_QWORD *)(a1 + 120);
      v46[0] = v13;
      netnode_supset(v14, -3, v46, 8, 65);
    }
    return 0;
  }
  return result;
}

