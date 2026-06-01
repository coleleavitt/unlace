__int64 __fastcall sub_3F2040(__int64 a1, int a2)
{
  char *v3; // rax
  int v4; // edx
  __int64 result; // rax
  int v6; // edx
  char *v7; // rbx
  _DWORD *v8; // r13
  unsigned int v9; // r14d
  char *v10; // rcx
  unsigned __int8 v11; // al
  int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  char v15; // al
  int v16; // r9d
  __int16 v17; // si
  int v18; // esi
  __int64 v19; // r8
  int v20; // r9d
  int v21; // eax
  __int64 v22; // rdx
  int v23; // [rsp+Ch] [rbp-1B4h]
  char *v24; // [rsp+10h] [rbp-1B0h]
  __int128 v25; // [rsp+18h] [rbp-1A8h] BYREF
  __int64 v26; // [rsp+28h] [rbp-198h]
  __int64 v27; // [rsp+30h] [rbp-190h]
  __int64 v28; // [rsp+38h] [rbp-188h]
  char v29; // [rsp+40h] [rbp-180h] BYREF
  char v30; // [rsp+41h] [rbp-17Fh] BYREF
  unsigned __int16 v31; // [rsp+46h] [rbp-17Ah]
  char v32; // [rsp+69h] [rbp-157h]
  char v33; // [rsp+129h] [rbp-97h]
  _QWORD v34[8]; // [rsp+180h] [rbp-40h] BYREF

  v3 = &v29;
  v34[0] = __readfsqword(0x28u);
  v25 = -1;
  v26 = -1;
  v27 = 0;
  v28 = 0;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 40;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *((_QWORD *)v3 - 2) = 0;
  }
  while ( v3 != (char *)v34 );
  v4 = decode_insn();
  result = 0;
  if ( !v4 )
    return result;
  v6 = (unsigned __int16)v27;
  if ( (_WORD)v27 == 129 )
    return result;
  v7 = &v30;
  v8 = dword_42EDA0;
  v9 = 0;
  v10 = (char *)v34 + 1;
  while ( 1 )
  {
    v11 = *v7;
    if ( !*v7 )
      break;
    if ( v11 == 2 )
    {
      if ( !v7[31] )
        goto LABEL_12;
      goto LABEL_27;
    }
    if ( v11 > 2u )
    {
      if ( (unsigned __int8)(v11 - 3) > 1u )
        goto LABEL_12;
      if ( v7[31] )
      {
LABEL_27:
        v15 = v7[32];
        v16 = v15 & 7;
        if ( (v27 & 0x1000000000LL) != 0 )
        {
          if ( (v28 & 0x100) != 0 )
          {
            if ( a2 == (v15 & 7 | 8) )
              goto LABEL_24;
          }
          else if ( a2 == v16 )
          {
            goto LABEL_24;
          }
          v17 = (v15 >> 3) & 7;
          LOWORD(v14) = v17 | 8;
          if ( (v28 & 0x200) == 0 )
            LOWORD(v14) = v17;
          if ( (unsigned __int16)v6 <= 0x5C0u )
          {
LABEL_33:
            if ( (unsigned __int16)v6 <= 0x5BCu )
            {
              if ( (unsigned __int16)v6 > 0x378u )
              {
                if ( (unsigned __int16)(v6 - 993) > 3u )
                {
                  v14 = (__int16)v14;
                  goto LABEL_23;
                }
              }
              else if ( (unsigned __int16)v6 <= 0x374u )
              {
                goto LABEL_36;
              }
            }
            goto LABEL_41;
          }
        }
        else
        {
          LOWORD(v14) = (v15 >> 3) & 7;
          if ( a2 == v16 )
            goto LABEL_24;
          if ( (unsigned __int16)v6 <= 0x5C0u )
            goto LABEL_33;
        }
        if ( (unsigned __int16)v6 > 0x5F1u )
        {
          if ( (unsigned __int16)(v6 - 1532) > 0xFu )
          {
            v14 = (__int16)v14;
            goto LABEL_23;
          }
        }
        else if ( (unsigned __int16)v6 <= 0x5EDu )
        {
LABEL_36:
          v14 = (__int16)v14;
          goto LABEL_23;
        }
LABEL_41:
        v24 = v10;
        v23 = v6;
        if ( (v33 & 0x10) != 0 )
          LOWORD(v14) = v14 | 0x10;
        LOWORD(v14) = sub_3F1D70((__int64)&v25, (__int16)v14);
        v10 = v24;
        v6 = v23;
        v14 = (__int16)v14;
LABEL_23:
        if ( a2 == v14 )
          goto LABEL_24;
LABEL_12:
        v7 += 40;
        ++v8;
        if ( v7 == v10 )
          break;
      }
      else
      {
        if ( a2 != *(unsigned __int16 *)(v7 + 5) )
        {
          v14 = 4;
          goto LABEL_23;
        }
LABEL_24:
        v7 += 40;
        v9 |= 2u;
        ++v8;
        if ( v7 == v10 )
          break;
      }
    }
    else
    {
      v12 = *(unsigned __int16 *)(v7 + 5);
      v13 = (unsigned int)(v12 - 16);
      if ( (unsigned int)v13 <= 0xB )
        v12 = dword_434B40[v13];
      if ( a2 != v12 )
        goto LABEL_12;
      v18 = 2;
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
      v20 = *(_DWORD *)(v19 + 104);
      if ( (unsigned __int16)v6 >= v20
        && (unsigned __int16)v6 < *(int *)(v19 + 108)
        && (*v8 & *(_DWORD *)(*(_QWORD *)(v19 + 112) + 16LL * ((unsigned __int16)v6 - v20) + 8)) != 0 )
      {
        v18 = 1;
      }
      v7 += 40;
      v9 |= v18;
      ++v8;
      if ( v7 == v10 )
        break;
    }
  }
  if ( v9 == 3 )
  {
    if ( (_WORD)v6 == 7 || (result = 3, (_WORD)v6 == 131) )
    {
      result = 3;
      if ( v30 == 1 )
      {
        LOBYTE(result) = v32 != 1;
        return (unsigned int)(result + 2);
      }
    }
  }
  else
  {
    result = v9;
    if ( !v9 )
    {
      if ( ((_WORD)v6 == 85 || (_WORD)v6 == 79)
        && decode_prev_insn() != -1
        && ((_WORD)v27 == 131 || (_WORD)v27 == 216 || (_WORD)v27 == 7)
        && v30 == 1 )
      {
        v21 = v31;
        v22 = (unsigned int)v31 - 16;
        if ( (unsigned int)v22 <= 0xB )
          v21 = dword_434B40[v22];
        LOBYTE(v21) = a2 == v21;
        return (unsigned int)(2 * v21);
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}

