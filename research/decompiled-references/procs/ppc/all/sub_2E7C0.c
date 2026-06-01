__int64 __fastcall sub_2E7C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int16 v10; // bp
  char v11; // al
  char v12; // al
  __int64 v13; // r9
  __int64 v15; // r15
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 fchunk; // r15
  __int64 v20; // rax
  int v21; // r8d
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // r12
  __int64 *v29; // rdx
  int v30; // eax
  int v31; // esi
  int v32; // r14d
  int v33; // r12d
  int v34; // eax
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // rsi
  unsigned __int64 v38; // rdx
  char v39; // cl
  int v40; // edx
  __int16 v41; // ax
  __int64 v42; // r9
  bool v43; // zf
  unsigned int v44; // r8d
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  int v47; // eax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  unsigned __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // r14
  __int16 v54; // ax
  char v55; // al
  __int64 v56; // r9
  unsigned int v57; // r8d
  __int64 v58; // rax
  __int64 v59; // rax
  char v60; // al
  __int64 v61; // r9
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  __int64 v73; // [rsp+18h] [rbp-50h]
  __int64 v74; // [rsp+20h] [rbp-48h]
  unsigned __int64 v75; // [rsp+28h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  *(_BYTE *)(a4 + 34) = (a6 & 0x800) != 0;
  v10 = a6;
  switch ( (char)a6 )
  {
    case 0:
      goto LABEL_6;
    case 1:
      *(_BYTE *)(a4 + 1) = 7;
      *(_BYTE *)(a4 + 5) = 9;
      v15 = (__int16)(a5 & 0xFFFC);
      *(_QWORD *)(a4 + 16) = (__int16)v15;
      if ( (a5 & 2) == 0 )
      {
        v16 = *(_QWORD *)(a2 + 8) + (__int16)v15;
        *(_QWORD *)(a4 + 16) = v16;
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        v18 = v16 + 16LL * *(_QWORD *)a2;
        if ( v18 != v17 )
        {
          v17 &= v18;
          if ( v18 == -1 )
            v17 = -1;
        }
        fchunk = get_fchunk(*(_QWORD *)(a2 + 16));
        if ( fchunk && fchunk == get_fchunk(v17) || !a3 )
          goto LABEL_34;
        goto LABEL_33;
      }
      if ( a3 )
      {
LABEL_33:
        sub_2A900((__int64 **)a3, 16, 16, 2);
LABEL_34:
        v15 = *(_QWORD *)(a4 + 16);
      }
      v20 = getseg(*(_QWORD *)(a2 + 16));
      *(_QWORD *)(a4 + 16) = segm_adjust_ea(v20, v15);
      goto LABEL_6;
    case 2:
    case 4:
      *(_BYTE *)(a4 + 1) = 12;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = BYTE2(a5) & 0x1F;
      goto LABEL_6;
    case 3:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 21) & 0x1F;
      *(_DWORD *)(a2 + 28) |= 0x400u;
      goto LABEL_6;
    case 5:
      *(_BYTE *)(a4 + 1) = 12;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (unsigned __int16)a5 >> 11;
      goto LABEL_6;
    case 6:
      *(_BYTE *)(a4 + 1) = 12;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (a5 >> 21) & 0x1F;
      goto LABEL_6;
    case 7:
      *(_BYTE *)(a4 + 1) = 11;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (a5 >> 23) & 7;
      if ( (a5 & 0x200000) != 0 )
        *(_DWORD *)(a2 + 28) |= 0x10u;
      if ( (a5 & 0x400000) == 0 )
        goto LABEL_6;
      return 0;
    case 8:
      *(_BYTE *)(a4 + 1) = 11;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (a5 >> 23) & 7;
      if ( (a5 & 0x600000) == 0 )
        goto LABEL_6;
      return 0;
    case 9:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 23) & 7;
      if ( (a5 & 0x600000) == 0 )
        goto LABEL_6;
      return 0;
    case 10:
      *(_BYTE *)(a4 + 1) = 11;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (a5 >> 18) & 7;
      if ( (a5 & 0x30000) != 0 )
        return 0;
      goto LABEL_6;
    case 11:
      v40 = a5 & 0x100000;
      if ( *(_WORD *)(a2 + 24) == 125 )
      {
        if ( !v40 )
          goto LABEL_6;
        *(_BYTE *)(a4 + 1) = 5;
        *(_BYTE *)(a4 + 5) = 2;
        *(_QWORD *)(a4 + 8) = (unsigned __int8)(a5 >> 12);
      }
      else
      {
        *(_BYTE *)(a4 + 1) = 5;
        *(_BYTE *)(a4 + 5) = 2;
        *(_QWORD *)(a4 + 8) = (unsigned __int8)(a5 >> 12);
        if ( !v40 )
          goto LABEL_6;
      }
      v41 = 403;
      if ( *(_WORD *)(a2 + 24) == 132 )
        v41 = 402;
      *(_WORD *)(a2 + 24) = v41;
      goto LABEL_6;
    case 12:
      v11 = 0;
      goto LABEL_3;
    case 13:
      v11 = 1;
      goto LABEL_3;
    case 14:
      v11 = 2;
      goto LABEL_3;
    case 15:
      v11 = 7;
      goto LABEL_3;
    case 16:
      v11 = 3;
      goto LABEL_3;
    case 17:
      v11 = 4;
LABEL_3:
      *(_BYTE *)(a4 + 5) = v11;
      *(_BYTE *)(a4 + 1) = 4;
      *(_QWORD *)(a4 + 16) = (__int16)a5;
      *(_WORD *)(a4 + 6) = BYTE2(a5) & 0x1F;
      v12 = 2 * getinf_flag(3, 32);
      v43 = *(_WORD *)(a4 + 6) == 0;
      *(_BYTE *)(a4 + 2) = v12;
      if ( !v43 )
        goto LABEL_4;
      v62 = *(_QWORD *)(a2 + 16) + v12;
      v71 = 0;
      v73 = 0;
      v74 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_77D70);
      if ( !(unsigned __int8)get_fixup(&v71, v62) )
        goto LABEL_232;
      if ( (v71 & 0x100000000LL) != 0 )
      {
        v63 = si128.m128i_i64[0];
      }
      else
      {
        if ( si128.m128i_i64[1] == -1 )
          goto LABEL_232;
        v63 = 16 * sel2para();
      }
      if ( v63 )
        goto LABEL_4;
LABEL_232:
      v64 = *(_QWORD *)(a4 + 16);
      v65 = getseg(*(_QWORD *)(a2 + 16));
      v66 = segm_adjust_ea(v65, v64);
      *(_BYTE *)(a4 + 1) = 2;
      *(_QWORD *)(a4 + 16) = v66;
LABEL_4:
      if ( a3 )
        sub_2A4E0((_QWORD *)a3, 16, 0x1Fu, 0xFFu, 0, v13, v71);
      goto LABEL_6;
    case 18:
      v60 = 2;
      goto LABEL_224;
    case 19:
      v60 = 7;
LABEL_224:
      *(_BYTE *)(a4 + 5) = v60;
      *(_BYTE *)(a4 + 1) = 4;
      *(_WORD *)(a4 + 6) = BYTE2(a5) & 0x1F;
      *(_QWORD *)(a4 + 16) = (__int16)(a5 & 0xFFFC);
      *(_BYTE *)(a4 + 2) = 2 * getinf_flag(3, 32);
      if ( a3 )
        sub_2A4E0((_QWORD *)a3, 16, 0x1Du, 0xFFu, 0, v61, v71);
      goto LABEL_6;
    case 20:
      *(_BYTE *)(a4 + 5) = 3;
      v54 = a5 | 0xF000;
      *(_BYTE *)(a4 + 1) = 4;
      if ( (a5 & 0x800) == 0 )
        v54 = a5 & 0xFFF;
      *(_WORD *)(a4 + 6) = BYTE2(a5) & 0x1F;
      *(_QWORD *)(a4 + 16) = v54;
      v55 = 2 * getinf_flag(3, 32);
      v43 = *(_WORD *)(a4 + 6) == 0;
      *(_BYTE *)(a4 + 2) = v55;
      if ( v43 && !(unsigned __int8)get_fixup(0, *(_QWORD *)(a2 + 16) + v55) )
      {
        v68 = *(_QWORD *)(a4 + 16);
        v69 = getseg(*(_QWORD *)(a2 + 16));
        v70 = segm_adjust_ea(v69, v68);
        *(_BYTE *)(a4 + 1) = 2;
        *(_QWORD *)(a4 + 16) = v70;
      }
      if ( a3 )
        sub_2A4E0((_QWORD *)a3, 20, 0x1Fu, 0xFFu, 0, v56, v71);
      goto LABEL_6;
    case 21:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (unsigned __int8)(a5 >> 17);
      goto LABEL_6;
    case 22:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 4;
      *(_WORD *)(a4 + 6) = (BYTE2(a5) & 0x1F) + 35;
      goto LABEL_6;
    case 23:
      goto LABEL_15;
    case 24:
      if ( (a5 & 0x7C0) != 0 )
        return 0;
LABEL_15:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 4;
      *(_WORD *)(a4 + 6) = ((unsigned __int16)a5 >> 11) + 35;
      goto LABEL_6;
    case 25:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 4;
      *(_BYTE *)(a4 + 41) = 1;
      *(_BYTE *)(a4 + 45) = 4;
      *(_WORD *)(a4 + 6) = (BYTE2(a5) & 0x1F) + 35;
      *(_WORD *)(a4 + 46) = ((a5 >> 6) & 0x1F) + 35;
      goto LABEL_6;
    case 26:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 4;
      *(_BYTE *)(a4 + 41) = 9;
      *(_BYTE *)(a4 + 45) = 4;
      *(_WORD *)(a4 + 6) = (BYTE2(a5) & 0x1F) + 35;
      *(_BYTE *)(a4 + 72) = ((unsigned __int16)a5 >> 11) + 35;
      *(_WORD *)(a4 + 46) = ((a5 >> 6) & 0x1F) + 35;
      goto LABEL_6;
    case 27:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 4;
      *(_WORD *)(a4 + 6) = ((a5 >> 21) & 0x1F) + 35;
      goto LABEL_6;
    case 28:
      if ( (a5 & 0x800) != 0 )
        return 0;
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (unsigned __int16)a5 >> 12;
      goto LABEL_6;
    case 29:
    case 31:
    case 35:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (unsigned __int16)a5 >> 11;
      goto LABEL_6;
    case 30:
      *(_BYTE *)(a4 + 1) = 7;
      v22 = a5 & 0x3FFFFFC;
      *(_BYTE *)(a4 + 5) = 9;
      if ( (a5 & 0x2000000) != 0 )
        v22 = a5 & 0x3FFFFFC | 0xFFFFFFFFFC000000LL;
      *(_QWORD *)(a4 + 16) = v22;
      if ( (a5 & 2) != 0 )
      {
        v67 = getseg(*(_QWORD *)(a2 + 16));
        *(_QWORD *)(a4 + 16) = segm_adjust_ea(v67, v22);
LABEL_52:
        if ( a3 )
        {
          v29 = *(__int64 **)a3;
          if ( *(_QWORD *)a3 )
          {
            v30 = 8 * *(_DWORD *)(a3 + 8);
            v31 = v30 + 40;
            v32 = v30 + 26;
            v33 = v30 + 2;
            v34 = v30 + 33;
            if ( v34 >= 0 )
              v31 = v34;
            v35 = v31 >> 3;
            if ( v29[1] < v35 )
            {
              sub_2E740(*(__int64 **)a3, v35);
              v29 = *(__int64 **)a3;
            }
            v36 = v33;
            v37 = *v29;
            if ( v33 < (unsigned __int64)v32 )
            {
              do
              {
                v38 = v36;
                v39 = v36++;
                *(_BYTE *)(v37 + (v38 >> 3)) |= 1 << (v39 & 7);
              }
              while ( v32 != v36 );
            }
          }
        }
        goto LABEL_6;
      }
      v23 = *(_QWORD *)(a2 + 8) + v22;
      *(_QWORD *)(a4 + 16) = v23;
      v24 = getseg(*(_QWORD *)(a2 + 16));
      v25 = segm_adjust_ea(v24, v23);
      *(_QWORD *)(a4 + 16) = v25;
      v26 = v25 + 16LL * *(_QWORD *)a2;
      v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( v26 != v27 )
      {
        v27 &= v26;
        if ( v26 == -1 )
          v27 = -1;
      }
      v28 = get_fchunk(*(_QWORD *)(a2 + 16));
      if ( !v28 || v28 != get_fchunk(v27) )
        goto LABEL_52;
LABEL_6:
      if ( (v10 & 0x1000) != 0
        && (unsigned __int8)getinf_flag(3, 4)
        && (*(_QWORD *)a4 & 0xFF000000FF00LL) == 0x20000000100LL )
      {
        *(_BYTE *)(a4 + 5) = 7;
      }
      return 1;
    case 32:
      *(_BYTE *)(a4 + 1) = 1;
      v21 = HIWORD(a5) & 0x1F;
      *(_BYTE *)(a4 + 5) = 2;
      *(_WORD *)(a4 + 6) = v21;
      if ( !v21 && (a6 & 0x800) != 0 )
      {
        *(_BYTE *)(a4 + 1) = 5;
        *(_BYTE *)(a4 + 5) = 0;
        *(_QWORD *)(a4 + 8) = 0;
      }
      goto LABEL_6;
    case 33:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_WORD *)(a4 + 6) = (unsigned __int16)a5 >> 11;
      goto LABEL_6;
    case 34:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_WORD *)(a4 + 6) = (a5 >> 21) & 0x1F;
      goto LABEL_6;
    case 36:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (16 * (_BYTE)a5) & 0x20 | (unsigned int)((unsigned __int16)a5 >> 11);
      goto LABEL_6;
    case 37:
      *(_BYTE *)(a4 + 1) = 10;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (unsigned __int16)a5 >> 11;
      *(_BYTE *)(a4 + 33) = (a5 >> 1) & 0x1F;
      *(_BYTE *)(a4 + 32) = (a5 >> 6) & 0x1F;
      *(_DWORD *)(a2 + 28) |= 0xE0u;
      goto LABEL_6;
    case 38:
      *(_BYTE *)(a4 + 1) = 10;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (unsigned __int16)a5 >> 11;
      *(_BYTE *)(a4 + 33) = (a5 >> 1) & 0x1F;
      *(_BYTE *)(a4 + 32) = (a5 >> 6) & 0x1F;
      *(_DWORD *)(a2 + 28) |= 0xC0u;
      goto LABEL_6;
    case 39:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 1;
      *(_QWORD *)(a4 + 8) = (__int16)a5;
      if ( a3 )
        sub_2A4E0((_QWORD *)a3, 16, 0x1Fu, 0xFFu, 0, a6, v71);
      goto LABEL_79;
    case 40:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_WORD *)(a4 + 6) = (BYTE2(a5) & 0xF) + 67;
      if ( (a5 & 0x100000) == 0 )
        goto LABEL_6;
      return 0;
    case 41:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 21) & 0x1F;
      *(_DWORD *)(a2 + 28) |= 0x400u;
      goto LABEL_6;
    case 42:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 2;
      *(_QWORD *)(a4 + 8) = (unsigned __int16)a5;
      if ( a3 )
        sub_2A4E0((_QWORD *)a3, 16, 0x1Fu, 0xFFu, 0, a6, v71);
LABEL_79:
      *(_BYTE *)(a4 + 2) = 2 * getinf_flag(3, 32);
      goto LABEL_6;
    case 43:
      return (a5 & 0x3E00000) == 0;
    case 44:
      return (a5 & 0x3E00000) == 0x200000;
    case 45:
      return (a5 & 0x1F0000) == 0;
    case 46:
      return (a5 & 0xF800) == 0;
    case 47:
      *(_BYTE *)(a4 + 1) = 8;
      *(_BYTE *)(a4 + 5) = 2;
      *(_QWORD *)(a4 + 8) = HIWORD(a5) & 0x1F | (a5 >> 6) & 0x3E0;
      goto LABEL_6;
    case 48:
      *(_BYTE *)(a4 + 1) = 8;
      *(_BYTE *)(a4 + 5) = 2;
      v59 = HIWORD(a5) & 0x1F | (a5 >> 6) & 0x3E0;
      *(_QWORD *)(a4 + 8) = v59;
      return (unsigned __int64)(v59 - 268) <= 1;
    case 49:
      *(_BYTE *)(a4 + 1) = 13;
      *(_BYTE *)(a4 + 5) = 2;
      *(_QWORD *)(a4 + 8) = HIWORD(a5) & 0x1F | (a5 >> 6) & 0x3E0;
      goto LABEL_6;
    case 50:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 2;
      *(_QWORD *)(a4 + 8) = HIWORD(a5) & 0x1F | (a5 >> 6) & 0x3E0;
      goto LABEL_6;
    case 51:
      *(_BYTE *)(a4 + 1) = 10;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (16 * (_BYTE)a5) & 0x20 | ((unsigned __int16)a5 >> 11);
      *(_BYTE *)(a4 + 32) = a5 & 0x20 | (a5 >> 6) & 0x1F;
      *(_DWORD *)(a2 + 28) |= 0x60u;
      goto LABEL_6;
    case 52:
      *(_BYTE *)(a4 + 1) = 10;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (16 * (_BYTE)a5) & 0x20 | ((unsigned __int16)a5 >> 11);
      *(_BYTE *)(a4 + 33) = a5 & 0x20 | (a5 >> 6) & 0x1F;
      *(_DWORD *)(a2 + 28) |= 0xA0u;
      goto LABEL_6;
    case 53:
      *(_BYTE *)(a4 + 1) = 10;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (unsigned __int16)a5 >> 11;
      *(_BYTE *)(a4 + 32) = a5 & 0x20 | (a5 >> 6) & 0x1F;
      *(_DWORD *)(a2 + 28) |= 0x40u;
      goto LABEL_6;
    case 54:
      *(_BYTE *)(a4 + 1) = 10;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (unsigned __int16)a5 >> 11;
      *(_BYTE *)(a4 + 33) = a5 & 0x20 | (a5 >> 6) & 0x1F;
      *(_DWORD *)(a2 + 28) |= 0x80u;
      goto LABEL_6;
    case 55:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 15) & 1;
      goto LABEL_6;
    case 56:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 11) & 3;
      goto LABEL_6;
    case 57:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_WORD *)(a4 + 6) = (unsigned __int16)a5 >> 11;
      *(_BYTE *)(a4 + 41) = 12;
      *(_BYTE *)(a4 + 45) = 0;
      *(_WORD *)(a4 + 46) = (a5 >> 6) & 0x1F;
      goto LABEL_6;
    case 58:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_WORD *)(a4 + 6) = (unsigned __int16)a5 >> 11;
      *(_BYTE *)(a4 + 41) = 12;
      *(_BYTE *)(a4 + 45) = 0;
      *(_WORD *)(a4 + 46) = a5 & 7;
      goto LABEL_6;
    case 59:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 2;
      *(_QWORD *)(a4 + 8) = HIWORD(a5) & 0x1F;
      goto LABEL_6;
    case 60:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 2;
      *(_QWORD *)(a4 + 8) = (unsigned __int16)a5 >> 11;
      goto LABEL_6;
    case 61:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 2;
      *(_QWORD *)(a4 + 8) = (a5 >> 18) & 7;
      goto LABEL_6;
    case 62:
      sub_2A7C0(a3, a4, a5, 1);
      goto LABEL_6;
    case 63:
      sub_2A7C0(a3, a4, a5, 2);
      goto LABEL_6;
    case 64:
      sub_2A7C0(a3, a4, a5, 7);
      goto LABEL_6;
    case 65:
      v57 = HIWORD(a5);
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 2;
      v58 = v57 & 0x1F | 0xFFFFFFF0;
      if ( (v57 & 0x10) == 0 )
        v58 = v57 & 0x1F;
      *(_QWORD *)(a4 + 8) = v58;
      goto LABEL_6;
    case 66:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = (BYTE2(a5) & 0x1F) + 88;
      goto LABEL_6;
    case 67:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = ((unsigned __int16)a5 >> 11) + 88;
      goto LABEL_6;
    case 68:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = ((a5 >> 6) & 0x1F) + 88;
      goto LABEL_6;
    case 69:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = ((a5 >> 21) & 0x1F) + 88;
      goto LABEL_6;
    case 70:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_BYTE *)(a4 + 41) = 1;
      *(_WORD *)(a4 + 6) = ((unsigned __int16)a5 >> 11) + 88;
      *(_BYTE *)(a4 + 45) = 8;
      *(_WORD *)(a4 + 46) = ((a5 >> 6) & 0x1F) + 88;
      goto LABEL_6;
    case 71:
      if ( (a5 & 0x400) != 0 )
        return 0;
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_BYTE *)(a4 + 41) = 5;
      *(_WORD *)(a4 + 6) = ((unsigned __int16)a5 >> 11) + 88;
      *(_BYTE *)(a4 + 45) = 0;
      *(_QWORD *)(a4 + 48) = (a5 >> 5) & 0x1F;
      goto LABEL_6;
    case 72:
      if ( (a5 & 0x1800000) != 0 )
        return 0;
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_BYTE *)(a4 + 41) = 5;
      *(_QWORD *)(a4 + 8) = (a5 >> 21) & 3;
      *(_BYTE *)(a4 + 45) = 0;
      *(_QWORD *)(a4 + 48) = (a5 >> 25) & 1;
      goto LABEL_6;
    case 73:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 2;
      *(_QWORD *)(a4 + 8) = (a5 >> 11) & 0x3FF;
      goto LABEL_6;
    case 74:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_WORD *)(a4 + 6) = (unsigned __int16)a5 >> 11;
      if ( (a5 & 1) != 0 )
      {
        *(_BYTE *)(a4 + 41) = 5;
        *(_BYTE *)(a4 + 45) = 0;
        *(_QWORD *)(a4 + 48) = 1;
      }
      goto LABEL_6;
    case 75:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 2;
      *(_QWORD *)(a4 + 8) = (a5 >> 11) & 0x7FFF;
      goto LABEL_6;
    case 76:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 4;
      *(_BYTE *)(a4 + 41) = 5;
      *(_WORD *)(a4 + 6) = ((unsigned __int16)a5 >> 11) + 35;
      *(_BYTE *)(a4 + 45) = 0;
      *(_QWORD *)(a4 + 48) = (a5 >> 9) & 3;
      goto LABEL_6;
    case 77:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = HIWORD(a5) & 0x1F;
      goto LABEL_6;
    case 78:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (unsigned __int16)a5 >> 10;
      goto LABEL_6;
    case 79:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 19) & 3;
      if ( (a5 & 0x70000) == 0 )
        goto LABEL_6;
      return 0;
    case 80:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 20) & 1;
      if ( (a5 & 0xF0000) == 0 )
        goto LABEL_6;
      return 0;
    case 81:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_BYTE *)(a4 + 41) = 5;
      *(_QWORD *)(a4 + 8) = (a5 >> 25) & 1;
      *(_BYTE *)(a4 + 45) = 0;
      *(_QWORD *)(a4 + 48) = HIWORD(a5) & 1;
      goto LABEL_6;
    case 82:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_BYTE *)(a4 + 41) = 5;
      *(_QWORD *)(a4 + 8) = (a5 >> 10) & 1;
      *(_BYTE *)(a4 + 45) = 0;
      *(_QWORD *)(a4 + 48) = (a5 >> 7) & 7;
      goto LABEL_6;
    case 83:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_BYTE *)(a4 + 41) = 5;
      *(_QWORD *)(a4 + 8) = (a5 >> 15) & 1;
      *(_BYTE *)(a4 + 45) = 0;
      *(_QWORD *)(a4 + 48) = (a5 >> 12) & 7;
      goto LABEL_6;
    case 84:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = ((a5 >> 21) & 0x1F | (32 * (_BYTE)a5) & 0x20) + 216;
      goto LABEL_6;
    case 85:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = (BYTE2(a5) & 0x1F | (8 * (_BYTE)a5) & 0x20) + 216;
      goto LABEL_6;
    case 86:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = (((unsigned __int16)a5 >> 11) | (16 * (_BYTE)a5) & 0x20) + 216;
      goto LABEL_6;
    case 87:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_BYTE *)(a4 + 41) = 1;
      *(_BYTE *)(a4 + 45) = 8;
      *(_WORD *)(a4 + 6) = (((unsigned __int16)a5 >> 11) | (16 * (_BYTE)a5) & 0x20) + 216;
      *(_WORD *)(a4 + 46) = ((a5 >> 6) & 0x1F | (4 * (_BYTE)a5) & 0x20) + 216;
      goto LABEL_6;
    case 88:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_BYTE *)(a4 + 41) = 5;
      *(_BYTE *)(a4 + 45) = 0;
      *(_WORD *)(a4 + 6) = (((unsigned __int16)a5 >> 11) | (16 * (_BYTE)a5) & 0x20) + 216;
      *(_QWORD *)(a4 + 48) = (a5 >> 8) & 3;
      goto LABEL_6;
    case 89:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = (BYTE2(a5) & 0x1F | (a5 >> 5) & 0x20) + ((2 * (_BYTE)a5) & 0x40) + 88;
      goto LABEL_6;
    case 90:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = ((32 * (_BYTE)a5) & 0x60 | ((unsigned __int16)a5 >> 11)) + 88;
      goto LABEL_6;
    case 91:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = ((a5 >> 6) & 7) + 88;
      goto LABEL_6;
    case 92:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = ((a5 >> 21) & 0x1F | (8 * (_BYTE)a5) & 0x60) + 88;
      goto LABEL_6;
    case 93:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_BYTE *)(a4 + 41) = 1;
      *(_BYTE *)(a4 + 45) = 8;
      *(_WORD *)(a4 + 6) = ((32 * (_BYTE)a5) & 0x60 | ((unsigned __int16)a5 >> 11)) + 88;
      *(_WORD *)(a4 + 46) = ((a5 >> 6) & 7) + 88;
      goto LABEL_6;
    case 94:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_BYTE *)(a4 + 41) = 1;
      *(_BYTE *)(a4 + 45) = 8;
      *(_WORD *)(a4 + 6) = ((32 * (_BYTE)a5) & 0x60 | (a5 >> 11) & 0x1F) + 88;
      *(_WORD *)(a4 + 46) = ((a5 >> 21) & 0x1F | (8 * (_BYTE)a5) & 0x60) + 88;
      goto LABEL_6;
    case 95:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_BYTE *)(a4 + 41) = 1;
      *(_BYTE *)(a4 + 45) = 8;
      *(_WORD *)(a4 + 6) = ((a5 >> 21) & 0x1F | (32 * (unsigned __int8)(a5 >> 2)) & 0x60) + 88;
      *(_WORD *)(a4 + 46) = ((32 * (_BYTE)a5) & 0x60 | ((unsigned __int16)a5 >> 11)) + 88;
      goto LABEL_6;
    case 96:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_BYTE *)(a4 + 41) = 5;
      *(_BYTE *)(a4 + 45) = 0;
      *(_WORD *)(a4 + 6) = ((32 * (_BYTE)a5) & 0x60 | ((unsigned __int16)a5 >> 11)) + 88;
      *(_QWORD *)(a4 + 48) = (a5 >> 6) & 0xF;
      goto LABEL_6;
    case 97:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 2;
      *(_QWORD *)(a4 + 8) = (HIWORD(a5) & 0x1F) + ((a5 >> 1) & 0xE0);
      goto LABEL_6;
    case 98:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_BYTE *)(a4 + 41) = 5;
      *(_QWORD *)(a4 + 8) = (a5 >> 18) & 7;
      *(_BYTE *)(a4 + 45) = 0;
      *(_BYTE *)(a4 + 81) = 5;
      *(_QWORD *)(a4 + 48) = HIWORD(a5) & 3;
      *(_BYTE *)(a4 + 85) = 0;
      *(_QWORD *)(a4 + 88) = (unsigned __int8)a5 >> 6;
      goto LABEL_6;
    case 99:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 2;
      *(_BYTE *)(a4 + 41) = 5;
      *(_QWORD *)(a4 + 8) = HIWORD(a5) & 0x1F;
      *(_BYTE *)(a4 + 45) = 0;
      *(_QWORD *)(a4 + 48) = (unsigned __int8)a5 >> 6;
      goto LABEL_6;
    case 100:
      sub_2A7C0(a3, a4, a5, 0);
      goto LABEL_6;
    case 101:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_BYTE *)(a4 + 41) = 5;
      *(_BYTE *)(a4 + 45) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 11) & 3 | (8 * (_BYTE)a5) & 8;
      *(_QWORD *)(a4 + 48) = (unsigned __int16)a5 >> 13;
      goto LABEL_6;
    case 102:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (unsigned __int16)a5 >> 13;
      goto LABEL_6;
    case 103:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 13) & 3;
      goto LABEL_6;
    case 104:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_BYTE *)(a4 + 41) = 5;
      *(_QWORD *)(a4 + 8) = (a5 >> 11) & 3;
      *(_BYTE *)(a4 + 45) = 0;
      *(_QWORD *)(a4 + 48) = (a5 >> 13) & 3;
      goto LABEL_6;
    case 105:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 11) & 0xF;
      goto LABEL_6;
    case 106:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 11) & 7;
      goto LABEL_6;
    case 107:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_BYTE *)(a4 + 41) = 5;
      *(_WORD *)(a4 + 6) = (unsigned __int16)a5 >> 11;
      *(_BYTE *)(a4 + 45) = 0;
      *(_QWORD *)(a4 + 48) = a5 & 7;
      goto LABEL_6;
    case 108:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_BYTE *)(a4 + 41) = 5;
      *(_WORD *)(a4 + 6) = (unsigned __int16)a5 >> 11;
      *(_BYTE *)(a4 + 45) = 0;
      *(_QWORD *)(a4 + 48) = a5 & 3;
      goto LABEL_6;
    case 109:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 1;
      *(_QWORD *)(a4 + 8) = (a5 >> 11) & 0x3FF;
      goto LABEL_6;
    case 110:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_BYTE *)(a4 + 41) = 5;
      *(_QWORD *)(a4 + 8) = (a5 >> 15) & 1;
      *(_BYTE *)(a4 + 45) = 0;
      *(_QWORD *)(a4 + 48) = (a5 >> 11) & 0xF;
      goto LABEL_6;
    case 111:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = ((unsigned __int16)a5 >> 11) + 88;
      if ( (a5 & 0x400) == 0 )
        return 0;
      *(_BYTE *)(a4 + 41) = 5;
      *(_BYTE *)(a4 + 45) = 0;
      *(_QWORD *)(a4 + 48) = (a5 >> 9) & 1;
      goto LABEL_6;
    case 112:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_WORD *)(a4 + 6) = (a5 >> 21) & 0x1F;
      goto LABEL_6;
    case 113:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = HIWORD(a5) & 0xF;
      goto LABEL_6;
    case 114:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 25) & 1;
      goto LABEL_6;
    case 115:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 21) & 1;
      goto LABEL_6;
    case 116:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (__int64)((unsigned __int64)(a5 >> 11) << 59) >> 59;
      goto LABEL_6;
    case 117:
      *(_BYTE *)(a4 + 1) = 11;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (a5 >> 23) & 7;
      goto LABEL_6;
    case 118:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 11) & 1;
      goto LABEL_6;
    case 119:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_BYTE *)(a4 + 41) = 5;
      *(_QWORD *)(a4 + 8) = (a5 >> 11) & 3;
      *(_BYTE *)(a4 + 45) = 0;
      *(_BYTE *)(a4 + 81) = 5;
      *(_QWORD *)(a4 + 48) = (a5 >> 14) & 1;
      *(_BYTE *)(a4 + 85) = 0;
      *(_BYTE *)(a4 + 121) = 5;
      *(_QWORD *)(a4 + 88) = (a5 >> 13) & 1;
      *(_BYTE *)(a4 + 125) = 0;
      *(_QWORD *)(a4 + 128) = (a5 >> 15) & 1;
      goto LABEL_6;
    case 120:
      if ( (a5 & 0x100000) != 0 )
        return 0;
      *(_BYTE *)(a4 + 1) = 14;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (a5 >> 18) & 3;
      *(_BYTE *)(a4 + 33) = BYTE2(a5) & 1;
      *(_BYTE *)(a4 + 32) = (a5 & 0x20000) != 0;
      goto LABEL_6;
    case 121:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 21) & 7;
      goto LABEL_6;
    case 122:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 2;
      v48 = a5 & 1 | (a5 >> 15) & 0x3E | ((unsigned __int64)((unsigned __int16)a5 >> 6) << 6);
      BYTE1(v48) ^= 0x80u;
      v49 = v48 - 0x8000;
      *(_QWORD *)(a4 + 8) = v49;
      if ( v49 )
      {
        v50 = *(_QWORD *)(a2 + 16);
        v51 = v50 + *(unsigned __int16 *)(a2 + 26) + 16LL * *(_QWORD *)a2 + v49;
        v52 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        if ( v51 != v52 )
        {
          v52 &= v51;
          if ( v51 == -1 )
            v52 = -1;
        }
        v53 = get_fchunk(v50);
        if ( (!v53 || v53 != get_fchunk(v52)) && a3 )
        {
          sub_2A900((__int64 **)a3, 21, 21, 6);
          sub_2A900((__int64 **)a3, 1, 1, 0);
        }
      }
      goto LABEL_6;
    case 123:
      *(_BYTE *)(a4 + 1) = 11;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (a5 >> 23) & 7;
      v47 = *(_DWORD *)(a2 + 28);
      if ( (a5 & 0x200000) != 0 )
        v47 = *(_DWORD *)(a2 + 28) | 0x10;
      BYTE1(v47) |= 0x80u;
      *(_DWORD *)(a2 + 28) = v47;
      goto LABEL_6;
    case 124:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = HIWORD(a5) & 3;
      goto LABEL_6;
    case 125:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_BYTE *)(a4 + 41) = 15;
      *(_WORD *)(a4 + 6) = BYTE2(a5) & 0x1F;
      *(_BYTE *)(a4 + 45) = 2;
      *(_WORD *)(a4 + 46) = (a5 >> 6) & 0x1F;
      *(_BYTE *)(a4 + 72) = (unsigned __int16)a5 >> 11;
      goto LABEL_6;
    case 126:
      *(_BYTE *)(a4 + 1) = 5;
      v45 = (unsigned __int16)a5 >> 11;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (unsigned int)v45;
      v46 = 66047;
      if ( _bittest64(&v46, v45) )
        goto LABEL_6;
      if ( (unsigned int)v45 > 0x19 )
      {
        if ( (_DWORD)v45 == 28 )
          goto LABEL_6;
        return 0;
      }
      else
      {
        if ( (unsigned int)v45 > 0x17 )
          goto LABEL_6;
        return 0;
      }
    case 127:
      v44 = (a5 >> 21) & 0x1F;
      v43 = v44 == 0;
      goto LABEL_102;
    case -128:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 2;
      *(_QWORD *)(a4 + 8) = HIWORD(a5) & 0xF;
      if ( (a5 & 0x100000) == 0 )
        goto LABEL_6;
      return 0;
    case -127:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = ((a5 >> 21) & 0x1F | (4 * (_BYTE)a5) & 0x20) + 216;
      goto LABEL_6;
    case -126:
      *(_BYTE *)(a4 + 5) = 7;
      *(_BYTE *)(a4 + 1) = 4;
      *(_WORD *)(a4 + 6) = BYTE2(a5) & 0x1F;
      *(_QWORD *)(a4 + 16) = (__int16)(a5 & 0xFFF0);
      *(_BYTE *)(a4 + 2) = 2 * getinf_flag(3, 32);
      if ( a3 )
        sub_2A4E0((_QWORD *)a3, 16, 0x1Bu, 0xFFu, 0, v42, v71);
      goto LABEL_6;
    case -125:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = HIWORD(a5) & 0x7F;
      goto LABEL_6;
    case -124:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (8 * (_BYTE)a5) & 0x20 | a5 & 0x40 | HIWORD(a5) & 0x1F;
      goto LABEL_6;
    case -123:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 9) & 3;
      goto LABEL_6;
    case -122:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (unsigned __int8)(a5 >> 11);
      if ( (a5 & 0x180000) == 0 )
        goto LABEL_6;
      return 0;
    case -121:
      v44 = (a5 >> 9) & 3;
      v43 = v44 == 0;
LABEL_102:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = v44;
      if ( v43 )
        goto LABEL_6;
      return 0;
    case -120:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 4;
      *(_WORD *)(a4 + 6) = ((a5 >> 21) & 0x1F) + 35;
      goto LABEL_6;
    case -119:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 4;
      *(_WORD *)(a4 + 6) = ((unsigned __int16)a5 >> 11) + 35;
      goto LABEL_6;
    case -118:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = ((a5 >> 21) & 0x1E | BYTE2(a5) & 0x20) + 216;
      goto LABEL_6;
    case -117:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 8;
      *(_WORD *)(a4 + 6) = (BYTE2(a5) & 0x1F | (8 * (_BYTE)a5) & 0x20) + 216;
      goto LABEL_6;
    case -116:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = a5 & 0xFFC1 | (a5 >> 15) & 0x3E;
      goto LABEL_6;
    case -115:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = HIWORD(a5) & 1;
      goto LABEL_6;
    case -114:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_WORD *)(a4 + 6) = (a5 >> 6) & 0x1F;
      goto LABEL_6;
    case -113:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = HIWORD(a5) & 7;
      goto LABEL_6;
    case -112:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 6) & 7;
      goto LABEL_6;
    case -111:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 17;
      *(_WORD *)(a4 + 6) = ((a5 >> 23) & 7) + 314;
      goto LABEL_6;
    default:
      sub_2A700((__int64)"ppc: interr (code=%x)", a5);
  }
}
