__int64 __fastcall sub_36CC0(_QWORD *a1, __int64 *a2, __int64 a3, char a4)
{
  __int16 v6; // ax
  __int16 v7; // ax
  __int64 result; // rax
  int dword; // eax
  __int16 v10; // ax
  _QWORD *v11; // rax
  char *v12; // rax
  __int16 v13; // ax
  int v14; // r15d
  __int16 v15; // dx
  int v16; // edx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // cl
  __int64 v22; // r12
  char *v23; // rax
  __int64 func; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  char *v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rax
  unsigned int v37; // r15d
  int v38; // r14d
  int v39; // eax
  unsigned int v40; // eax
  int v41; // eax
  _QWORD *v42; // [rsp+8h] [rbp-1C0h]
  __int64 v43; // [rsp+10h] [rbp-1B8h] BYREF
  __int64 v44; // [rsp+18h] [rbp-1B0h] BYREF
  __int128 v45; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v46; // [rsp+30h] [rbp-198h]
  __int64 v47; // [rsp+38h] [rbp-190h]
  __int64 v48; // [rsp+40h] [rbp-188h]
  char v49; // [rsp+48h] [rbp-180h] BYREF
  char v50; // [rsp+49h] [rbp-17Fh]
  __int16 v51; // [rsp+4Eh] [rbp-17Ah]
  char v52; // [rsp+71h] [rbp-157h]
  _QWORD v53[8]; // [rsp+188h] [rbp-40h] BYREF

  v53[0] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_71970(a3) )
  {
    if ( *(_QWORD *)(a3 + 16) > 0xFFFFFFFFFFFFFFFALL )
      return 1;
    dword = get_dword();
    if ( dword == -858993460 )
    {
      if ( (unsigned __int8)get_byte() != 0xCC )
        return 1;
    }
    else if ( dword != -1869574000 || (unsigned __int8)get_byte() != 0x90 )
    {
      return 1;
    }
    if ( (unsigned __int16)get_word() != 0xFF8B )
      return 1;
    return 2;
  }
  v6 = *(_WORD *)(a3 + 24);
  if ( v6 == 16 )
  {
    v18 = sub_6E480(*a1, a3, &v44);
    v21 = v18;
    if ( v18 == -1 )
    {
      if ( *((_DWORD *)a1 + 9) )
      {
        if ( sub_73080(*a1, a3, 0, (unsigned int)v18, v19, v20) != -1 )
        {
          func = get_func();
          if ( func )
          {
            v25 = *(_QWORD *)(func + 48);
            v26 = a1[2];
            if ( v26 >= v25 )
            {
              v27 = a1[5] + v25;
              if ( v26 < v27 )
                *((_DWORD *)a1 + 2) -= (v27 - v26) / *((int *)a1 + 9);
            }
          }
        }
      }
      return 2;
    }
    *a2 = v44;
    if ( v18 > 15 )
    {
      if ( (unsigned int)(v18 - 29) > 5 )
      {
LABEL_47:
        *((_DWORD *)a1 + 2) += 3;
        return 1;
      }
      v21 = v18 - 13;
    }
    *((_DWORD *)a1 + 6) |= 1 << v21;
    goto LABEL_47;
  }
  if ( (unsigned __int16)(v6 - 53) <= 0x24u )
    return 2;
  if ( (unsigned __int16)(v6 - 108) <= 0xBu )
    return 2;
  if ( (unsigned __int16)(v6 - 17) <= 1u )
    return 2;
  if ( sub_355E0(a3) )
    return 2;
  v7 = *(_WORD *)(a3 + 24);
  if ( ((v7 - 46) & 0xFFFD) == 0 )
    return 2;
  if ( v7 == 37 )
  {
    if ( !(unsigned __int8)getinf_flag() || !*(_QWORD *)(a3 + 88) )
      return 3;
    return 4;
  }
  if ( (v7 & 0xFFFB) == 0x7A
    && *(_BYTE *)(a3 + 41) == 1
    && *(_WORD *)(a3 + 46) == 5
    && *(_BYTE *)(a3 + 81) == 1
    && *(_WORD *)(a3 + 86) == 4 )
  {
    if ( (*((_BYTE *)a1 + 28) & 0x20) != 0 )
      return 3;
    return 4;
  }
  if ( (unsigned __int8)sub_36B00(a1, a3, 5) || (getinf() & 0xF) != 3 && (unsigned __int8)sub_36B00(a1, a3, 3) )
    return 4;
  if ( sub_35530(&v43, a3) )
  {
    if ( a4 )
    {
      v46 = -1;
      v28 = &v49;
      v47 = 0;
      v48 = 0;
      v45 = -1;
      do
      {
        *(_WORD *)v28 = 0;
        v28 += 40;
        *((_WORD *)v28 - 19) = 0;
        *((_WORD *)v28 - 18) = 0;
        *((_DWORD *)v28 - 2) = 0;
        *((_WORD *)v28 - 17) = 0;
        *((_OWORD *)v28 - 2) = 0;
        *((_QWORD *)v28 - 2) = 0;
      }
      while ( v53 != (_QWORD *)v28 );
      if ( decode_prev_insn() != -1 && (unsigned __int8)is_call_insn() )
        return 4;
    }
    v22 = v43;
    if ( v43 == -128 && (*(_BYTE *)(a3 + 28) & 0x10) != 0 )
    {
      v46 = -1;
      v23 = &v49;
      v47 = 0;
      v48 = 0;
      v45 = -1;
      do
      {
        *(_WORD *)v23 = 0;
        v23 += 40;
        *((_WORD *)v23 - 19) = 0;
        *((_WORD *)v23 - 18) = 0;
        *((_DWORD *)v23 - 2) = 0;
        *((_WORD *)v23 - 17) = 0;
        *((_OWORD *)v23 - 2) = 0;
        *((_QWORD *)v23 - 2) = 0;
      }
      while ( v53 != (_QWORD *)v23 );
      if ( (int)decode_insn() > 0
        && (unsigned __int8)is_call_insn()
        && (int)decode_insn() > 0
        && sub_35530(&v44, (__int64)&v45)
        && v44 >= 0 )
      {
        return 4;
      }
    }
    *((_DWORD *)a1 + 2) += 3;
    a1[2] -= v22;
    *((_BYTE *)a1 + 48) = 1;
    return 1;
  }
  v10 = *(_WORD *)(a3 + 24);
  if ( (*(_BYTE *)(a3 + 28) & 0x10) != 0 && v10 == 7 )
  {
    if ( *(_BYTE *)(a3 + 41) != 1 || *(_WORD *)(a3 + 46) != 4 || *(_BYTE *)(a3 + 81) != 5 )
      goto LABEL_26;
    v29 = 8 * get_dtype_size();
    v30 = 0;
    if ( (unsigned __int64)v29 <= 0x3F )
      v30 = 1LL << v29;
    v31 = ~*(_QWORD *)(a3 + 88) & (v30 - 1);
    if ( (v31 & (v31 + 1)) == 0 && (unsigned __int64)(v31 - 15) <= 0x7F0 )
      return 1;
    v10 = *(_WORD *)(a3 + 24);
  }
  if ( v10 != 122 )
    goto LABEL_26;
  if ( *(_BYTE *)(a3 + 41) != 1 )
    goto LABEL_78;
  v33 = *(unsigned __int16 *)(a3 + 46);
  if ( v33 > 0xF )
  {
    if ( v33 - 29 > 5 )
    {
LABEL_78:
      if ( (unsigned int)sub_35360(&v43, a3, a3 + 40) == 4 && v43 >= 0 && v43 < a1[2] - a1[5] )
        ++*((_DWORD *)a1 + 2);
      goto LABEL_26;
    }
    LOBYTE(v33) = v33 - 13;
  }
  if ( (*((_DWORD *)a1 + 7) & (1 << v33)) == 0 && (*(_WORD *)(a3 + 46) & 0xFFFD) != 0 )
    goto LABEL_78;
  if ( (unsigned int)sub_35360(&v43, a3, a3 + 80) == 4 )
  {
    v35 = a1[2];
    v36 = *((int *)a1 + 9);
    if ( v35 + v36 <= v43 && v43 < v35 + 4 * (int)v36 )
      ++*((_DWORD *)a1 + 2);
  }
  if ( *(_WORD *)(a3 + 24) == 122 )
    goto LABEL_78;
LABEL_26:
  if ( sub_34C70(a3) )
    return 3;
  v11 = (_QWORD *)*a1;
  v46 = -1;
  v45 = -1;
  v47 = 0;
  v48 = 0;
  v42 = v11;
  v12 = &v49;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 40;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *((_QWORD *)v12 - 2) = 0;
  }
  while ( v12 != (char *)v53 );
  v13 = *(_WORD *)(a3 + 24);
  if ( v13 != 143 )
  {
    if ( v13 == 122 && *(_BYTE *)(a3 + 41) == 1 && !*(_WORD *)(a3 + 46) && *(_BYTE *)(a3 + 81) == 5 )
    {
      v14 = 1;
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  if ( *(_BYTE *)(a3 + 41) != 5 )
  {
LABEL_32:
    v14 = 0;
    goto LABEL_33;
  }
  if ( !(unsigned int)decode_insn() )
    goto LABEL_35;
  if ( (_WORD)v47 == 122 )
  {
    if ( v50 != 1 )
      goto LABEL_35;
    if ( v51 )
      goto LABEL_35;
    v14 = 1;
    if ( v52 != 5 )
      goto LABEL_35;
  }
  else
  {
    if ( (_WORD)v47 != 143 || v50 != 5 )
      goto LABEL_35;
    v14 = 2;
  }
LABEL_33:
  if ( (unsigned int)decode_insn() )
  {
    if ( (_WORD)v47 == 16 )
    {
      v32 = sub_7F350(v42, &v45, &v49);
      if ( (unsigned int)sub_23DD0(v42, (__int64)&v45, v32, 0) == v14 )
        return 3;
    }
  }
LABEL_35:
  v15 = *(_WORD *)(a3 + 24);
  if ( v15 == 143 )
  {
    v34 = (int)sub_22C00(a3);
    if ( !*((_BYTE *)a1 + 48) )
    {
      if ( *(_BYTE *)(a3 + 41) == 1 )
      {
        v37 = *(unsigned __int16 *)(a3 + 46);
        if ( v37 <= 0xF || v37 - 29 <= 5 )
        {
          v38 = *((_DWORD *)a1 + 7);
          if ( !sub_36420(v38, *(unsigned __int16 *)(a3 + 46)) && !sub_36420(*((_DWORD *)a1 + 6), v37) )
          {
            v39 = *((_DWORD *)a1 + 9);
            if ( !v39 || v39 == (_DWORD)v34 )
            {
              *((_DWORD *)a1 + 9) = v34;
              v40 = *(unsigned __int16 *)(a3 + 46);
              if ( v40 > 0xF )
              {
                if ( v40 - 29 > 5 )
                {
LABEL_132:
                  v41 = *((_DWORD *)a1 + 2);
                  a1[5] += v34;
                  *((_DWORD *)a1 + 2) = v41 + 1;
                  if ( a4 && *(_WORD *)(a3 + 46) == 3 )
                    *((_DWORD *)a1 + 2) = v41 + 2;
                  goto LABEL_115;
                }
                LOBYTE(v40) = v40 - 13;
              }
              *((_DWORD *)a1 + 7) = v38 | (1 << v40);
              goto LABEL_132;
            }
          }
        }
      }
      *((_BYTE *)a1 + 48) = 1;
    }
LABEL_115:
    a1[2] += v34;
    return 1;
  }
  result = 0;
  if ( v15 == 145 )
  {
    if ( (unsigned __int8)getinf_flag() )
      return 4;
    v16 = sub_22C00(a3);
    v17 = 8 * v16;
    if ( !*((_BYTE *)a1 + 48) )
    {
      if ( a1[3] )
      {
        *((_BYTE *)a1 + 48) = 1;
      }
      else
      {
        a1[5] += v17;
        ++*((_DWORD *)a1 + 2);
        *((_DWORD *)a1 + 9) = v16;
        *((_DWORD *)a1 + 7) = 255;
      }
    }
    a1[2] += v17;
    return 1;
  }
  return result;
}
