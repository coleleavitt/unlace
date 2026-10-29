__int64 __fastcall sub_BE80(
        __int64 a1,
        __int64 i,
        _QWORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        __int64 *a7,
        __int64 a8,
        int a9,
        char a10)
{
  _DWORD *v11; // rdi
  int v12; // ebx
  __int64 v13; // rcx
  __int64 sreg; // rax
  int lookback; // r14d
  unsigned __int64 *v16; // rax
  char v17; // r15
  __int64 v18; // rcx
  unsigned __int16 v19; // ax
  __int64 v20; // rdx
  char *v21; // rdx
  __int64 result; // rax
  __int64 v23; // rdi
  char v24; // al
  __int64 v25; // rcx
  __int64 v26; // rbx
  char v27; // dl
  bool v28; // cf
  bool v29; // zf
  _QWORD *v30; // rcx
  char v31; // al
  __int64 v34; // [rsp+18h] [rbp-1F0h]
  _QWORD *v37; // [rsp+38h] [rbp-1D0h]
  char v39; // [rsp+57h] [rbp-1B1h] BYREF
  __int64 v40; // [rsp+58h] [rbp-1B0h] BYREF
  __int128 v41; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v42; // [rsp+70h] [rbp-198h]
  __int64 v43; // [rsp+78h] [rbp-190h]
  __int64 v44; // [rsp+80h] [rbp-188h]
  _BYTE v45[6]; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int16 v46; // [rsp+8Eh] [rbp-17Ah]
  __int64 v47; // [rsp+98h] [rbp-170h]
  char v48; // [rsp+B0h] [rbp-158h] BYREF
  char v49; // [rsp+B1h] [rbp-157h]
  unsigned __int16 v50; // [rsp+B6h] [rbp-152h]
  __int64 v51; // [rsp+B8h] [rbp-150h]
  __int64 v52; // [rsp+C0h] [rbp-148h]
  char v53; // [rsp+D0h] [rbp-138h]
  char v54; // [rsp+D9h] [rbp-12Fh]
  unsigned __int16 v55; // [rsp+DEh] [rbp-12Ah]
  __int64 v56; // [rsp+E0h] [rbp-128h]
  __int64 v57; // [rsp+108h] [rbp-100h]
  unsigned __int64 v58; // [rsp+1C8h] [rbp-40h] BYREF
  __int64 v59; // [rsp+218h] [rbp+10h]

  v11 = a4;
  v12 = a9;
  v37 = (_QWORD *)i;
  v13 = a8;
  v58 = __readfsqword(0x28u);
  if ( a3 )
  {
    *a3 = -1;
    if ( !v11 )
    {
      if ( under_debugger )
        goto LABEL_149;
      interr(10391, i, a3, a8);
      goto LABEL_143;
    }
    *a4 = -1;
  }
  if ( a5 )
  {
    *a5 = -1;
    if ( !a6 )
      goto LABEL_139;
    *a6 = -1;
  }
  if ( a7 )
    *a7 = -1;
  if ( a8 )
  {
    if ( (a9 & 0xFFFFFFF6) == 0x10 )
    {
      v11 = (_DWORD *)(a8 - 1);
      sreg = get_sreg(a8 - 1, dword_15F60[a9 - 16]);
      v13 = a8;
      if ( sreg != -1 )
      {
        *(_QWORD *)i = sreg;
        return 0xFFFFFFFFLL;
      }
    }
  }
  v59 = v13;
  v43 = 0;
  lookback = get_lookback(v11);
  v16 = (unsigned __int64 *)v45;
  v44 = 0;
  v41 = -1;
  do
  {
    *(_WORD *)v16 = 0;
    v16 += 5;
    *((_WORD *)v16 - 19) = 0;
    *((_WORD *)v16 - 18) = 0;
    *((_DWORD *)v16 - 2) = 0;
    *((_WORD *)v16 - 17) = 0;
    *((_OWORD *)v16 - 2) = 0;
    *(v16 - 2) = 0;
  }
  while ( &v58 != v16 );
  v42 = v59;
  if ( lookback <= 0 )
    return 0;
  v17 = 1;
  v34 = 0;
  for ( i = v59; ; i = v42 )
  {
    if ( decode_preceding_insn(&v41, i, &v39, 0.0) == -1 )
      return 0;
    v19 = v43;
    if ( (_WORD)v43 == 131 )
      continue;
    --lookback;
    if ( !v39 )
    {
      v18 = *(_QWORD *)(a1 + 16);
      i = *(unsigned int *)(v18 + 104);
      if ( (int)i <= (unsigned __int16)v43
        && *(_DWORD *)(v18 + 108) > (int)(unsigned __int16)v43
        && (*(_BYTE *)(*(_QWORD *)(v18 + 112) + 16LL * ((unsigned __int16)v43 - (int)i) + 8) & 1) != 0 )
      {
        return 0;
      }
    }
    v20 = v46;
    if ( v46 != v12 )
      goto LABEL_29;
    if ( (_WORD)v43 == 88 )
      break;
    if ( (unsigned __int16)v43 > 0x58u )
    {
      if ( (_WORD)v43 == 107 )
      {
        if ( BYTE1(v44) != 7 )
        {
          if ( v49 == 1 )
          {
LABEL_92:
            v12 = v50;
            if ( !lookback )
              return 0;
            continue;
          }
          if ( v49 == 5 )
          {
            *v37 = (unsigned int)(v51 + v34);
            return 1;
          }
          return 0;
        }
        *v37 = (unsigned int)(v51 + v34);
        if ( !a3 )
          return 1;
        v12 = (int)a3;
        *a3 = v42;
        if ( a4 )
        {
          *a4 = 1;
          return 1;
        }
        if ( under_debugger )
          goto LABEL_149;
        interr(10394, i, v20, v18);
        goto LABEL_133;
      }
      if ( (_WORD)v43 == 108 )
      {
        *v37 = (unsigned int)(v34 + ((_DWORD)v51 << 16));
        if ( !a5 )
          return 1;
        *a5 = v42;
        if ( a6 )
        {
          *a6 = 1;
          return 1;
        }
LABEL_143:
        if ( !under_debugger )
          interr(10393, i, v20, v18);
        goto LABEL_149;
      }
      if ( !v17 )
        goto LABEL_27;
    }
    else
    {
      if ( (unsigned __int16)v43 <= 8u )
      {
        if ( (unsigned __int16)v43 <= 6u )
        {
          if ( !v17 )
            goto LABEL_27;
LABEL_101:
          if ( v19 != 5 )
          {
            if ( v19 != 7 )
              goto LABEL_29;
            v34 += v56;
            v12 = v50;
            if ( !a3 )
              goto LABEL_81;
            v30 = a3;
            *a3 = v42;
            if ( a4 )
            {
              *a4 = 2;
              goto LABEL_81;
            }
LABEL_133:
            if ( under_debugger )
              goto LABEL_149;
            v19 = interr(10397, i, v20, v30);
LABEL_135:
            if ( !v28 && !v29 )
              goto LABEL_29;
LABEL_114:
            if ( v19 != 11 )
            {
              if ( v19 == 88 )
              {
                v24 = v49;
LABEL_77:
                if ( v24 != 4 )
                  goto LABEL_147;
                v25 = v52;
                v34 += v52;
                v12 = v50;
                if ( a3 )
                {
                  *a3 = v42;
                  if ( !a4 )
                  {
                    if ( !under_debugger )
                    {
                      interr(10395, i, v20, v25);
LABEL_147:
                      if ( !under_debugger )
                        interr(10152, i, v20, v18);
                    }
LABEL_149:
                    BUG();
                  }
                  *a4 = 1;
                }
LABEL_81:
                v17 = 1;
                if ( !lookback )
                  return 0;
                continue;
              }
              goto LABEL_27;
            }
          }
          if ( WORD1(v43) == 2 )
          {
            v31 = BYTE1(v44);
            if ( BYTE1(v44) == 1 )
              goto LABEL_108;
          }
          else
          {
            if ( WORD1(v43) != 4 )
            {
LABEL_108:
              if ( v49 == 5 )
              {
                v17 = 1;
                v34 += v51;
                goto LABEL_36;
              }
              if ( v54 == 5 )
              {
                v12 = v50;
                v17 = 1;
                v34 += v56;
                goto LABEL_36;
              }
              goto LABEL_29;
            }
            v31 = BYTE1(v44);
          }
          if ( v31 )
            goto LABEL_29;
          goto LABEL_108;
        }
        if ( !v56 )
          goto LABEL_92;
      }
      else
      {
        if ( (_WORD)v43 != 84 )
        {
          if ( !v17 )
            goto LABEL_27;
          goto LABEL_114;
        }
        if ( BYTE1(v44) != 1 || v49 != 4 || (v53 & 0xDF) != 0 )
          goto LABEL_27;
        i = (__int64)&v40;
        if ( (unsigned int)sub_BE80(a1, (unsigned int)&v40, 0, 0, 0, 0, 0, v42, v50, 0) )
        {
          v26 = (unsigned int)(v52 + v40);
          v27 = sub_BDF0(v26);
          result = 0;
          if ( v27 )
          {
            *v37 = (unsigned int)get_dword(v26);
            if ( a7 )
              *a7 = v42;
            return 1;
          }
          return result;
        }
      }
      if ( !v17 )
        goto LABEL_27;
      v19 = v43;
      if ( (_WORD)v43 == 8 )
      {
        v12 = v50;
        v34 += v56 << 16;
        if ( !a5 )
          goto LABEL_36;
        *a5 = v42;
        if ( a6 )
        {
          *a6 = 2;
          goto LABEL_36;
        }
        if ( under_debugger )
          goto LABEL_149;
        interr(10396, i, v20, a5);
LABEL_139:
        if ( !under_debugger )
          interr(10392, i, a3, v13);
        goto LABEL_149;
      }
      if ( (unsigned __int16)v43 <= 8u )
        goto LABEL_101;
    }
    v28 = v19 < 0xB4u;
    v29 = v19 == 180;
    if ( v19 != 180 )
      goto LABEL_135;
    if ( WORD1(v43) == 2 && BYTE1(v44) == 1 )
    {
      v34 -= v51;
      goto LABEL_81;
    }
LABEL_29:
    if ( sub_BA90((__int64)&v41, v12, 4u) )
      return 0;
    if ( v12 != 27 )
    {
      if ( (unsigned __int16)v43 <= 0x5Au )
      {
        if ( (unsigned __int16)v43 > 0x58u )
          goto LABEL_73;
        v21 = &v48;
        if ( (_WORD)v43 != 84 )
          goto LABEL_36;
        goto LABEL_34;
      }
      goto LABEL_42;
    }
    if ( (_WORD)v43 == 251 || (_WORD)v43 == 76 )
      return 0;
    if ( (_WORD)v43 != 84 )
    {
      if ( (unsigned __int16)v43 <= 0x54u )
      {
        if ( (_WORD)v43 == 73 )
        {
          v23 = v42;
          if ( v47 == v42 + WORD1(v43) )
          {
            *v37 = (unsigned int)(v47 + v34);
            if ( a7 )
              *a7 = v23;
            return 1;
          }
        }
        goto LABEL_36;
      }
      if ( (unsigned __int16)v43 <= 0x5Au )
      {
        if ( (unsigned __int16)v43 <= 0x58u )
          goto LABEL_36;
LABEL_73:
        v34 = 0;
        v17 = 0;
        if ( !lookback )
          return 0;
        continue;
      }
LABEL_42:
      v21 = v45;
      if ( (_WORD)v43 != 177 )
      {
        if ( !lookback )
          return 0;
        continue;
      }
      goto LABEL_34;
    }
    v21 = &v48;
LABEL_34:
    if ( !v17 || v12 != *((unsigned __int16 *)v21 + 3) || (v21[32] & 6) == 0 )
      goto LABEL_36;
    v34 += *((_QWORD *)v21 + 2);
    if ( !lookback )
      return 0;
LABEL_37:
    ;
  }
  v24 = v49;
  if ( v49 != 2 )
  {
    if ( v17 )
      goto LABEL_77;
LABEL_27:
    if ( a10 && (_WORD)v43 == 10 )
    {
      v12 = v50;
      if ( v57 || !(unsigned int)sub_BE80(a1, (unsigned int)&v40, 0, 0, 0, 0, 0, v42, v55, 0) )
      {
        a10 = 0;
      }
      else if ( v17 )
      {
        v34 += v40;
      }
LABEL_36:
      if ( !lookback )
        return 0;
      goto LABEL_37;
    }
    goto LABEL_29;
  }
  *v37 = (unsigned int)(v52 + v34);
  if ( a7 )
    *a7 = v42;
  return 1;
}
