__int64 *__fastcall sub_3CE10(int a1, int a2, __int64 *a3, __int64 *a4, char a5)
{
  signed int v5; // eax
  char v9; // cl
  __int64 *result; // rax
  const char *v11; // r8
  char v12; // r9
  char *v13; // r15
  char v14; // r9
  __int64 *v15; // rbx
  int v16; // eax
  unsigned __int64 v17; // rbx
  bool v18; // zf
  size_t v19; // r13
  const char *v20; // r8
  void *v21; // rdi
  size_t v22; // rax
  int v23; // eax
  int v24; // eax
  _QWORD *v25; // rsi
  char *v26; // rbp
  const char *v27; // r8
  size_t v28; // rbx
  unsigned __int64 v29; // rax
  char *v30; // rsi
  char *v31; // r15
  unsigned int v32; // esi
  unsigned int v33; // esi
  unsigned int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rax
  void *v37; // rdi
  char *v38; // r12
  __int64 v39; // rax
  __int64 v40; // rax
  char srcb; // [rsp+0h] [rbp-48h]
  const char *srcc; // [rsp+0h] [rbp-48h]
  const char *src; // [rsp+0h] [rbp-48h]
  const char *srca; // [rsp+0h] [rbp-48h]
  const char *srcd; // [rsp+0h] [rbp-48h]
  char srce; // [rsp+0h] [rbp-48h]
  char v47; // [rsp+Fh] [rbp-39h]
  char v48; // [rsp+Fh] [rbp-39h]

  v5 = a1 & 0xFCFFFFFF;
  if ( (int)(a1 & 0xFCFFFFFF) > 18 )
  {
    if ( v5 == 255 )
    {
      v12 = 0;
      v13 = "";
      v11 = "VEO";
      if ( (a1 & 0x1000000) == 0 )
      {
LABEL_15:
        if ( (a1 & 0x2000000) == 0 )
          goto LABEL_48;
LABEL_16:
        if ( a1 != 33554444 )
          goto LABEL_83;
        goto LABEL_17;
      }
LABEL_13:
      switch ( a1 )
      {
        case 16777223:
          v24 = a2 & 0xFFFFFF;
          if ( (a2 & 0xFFFFFF) == 4 )
            goto LABEL_108;
          if ( v24 == 8 )
            goto LABEL_200;
          if ( v24 == 3 )
            goto LABEL_65;
          v17 = 7;
          v19 = 6;
          v20 = "X86_64";
          break;
        case 16777228:
          v23 = a2 & 0xFFFFFF;
          if ( (a2 & 0xFFFFFF) != 1 )
            goto LABEL_59;
          v18 = a5 == 0;
          v17 = 6;
          v19 = 5;
          v13 = "ARM64_V8";
          v20 = "ARM64";
          if ( v18 )
          {
            v13 = "v8";
            v20 = "ARM64";
          }
          goto LABEL_21;
        case 16777234:
          goto LABEL_57;
        case 16777235:
          goto LABEL_55;
        case 16777236:
          v17 = 7;
          v19 = 6;
          v20 = "amdgpu";
          goto LABEL_21;
        case 16777237:
          goto LABEL_53;
        case 16777239:
          goto LABEL_97;
        default:
          goto LABEL_45;
      }
      goto LABEL_21;
    }
  }
  else if ( v5 > 0 )
  {
    v9 = a5;
    switch ( a1 & 0xFCFFFFFF )
    {
      case 1u:
        v12 = 0;
        v13 = "";
        v11 = "VAX";
        if ( (a1 & 0x1000000) != 0 )
          goto LABEL_13;
        goto LABEL_15;
      case 2u:
        v12 = 0;
        v13 = "";
        v11 = "ROMP";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 4u:
        v12 = 0;
        v13 = "";
        v11 = "NS32032";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 5u:
        v12 = 0;
        v13 = "";
        v11 = "NS32332";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 6u:
        v12 = 0;
        v13 = "";
        v11 = "MC680x0";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 7u:
        if ( a2 != 3 && (unsigned int)a2 >> 4 )
        {
          v12 = 0;
          v13 = "";
          v11 = "I386";
          if ( (a1 & 0x1000000) != 0 )
            goto LABEL_13;
          goto LABEL_15;
        }
        if ( a5 )
        {
          v12 = a5;
          v13 = "ALL";
          v11 = "I386";
          if ( (a1 & 0x1000000) != 0 )
            goto LABEL_13;
LABEL_116:
          if ( (a1 & 0x2000000) != 0 )
            goto LABEL_16;
        }
        else
        {
          v12 = 1;
          v13 = "";
          v11 = "I386";
          if ( (a1 & 0x1000000) != 0 )
            goto LABEL_13;
LABEL_100:
          v9 = 1;
          if ( (a1 & 0x2000000) != 0 )
            goto LABEL_16;
        }
        goto LABEL_49;
      case 0xBu:
        v12 = 0;
        v13 = "";
        v11 = "HPPA";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 0xCu:
        switch ( a2 )
        {
          case 1:
          case 2:
            if ( (a1 & 0x1000000) != 0 )
            {
              v12 = 0;
              v13 = "500";
              goto LABEL_13;
            }
            v9 = 0;
            v13 = "500";
            v11 = "ARM";
            if ( (a1 & 0x2000000) == 0 )
              goto LABEL_49;
            if ( a1 == 33554444 )
            {
              v16 = a2;
              v12 = 0;
              v13 = "500";
              goto LABEL_18;
            }
            goto LABEL_82;
          case 3:
            if ( (a1 & 0x1000000) != 0 )
            {
              v12 = 0;
              v13 = "440";
              goto LABEL_13;
            }
            v13 = "440";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_81;
            v9 = 0;
            goto LABEL_130;
          case 4:
            if ( (a1 & 0x1000000) != 0 )
            {
              v12 = 0;
              v13 = " M4";
              goto LABEL_13;
            }
            v13 = " M4";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_81;
            v9 = 0;
            goto LABEL_130;
          case 5:
            if ( a5 )
            {
              if ( (a1 & 0x1000000) != 0 )
              {
                v12 = 0;
                v13 = "ARMv4T";
                goto LABEL_13;
              }
              v13 = "ARMv4T";
              if ( (a1 & 0x2000000) != 0 )
                goto LABEL_81;
              v9 = 0;
            }
            else
            {
              if ( (a1 & 0x1000000) != 0 )
              {
                v12 = 0;
                v13 = "v4T";
                goto LABEL_13;
              }
              v13 = "v4T";
              if ( (a1 & 0x2000000) != 0 )
                goto LABEL_81;
            }
            goto LABEL_130;
          case 6:
            if ( !a5 )
            {
              if ( (a1 & 0x1000000) != 0 )
              {
                v12 = 0;
                v13 = "v6";
                goto LABEL_13;
              }
              v13 = "v6";
              if ( (a1 & 0x2000000) == 0 )
                goto LABEL_130;
              goto LABEL_81;
            }
            if ( (a1 & 0x1000000) != 0 )
            {
              v12 = 0;
              v13 = "ARMv6";
              goto LABEL_13;
            }
            v13 = "ARMv6";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_81;
            v9 = 0;
            goto LABEL_130;
          case 7:
            if ( (a1 & 0x1000000) != 0 )
            {
              v12 = 0;
              v13 = "v5TEJ";
              goto LABEL_13;
            }
            v13 = "v5TEJ";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_81;
            v9 = 0;
            goto LABEL_130;
          case 8:
            if ( (a1 & 0x1000000) != 0 )
            {
              v12 = 0;
              v13 = " XScale";
              goto LABEL_13;
            }
            v13 = " XScale";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_81;
            v9 = 0;
            goto LABEL_130;
          case 9:
            if ( a5 )
            {
              if ( (a1 & 0x1000000) != 0 )
              {
                v12 = 0;
                v13 = "ARMv7";
                goto LABEL_13;
              }
              v13 = "ARMv7";
              if ( (a1 & 0x2000000) != 0 )
                goto LABEL_81;
              v9 = 0;
            }
            else
            {
              if ( (a1 & 0x1000000) != 0 )
              {
                v12 = 0;
                v13 = "v7";
                goto LABEL_13;
              }
              v13 = "v7";
              if ( (a1 & 0x2000000) != 0 )
                goto LABEL_81;
            }
            goto LABEL_130;
          case 10:
            if ( a5 )
            {
              if ( (a1 & 0x1000000) != 0 )
              {
                v12 = 0;
                v13 = "ARMv7F";
                goto LABEL_13;
              }
              v13 = "ARMv7F";
              if ( (a1 & 0x2000000) != 0 )
                goto LABEL_81;
              v9 = 0;
            }
            else
            {
              if ( (a1 & 0x1000000) != 0 )
              {
                v12 = 0;
                v13 = "v7F";
                goto LABEL_13;
              }
              v13 = "v7F";
              if ( (a1 & 0x2000000) != 0 )
                goto LABEL_81;
            }
            goto LABEL_130;
          case 11:
            if ( !a5 )
            {
              v12 = 0;
              v13 = "v7S";
              v11 = "ARM";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_116;
            }
            if ( (a1 & 0x1000000) != 0 )
            {
              v12 = 0;
              v13 = "ARMv7S";
              goto LABEL_13;
            }
            v13 = "ARMv7S";
            if ( (a1 & 0x2000000) == 0 )
            {
              v9 = 0;
LABEL_130:
              v11 = "ARM";
              goto LABEL_49;
            }
LABEL_81:
            if ( a1 != 33554444 )
            {
LABEL_82:
              v11 = "ARM";
              goto LABEL_83;
            }
            v17 = 9;
            v19 = 8;
            v12 = 0;
            v20 = "ARM64_32";
            goto LABEL_21;
          case 12:
            v12 = 0;
            if ( !a5 )
            {
              v13 = "v7K";
              v11 = "ARM";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_116;
            }
            v13 = "ARMv7K";
            v11 = "ARM";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 13:
            v12 = 0;
            if ( !a5 )
            {
              v13 = "v8";
              v11 = "ARM";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_116;
            }
            v13 = "ARMv8";
            v11 = "ARM";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            break;
          default:
            v12 = 0;
            v13 = "";
            v11 = "ARM";
            if ( (a1 & 0x1000000) == 0 )
              goto LABEL_15;
            goto LABEL_13;
        }
        goto LABEL_15;
      case 0xDu:
        v12 = 0;
        v13 = "";
        v11 = "MC88000";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 0xEu:
        v12 = 0;
        v13 = "";
        v11 = "SPARC";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 0xFu:
        v12 = 0;
        v13 = "";
        v11 = "I860";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 0x12u:
        switch ( a2 )
        {
          case 0:
            if ( !a5 )
            {
              v12 = 1;
              v13 = "";
              v11 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_100;
            }
            v12 = a5;
            v13 = "ALL";
            v11 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_116;
          case 1:
            v12 = 0;
            if ( !a5 )
            {
              v13 = " 601";
              v11 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_116;
            }
            v13 = "PowerPC 601";
            v11 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 2:
            v12 = 0;
            if ( !a5 )
            {
              v13 = " 602";
              v11 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_116;
            }
            v13 = "PowerPC 602";
            v11 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 3:
            if ( !a5 )
            {
              if ( (a1 & 0x1000000) == 0 )
              {
                v12 = 0;
                v13 = " 603";
                v11 = "POWERPC";
                if ( (a1 & 0x2000000) != 0 )
                  goto LABEL_16;
                goto LABEL_49;
              }
              v13 = " 603";
LABEL_270:
              switch ( a1 )
              {
                case 16777223:
LABEL_65:
                  if ( !a5 )
                  {
                    v12 = 1;
                    v13 = "";
                    v20 = "X86_64";
                    v19 = 6;
                    goto LABEL_88;
                  }
                  v12 = a5;
                  v17 = 7;
                  v19 = 6;
                  v13 = "ALL";
                  v20 = "X86_64";
                  break;
                case 16777228:
                  v23 = a2;
                  v12 = 0;
LABEL_59:
                  if ( v23 != 2 )
                    goto LABEL_60;
                  if ( a2 < 0 )
                  {
                    srce = v12;
                    v17 = 6;
                    sub_35470(a4);
                    v19 = 5;
                    v12 = srce;
                    v20 = "ARM64";
                  }
                  else
                  {
                    v18 = a5 == 0;
                    v17 = 6;
                    v19 = 5;
                    v13 = "arm64e";
                    v20 = "ARM64";
                    if ( v18 )
                    {
                      v13 = "e";
                      v20 = "ARM64";
                    }
                  }
                  goto LABEL_21;
                case 16777234:
                  goto LABEL_56;
                case 16777235:
                  goto LABEL_54;
                case 16777236:
                  goto LABEL_271;
                case 16777237:
                  goto LABEL_52;
                case 16777239:
                  goto LABEL_96;
                default:
                  goto LABEL_45;
              }
              goto LABEL_21;
            }
            if ( (a1 & 0x1000000) != 0 )
            {
              v13 = "PowerPC 603";
              goto LABEL_270;
            }
            v12 = 0;
            v13 = "PowerPC 603";
            v11 = "POWERPC";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_16;
            goto LABEL_48;
          case 4:
            if ( !a5 )
            {
              if ( (a1 & 0x1000000) == 0 )
              {
                v12 = 0;
                v13 = " 603e";
                v11 = "POWERPC";
                if ( (a1 & 0x2000000) != 0 )
                  goto LABEL_16;
                goto LABEL_49;
              }
              v13 = " 603e";
LABEL_274:
              switch ( a1 )
              {
                case 16777223:
                  v12 = 0;
LABEL_108:
                  v18 = a5 == 0;
                  v17 = 7;
                  v19 = 6;
                  v13 = "Arch1";
                  v20 = "X86_64";
                  if ( v18 )
                  {
                    v13 = " (arch1)";
                    v20 = "X86_64";
                  }
                  goto LABEL_21;
                case 16777228:
                  v23 = a2;
                  v12 = 0;
LABEL_60:
                  if ( v23 )
                  {
                    v17 = 6;
                    v19 = 5;
                    v20 = "ARM64";
                    goto LABEL_21;
                  }
                  v12 = 1;
                  v13 = "";
                  v20 = "ARM64";
                  v19 = 5;
                  break;
                case 16777234:
                  goto LABEL_56;
                case 16777235:
                  goto LABEL_54;
                case 16777236:
                  goto LABEL_271;
                case 16777237:
                  goto LABEL_52;
                case 16777239:
                  goto LABEL_96;
                default:
                  goto LABEL_45;
              }
              goto LABEL_88;
            }
            if ( (a1 & 0x1000000) != 0 )
            {
              v13 = "PowerPC 603e";
              goto LABEL_274;
            }
            v12 = 0;
            v13 = "PowerPC 603e";
            v11 = "POWERPC";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_16;
            goto LABEL_48;
          case 5:
            v12 = 0;
            if ( !a5 )
            {
              v13 = " 603ev";
              v11 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_116;
            }
            v13 = "PowerPC 603ev";
            v11 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 6:
            v12 = 0;
            if ( !a5 )
            {
              v13 = " 604";
              v11 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_116;
            }
            v13 = "PowerPC 604";
            v11 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 7:
            v12 = 0;
            if ( !a5 )
            {
              v13 = " 604e";
              v11 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_116;
            }
            v13 = "PowerPC 604e";
            v11 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 8:
            if ( !a5 )
            {
              if ( (a1 & 0x1000000) == 0 )
              {
                v12 = 0;
                v13 = " 620";
                v11 = "POWERPC";
                if ( (a1 & 0x2000000) != 0 )
                  goto LABEL_16;
                goto LABEL_49;
              }
              v13 = " 620";
LABEL_277:
              switch ( a1 )
              {
                case 16777223:
                  v12 = 0;
LABEL_200:
                  v18 = a5 == 0;
                  v17 = 7;
                  v19 = 6;
                  v13 = "Haswell";
                  v20 = "X86_64";
                  if ( v18 )
                  {
                    v13 = " (x86_64h)";
                    v20 = "X86_64";
                  }
                  goto LABEL_21;
                case 16777228:
                  v17 = 6;
                  v19 = 5;
                  v12 = 0;
                  v20 = "ARM64";
                  goto LABEL_21;
                case 16777234:
LABEL_56:
                  v12 = 0;
LABEL_57:
                  v17 = 10;
                  v19 = 9;
                  v20 = "POWERPC64";
                  goto LABEL_21;
                case 16777235:
LABEL_54:
                  v12 = 0;
LABEL_55:
                  v17 = 9;
                  v19 = 8;
                  v20 = "applegpu";
                  goto LABEL_21;
                case 16777236:
LABEL_271:
                  v17 = 7;
                  v19 = 6;
                  v12 = 0;
                  v20 = "amdgpu";
                  goto LABEL_21;
                case 16777237:
LABEL_52:
                  v12 = 0;
LABEL_53:
                  v17 = 9;
                  v19 = 8;
                  v20 = "intelgpu";
                  goto LABEL_21;
                case 16777239:
LABEL_96:
                  v12 = 0;
LABEL_97:
                  v20 = "AIR64";
                  v19 = 5;
                  goto LABEL_88;
                default:
LABEL_45:
                  result = sub_35470(a3);
                  break;
              }
              return result;
            }
            if ( (a1 & 0x1000000) != 0 )
            {
              v13 = "PowerPC 620";
              goto LABEL_277;
            }
            v12 = 0;
            v13 = "PowerPC 620";
            v11 = "POWERPC";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_16;
            break;
          case 9:
            v12 = 0;
            if ( !a5 )
            {
              v13 = " 750";
              v11 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_116;
            }
            v13 = "PowerPC 750";
            v11 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 10:
            v12 = 0;
            if ( !a5 )
            {
              v13 = " 7400";
              v11 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_116;
            }
            v13 = "PowerPC 7400";
            v11 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 11:
            v12 = 0;
            if ( !a5 )
            {
              v13 = " 7450";
              v11 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_116;
            }
            v13 = "PowerPC 7450";
            v11 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 100:
            v12 = 0;
            if ( !a5 )
            {
              v13 = " 970";
              v11 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_116;
            }
            v13 = "PowerPC 970";
            v11 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          default:
            v12 = 0;
            v13 = "";
            v11 = "POWERPC";
            if ( (a1 & 0x1000000) == 0 )
              goto LABEL_15;
            goto LABEL_13;
        }
        break;
      default:
        goto LABEL_4;
    }
LABEL_48:
    v9 = 0;
LABEL_49:
    srcc = v11;
    v47 = v9;
    v22 = strlen(v11);
    v12 = v47;
    v20 = srcc;
    v19 = v22;
LABEL_88:
    v17 = v19 + 1;
    goto LABEL_21;
  }
LABEL_4:
  result = sub_35470(a3);
  v11 = s1;
  if ( a3[1] )
    v11 = (const char *)*a3;
  v12 = 0;
  v13 = "";
  if ( (a1 & 0x1000000) != 0 )
    goto LABEL_13;
  if ( (a1 & 0x2000000) == 0 )
  {
    if ( !v11 || (srcd = v11, result = (__int64 *)strlen(v11), v20 = srcd, (v19 = (size_t)result) == 0) )
    {
      v13 = "";
      v14 = 0;
      a3[1] = 0;
      if ( !aErrorLoadingDy[27] )
        goto LABEL_24;
      goto LABEL_10;
    }
    v12 = 0;
    v13 = "";
    goto LABEL_88;
  }
  if ( a1 == 33554444 )
  {
    v12 = 0;
    v13 = "";
LABEL_17:
    v16 = a2 & 0xFFFFFF;
    if ( (a2 & 0xFFFFFF) == 0 )
    {
      v12 = 1;
      v13 = "";
      v20 = "ARM64_32";
      v19 = 8;
      goto LABEL_88;
    }
LABEL_18:
    v17 = 9;
    if ( v16 == 1 )
    {
      v18 = a5 == 0;
      v13 = "_V8";
      v19 = 8;
      v20 = "ARM64_32";
      if ( !v18 )
      {
        v13 = "ARM64_32_V8";
        v20 = "ARM64_32";
      }
    }
    else
    {
      v19 = 8;
      v20 = "ARM64_32";
    }
LABEL_21:
    v21 = (void *)*a3;
    if ( a3[2] < v17 )
    {
      v48 = v12;
      srca = v20;
      v36 = qvector_reserve();
      v12 = v48;
      v20 = srca;
      *a3 = v36;
      v21 = (void *)v36;
    }
    a3[1] = v17;
    srcb = v12;
    memmove(v21, v20, v19);
    result = (__int64 *)*a3;
    v18 = *v13 == 0;
    v14 = srcb;
    *(_BYTE *)(*a3 + v19) = 0;
    if ( v18 )
    {
LABEL_24:
      if ( !v14 )
      {
        if ( (unsigned __int64)a4[1] <= 1 )
          return sub_35470(a4);
        return result;
      }
    }
LABEL_10:
    result = (__int64 *)strlen(v13);
    v15 = result;
    if ( result )
    {
      v25 = (_QWORD *)*a4;
      v26 = (char *)result + 1;
      if ( a4[2] < (unsigned __int64)result + 1 )
      {
        v39 = qvector_reserve();
        *a4 = v39;
        v25 = (_QWORD *)v39;
      }
      a4[1] = (__int64)v26;
      if ( (unsigned int)v15 >= 8 )
      {
        *v25 = *(_QWORD *)v13;
        *(_QWORD *)((char *)v25 + (unsigned int)v15 - 8) = *(_QWORD *)&v13[(unsigned int)v15 - 8];
        v29 = (unsigned __int64)(v25 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v30 = (char *)v25 - v29;
        v31 = (char *)(v13 - v30);
        v32 = ((_DWORD)v15 + (_DWORD)v30) & 0xFFFFFFF8;
        if ( v32 >= 8 )
        {
          v33 = v32 & 0xFFFFFFF8;
          v34 = 0;
          do
          {
            v35 = v34;
            v34 += 8;
            *(_QWORD *)(v29 + v35) = *(_QWORD *)&v31[v35];
          }
          while ( v34 < v33 );
        }
      }
      else if ( ((unsigned __int8)v15 & 4) != 0 )
      {
        *(_DWORD *)v25 = *(_DWORD *)v13;
        *(_DWORD *)((char *)v25 + (unsigned int)v15 - 4) = *(_DWORD *)&v13[(unsigned int)v15 - 4];
      }
      else if ( (_DWORD)v15 )
      {
        *(_BYTE *)v25 = *v13;
        if ( ((unsigned __int8)v15 & 2) != 0 )
          *(_WORD *)((char *)v25 + (unsigned int)v15 - 2) = *(_WORD *)&v13[(unsigned int)v15 - 2];
      }
      result = (__int64 *)*a4;
      *((_BYTE *)v15 + *a4) = 0;
    }
    else
    {
      a4[1] = 0;
    }
    return result;
  }
  if ( !v11 )
    goto LABEL_84;
LABEL_83:
  src = v11;
  result = (__int64 *)strlen(v11);
  v27 = src;
  v28 = (size_t)result;
  if ( !result )
  {
LABEL_84:
    a3[1] = 0;
    return result;
  }
  v37 = (void *)*a3;
  v38 = (char *)result + 1;
  if ( a3[2] < (unsigned __int64)result + 1 )
  {
    v40 = qvector_reserve();
    v27 = src;
    *a3 = v40;
    v37 = (void *)v40;
  }
  a3[1] = (__int64)v38;
  memmove(v37, v27, v28);
  result = (__int64 *)*a3;
  *(_BYTE *)(*a3 + v28) = 0;
  return result;
}

