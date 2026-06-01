__int64 __fastcall sub_4F00(__int64 a1, __int64 a2)
{
  unsigned __int16 next_word; // ax
  int v4; // r12d
  __int64 *v5; // rax
  __int64 *v6; // r13
  int v7; // eax
  unsigned int v8; // edx
  __int16 v9; // r8
  unsigned int v10; // esi
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  int v13; // eax
  __int16 *v14; // r14
  unsigned int v15; // r15d
  unsigned __int16 word; // ax
  __int16 v17; // cx
  __int64 result; // rax
  int v19; // r8d
  int v20; // r8d
  int v21; // r8d
  unsigned __int64 v22; // rax
  int v23; // edx
  __int16 v24; // ax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int16 v27; // ax
  __int16 v28; // ax
  unsigned __int64 *v29; // rax
  __int16 v30; // cx
  __m128i v31; // xmm1
  __m128i v32; // xmm0
  int v33; // eax
  int v34; // edx
  __m128i v35; // xmm2
  char v36; // al
  __int16 v37; // ax
  unsigned __int16 v38; // ax
  int v39[13]; // [rsp+Ch] [rbp-1DCh] BYREF
  __int128 v40; // [rsp+40h] [rbp-1A8h]
  __int64 v41; // [rsp+50h] [rbp-198h]
  __int64 v42; // [rsp+58h] [rbp-190h]
  __int64 v43; // [rsp+60h] [rbp-188h]
  char v44; // [rsp+68h] [rbp-180h] BYREF
  unsigned __int64 v45; // [rsp+1A8h] [rbp-40h] BYREF

  v45 = __readfsqword(0x28u);
  v39[0] = 0;
  next_word = insn_get_next_word();
  v4 = next_word;
  if ( (next_word & 0x8000u) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 16) & 3) != 0 )
    {
      v4 = next_word & 0x7FFF;
    }
    else if ( (next_word & 0xF0F0) == 0xD000 )
    {
      return sub_4E40(a1, a2, next_word);
    }
  }
  if ( (unsigned __int8)sub_4C30(a1, a2, v4, v39) )
    goto LABEL_45;
  v5 = sub_4B10(a1, v4);
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = *(_DWORD *)v5;
  *(_WORD *)(a2 + 24) = v7;
  v8 = *((_DWORD *)v6 + 1);
  v9 = v7;
  v10 = *((_DWORD *)v6 + 3);
  v11 = *((_DWORD *)v6 + 4);
  v12 = *((_DWORD *)v6 + 5);
  v13 = (4 * (_BYTE)v8) & 4;
  if ( (v8 & 2) != 0 )
    v13 += 4;
  if ( (v8 & 4) != 0 )
    v13 += 4;
  if ( (v8 & 8) != 0 )
    v13 += 4;
  if ( v10 )
  {
    if ( (v10 & 0x10) != 0 )
    {
      v13 += 4;
    }
    else if ( (v10 & 0x20) != 0 )
    {
      v13 += 8;
    }
    else if ( (v10 & 0x40) != 0 )
    {
      v13 += 16;
    }
    else if ( (v10 & 0x80) != 0 )
    {
      v13 += 24;
    }
  }
  if ( !v11 )
  {
LABEL_21:
    if ( !v12 )
      goto LABEL_22;
    goto LABEL_57;
  }
  if ( (v11 & 0x10) != 0 )
  {
    v13 += 4;
    goto LABEL_21;
  }
  if ( (v11 & 0x20) != 0 )
  {
    v13 += 8;
    goto LABEL_21;
  }
  if ( (v11 & 0x40) != 0 )
  {
    v13 += 16;
    goto LABEL_21;
  }
  if ( (v11 & 0x80) == 0 )
    goto LABEL_21;
  if ( !v12 )
  {
    v39[0] = v13 + 24;
    if ( ((v13 + 8) & 0xFFFFFFEF) == 0 )
      goto LABEL_34;
LABEL_62:
    if ( under_debugger )
      BUG();
    v22 = interr();
    goto LABEL_64;
  }
  v13 += 24;
LABEL_57:
  if ( (v12 & 0x10) != 0 )
  {
    v13 += 4;
  }
  else if ( (v12 & 0x20) != 0 )
  {
    v13 += 8;
  }
  else if ( (v12 & 0x40) != 0 )
  {
    v13 += 16;
  }
  else if ( (v12 & 0x80) != 0 )
  {
    v39[0] = v13 + 24;
    if ( v13 == 8 )
      goto LABEL_34;
    goto LABEL_62;
  }
LABEL_22:
  v39[0] = v13;
  if ( ((v13 - 16) & 0xFFFFFFEF) != 0 )
    goto LABEL_62;
  if ( v13 != 32 )
  {
    v14 = (__int16 *)qword_B020;
    v15 = 0;
    if ( v9 == 25 )
      goto LABEL_27;
    while ( 1 )
    {
      v14 += 2;
      if ( L"wyz{}" == v14 )
        goto LABEL_35;
      if ( *v14 == *(_WORD *)(a2 + 24) )
      {
LABEL_27:
        word = get_word();
        if ( v14[1] == word )
        {
          v38 = insn_get_next_word();
          v39[0] = 32;
          v15 = v38;
          goto LABEL_35;
        }
        v17 = *(_WORD *)(a2 + 24);
        switch ( v17 )
        {
          case 25:
            v30 = 90;
            break;
          case 110:
            v30 = 108;
            break;
          case 108:
            v30 = 109;
            break;
          default:
            return 0;
        }
        *(_WORD *)(a2 + 24) = v30;
        v15 = word;
      }
    }
  }
LABEL_34:
  v15 = (unsigned __int16)insn_get_next_word();
LABEL_35:
  v19 = *((_DWORD *)v6 + 3);
  if ( v19 )
    sub_4760(a2, v4, v15, a2 + 40, v19);
  v20 = *((_DWORD *)v6 + 4);
  if ( v20 )
    sub_4760(a2, v4, v15, a2 + 80, v20);
  v21 = *((_DWORD *)v6 + 5);
  if ( v21 )
  {
    if ( (v21 & 0x100000) != 0 )
      sub_4760(a2, v4, v15, a2 + 80, v21);
    else
      sub_4760(a2, v4, v15, a2 + 120, v21);
  }
  v22 = *(unsigned int *)v6;
  if ( (_DWORD)v22 == 53 )
  {
    v31 = _mm_loadu_si128((const __m128i *)(a2 + 40));
    v32 = _mm_loadu_si128((const __m128i *)(a2 + 56));
    v33 = *(_DWORD *)(a2 + 72);
    v34 = *(_DWORD *)(a2 + 112);
    *(__m128i *)(a2 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 80));
    v35 = _mm_loadu_si128((const __m128i *)(a2 + 96));
    *(_DWORD *)(a2 + 112) = v33;
    *(_DWORD *)(a2 + 72) = v34;
    *(__m128i *)(a2 + 56) = v35;
    *(__m128i *)(a2 + 80) = v31;
    *(__m128i *)(a2 + 96) = v32;
    goto LABEL_68;
  }
  if ( (int)v22 > 53 )
  {
    if ( (_DWORD)v22 != 76 )
    {
      if ( (unsigned int)(v22 - 93) <= 0xC )
      {
        *(_BYTE *)(a2 + 121) = 1;
        *(_WORD *)(a2 + 126) = 23;
        *(_BYTE *)(a2 + 125) = 2;
      }
      goto LABEL_45;
    }
    v23 = v39[0];
    if ( *(_BYTE *)(a2 + 112) == 3 && *(_WORD *)(a2 + 86) == 15 )
    {
      v28 = (*(_BYTE *)(a1 + 232) & 1) == 0 ? 76 : 59;
      goto LABEL_77;
    }
    goto LABEL_46;
  }
LABEL_64:
  if ( (unsigned int)(v22 - 9) > 0x29 )
    goto LABEL_45;
  v25 = 0x200124200LL;
  if ( _bittest64(&v25, v22) )
  {
    v36 = *(_BYTE *)(a2 + 32);
    if ( v39[0] != 16 )
    {
      *(_BYTE *)(a2 + 32) = v36 | 0x20;
      LOWORD(result) = *(_WORD *)(a2 + 26);
      return (unsigned __int16)result;
    }
    *(_BYTE *)(a2 + 32) = v36 | 0x10;
    LOWORD(result) = *(_WORD *)(a2 + 26);
LABEL_49:
    if ( (*(_QWORD *)(a2 + 16) & 3) == 0 )
    {
      v24 = get_word();
      if ( v24 < 0 )
      {
        if ( v24 == -4096 )
        {
          v37 = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 32) |= 1u;
          LOWORD(result) = v37 + 2;
          *(_WORD *)(a2 + 26) = result;
          return (unsigned __int16)result;
        }
        if ( v4 == 28672 )
        {
          sub_4F00(a1, a2);
          *(_BYTE *)(a2 + 32) |= 2u;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          return (unsigned __int16)result;
        }
        v41 = -1;
        v29 = (unsigned __int64 *)&v44;
        v42 = 0;
        v43 = 0;
        v40 = -1;
        do
        {
          *(_WORD *)v29 = 0;
          v29 += 5;
          *((_WORD *)v29 - 19) = 0;
          *((_WORD *)v29 - 18) = 0;
          *((_DWORD *)v29 - 2) = 0;
          *((_WORD *)v29 - 17) = 0;
          *((_OWORD *)v29 - 2) = 0;
          *(v29 - 2) = 0;
        }
        while ( &v45 != v29 );
        decode_insn();
        if ( WORD1(v42) == 2 )
          *(_BYTE *)(a2 + 32) |= 4u;
      }
      LOWORD(result) = *(_WORD *)(a2 + 26);
    }
    return (unsigned __int16)result;
  }
  if ( (_DWORD)v22 == 29 )
  {
    v23 = v39[0];
    if ( *(_BYTE *)(a2 + 112) == 1 && *(_WORD *)(a2 + 86) == 15 )
    {
      v28 = (*(_BYTE *)(a1 + 232) & 1) == 0 ? 29 : 60;
LABEL_77:
      *(_WORD *)(a2 + 24) = v28;
      *(_BYTE *)(a2 + 81) = (*(_BYTE *)(a1 + 232) & 1) == 0 ? 3 : 0;
    }
LABEL_46:
    LOWORD(result) = *(_WORD *)(a2 + 26);
    if ( v23 != 16 )
      return (unsigned __int16)result;
    goto LABEL_49;
  }
  if ( (_DWORD)v22 != 50 )
    goto LABEL_45;
LABEL_68:
  v26 = *(unsigned __int16 *)(a2 + 86);
  if ( (unsigned int)v26 <= 7 )
  {
    v27 = *((_WORD *)qword_B000 + v26);
    *(_WORD *)(a2 + 86) = v27;
    if ( v27 == -1 )
      return 0;
LABEL_45:
    v23 = v39[0];
    goto LABEL_46;
  }
  *(_WORD *)(a2 + 86) = -1;
  return 0;
}

