__int64 __fastcall sub_3CDB0(int a1, int a2, __int64 *a3, __int64 *a4, const char *a5, int a6)
{
  signed int v6; // eax
  char v8; // r13
  __int64 *v9; // r12
  int v11; // kr00_4
  char v12; // cl
  __int64 result; // rax
  int v14; // ecx
  char *v15; // r15
  int v16; // r9d
  __int64 v17; // rbx
  int v18; // eax
  unsigned __int64 v19; // rbx
  bool v20; // zf
  size_t v21; // r13
  void *v22; // rdi
  size_t v23; // rax
  int v24; // eax
  int v25; // eax
  _QWORD *v26; // rsi
  __int64 v27; // rbp
  const char *v28; // r8
  size_t v29; // rbx
  unsigned __int64 v30; // rax
  char *v31; // rsi
  char *v32; // r15
  unsigned int v33; // esi
  unsigned int v34; // esi
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rax
  void *v38; // rdi
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  int v43; // ecx
  char *v44; // rdx
  const char *v45; // rsi
  unsigned __int8 srcc; // [rsp+0h] [rbp-48h]
  const char *srcd; // [rsp+0h] [rbp-48h]
  const char *src; // [rsp+0h] [rbp-48h]
  const char *srcb; // [rsp+0h] [rbp-48h]
  const char *srce; // [rsp+0h] [rbp-48h]
  char srca; // [rsp+0h] [rbp-48h]
  char v52; // [rsp+Fh] [rbp-39h]
  char v53; // [rsp+Fh] [rbp-39h]

  v6 = a1 & 0xFCFFFFFF;
  v8 = (char)a5;
  v9 = a4;
  if ( (int)(a1 & 0xFCFFFFFF) > 18 )
  {
    if ( v6 == 255 )
    {
      a6 = 0;
      v15 = "";
      a5 = "VEO";
      if ( (a1 & 0x1000000) == 0 )
      {
LABEL_15:
        if ( (a1 & 0x2000000) == 0 )
          goto LABEL_49;
LABEL_16:
        if ( a1 != 33554444 )
          goto LABEL_84;
        goto LABEL_17;
      }
LABEL_13:
      switch ( a1 )
      {
        case 16777223:
          v25 = a2 & 0xFFFFFF;
          if ( (a2 & 0xFFFFFF) == 4 )
            goto LABEL_109;
          if ( v25 == 8 )
            goto LABEL_201;
          if ( v25 == 3 )
            goto LABEL_66;
          v19 = 7;
          v21 = 6;
          a5 = "X86_64";
          break;
        case 16777228:
          v24 = a2 & 0xFFFFFF;
          if ( (a2 & 0xFFFFFF) != 1 )
            goto LABEL_60;
          v20 = v8 == 0;
          v19 = 6;
          v21 = 5;
          v15 = "ARM64_V8";
          a5 = "ARM64";
          if ( v20 )
          {
            v15 = "v8";
            a5 = "ARM64";
          }
          goto LABEL_21;
        case 16777234:
          goto LABEL_58;
        case 16777235:
          goto LABEL_56;
        case 16777236:
          v19 = 7;
          v21 = 6;
          a5 = "amdgpu";
          goto LABEL_21;
        case 16777237:
          goto LABEL_54;
        case 16777239:
          goto LABEL_98;
        default:
          goto LABEL_46;
      }
      goto LABEL_21;
    }
  }
  else if ( v6 > 0 )
  {
    v11 = (int)a4;
    v12 = (char)a5;
    switch ( a1 & 0xFCFFFFFF )
    {
      case 1u:
        a6 = 0;
        v15 = "";
        a5 = "VAX";
        if ( (a1 & 0x1000000) != 0 )
          goto LABEL_13;
        goto LABEL_15;
      case 2u:
        a6 = 0;
        v15 = "";
        a5 = "ROMP";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 4u:
        a6 = 0;
        v15 = "";
        a5 = "NS32032";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 5u:
        a6 = 0;
        v15 = "";
        a5 = "NS32332";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 6u:
        a6 = 0;
        v15 = "";
        a5 = "MC680x0";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 7u:
        if ( a2 != 3 && (unsigned int)a2 >> 4 )
        {
          a6 = 0;
          v15 = "";
          a5 = "I386";
          if ( (a1 & 0x1000000) != 0 )
            goto LABEL_13;
          goto LABEL_15;
        }
        if ( (_BYTE)a5 )
        {
          a6 = (int)a5;
          v15 = "ALL";
          a5 = "I386";
          if ( (a1 & 0x1000000) != 0 )
            goto LABEL_13;
LABEL_117:
          if ( (a1 & 0x2000000) != 0 )
            goto LABEL_16;
        }
        else
        {
          a6 = 1;
          v15 = "";
          a5 = "I386";
          if ( (a1 & 0x1000000) != 0 )
            goto LABEL_13;
LABEL_101:
          v12 = 1;
          if ( (a1 & 0x2000000) != 0 )
            goto LABEL_16;
        }
        goto LABEL_50;
      case 0xBu:
        a6 = 0;
        v15 = "";
        a5 = "HPPA";
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
              a6 = 0;
              v15 = "500";
              a5 = "ARM";
              goto LABEL_13;
            }
            v12 = 0;
            v15 = "500";
            a5 = "ARM";
            if ( (a1 & 0x2000000) == 0 )
              goto LABEL_50;
            if ( a1 == 33554444 )
            {
              v18 = a2;
              LOBYTE(a6) = 0;
              v15 = "500";
              goto LABEL_18;
            }
            goto LABEL_83;
          case 3:
            if ( (a1 & 0x1000000) != 0 )
            {
              a6 = 0;
              v15 = "440";
              a5 = "ARM";
              goto LABEL_13;
            }
            v15 = "440";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_82;
            v12 = 0;
            goto LABEL_131;
          case 4:
            if ( (a1 & 0x1000000) != 0 )
            {
              a6 = 0;
              v15 = " M4";
              a5 = "ARM";
              goto LABEL_13;
            }
            v15 = " M4";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_82;
            v12 = 0;
            goto LABEL_131;
          case 5:
            if ( (_BYTE)a5 )
            {
              if ( (a1 & 0x1000000) != 0 )
              {
                a6 = 0;
                v15 = "ARMv4T";
                a5 = "ARM";
                goto LABEL_13;
              }
              v15 = "ARMv4T";
              if ( (a1 & 0x2000000) != 0 )
                goto LABEL_82;
              v12 = 0;
            }
            else
            {
              if ( (a1 & 0x1000000) != 0 )
              {
                a6 = 0;
                v15 = "v4T";
                a5 = "ARM";
                goto LABEL_13;
              }
              v15 = "v4T";
              if ( (a1 & 0x2000000) != 0 )
                goto LABEL_82;
            }
            goto LABEL_131;
          case 6:
            if ( !(_BYTE)a5 )
            {
              if ( (a1 & 0x1000000) != 0 )
              {
                a6 = 0;
                v15 = "v6";
                a5 = "ARM";
                goto LABEL_13;
              }
              v15 = "v6";
              if ( (a1 & 0x2000000) == 0 )
                goto LABEL_131;
              goto LABEL_82;
            }
            if ( (a1 & 0x1000000) != 0 )
            {
              a6 = 0;
              v15 = "ARMv6";
              a5 = "ARM";
              goto LABEL_13;
            }
            v15 = "ARMv6";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_82;
            v12 = 0;
            goto LABEL_131;
          case 7:
            if ( (a1 & 0x1000000) != 0 )
            {
              a6 = 0;
              v15 = "v5TEJ";
              a5 = "ARM";
              goto LABEL_13;
            }
            v15 = "v5TEJ";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_82;
            v12 = 0;
            goto LABEL_131;
          case 8:
            if ( (a1 & 0x1000000) != 0 )
            {
              a6 = 0;
              v15 = " XScale";
              a5 = "ARM";
              goto LABEL_13;
            }
            v15 = " XScale";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_82;
            v12 = 0;
            goto LABEL_131;
          case 9:
            if ( (_BYTE)a5 )
            {
              if ( (a1 & 0x1000000) != 0 )
              {
                a6 = 0;
                v15 = "ARMv7";
                a5 = "ARM";
                goto LABEL_13;
              }
              v15 = "ARMv7";
              if ( (a1 & 0x2000000) != 0 )
                goto LABEL_82;
              v12 = 0;
            }
            else
            {
              if ( (a1 & 0x1000000) != 0 )
              {
                a6 = 0;
                v15 = "v7";
                a5 = "ARM";
                goto LABEL_13;
              }
              v15 = "v7";
              if ( (a1 & 0x2000000) != 0 )
                goto LABEL_82;
            }
            goto LABEL_131;
          case 10:
            if ( (_BYTE)a5 )
            {
              if ( (a1 & 0x1000000) != 0 )
              {
                a6 = 0;
                v15 = "ARMv7F";
                a5 = "ARM";
                goto LABEL_13;
              }
              v15 = "ARMv7F";
              if ( (a1 & 0x2000000) != 0 )
                goto LABEL_82;
              v12 = 0;
            }
            else
            {
              if ( (a1 & 0x1000000) != 0 )
              {
                a6 = 0;
                v15 = "v7F";
                a5 = "ARM";
                goto LABEL_13;
              }
              v15 = "v7F";
              if ( (a1 & 0x2000000) != 0 )
                goto LABEL_82;
            }
            goto LABEL_131;
          case 11:
            if ( !(_BYTE)a5 )
            {
              a6 = 0;
              v15 = "v7S";
              a5 = "ARM";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_117;
            }
            if ( (a1 & 0x1000000) != 0 )
            {
              a6 = 0;
              v15 = "ARMv7S";
              a5 = "ARM";
              goto LABEL_13;
            }
            v15 = "ARMv7S";
            if ( (a1 & 0x2000000) == 0 )
            {
              v12 = 0;
LABEL_131:
              a5 = "ARM";
              goto LABEL_50;
            }
LABEL_82:
            if ( a1 != 33554444 )
            {
LABEL_83:
              a5 = "ARM";
              goto LABEL_84;
            }
            v19 = 9;
            v21 = 8;
            LOBYTE(a6) = 0;
            a5 = "ARM64_32";
            goto LABEL_21;
          case 12:
            a6 = 0;
            if ( !(_BYTE)a5 )
            {
              v15 = "v7K";
              a5 = "ARM";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_117;
            }
            v15 = "ARMv7K";
            a5 = "ARM";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 13:
            a6 = 0;
            if ( !(_BYTE)a5 )
            {
              v15 = "v8";
              a5 = "ARM";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_117;
            }
            v15 = "ARMv8";
            a5 = "ARM";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            break;
          default:
            a6 = 0;
            v15 = "";
            a5 = "ARM";
            if ( (a1 & 0x1000000) == 0 )
              goto LABEL_15;
            goto LABEL_13;
        }
        goto LABEL_15;
      case 0xDu:
        a6 = 0;
        v15 = "";
        a5 = "MC88000";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 0xEu:
        a6 = 0;
        v15 = "";
        a5 = "SPARC";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 0xFu:
        a6 = 0;
        v15 = "";
        a5 = "I860";
        if ( (a1 & 0x1000000) == 0 )
          goto LABEL_15;
        goto LABEL_13;
      case 0x12u:
        switch ( a2 )
        {
          case 0:
            if ( !(_BYTE)a5 )
            {
              a6 = 1;
              v15 = "";
              a5 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_101;
            }
            a6 = (int)a5;
            v15 = "ALL";
            a5 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_117;
          case 1:
            a6 = 0;
            if ( !(_BYTE)a5 )
            {
              v15 = " 601";
              a5 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_117;
            }
            v15 = "PowerPC 601";
            a5 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 2:
            a6 = 0;
            if ( !(_BYTE)a5 )
            {
              v15 = " 602";
              a5 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_117;
            }
            v15 = "PowerPC 602";
            a5 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 3:
            if ( !(_BYTE)a5 )
            {
              if ( (a1 & 0x1000000) == 0 )
              {
                LOBYTE(a6) = 0;
                v15 = " 603";
                a5 = "POWERPC";
                if ( (a1 & 0x2000000) != 0 )
                  goto LABEL_16;
                goto LABEL_50;
              }
              v15 = " 603";
LABEL_278:
              switch ( a1 )
              {
                case 16777223:
LABEL_66:
                  if ( !v8 )
                  {
                    LOBYTE(a6) = 1;
                    v15 = "";
                    a5 = "X86_64";
                    v21 = 6;
                    goto LABEL_89;
                  }
                  LOBYTE(a6) = v8;
                  v19 = 7;
                  v21 = 6;
                  v15 = "ALL";
                  a5 = "X86_64";
                  break;
                case 16777228:
                  v24 = a2;
                  a6 = 0;
LABEL_60:
                  if ( v24 != 2 )
                    goto LABEL_61;
                  if ( a2 < 0 )
                  {
                    srca = a6;
                    v42 = a2 & 0x40000000;
                    v43 = (a2 >> 24) & 0xF;
                    if ( v8 )
                    {
                      v44 = "";
                      if ( v42 )
                        v44 = "kernel ";
                      v45 = "arm64e (ptrauth %sABI v%d)";
                    }
                    else
                    {
                      v44 = "";
                      if ( v42 )
                        v44 = (char *)"k";
                      v45 = "e-%spauth%d";
                    }
                    v19 = 6;
                    sub_35470((_DWORD)v9, (_DWORD)v45, (_DWORD)v44, v43, (_DWORD)a5, a6);
                    v21 = 5;
                    LOBYTE(a6) = srca;
                    a5 = "ARM64";
                  }
                  else
                  {
                    v20 = v8 == 0;
                    v19 = 6;
                    v21 = 5;
                    v15 = "arm64e";
                    a5 = "ARM64";
                    if ( v20 )
                    {
                      v15 = "e";
                      a5 = "ARM64";
                    }
                  }
                  goto LABEL_21;
                case 16777234:
                  goto LABEL_57;
                case 16777235:
                  goto LABEL_55;
                case 16777236:
                  goto LABEL_279;
                case 16777237:
                  goto LABEL_53;
                case 16777239:
                  goto LABEL_97;
                default:
                  goto LABEL_45;
              }
              goto LABEL_21;
            }
            if ( (a1 & 0x1000000) != 0 )
            {
              v15 = "PowerPC 603";
              goto LABEL_278;
            }
            LOBYTE(a6) = 0;
            v15 = "PowerPC 603";
            a5 = "POWERPC";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_16;
            goto LABEL_49;
          case 4:
            if ( !(_BYTE)a5 )
            {
              if ( (a1 & 0x1000000) == 0 )
              {
                LOBYTE(a6) = 0;
                v15 = " 603e";
                a5 = "POWERPC";
                if ( (a1 & 0x2000000) != 0 )
                  goto LABEL_16;
                goto LABEL_50;
              }
              v15 = " 603e";
LABEL_282:
              switch ( a1 )
              {
                case 16777223:
                  LOBYTE(a6) = 0;
LABEL_109:
                  v20 = v8 == 0;
                  v19 = 7;
                  v21 = 6;
                  v15 = "Arch1";
                  a5 = "X86_64";
                  if ( v20 )
                  {
                    v15 = " (arch1)";
                    a5 = "X86_64";
                  }
                  goto LABEL_21;
                case 16777228:
                  v24 = a2;
                  LOBYTE(a6) = 0;
LABEL_61:
                  if ( v24 )
                  {
                    v19 = 6;
                    v21 = 5;
                    a5 = "ARM64";
                    goto LABEL_21;
                  }
                  LOBYTE(a6) = 1;
                  v15 = "";
                  a5 = "ARM64";
                  v21 = 5;
                  break;
                case 16777234:
                  goto LABEL_57;
                case 16777235:
                  goto LABEL_55;
                case 16777236:
                  goto LABEL_279;
                case 16777237:
                  goto LABEL_53;
                case 16777239:
                  goto LABEL_97;
                default:
                  goto LABEL_45;
              }
              goto LABEL_89;
            }
            if ( (a1 & 0x1000000) != 0 )
            {
              v15 = "PowerPC 603e";
              goto LABEL_282;
            }
            LOBYTE(a6) = 0;
            v15 = "PowerPC 603e";
            a5 = "POWERPC";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_16;
            goto LABEL_49;
          case 5:
            a6 = 0;
            if ( !(_BYTE)a5 )
            {
              v15 = " 603ev";
              a5 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_117;
            }
            v15 = "PowerPC 603ev";
            a5 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 6:
            a6 = 0;
            if ( !(_BYTE)a5 )
            {
              v15 = " 604";
              a5 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_117;
            }
            v15 = "PowerPC 604";
            a5 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 7:
            a6 = 0;
            if ( !(_BYTE)a5 )
            {
              v15 = " 604e";
              a5 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_117;
            }
            v15 = "PowerPC 604e";
            a5 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 8:
            if ( !(_BYTE)a5 )
            {
              if ( (a1 & 0x1000000) == 0 )
              {
                LOBYTE(a6) = 0;
                v15 = " 620";
                a5 = "POWERPC";
                if ( (a1 & 0x2000000) != 0 )
                  goto LABEL_16;
                goto LABEL_50;
              }
              v15 = " 620";
LABEL_285:
              switch ( a1 )
              {
                case 16777223:
                  LOBYTE(a6) = 0;
LABEL_201:
                  v20 = v8 == 0;
                  v19 = 7;
                  v21 = 6;
                  v15 = "Haswell";
                  a5 = "X86_64";
                  if ( v20 )
                  {
                    v15 = " (x86_64h)";
                    a5 = "X86_64";
                  }
                  goto LABEL_21;
                case 16777228:
                  v19 = 6;
                  v21 = 5;
                  LOBYTE(a6) = 0;
                  a5 = "ARM64";
                  goto LABEL_21;
                case 16777234:
LABEL_57:
                  LOBYTE(a6) = 0;
LABEL_58:
                  v19 = 10;
                  v21 = 9;
                  a5 = "POWERPC64";
                  goto LABEL_21;
                case 16777235:
LABEL_55:
                  LOBYTE(a6) = 0;
LABEL_56:
                  v19 = 9;
                  v21 = 8;
                  a5 = "applegpu";
                  goto LABEL_21;
                case 16777236:
LABEL_279:
                  v19 = 7;
                  v21 = 6;
                  LOBYTE(a6) = 0;
                  a5 = "amdgpu";
                  goto LABEL_21;
                case 16777237:
LABEL_53:
                  LOBYTE(a6) = 0;
LABEL_54:
                  v19 = 9;
                  v21 = 8;
                  a5 = "intelgpu";
                  goto LABEL_21;
                case 16777239:
LABEL_97:
                  LOBYTE(a6) = 0;
LABEL_98:
                  a5 = "AIR64";
                  v21 = 5;
                  goto LABEL_89;
                default:
LABEL_45:
                  a5 = "POWERPC";
LABEL_46:
                  result = sub_35470((_DWORD)a3, (unsigned int)"%s64%s", (_DWORD)a5, (_DWORD)v15, (_DWORD)a5, a6);
                  break;
              }
              return result;
            }
            if ( (a1 & 0x1000000) != 0 )
            {
              v15 = "PowerPC 620";
              goto LABEL_285;
            }
            LOBYTE(a6) = 0;
            v15 = "PowerPC 620";
            a5 = "POWERPC";
            if ( (a1 & 0x2000000) != 0 )
              goto LABEL_16;
            break;
          case 9:
            a6 = 0;
            if ( !(_BYTE)a5 )
            {
              v15 = " 750";
              a5 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_117;
            }
            v15 = "PowerPC 750";
            a5 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 10:
            a6 = 0;
            if ( !(_BYTE)a5 )
            {
              v15 = " 7400";
              a5 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_117;
            }
            v15 = "PowerPC 7400";
            a5 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 11:
            a6 = 0;
            if ( !(_BYTE)a5 )
            {
              v15 = " 7450";
              a5 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_117;
            }
            v15 = "PowerPC 7450";
            a5 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          case 100:
            a6 = 0;
            if ( !(_BYTE)a5 )
            {
              v15 = " 970";
              a5 = "POWERPC";
              if ( (a1 & 0x1000000) != 0 )
                goto LABEL_13;
              goto LABEL_117;
            }
            v15 = "PowerPC 970";
            a5 = "POWERPC";
            if ( (a1 & 0x1000000) != 0 )
              goto LABEL_13;
            goto LABEL_15;
          default:
            a6 = 0;
            v15 = "";
            a5 = "POWERPC";
            if ( (a1 & 0x1000000) == 0 )
              goto LABEL_15;
            goto LABEL_13;
        }
        break;
      default:
        LODWORD(a4) = v11;
        goto LABEL_4;
    }
LABEL_49:
    v12 = 0;
LABEL_50:
    srcd = a5;
    v52 = v12;
    v23 = strlen(a5);
    LOBYTE(a6) = v52;
    a5 = srcd;
    v21 = v23;
LABEL_89:
    v19 = v21 + 1;
    goto LABEL_21;
  }
LABEL_4:
  result = sub_35470((_DWORD)a3, (unsigned int)"0x%02X", a1, (_DWORD)a4, (_DWORD)a5, a6);
  a5 = s1;
  if ( a3[1] )
    a5 = (const char *)*a3;
  a6 = 0;
  v15 = "";
  if ( (a1 & 0x1000000) != 0 )
    goto LABEL_13;
  if ( (a1 & 0x2000000) == 0 )
  {
    if ( !a5 || (srce = a5, result = strlen(a5), a5 = srce, (v21 = result) == 0) )
    {
      v15 = "";
      v16 = 0;
      a3[1] = 0;
      if ( !aErrorLoadingDy[27] )
        goto LABEL_24;
      goto LABEL_10;
    }
    LOBYTE(a6) = 0;
    v15 = "";
    goto LABEL_89;
  }
  if ( a1 == 33554444 )
  {
    LOBYTE(a6) = 0;
    v15 = "";
LABEL_17:
    v18 = a2 & 0xFFFFFF;
    if ( (a2 & 0xFFFFFF) == 0 )
    {
      LOBYTE(a6) = 1;
      v15 = "";
      a5 = "ARM64_32";
      v21 = 8;
      goto LABEL_89;
    }
LABEL_18:
    v19 = 9;
    if ( v18 == 1 )
    {
      v20 = v8 == 0;
      v15 = "_V8";
      v21 = 8;
      a5 = "ARM64_32";
      if ( !v20 )
      {
        v15 = "ARM64_32_V8";
        a5 = "ARM64_32";
      }
    }
    else
    {
      v21 = 8;
      a5 = "ARM64_32";
    }
LABEL_21:
    v22 = (void *)*a3;
    if ( a3[2] < v19 )
    {
      v53 = a6;
      srcb = a5;
      v37 = qvector_reserve(a3, *a3, v19, 1);
      LOBYTE(a6) = v53;
      a5 = srcb;
      *a3 = v37;
      v22 = (void *)v37;
    }
    a3[1] = v19;
    srcc = a6;
    memmove(v22, a5, v21);
    result = *a3;
    v20 = *v15 == 0;
    v16 = srcc;
    *(_BYTE *)(*a3 + v21) = 0;
    if ( v20 )
    {
LABEL_24:
      if ( !(_BYTE)v16 )
      {
        if ( (unsigned __int64)v9[1] <= 1 )
          return sub_35470((_DWORD)v9, (unsigned int)" (subtype 0x%02X)", a2, v14, (_DWORD)a5, v16);
        return result;
      }
    }
LABEL_10:
    result = strlen(v15);
    v17 = result;
    if ( result )
    {
      v26 = (_QWORD *)*v9;
      v27 = result + 1;
      if ( v9[2] < (unsigned __int64)(result + 1) )
      {
        v40 = qvector_reserve(v9, v26, result + 1, 1);
        *v9 = v40;
        v26 = (_QWORD *)v40;
      }
      v9[1] = v27;
      if ( (unsigned int)v17 >= 8 )
      {
        *v26 = *(_QWORD *)v15;
        *(_QWORD *)((char *)v26 + (unsigned int)v17 - 8) = *(_QWORD *)&v15[(unsigned int)v17 - 8];
        v30 = (unsigned __int64)(v26 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v31 = (char *)v26 - v30;
        v32 = (char *)(v15 - v31);
        v33 = (v17 + (_DWORD)v31) & 0xFFFFFFF8;
        if ( v33 >= 8 )
        {
          v34 = v33 & 0xFFFFFFF8;
          v35 = 0;
          do
          {
            v36 = v35;
            v35 += 8;
            *(_QWORD *)(v30 + v36) = *(_QWORD *)&v32[v36];
          }
          while ( v35 < v34 );
        }
      }
      else if ( (v17 & 4) != 0 )
      {
        *(_DWORD *)v26 = *(_DWORD *)v15;
        *(_DWORD *)((char *)v26 + (unsigned int)v17 - 4) = *(_DWORD *)&v15[(unsigned int)v17 - 4];
      }
      else if ( (_DWORD)v17 )
      {
        *(_BYTE *)v26 = *v15;
        if ( (v17 & 2) != 0 )
          *(_WORD *)((char *)v26 + (unsigned int)v17 - 2) = *(_WORD *)&v15[(unsigned int)v17 - 2];
      }
      result = *v9;
      *(_BYTE *)(*v9 + v17) = 0;
    }
    else
    {
      v9[1] = 0;
    }
    return result;
  }
  if ( !a5 )
    goto LABEL_85;
LABEL_84:
  src = a5;
  result = strlen(a5);
  v28 = src;
  v29 = result;
  if ( !result )
  {
LABEL_85:
    a3[1] = 0;
    return result;
  }
  v38 = (void *)*a3;
  v39 = result + 1;
  if ( a3[2] < (unsigned __int64)(result + 1) )
  {
    v41 = qvector_reserve(a3, *a3, result + 1, 1);
    v28 = src;
    *a3 = v41;
    v38 = (void *)v41;
  }
  a3[1] = v39;
  memmove(v38, v28, v29);
  result = *a3;
  *(_BYTE *)(*a3 + v29) = 0;
  return result;
}
