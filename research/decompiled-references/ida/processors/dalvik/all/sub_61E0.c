unsigned __int64 __fastcall sub_61E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int16 v7; // r13
  unsigned __int16 v8; // r12
  __int16 v9; // ax
  bool v10; // zf
  unsigned __int8 next_byte; // r14
  unsigned __int8 v12; // r13
  unsigned __int16 next_word; // r12
  int v14; // esi
  unsigned __int8 v15; // di
  unsigned __int8 i; // cl
  __int16 v17; // dx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int8 v20; // al
  __int16 v21; // r12
  __int16 v22; // ax
  __int16 v23; // dx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int8 v26; // al
  unsigned __int16 v27; // ax
  unsigned __int8 v28; // al
  unsigned __int8 v29; // al
  int v30; // eax
  __int64 v31; // rax
  unsigned __int8 v32; // r13
  unsigned __int8 v33; // r12
  __int64 v34; // rbp
  __int64 v35; // rax
  int v36; // esi
  unsigned __int8 v37; // di
  __int16 v38; // cx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int8 v42; // al
  __int64 v43; // rax
  unsigned __int8 v44; // al
  int next_dword; // eax
  unsigned __int8 v46; // al
  __int16 v47; // ax
  unsigned __int8 v48; // r14
  unsigned __int8 v49; // r13
  unsigned __int16 v50; // r12
  int v51; // esi
  unsigned __int8 v52; // di
  unsigned __int8 j; // cl
  __int16 v54; // dx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rsi
  int v62; // r13d
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rdx
  unsigned __int16 v67; // cx
  __int64 v68; // rsi
  unsigned __int16 v69; // ax
  __int64 v70; // rdx
  unsigned __int16 v71; // ax
  char v72; // [rsp+6h] [rbp-32h]
  char v73; // [rsp+7h] [rbp-31h]
  unsigned __int64 v74; // [rsp+8h] [rbp-30h]

  v3 = *(unsigned __int16 *)(a2 + 24);
  v74 = __readfsqword(0x28u);
  if ( (unsigned __int16)v3 > 0xF2u )
  {
    LOWORD(v3) = v3 - 243;
    switch ( v3 )
    {
      case 0LL:
        goto LABEL_22;
      case 4LL:
      case 6LL:
        next_byte = insn_get_next_byte(a2);
        v12 = next_byte >> 4;
        next_word = insn_get_next_word(a2);
        v72 = insn_get_next_byte(a2);
        v73 = insn_get_next_byte(a2);
        if ( next_byte >> 4 )
        {
          v14 = 0;
          v15 = 0;
          for ( i = 0; ; ++i )
          {
            v19 = v14;
            *(_BYTE *)(a2 + 40LL * v14 + 41) = 1;
            if ( (i & 1) != 0 )
            {
              v17 = (unsigned __int8)((v15 >> 4) + 2);
            }
            else
            {
              v15 = *(&v72 + (i >> 1));
              v17 = (v15 & 0xF) + 2;
            }
            ++v14;
            v18 = a2 + 40 * v19;
            *(_WORD *)(v18 + 46) = v17;
            *(_BYTE *)(v18 + 45) = 2;
            *(_BYTE *)(v18 + 72) = 0;
            if ( (unsigned __int8)(i + 1) >= v12 || i == 3 )
              break;
          }
          if ( v12 > 4u )
          {
            *(_BYTE *)(a2 + 201) = 1;
            v64 = (unsigned __int8)(i + 3);
            v62 = (unsigned __int8)(i + 2);
            *(_BYTE *)(a2 + 205) = 2;
            *(_WORD *)(a2 + 206) = (next_byte & 0xF) + 2;
            *(_BYTE *)(a2 + 232) = 0;
          }
          else
          {
            v62 = (unsigned __int8)(i + 1);
            v64 = (unsigned __int8)(i + 2);
          }
          v61 = 40 * v64;
        }
        else
        {
          v61 = 40;
          v62 = 0;
        }
        v63 = a2 + 40LL * v62;
        *(_BYTE *)(v63 + 45) = 1;
        *(_QWORD *)(v63 + 48) = next_word;
        if ( *(_WORD *)(a2 + 24) == 247 )
        {
          *(_BYTE *)(v63 + 41) = 12;
          sub_6100(a1, a2 + v61, *(_QWORD *)(a2 + 16), next_word);
          v69 = insn_get_next_word(a2);
          v70 = a2 + 40LL * (v62 + 1);
          *(_BYTE *)(v70 + 41) = 13;
          *(_BYTE *)(v70 + 45) = 1;
          *(_QWORD *)(v70 + 48) = v69;
        }
        else
        {
          *(_BYTE *)(v63 + 41) = 14;
        }
        return v74 - __readfsqword(0x28u);
      case 5LL:
      case 7LL:
        v7 = (unsigned __int8)insn_get_next_byte(a2);
        v8 = insn_get_next_word(a2);
        v9 = insn_get_next_word(a2);
        v10 = *(_WORD *)(a2 + 24) == 248;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 86) = v9 + v7 + 2;
        *(_WORD *)(a2 + 46) = v9 + 2;
        *(_BYTE *)(a2 + 72) = 0;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_BYTE *)(a2 + 112) = 0;
        *(_BYTE *)(a2 + 125) = 1;
        *(_QWORD *)(a2 + 128) = v8;
        if ( v10 )
        {
          *(_BYTE *)(a2 + 121) = 12;
          sub_6100(a1, a2 + 120, *(_QWORD *)(a2 + 16), v8);
          v71 = insn_get_next_word(a2);
          *(_BYTE *)(a2 + 161) = 13;
          *(_BYTE *)(a2 + 165) = 1;
          *(_QWORD *)(a2 + 168) = v71;
        }
        else
        {
          *(_BYTE *)(a2 + 121) = 14;
        }
        return v74 - __readfsqword(0x28u);
      case 8LL:
        v28 = insn_get_next_byte(a2);
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 72) = 0;
        *(_WORD *)(a2 + 46) = v28 + 2;
        *(_BYTE *)(a2 + 81) = 15;
        *(_BYTE *)(a2 + 85) = 1;
        *(_QWORD *)(a2 + 88) = (unsigned __int16)insn_get_next_word(a2);
        return v74 - __readfsqword(0x28u);
      case 9LL:
        v26 = insn_get_next_byte(a2);
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 72) = 0;
        *(_WORD *)(a2 + 46) = v26 + 2;
        v27 = insn_get_next_word(a2);
        *(_BYTE *)(a2 + 81) = 13;
        *(_BYTE *)(a2 + 85) = 1;
        *(_QWORD *)(a2 + 88) = v27;
        return v74 - __readfsqword(0x28u);
      default:
        return v74 - __readfsqword(0x28u);
    }
  }
  if ( (unsigned __int16)v3 > 0xE5u )
  {
    v5 = 1LL << ((unsigned __int8)v3 + 26);
    if ( (v5 & 0x1405) == 0 )
    {
      if ( (v5 & 0x802) != 0 )
        goto LABEL_22;
      return v74 - __readfsqword(0x28u);
    }
LABEL_43:
    v48 = insn_get_next_byte(a2);
    v49 = v48 >> 4;
    v50 = insn_get_next_word(a2);
    v72 = insn_get_next_byte(a2);
    v73 = insn_get_next_byte(a2);
    if ( v48 >> 4 )
    {
      v51 = 0;
      v52 = 0;
      for ( j = 0; ; ++j )
      {
        v56 = v51;
        *(_BYTE *)(a2 + 40LL * v51 + 41) = 1;
        if ( (j & 1) != 0 )
        {
          v54 = (unsigned __int8)((v52 >> 4) + 2);
        }
        else
        {
          v52 = *(&v72 + (j >> 1));
          v54 = (v52 & 0xF) + 2;
        }
        ++v51;
        v55 = a2 + 40 * v56;
        *(_BYTE *)(v55 + 45) = 2;
        *(_WORD *)(v55 + 46) = v54;
        *(_BYTE *)(v55 + 72) = 0;
        LOBYTE(v55) = j + 1;
        if ( (unsigned __int8)(j + 1) >= v49 || j == 3 )
          break;
      }
      if ( v49 > 4u )
      {
        *(_BYTE *)(a2 + 201) = 1;
        v65 = (unsigned __int8)(j + 3);
        v55 = (unsigned __int8)(j + 2);
        *(_BYTE *)(a2 + 205) = 2;
        *(_WORD *)(a2 + 206) = (v48 & 0xF) + 2;
        *(_BYTE *)(a2 + 232) = 0;
      }
      else
      {
        v55 = (unsigned __int8)v55;
        v65 = (unsigned __int8)(j + 2);
      }
      v57 = 40 * v65;
    }
    else
    {
      v57 = 40;
      v55 = 0;
    }
    v58 = a2 + 40 * v55;
    *(_BYTE *)(v58 + 41) = 12;
    *(_BYTE *)(v58 + 45) = 1;
    *(_QWORD *)(v58 + 48) = v50;
    v59 = *(unsigned __int16 *)(a2 + 24);
    LOWORD(v59) = v59 - 230;
    if ( (unsigned __int16)v59 <= 0xCu )
    {
      v60 = 5121;
      if ( _bittest64(&v60, v59) )
      {
        *(_BYTE *)(v58 + 72) = 1;
        return v74 - __readfsqword(0x28u);
      }
    }
    v66 = *(_QWORD *)(a2 + 16);
    v67 = v50;
    v68 = a2 + v57;
    return sub_6100(a1, v68, v66, v67);
  }
  if ( (unsigned __int16)v3 <= 0x25u )
  {
    if ( (unsigned __int16)v3 > 0x15u )
    {
      switch ( (__int16)v3 )
      {
        case 22:
          v29 = insn_get_next_byte(a2);
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 72) = 0;
          *(_WORD *)(a2 + 46) = v29 + 2;
          v30 = insn_get_next_word(a2);
          *(_BYTE *)(a2 + 81) = 5;
          v31 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v30 << 16);
          *(_BYTE *)(a2 + 85) = 2;
          *(_QWORD *)(a2 + 88) = v31;
          break;
        case 23:
          v46 = insn_get_next_byte(a2);
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 7;
          *(_BYTE *)(a2 + 72) = 1;
          *(_WORD *)(a2 + 46) = v46 + 2;
          v47 = insn_get_next_word(a2);
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 7;
          *(_QWORD *)(a2 + 88) = v47;
          break;
        case 24:
          v44 = insn_get_next_byte(a2);
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 7;
          *(_BYTE *)(a2 + 72) = 1;
          *(_WORD *)(a2 + 46) = v44 + 2;
          next_dword = insn_get_next_dword(a2);
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 7;
          *(_QWORD *)(a2 + 88) = next_dword;
          break;
        case 26:
          v42 = insn_get_next_byte(a2);
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 7;
          *(_BYTE *)(a2 + 72) = 1;
          *(_WORD *)(a2 + 46) = v42 + 2;
          v43 = insn_get_next_word(a2);
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 7;
          *(_QWORD *)(a2 + 88) = v43 << 48;
          break;
        case 37:
          v32 = insn_get_next_byte(a2);
          v33 = v32 >> 4;
          v34 = (unsigned __int16)insn_get_next_word(a2);
          v72 = insn_get_next_byte(a2);
          v73 = insn_get_next_byte(a2);
          v35 = 0;
          if ( v32 >> 4 )
          {
            v36 = 0;
            v37 = 0;
            while ( 1 )
            {
              v40 = v36;
              *(_BYTE *)(a2 + 40LL * v36 + 41) = 1;
              if ( (v35 & 1) != 0 )
              {
                v38 = (unsigned __int8)((v37 >> 4) + 2);
              }
              else
              {
                v37 = *(&v72 + ((unsigned __int8)v35 >> 1));
                v38 = (v37 & 0xF) + 2;
              }
              ++v36;
              v39 = a2 + 40 * v40;
              *(_BYTE *)(v39 + 45) = 2;
              *(_WORD *)(v39 + 46) = v38;
              *(_BYTE *)(v39 + 72) = 0;
              if ( (unsigned __int8)(v35 + 1) >= v33 || (_BYTE)v35 == 3 )
                break;
              LOBYTE(v35) = v35 + 1;
            }
            if ( v33 > 4u )
            {
              *(_BYTE *)(a2 + 201) = 1;
              *(_BYTE *)(a2 + 205) = 2;
              v35 = (unsigned __int8)(v35 + 2);
              *(_WORD *)(a2 + 206) = (v32 & 0xF) + 2;
              *(_BYTE *)(a2 + 232) = 0;
            }
            else
            {
              v35 = (unsigned __int8)(v35 + 1);
            }
          }
          v41 = a2 + 40 * v35;
          *(_BYTE *)(v41 + 41) = 10;
          *(_BYTE *)(v41 + 45) = 1;
          *(_QWORD *)(v41 + 48) = v34;
          break;
        default:
          return v74 - __readfsqword(0x28u);
      }
    }
    return v74 - __readfsqword(0x28u);
  }
  if ( (unsigned __int16)v3 <= 0x6Du )
  {
    if ( (unsigned __int16)v3 <= 0x68u )
      return v74 - __readfsqword(0x28u);
    goto LABEL_43;
  }
  if ( (unsigned __int16)(v3 - 110) > 4u )
    return v74 - __readfsqword(0x28u);
LABEL_22:
  v20 = insn_get_next_byte(a2);
  *(_BYTE *)(a2 + 121) = 12;
  *(_BYTE *)(a2 + 125) = 1;
  v21 = v20;
  *(_QWORD *)(a2 + 128) = (unsigned __int16)insn_get_next_word(a2);
  v22 = insn_get_next_word(a2);
  *(_BYTE *)(a2 + 41) = 1;
  v23 = v22 + 2;
  *(_BYTE *)(a2 + 45) = 2;
  *(_WORD *)(a2 + 86) = v22 + v21 + 2;
  v24 = *(unsigned __int16 *)(a2 + 24);
  *(_WORD *)(a2 + 46) = v23;
  LOWORD(v24) = v24 - 231;
  *(_BYTE *)(a2 + 72) = 0;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 2;
  *(_BYTE *)(a2 + 112) = 0;
  if ( (unsigned __int16)v24 <= 0xCu )
  {
    v25 = 5121;
    if ( _bittest64(&v25, v24) )
    {
      *(_BYTE *)(a2 + 152) = 1;
      return v74 - __readfsqword(0x28u);
    }
  }
  v67 = *(_WORD *)(a2 + 128);
  v66 = *(_QWORD *)(a2 + 16);
  v68 = a2 + 120;
  return sub_6100(a1, v68, v66, v67);
}

