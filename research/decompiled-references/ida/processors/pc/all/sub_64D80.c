char __fastcall sub_64D80(_BYTE *a1, __int64 a2, __int64 a3, __int16 a4)
{
  int v5; // esi
  int v6; // edx
  int v7; // edx
  char result; // al
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // edx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax

  v5 = a4 & 0x7F00;
  if ( v5 == 3328 )
  {
    if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
      a1[5222] = 1;
    v19 = *(_DWORD *)(a2 + 28);
    if ( (v19 & 0x10) != 0 )
    {
      v20 = *(unsigned __int16 *)(a2 + 24);
      if ( (_WORD)v20 == 86 || (_WORD)v20 == 16 || (*(_BYTE *)(a2 + 33) & 8) != 0 )
        return 2;
      if ( (v19 & 0x800) == 0 )
        return 1;
      if ( (unsigned __int16)v20 > 0x39u )
      {
        if ( (unsigned __int16)(v20 - 61) <= 0x18u )
          return 2;
        if ( (unsigned __int16)v20 > 0xA0u )
        {
          if ( (_WORD)v20 == 738 || (_WORD)v20 == 741 )
            return 2;
          goto LABEL_120;
        }
        if ( (unsigned __int16)v20 > 0x6Cu )
        {
          v37 = 0xC050682000555LL;
          if ( _bittest64(&v37, (unsigned int)(v20 - 109)) )
            return 2;
          goto LABEL_120;
        }
      }
      else
      {
        if ( (unsigned __int16)v20 > 0x34u )
          return 2;
        if ( (unsigned __int16)v20 <= 0x12u )
        {
          if ( (unsigned __int16)v20 > 0xFu )
            return 2;
          goto LABEL_120;
        }
      }
      v21 = (unsigned int)(v20 - 37);
      if ( (unsigned __int16)v21 <= 0x3Bu )
      {
        v22 = 0xA1A000000E00005LL;
        if ( _bittest64(&v22, v21) )
          return 2;
      }
      goto LABEL_120;
    }
    return ((v19 & 0x818) == 0 || (v19 & 0x818) == 2056) + 1;
  }
  if ( (a4 & 0x7F00u) > 0xD00 )
  {
    if ( v5 == 16640 )
    {
      if ( (*(_BYTE *)(a2 + 28) & 0x10) == 0 )
        return 7;
      return 8;
    }
    if ( (a4 & 0x7F00u) > 0x4100 )
      goto LABEL_46;
    if ( v5 != 8960 )
    {
      if ( (a4 & 0x7F00u) <= 0x2300 )
      {
        if ( v5 == 4352 )
          return 0;
        if ( (a4 & 0x7F00u) <= 0x1100 )
        {
          result = 17;
          if ( v5 == 3584 )
            return result;
          if ( v5 != 4096 )
            goto LABEL_44;
          return 0;
        }
        if ( v5 == 5632 )
          return 0;
        if ( (a4 & 0x7F00u) <= 0x1600 )
        {
          if ( v5 != 5120 )
          {
            if ( (a4 & 0x7F00u) > 0x1400 )
            {
              if ( v5 != 5376 )
                goto LABEL_44;
            }
            else if ( (a4 & 0x7E00) != 0x1200 )
            {
              goto LABEL_44;
            }
          }
          return 0;
        }
        if ( v5 != 8448 )
        {
          if ( (a4 & 0x7F00u) > 0x2100 )
          {
            if ( v5 != 8704 )
              goto LABEL_44;
          }
          else
          {
            if ( v5 == 5888 )
              return 0;
            if ( v5 != 0x2000 )
              goto LABEL_44;
          }
        }
      }
      else
      {
        if ( v5 == 13312 )
          return 1;
        if ( (a4 & 0x7F00u) > 0x3400 )
        {
          if ( v5 != 13568 )
          {
            if ( v5 != 0x4000 )
              goto LABEL_44;
            goto LABEL_53;
          }
          return 1;
        }
        if ( v5 == 12288 )
          return 1;
        if ( (a4 & 0x7F00u) > 0x3000 )
        {
          if ( v5 != 12800 && (a4 & 0x7D00) != 0x3100 )
            goto LABEL_44;
          return 1;
        }
        if ( v5 != 9728 )
        {
          if ( (a4 & 0x7F00u) > 0x2600 )
          {
            if ( v5 != 9984 )
              goto LABEL_44;
          }
          else if ( (a4 & 0x7E00) != 0x2400 )
          {
            goto LABEL_44;
          }
        }
      }
    }
    v9 = *(_DWORD *)(a2 + 28);
    if ( (v9 & 0x10) == 0 )
      return 2;
    if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
      return 7;
    v10 = *(unsigned __int16 *)(a2 + 24);
    if ( (v9 & 0x800) == 0 )
      goto LABEL_158;
    if ( (unsigned __int16)v10 > 0x39u )
    {
      if ( (unsigned __int16)(v10 - 61) <= 0x18u )
        return 7;
      if ( (unsigned __int16)v10 > 0xA0u )
      {
        if ( (_WORD)v10 == 738 || (_WORD)v10 == 741 )
          return 7;
        goto LABEL_158;
      }
      if ( (unsigned __int16)v10 > 0x6Cu )
      {
        v26 = 0xC050682000555LL;
        if ( _bittest64(&v26, (unsigned int)(v10 - 109)) )
          return 7;
LABEL_158:
        if ( (((_WORD)v10 - 43) & 0xFFFD) == 0 || (unsigned __int16)(v10 - 132) <= 1u )
          return 1;
        goto LABEL_34;
      }
      v33 = (unsigned int)(v10 - 37);
      if ( (unsigned __int16)(v10 - 37) > 0x3Bu )
        goto LABEL_158;
    }
    else
    {
      if ( (unsigned __int16)v10 > 0x34u )
        return 7;
      if ( (unsigned __int16)v10 <= 0x12u )
      {
        if ( (unsigned __int16)v10 > 0xFu )
          return 7;
        goto LABEL_34;
      }
      v33 = (unsigned int)(v10 - 37);
      if ( (unsigned __int16)(v10 - 37) > 0x3Bu )
      {
LABEL_34:
        a1[5222] = 1;
        return 1;
      }
    }
    v34 = 0xA1A000000E00005LL;
    if ( _bittest64(&v34, v33) )
      return 7;
    goto LABEL_158;
  }
  if ( v5 == 1792 )
    return 7;
  if ( (a4 & 0x7F00u) > 0x700 )
  {
    if ( v5 != 2560 )
    {
      if ( (a4 & 0x7F00u) <= 0xA00 )
      {
        if ( v5 == 2048 )
          return 16;
        if ( v5 != 2304 )
          goto LABEL_44;
        return 11;
      }
      if ( v5 != 2816 )
      {
        if ( v5 != 3072 )
          goto LABEL_44;
        if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
          a1[5222] = 1;
        v13 = *(unsigned __int16 *)(a2 + 24);
        if ( (unsigned __int16)(v13 - 628) > 1u && (_WORD)v13 != 123 )
        {
          v14 = *(_DWORD *)(a2 + 28);
          if ( (v14 & 0x10) != 0 )
          {
            if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
              return 7;
            if ( (v14 & 0x800) != 0 )
            {
              if ( (unsigned __int16)v13 > 0x39u )
              {
                if ( (unsigned __int16)(v13 - 61) <= 0x18u )
                  return 7;
                if ( (unsigned __int16)v13 > 0xA0u )
                {
                  if ( (_WORD)v13 != 738 && (_WORD)v13 != 741 )
                    return 2;
                  return 7;
                }
                if ( (unsigned __int16)v13 > 0x6Cu )
                {
                  v42 = 0xC050682000555LL;
                  if ( _bittest64(&v42, (unsigned int)(v13 - 109)) )
                    return 7;
                  return 2;
                }
              }
              else
              {
                if ( (unsigned __int16)v13 > 0x34u )
                  return 7;
                if ( (unsigned __int16)v13 <= 0x12u )
                {
                  if ( (unsigned __int16)v13 > 0xFu )
                    return 7;
                  return 2;
                }
              }
              v15 = (unsigned int)(v13 - 37);
              if ( (unsigned __int16)v15 > 0x3Bu )
                return 2;
              v16 = 0xA1A000000E00005LL;
              if ( !_bittest64(&v16, v15) )
                return 2;
              return 7;
            }
          }
          return 2;
        }
LABEL_53:
        if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 )
          return 7;
        return 2;
      }
      return 1;
    }
    if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
      a1[5222] = 1;
    v19 = *(_DWORD *)(a2 + 28);
    if ( (v19 & 0x10) != 0 )
    {
      v23 = *(unsigned __int16 *)(a2 + 24);
      if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
      {
        if ( (unsigned __int16)(v23 - 132) <= 1u || (_WORD)v23 == 45 || (_WORD)v23 == 43 )
          return 2;
        return 7;
      }
      if ( (v19 & 0x800) == 0 )
        return 1;
      if ( (unsigned __int16)v23 > 0x39u )
      {
        if ( (unsigned __int16)(v23 - 61) <= 0x18u )
          return 7;
        if ( (unsigned __int16)v23 > 0xA0u )
        {
          if ( (_WORD)v23 == 738 || (_WORD)v23 == 741 )
            return 7;
          goto LABEL_120;
        }
        if ( (unsigned __int16)v23 > 0x6Cu )
        {
          v39 = 0xC050682000555LL;
          if ( _bittest64(&v39, (unsigned int)(v23 - 109)) )
            return 7;
          goto LABEL_120;
        }
      }
      else
      {
        if ( (unsigned __int16)v23 > 0x34u )
          return 7;
        if ( (unsigned __int16)v23 <= 0x12u )
        {
          if ( (unsigned __int16)v23 > 0xFu )
            return 7;
LABEL_120:
          if ( (v19 & 0x818) == 0x810 )
            return 2;
          return 1;
        }
      }
      v31 = (unsigned int)(v23 - 37);
      if ( (unsigned __int16)v31 <= 0x3Bu )
      {
        v32 = 0xA1A000000E00005LL;
        if ( _bittest64(&v32, v31) )
          return 7;
      }
      goto LABEL_120;
    }
    return ((v19 & 0x818) == 0 || (v19 & 0x818) == 2056) + 1;
  }
  if ( v5 == 1024 )
    return 2;
  if ( (a4 & 0x7F00u) > 0x400 )
  {
    if ( v5 == 1280 )
      return 8;
    if ( v5 != 1536 )
      goto LABEL_44;
    if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
      a1[5222] = 1;
    v11 = *(_DWORD *)(a2 + 28);
    if ( (v11 & 0x10) == 0 )
    {
      v25 = *(_DWORD *)(a2 + 28) & 0x818;
      if ( v25 != 2056 && v25 )
        return 2;
      return 11;
    }
    if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
      return 7;
    if ( (v11 & 0x800) == 0 )
      return 2;
    v12 = *(unsigned __int16 *)(a2 + 24);
    if ( (unsigned __int16)v12 > 0x39u )
    {
      if ( (unsigned __int16)(v12 - 61) <= 0x18u )
        return 7;
      if ( (unsigned __int16)v12 > 0xA0u )
      {
        if ( (_WORD)v12 == 738 || (_WORD)v12 == 741 )
          return 7;
        goto LABEL_66;
      }
      if ( (unsigned __int16)v12 > 0x6Cu )
      {
        v38 = 0xC050682000555LL;
        if ( _bittest64(&v38, (unsigned int)(v12 - 109)) )
          return 7;
        goto LABEL_66;
      }
    }
    else
    {
      if ( (unsigned __int16)v12 > 0x34u )
        return 7;
      if ( (unsigned __int16)v12 <= 0x12u )
      {
        if ( (unsigned __int16)v12 > 0xFu )
          return 7;
LABEL_66:
        if ( (v11 & 0x818) != 0x810 )
          return 2;
        return 11;
      }
    }
    v35 = (unsigned int)(v12 - 37);
    if ( (unsigned __int16)v35 <= 0x3Bu )
    {
      v36 = 0xA1A000000E00005LL;
      if ( _bittest64(&v36, v35) )
        return 7;
    }
    goto LABEL_66;
  }
  switch ( v5 )
  {
    case 512:
      return 0;
    case 768:
      if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
        a1[5222] = 1;
      v17 = *(_DWORD *)(a2 + 28);
      if ( (v17 & 0x10) == 0 )
        return (*(_DWORD *)(a2 + 28) & 0x818) == 0 || (*(_DWORD *)(a2 + 28) & 0x818) == 2056;
      if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
        return 2;
      if ( (v17 & 0x800) != 0 )
      {
        v18 = *(unsigned __int16 *)(a2 + 24);
        if ( (unsigned __int16)v18 > 0x39u )
        {
          if ( (unsigned __int16)(v18 - 61) <= 0x18u )
            return 2;
          if ( (unsigned __int16)v18 > 0xA0u )
          {
            if ( (_WORD)v18 == 738 || (_WORD)v18 == 741 )
              return 2;
            return (v17 & 0x818) == 2064;
          }
          if ( (unsigned __int16)v18 > 0x6Cu )
          {
            v41 = 0xC050682000555LL;
            if ( _bittest64(&v41, (unsigned int)(v18 - 109)) )
              return 2;
            return (v17 & 0x818) == 2064;
          }
        }
        else
        {
          if ( (unsigned __int16)v18 > 0x34u )
            return 2;
          if ( (unsigned __int16)v18 <= 0x12u )
          {
            if ( (unsigned __int16)v18 > 0xFu )
              return 2;
            return (v17 & 0x818) == 2064;
          }
        }
        v27 = (unsigned int)(v18 - 37);
        if ( (unsigned __int16)v27 <= 0x3Bu )
        {
          v28 = 0xA1A000000E00005LL;
          if ( _bittest64(&v28, v27) )
            return 2;
        }
        return (v17 & 0x818) == 2064;
      }
      return 0;
    case 256:
      if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
        a1[5222] = 1;
      v6 = *(_DWORD *)(a2 + 28);
      if ( (v6 & 0x10) == 0 )
      {
        v7 = *(_DWORD *)(a2 + 28) & 0x818;
        if ( v7 != 2056 && v7 )
          return 2;
        return 7;
      }
      if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
        return 8;
      if ( (v6 & 0x800) != 0 )
      {
        v24 = *(unsigned __int16 *)(a2 + 24);
        if ( (unsigned __int16)v24 > 0x39u )
        {
          if ( (unsigned __int16)(v24 - 61) <= 0x18u )
            return 8;
          if ( (unsigned __int16)v24 > 0xA0u )
          {
            if ( (_WORD)v24 != 738 && (_WORD)v24 != 741 )
            {
LABEL_139:
              if ( (v6 & 0x818) != 0x810 )
                return 2;
              return 7;
            }
            return 8;
          }
          if ( (unsigned __int16)v24 > 0x6Cu )
          {
            v40 = 0xC050682000555LL;
            if ( !_bittest64(&v40, (unsigned int)(v24 - 109)) )
              goto LABEL_139;
            return 8;
          }
        }
        else
        {
          if ( (unsigned __int16)v24 > 0x34u )
            return 8;
          if ( (unsigned __int16)v24 <= 0x12u )
          {
            if ( (unsigned __int16)v24 <= 0xFu )
              goto LABEL_139;
            return 8;
          }
        }
        v29 = (unsigned int)(v24 - 37);
        if ( (unsigned __int16)v29 > 0x3Bu )
          goto LABEL_139;
        v30 = 0xA1A000000E00005LL;
        if ( !_bittest64(&v30, v29) )
          goto LABEL_139;
        return 8;
      }
      return 2;
  }
  while ( 1 )
  {
LABEL_44:
    if ( under_debugger )
      BUG();
    a1 = (_BYTE *)(&qword_F0 + 5);
    interr();
LABEL_46:
    if ( v5 == 20992 )
      break;
    if ( v5 > 20992 )
    {
      if ( v5 == 21248 )
        return a1[5216];
    }
    else
    {
      if ( v5 == 20480 )
        return a1[5204];
      if ( v5 == 20736 )
        return a1[5208];
    }
  }
  return a1[5212];
}
