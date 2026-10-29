__int64 __fastcall sub_C4B0(__int64 a1, __int64 a2, int a3, char a4)
{
  char v6; // di
  bool v7; // zf
  __int64 v8; // rax
  __int64 **v9; // rdi
  __int64 v10; // rax
  __int64 **v11; // rdi
  __int16 v13; // cx
  char v14; // al
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 **v17; // rdi
  __int64 **v18; // rdi
  __int16 v19; // ax
  __int16 v20; // di
  int v21; // ecx
  __int64 v22; // rax
  __int16 v23; // ax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 **v26; // rdi
  __int64 v27; // rax
  __int64 **v28; // rdi
  __int16 v29; // cx
  __int16 v30; // ax
  __int16 v31; // di
  __int16 v32; // ax
  int v33; // eax
  __int64 v34; // rdx
  __int16 v35; // ax
  __int64 v36; // r13
  __int64 fchunk; // r12
  __int64 **v38; // rdi
  __int64 v39; // rax
  __int64 **v40; // rdi
  __int64 v41; // rax
  __int64 **v42; // rdi
  __m128i v43; // xmm0
  int v44; // eax
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  int v47; // eax
  __m128i v48; // xmm0
  __int16 v49; // ax
  __int16 v50; // ax
  int v51; // eax
  int v52; // esi
  int v53; // eax
  char v54; // cl

  switch ( a4 )
  {
    case 0:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 19;
      v19 = *(_WORD *)(a2 + 34);
      *(_BYTE *)(a2 + 81) = 1;
      v20 = ((unsigned __int16)a3 >> 7) & 0x1F;
      *(_BYTE *)(a2 + 121) = 5;
      *(_WORD *)(a2 + 46) = v20;
      *(_WORD *)(a2 + 86) = v20;
      v21 = (v19 & 4) == 0 ? 2 : 7;
      *(_BYTE *)(a2 + 45) = (v19 & 4) == 0 ? 2 : 7;
      v22 = (__int64)((unsigned __int64)(((unsigned __int16)a3 >> 7) & 0x20 | ((unsigned __int16)a3 >> 2) & 0x1Fu) << 58) >> 58;
      *(_BYTE *)(a2 + 85) = v21;
      *(_QWORD *)(a2 + 128) = v22;
      *(_BYTE *)(a2 + 125) = v21;
      if ( !v22 )
        goto LABEL_17;
      if ( (((unsigned __int16)a3 >> 7) & 0x1F) != 0 )
      {
        v39 = *(_QWORD *)(a1 + 504);
        if ( !v39 )
          goto LABEL_47;
        *(_BYTE *)(v39 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
        v40 = *(__int64 ***)(a1 + 504);
        if ( v40 )
        {
          sub_BAE0(v40, 7, 7, 2);
          v41 = *(_QWORD *)(a1 + 504);
          if ( v41 )
          {
            *(_BYTE *)(v41 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
            v42 = *(__int64 ***)(a1 + 504);
            if ( v42 )
              sub_BAE0(v42, 13, 13, 12);
          }
        }
        if ( *(_BYTE *)(a2 + 41) == 1 )
        {
LABEL_47:
          v20 = *(_WORD *)(a2 + 46);
LABEL_17:
          if ( !v20 )
            return *(unsigned __int16 *)(a2 + 26);
        }
      }
      else
      {
        v46 = _mm_loadu_si128((const __m128i *)(a2 + 120));
        *(_BYTE *)(a2 + 28) = 1;
        *(_WORD *)(a2 + 24) = 121;
        v47 = *(_DWORD *)(a2 + 152);
        *(__m128i *)(a2 + 40) = v46;
        v48 = _mm_loadu_si128((const __m128i *)(a2 + 136));
        *(_DWORD *)(a2 + 72) = v47;
        *(_BYTE *)(a2 + 40) = 0;
        *(_BYTE *)(a2 + 121) = 0;
        *(_BYTE *)(a2 + 81) = 0;
        *(__m128i *)(a2 + 56) = v48;
      }
      if ( !*(_QWORD *)(a2 + 128) )
        *(_BYTE *)(a2 + 28) = 1;
      return *(unsigned __int16 *)(a2 + 26);
    case 1:
      if ( (*(_BYTE *)(a2 + 34) & 4) == 0 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 3;
        *(_WORD *)(a2 + 46) = 1;
        *(_BYTE *)(a2 + 45) = 2;
LABEL_36:
        sub_BC20(a1, a2 + 80, a3, a2);
        v36 = *(_QWORD *)(a2 + 96);
        fchunk = get_fchunk(*(_QWORD *)(a2 + 16));
        if ( !fchunk || fchunk != get_fchunk(v36) )
        {
          v38 = *(__int64 ***)(a1 + 504);
          if ( v38 )
            sub_BAE0(v38, 13, 13, 2);
        }
        return *(unsigned __int16 *)(a2 + 26);
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 51;
      *(_BYTE *)(a2 + 45) = 7;
      v23 = ((unsigned __int16)a3 >> 7) & 0x1F;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 46) = v23;
      *(_WORD *)(a2 + 86) = v23;
      *(_BYTE *)(a2 + 85) = 7;
      *(_BYTE *)(a2 + 121) = 5;
      *(_BYTE *)(a2 + 125) = 7;
      v24 = (__int64)((unsigned __int64)(((unsigned __int16)a3 >> 7) & 0x20 | ((unsigned __int16)a3 >> 2) & 0x1Fu) << 58) >> 58;
      *(_QWORD *)(a2 + 128) = v24;
      if ( !v24 )
        return *(unsigned __int16 *)(a2 + 26);
      goto LABEL_22;
    case 2:
      v6 = a4;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 19;
      *(_BYTE *)(a2 + 81) = 1;
      v7 = (*(_BYTE *)(a2 + 34) & 4) == 0;
      *(_BYTE *)(a2 + 121) = 5;
      *(_WORD *)(a2 + 46) = ((unsigned __int16)a3 >> 7) & 0x1F;
      if ( !v7 )
        v6 = 7;
      *(_WORD *)(a2 + 86) = 0;
      *(_BYTE *)(a2 + 45) = v6;
      *(_BYTE *)(a2 + 85) = v6;
      *(_BYTE *)(a2 + 125) = v6;
      *(_QWORD *)(a2 + 128) = (__int64)((unsigned __int64)(((unsigned __int16)a3 >> 7) & 0x20
                                                         | ((unsigned __int16)a3 >> 2) & 0x1Fu) << 58) >> 58;
      v8 = *(_QWORD *)(a1 + 504);
      if ( !v8 )
        goto LABEL_61;
      *(_BYTE *)(v8 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
      v9 = *(__int64 ***)(a1 + 504);
      if ( v9 )
      {
        sub_BAE0(v9, 7, 7, 2);
        v10 = *(_QWORD *)(a1 + 504);
        if ( v10 )
        {
          *(_BYTE *)(v10 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
          v11 = *(__int64 ***)(a1 + 504);
          if ( v11 )
            sub_BAE0(v11, 13, 13, 12);
        }
      }
      if ( *(_BYTE *)(a2 + 41) == 1 )
      {
LABEL_61:
        if ( !*(_WORD *)(a2 + 46) )
        {
          v43 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          v44 = *(_DWORD *)(a2 + 152);
          *(_BYTE *)(a2 + 28) = 1;
          *(_WORD *)(a2 + 24) = 122;
          *(__m128i *)(a2 + 80) = v43;
          v45 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = v44;
          *(_BYTE *)(a2 + 80) = 1;
          *(_BYTE *)(a2 + 121) = 0;
          *(__m128i *)(a2 + 96) = v45;
        }
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 3:
      if ( (a3 & 0x107D) == 0 )
        return 0;
      v29 = ((unsigned __int16)a3 >> 7) & 0x1F;
      v30 = *(_WORD *)(a2 + 34) & 4;
      if ( (((unsigned __int16)a3 >> 7) & 0x1F) == 2 )
      {
        if ( v30 )
          LOBYTE(v29) = 7;
        v52 = 16 * a3;
        LOWORD(v52) = (16 * a3) & 0x180;
        *(_WORD *)(a2 + 24) = 19;
        *(_BYTE *)(a2 + 45) = v29;
        *(_BYTE *)(a2 + 85) = v29;
        *(_BYTE *)(a2 + 41) = 1;
        v53 = (8 * (_BYTE)a3) & 0x20 | ((unsigned __int16)a3 >> 2) & 0x10;
        v54 = 2 * a3;
        *(_WORD *)(a2 + 46) = 2;
        LOWORD(a3) = ((unsigned __int16)a3 >> 3) & 0x200;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = 2;
        *(_BYTE *)(a2 + 121) = 5;
        *(_BYTE *)(a2 + 125) = 2;
        *(_QWORD *)(a2 + 128) = (__int64)((unsigned __int64)(a3 + (v52 | v54 & 0x40u) + v53) << 54) >> 54;
      }
      else
      {
        *(_WORD *)(a2 + 24) = 1;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = ((unsigned __int16)a3 >> 7) & 0x1F;
        *(_BYTE *)(a2 + 45) = v30 == 0 ? 2 : 7;
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 2;
        *(_QWORD *)(a2 + 88) = ((((unsigned __int16)a3 << 10) & 0x1F000 | (32 * (unsigned __int16)a3) & 0x20000) << 14 >> 26)
                             & 0xFFFFF;
        if ( !(_BYTE)v29 )
          *(_BYTE *)(a2 + 28) = 1;
LABEL_22:
        v25 = *(_QWORD *)(a1 + 504);
        if ( v25 )
        {
          *(_BYTE *)(v25 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
          v26 = *(__int64 ***)(a1 + 504);
          if ( v26 )
          {
            sub_BAE0(v26, 7, 7, 2);
            v27 = *(_QWORD *)(a1 + 504);
            if ( v27 )
            {
              *(_BYTE *)(v27 + 24) = 1;
              *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
              v28 = *(__int64 ***)(a1 + 504);
              if ( v28 )
                sub_BAE0(v28, 13, 13, 12);
            }
          }
        }
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 4:
      if ( (((unsigned __int16)a3 >> 10) & 3) != 3 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        v31 = word_2AEF0[((unsigned __int16)a3 >> 10) & 3];
        v32 = *(_WORD *)(a2 + 34);
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 121) = 5;
        *(_WORD *)(a2 + 24) = v31;
        *(_WORD *)(a2 + 46) = (((unsigned __int16)a3 >> 7) & 7) + 8;
        *(_WORD *)(a2 + 86) = (((unsigned __int16)a3 >> 7) & 7) + 8;
        v33 = (v32 & 4) == 0 ? 2 : 7;
        v34 = ((unsigned __int16)a3 >> 7) & 0x20 | ((unsigned __int16)a3 >> 2) & 0x1Fu;
        *(_BYTE *)(a2 + 45) = v33;
        *(_BYTE *)(a2 + 85) = v33;
        if ( v31 == 24 )
        {
          *(_BYTE *)(a2 + 125) = v33;
          *(_QWORD *)(a2 + 128) = v34 << 58 >> 58;
        }
        else
        {
          *(_BYTE *)(a2 + 125) = 0;
          *(_QWORD *)(a2 + 128) = (char)v34;
          if ( !(_BYTE)v34 )
          {
            *(_BYTE *)(a2 + 84) &= ~8u;
            *(_BYTE *)(a2 + 124) &= ~8u;
            *(_BYTE *)(a2 + 28) = 17;
          }
        }
        return *(unsigned __int16 *)(a2 + 26);
      }
      v49 = word_2AEE0[((unsigned __int16)a3 >> 10) & 4 | ((unsigned __int16)a3 >> 5) & 3];
      *(_WORD *)(a2 + 24) = v49;
      if ( v49 )
      {
        v50 = *(_WORD *)(a2 + 34);
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 121) = 1;
        *(_WORD *)(a2 + 46) = (((unsigned __int16)a3 >> 7) & 7) + 8;
        *(_WORD *)(a2 + 86) = (((unsigned __int16)a3 >> 7) & 7) + 8;
        v51 = (v50 & 4) == 0 ? 2 : 7;
        *(_BYTE *)(a2 + 45) = v51;
        *(_BYTE *)(a2 + 85) = v51;
        *(_WORD *)(a2 + 126) = (((unsigned __int16)a3 >> 2) & 7) + 8;
        *(_BYTE *)(a2 + 125) = v51;
        return *(unsigned __int16 *)(a2 + 26);
      }
      return 0;
    case 5:
      v35 = *(_WORD *)(a2 + 34);
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 3;
      *(_WORD *)(a2 + 46) = 0;
      *(_BYTE *)(a2 + 45) = (v35 & 4) == 0 ? 2 : 7;
      goto LABEL_36;
    case 6:
    case 7:
      v7 = a4 == 6;
      v13 = *(_WORD *)(a2 + 34);
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 24) = !v7 + 5;
      *(_WORD *)(a2 + 46) = (((unsigned __int16)a3 >> 7) & 7) + 8;
      *(_WORD *)(a2 + 86) = 0;
      v14 = (v13 & 4) == 0 ? 2 : 7;
      *(_BYTE *)(a2 + 45) = v14;
      *(_BYTE *)(a2 + 85) = v14;
      sub_BC20(a1, a2 + 120, a3, a2);
      v15 = *(_QWORD *)(a2 + 136);
      v16 = get_fchunk(*(_QWORD *)(a2 + 16));
      if ( !v16 || v16 != get_fchunk(v15) )
      {
        v17 = *(__int64 ***)(a1 + 504);
        if ( v17 )
        {
          sub_BAE0(v17, 7, 7, 2);
          v18 = *(__int64 ***)(a1 + 504);
          if ( v18 )
            sub_BAE0(v18, 13, 13, 10);
        }
      }
      return *(unsigned __int16 *)(a2 + 26);
    default:
      return *(unsigned __int16 *)(a2 + 26);
  }
}

