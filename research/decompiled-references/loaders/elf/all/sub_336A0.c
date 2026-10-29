__int64 __fastcall sub_336A0(__int64 a1, const char *a2, double a3, double a4)
{
  __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 *first_seg; // r15
  __int64 v11; // rbx
  unsigned __int64 v12; // r13
  unsigned __int64 that; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int8 v23; // dl
  char v24; // dl
  __int16 v25; // ax
  const char *v26; // rsi
  const char *v27; // rdi
  _OWORD *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // r13
  __int64 v35; // r12
  int *v36; // r15
  __int16 v37; // ax
  __int64 v38; // r13
  __int64 v39; // r12
  __int64 v40; // rbx
  _QWORD *v41; // r12
  const char *v42; // rsi
  __int64 v43; // [rsp+0h] [rbp-128h]
  __int64 v44; // [rsp+0h] [rbp-128h]
  unsigned int v45; // [rsp+8h] [rbp-120h]
  int v46; // [rsp+8h] [rbp-120h]
  char v47; // [rsp+Eh] [rbp-11Ah]
  char v48; // [rsp+Eh] [rbp-11Ah]
  char v49; // [rsp+Fh] [rbp-119h]
  unsigned __int8 v50; // [rsp+Fh] [rbp-119h]
  __int64 v51; // [rsp+10h] [rbp-118h] BYREF
  __int64 v52; // [rsp+18h] [rbp-110h] BYREF
  int v53; // [rsp+20h] [rbp-108h] BYREF
  int v54; // [rsp+24h] [rbp-104h] BYREF
  int v55; // [rsp+28h] [rbp-100h] BYREF
  int v56; // [rsp+2Ch] [rbp-FCh] BYREF
  int v57; // [rsp+30h] [rbp-F8h] BYREF
  int v58; // [rsp+34h] [rbp-F4h] BYREF
  int v59; // [rsp+38h] [rbp-F0h] BYREF
  int v60; // [rsp+3Ch] [rbp-ECh] BYREF
  __int64 v61; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v62; // [rsp+48h] [rbp-E0h]
  __int64 v63; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v64; // [rsp+68h] [rbp-C0h]
  const char *v65; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v66; // [rsp+88h] [rbp-A0h]
  int v67; // [rsp+A0h] [rbp-88h] BYREF
  char v68; // [rsp+A4h] [rbp-84h]
  char v69; // [rsp+A5h] [rbp-83h]
  char v70; // [rsp+A6h] [rbp-82h]
  __int64 v71; // [rsp+A7h] [rbp-81h]
  char v72; // [rsp+AFh] [rbp-79h]
  __int16 v73; // [rsp+B0h] [rbp-78h]
  __int16 v74; // [rsp+B2h] [rbp-76h]
  int v75; // [rsp+B4h] [rbp-74h]
  __int64 v76; // [rsp+B8h] [rbp-70h]
  __int64 v77; // [rsp+C0h] [rbp-68h]
  __int64 v78; // [rsp+C8h] [rbp-60h]
  int v79; // [rsp+D0h] [rbp-58h]
  __int16 v80; // [rsp+D4h] [rbp-54h]
  unsigned __int64 v81; // [rsp+D6h] [rbp-52h]
  __int16 v82; // [rsp+DEh] [rbp-4Ah]
  unsigned __int64 v83; // [rsp+E8h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  v45 = strcmp(a2, "ELF");
  if ( v45 )
    return 0;
  if ( !a1 )
    return 1;
  v49 = getinf_flag(3, 32);
  v72 = 0;
  v47 = getinf_flag(3, 4);
  v70 = 1;
  v68 = v47 + 1;
  v71 = 0;
  v67 = 1179403647;
  v69 = v49 + 1;
  v73 = 2;
  switch ( *(_DWORD *)(get_ph(3, 4, v5) + 4) )
  {
    case 0:
      if ( !v47 )
        goto LABEL_99;
      v74 = 62;
      goto LABEL_10;
    case 2:
      v25 = 7;
      goto LABEL_32;
    case 7:
      v25 = 4;
      goto LABEL_32;
    case 9:
      v25 = 70;
      goto LABEL_32;
    case 0xB:
      v25 = 53;
      goto LABEL_32;
    case 0xC:
      v25 = 8;
      goto LABEL_32;
    case 0xD:
      if ( v47 )
      {
        v74 = 183;
        goto LABEL_10;
      }
      v74 = 40;
      goto LABEL_33;
    case 0xF:
      if ( v47 )
      {
        v74 = 21;
        goto LABEL_10;
      }
      v74 = 20;
      goto LABEL_33;
    case 0x12:
      v25 = 42;
      goto LABEL_32;
    case 0x15:
      v25 = 46;
      goto LABEL_32;
    case 0x17:
      if ( !v47 )
      {
        v74 = 2;
LABEL_33:
        v43 = 52;
        goto LABEL_11;
      }
      v74 = 43;
LABEL_10:
      v43 = 64;
LABEL_11:
      v61 = 0;
      v63 = 0;
      v62 = 0;
      v64 = 0;
      first_seg = (unsigned __int64 *)get_first_seg();
      v11 = v43;
      if ( first_seg )
      {
        while ( (unsigned __int8)segtype(*first_seg) != 1 && (unsigned __int8)segtype(*first_seg) != 10 )
        {
          v12 = *first_seg;
          if ( *first_seg < first_seg[1] )
          {
            while ( 1 )
            {
              if ( (unsigned __int8)is_loaded(v12) )
              {
                v14 = v12;
              }
              else
              {
                that = next_that(v12, first_seg[1], sub_30940, 0);
                v14 = that;
                if ( that == -1 || that >= first_seg[1] )
                  goto LABEL_59;
                sub_EAA0((__int64)"save_elf: skipping undefined bytes at %a..%a\n", 0.0, a4);
              }
              if ( !(unsigned __int8)is_loaded(v14) )
                break;
              v15 = next_that(v14, first_seg[1], sub_30930, 0);
              v12 = first_seg[1];
              v16 = v15;
              v17 = v61;
              if ( v12 <= v15 )
                v16 = first_seg[1];
              v18 = v15 == -1;
              v19 = v62;
              if ( !v18 )
                v12 = v16;
              v20 = v62 + 1;
              if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)(v62 + 1) )
              {
                v61 = qvector_reserve(&v61, v61, v20, 56);
                v17 = v61;
                v19 = v62;
                v20 = v62 + 1;
              }
              *(_QWORD *)&v62 = v20;
              v21 = 1;
              v22 = v17 + 56 * v19;
              *(_QWORD *)(v22 + 8) = v11;
              *(_QWORD *)(v22 + 16) = v14;
              *(_QWORD *)(v22 + 24) = v14;
              *(_QWORD *)(v22 + 40) = v12 - v14;
              *(_QWORD *)(v22 + 32) = v12 - v14;
              v23 = *((_BYTE *)first_seg + 40) - 2;
              if ( v23 <= 8u )
                v21 = qword_785E0[v23];
              *(_QWORD *)(v22 + 48) = v21;
              v24 = *((_BYTE *)first_seg + 42);
              v11 += v12 - v14;
              *(_DWORD *)v22 = 1;
              *(_DWORD *)(v22 + 4) = v24 & 7;
              if ( v12 >= first_seg[1] )
                goto LABEL_59;
            }
            if ( !under_debugger )
            {
              interr(20120);
LABEL_99:
              v74 = 3;
              goto LABEL_33;
            }
LABEL_107:
            BUG();
          }
          v65 = nullptr;
          v66 = 0;
          get_segm_name(&v65, first_seg, 0);
          v42 = &s1;
          if ( (_QWORD)v66 )
            v42 = v65;
          sub_EAA0((__int64)"save_elf: skipping empty segment '%s' at %a\n", v42, 0.0);
          v27 = v65;
          if ( v65 )
            goto LABEL_58;
LABEL_59:
          first_seg = (unsigned __int64 *)get_next_seg(*first_seg);
          if ( !first_seg )
            goto LABEL_60;
        }
        v65 = nullptr;
        v66 = 0;
        get_segm_name(&v65, first_seg, 0);
        v26 = &s1;
        if ( (_QWORD)v66 )
          v26 = v65;
        sub_EAA0((__int64)"save_elf: skipping special segment '%s' at %a\n", v26, 0.0);
        v27 = v65;
        if ( !v65 )
          goto LABEL_59;
LABEL_58:
        *(_QWORD *)&v66 = 0;
        qfree(v27);
        goto LABEL_59;
      }
LABEL_60:
      if ( !(_QWORD)v62 )
      {
        sub_BFC0((__int64)"save_elf: no writable segments");
        goto LABEL_85;
      }
      v28 = (_OWORD *)v63;
      v29 = v64 + 1;
      if ( *((_QWORD *)&v64 + 1) < (unsigned __int64)(v64 + 1) )
      {
        v63 = qvector_reserve(&v63, v63, v29, 64);
        v28 = (_OWORD *)v63;
        v29 = v64 + 1;
      }
      *(_QWORD *)&v64 = v29;
      *v28 = 0;
      v28[1] = 0;
      v28[2] = 0;
      v28[3] = 0;
      v30 = getinf(16, v28, v29, v7, v8, v9, v43, v45, v51, v52);
      v75 = 1;
      v79 = 0;
      if ( v30 == -1 )
        v30 = 0;
      v76 = v30;
      v77 = v44;
      v80 = v44;
      if ( v48 )
      {
        v31 = 56;
        v32 = 64;
      }
      else
      {
        v31 = 32;
        v32 = 40;
      }
      v81 = v31 | (((unsigned __int16)v62 | ((v32 | ((unsigned __int64)(unsigned __int16)v64 << 16)) << 16)) << 16);
      if ( (unsigned __int16)v64 > 0xFF00u )
        goto LABEL_105;
      v82 = 0;
      v78 = v31 * (unsigned __int16)v62 + v44;
      qfseek(a1, 0, 0);
      qfwrite(a1, &v67, 16);
      LOWORD(v51) = v73;
      fwritebytes(a1, &v51, 2, v50);
      WORD1(v51) = v74;
      fwritebytes(a1, (char *)&v51 + 2, 2, v50);
      v53 = v75;
      fwritebytes(a1, &v53, 4, v50);
      sub_31230(a1, v76, v50);
      sub_31230(a1, v77, v50);
      sub_31230(a1, v78, v50);
      v54 = v79;
      fwritebytes(a1, &v54, 4, v50);
      WORD2(v51) = v80;
      fwritebytes(a1, (char *)&v51 + 4, 2, v50);
      HIWORD(v51) = v81;
      fwritebytes(a1, (char *)&v51 + 6, 2, v50);
      LOWORD(v52) = WORD1(v81);
      fwritebytes(a1, &v52, 2, v50);
      WORD1(v52) = WORD2(v81);
      fwritebytes(a1, (char *)&v52 + 2, 2, v50);
      WORD2(v52) = HIWORD(v81);
      fwritebytes(a1, (char *)&v52 + 4, 2, v50);
      HIWORD(v52) = v82;
      fwritebytes(a1, (char *)&v52 + 6, 2, v50);
      v33 = qftell(a1);
      if ( v33 != v77 )
      {
        if ( under_debugger )
          goto LABEL_107;
        interr(20002);
LABEL_105:
        if ( !under_debugger )
          interr(20087);
        goto LABEL_107;
      }
      v34 = HIWORD(v81) * (unsigned __int64)WORD2(v81) + WORD1(v81) * (unsigned __int64)(unsigned __int16)v81;
      if ( !WORD1(v81) )
      {
        if ( !HIWORD(v81) )
          goto LABEL_84;
        goto LABEL_77;
      }
      v35 = 0;
      do
      {
        v36 = (int *)(v35 + v61);
        *((_QWORD *)v36 + 1) += v34;
        v55 = *v36;
        fwritebytes(a1, &v55, 4, v50);
        if ( v48 )
        {
          v56 = v36[1];
          fwritebytes(a1, &v56, 4, v50);
        }
        sub_31230(a1, *((_QWORD *)v36 + 1), v50);
        sub_31230(a1, *((_QWORD *)v36 + 2), v50);
        sub_31230(a1, *((_QWORD *)v36 + 3), v50);
        sub_31230(a1, *((_QWORD *)v36 + 4), v50);
        sub_31230(a1, *((_QWORD *)v36 + 5), v50);
        if ( !v48 )
        {
          v57 = v36[1];
          fwritebytes(a1, &v57, 4, v50);
        }
        sub_31230(a1, *((_QWORD *)v36 + 6), v50);
        ++v46;
        v35 += 56;
        v37 = WORD1(v81);
      }
      while ( WORD1(v81) > v46 );
      if ( HIWORD(v81) )
      {
LABEL_77:
        v38 = 0;
        do
        {
          v39 = v63 + (v38 << 6);
          v58 = *(_DWORD *)v39;
          fwritebytes(a1, &v58, 4, v50);
          v59 = *(_DWORD *)(v39 + 4);
          fwritebytes(a1, &v59, 4, v50);
          sub_31230(a1, *(_QWORD *)(v39 + 8), v50);
          sub_31230(a1, *(_QWORD *)(v39 + 16), v50);
          sub_31230(a1, *(_QWORD *)(v39 + 24), v50);
          sub_31230(a1, *(_QWORD *)(v39 + 32), v50);
          v60 = *(_DWORD *)(v39 + 40);
          fwritebytes(a1, &v60, 4, v50);
          LODWORD(v65) = *(_DWORD *)(v39 + 44);
          fwritebytes(a1, &v65, 4, v50);
          sub_31230(a1, *(_QWORD *)(v39 + 48), v50);
          sub_31230(a1, *(_QWORD *)(v39 + 56), v50);
          ++v38;
        }
        while ( HIWORD(v81) > (int)v38 );
        v37 = WORD1(v81);
      }
      v40 = 0;
      if ( v37 )
      {
        do
        {
          v41 = (_QWORD *)(v61 + 56 * v40);
          if ( v41[4] )
          {
            qfseek(a1, v41[1], 0);
            base2file(a1, v41[1], v41[2], v41[2] + v41[4]);
          }
          ++v40;
        }
        while ( WORD1(v81) > (int)v40 );
      }
LABEL_84:
      v45 = 1;
LABEL_85:
      if ( v63 )
      {
        *(_QWORD *)&v64 = 0;
        qfree(v63);
      }
      if ( v61 )
      {
        *(_QWORD *)&v62 = 0;
        qfree(v61);
      }
      return v45;
    case 0x18:
      v25 = -28634;
      goto LABEL_32;
    case 0x19:
      v25 = 15;
      goto LABEL_32;
    case 0x1B:
      v25 = 44;
      goto LABEL_32;
    case 0x1F:
      v25 = 50;
      goto LABEL_32;
    case 0x20:
      v25 = 19;
      goto LABEL_32;
    case 0x25:
      v25 = 88;
      goto LABEL_32;
    case 0x2A:
      v25 = 67;
      goto LABEL_32;
    case 0x2B:
      v25 = 84;
      goto LABEL_32;
    case 0x3F:
      v25 = 195;
LABEL_32:
      v74 = v25;
      if ( !v47 )
        goto LABEL_33;
      goto LABEL_10;
    default:
      sub_BFC0((__int64)"save_elf: unsupported cpu");
      return 0;
  }
}
