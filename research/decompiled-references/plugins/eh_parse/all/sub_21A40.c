__int64 __fastcall sub_21A40(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 (***a4)(),
        char a5,
        double a6,
        double a7,
        double a8)
{
  __m128i v10; // xmm0
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  __int64 v13; // r14
  unsigned __int8 byte; // bp
  __int64 v15; // r13
  char v16; // al
  int v17; // r10d
  __int64 (**v18)(); // rcx
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 (*v21)(); // r11
  __int64 v22; // rdx
  int v23; // r12d
  __int64 v24; // rbx
  unsigned __int8 v25; // al
  __int64 v26; // r10
  __int64 v27; // r9
  unsigned __int8 v28; // dl
  int v29; // eax
  char v30; // dl
  __int64 (*v31)(); // r11
  __int64 (*v32)(); // rax
  unsigned __int16 v33; // ax
  char v34; // dl
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // eax
  char v39; // dl
  int v40; // edx
  __int64 v41; // rsi
  __int64 (*v42)(); // rax
  __int64 result; // rax
  unsigned int v44; // eax
  char v45; // dl
  __int64 (*v46)(); // rax
  unsigned __int16 v47; // ax
  char v48; // dl
  __int64 (*v49)(); // rax
  __int64 (*v50)(); // rax
  unsigned __int16 word; // ax
  unsigned int dword; // eax
  __int64 (*v53)(); // r11
  __int64 (*v54)(); // rax
  char v55; // al
  __int64 (*v56)(); // rax
  char v57; // dl
  char v58; // dl
  __int64 (*v59)(); // rax
  __int64 v60; // rbx
  unsigned __int64 v61; // rax
  __int64 (*v62)(); // rax
  __int64 v63; // rax
  bool v64; // zf
  __int64 v65; // rbp
  char v66; // al
  unsigned __int16 v67; // ax
  char v68; // dl
  __int64 v69; // rdx
  __int64 (**v70)(); // [rsp-8h] [rbp-90h]
  unsigned __int8 v71; // [rsp+8h] [rbp-80h]
  char v72; // [rsp+8h] [rbp-80h]
  char v73; // [rsp+8h] [rbp-80h]
  char v74; // [rsp+8h] [rbp-80h]
  __int64 v75; // [rsp+8h] [rbp-80h]
  char v76; // [rsp+8h] [rbp-80h]
  char v77; // [rsp+8h] [rbp-80h]
  char v78; // [rsp+8h] [rbp-80h]
  char v79; // [rsp+8h] [rbp-80h]
  __int64 v80; // [rsp+8h] [rbp-80h]
  char v81; // [rsp+8h] [rbp-80h]
  char v82; // [rsp+8h] [rbp-80h]
  char v83; // [rsp+17h] [rbp-71h]
  int v84; // [rsp+20h] [rbp-68h]
  char v85; // [rsp+24h] [rbp-64h]
  char v87; // [rsp+26h] [rbp-62h]
  unsigned __int8 v88; // [rsp+27h] [rbp-61h]
  unsigned __int64 v89; // [rsp+28h] [rbp-60h]
  __m128i v90; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v91; // [rsp+48h] [rbp-40h]

  v10 = _mm_loadu_si128(a3);
  v91 = __readfsqword(0x28u);
  v84 = 64;
  v90 = v10;
  while ( 1 )
  {
    if ( (a2 & 3) != 0 )
    {
      if ( (debug & 8) != 0 )
        sub_E3D0((__int64)"%a: unwind info starts on unaligned address\n", *(double *)v10.m128i_i64);
      return 0;
    }
    v11 = getseg(a2);
    if ( !v11 || (v12 = *(_QWORD *)(v11 + 8), v13 = a2 + 4, v12 < a2 + 4) )
    {
      if ( (debug & 8) != 0 )
        sub_E3D0((__int64)"%a: wrong unwind info address\n", *(double *)v10.m128i_i64);
      return 0;
    }
    byte = get_byte(a2);
    v71 = get_byte(a2 + 1);
    v15 = (unsigned __int8)get_byte(a2 + 2);
    v16 = get_byte(a2 + 3);
    v17 = byte & 7;
    v18 = (__int64 (**)())(unsigned int)(v17 - 1);
    if ( (unsigned __int8)(v17 - 1) > 1u )
    {
      if ( (debug & 8) != 0 )
        sub_E3D0((__int64)"%a: unsupported unwind info version %u\n", *(double *)v10.m128i_i64, a2);
      return 0;
    }
    v85 = byte >> 3;
    if ( byte > 0x27u )
    {
      if ( (debug & 8) != 0 )
        sub_E3D0((__int64)"%a: bad unwind flags 0x%x\n", *(double *)v10.m128i_i64, a2);
      return 0;
    }
    if ( (v16 & 0xF) != 0 )
    {
      v18 = (__int64 (**)())dword_278A0;
      v20 = dword_278A0[v16 & 0xF];
      v57 = v16;
      v19 = v16 & 0xF0;
      v58 = v57 & 0xF0;
      if ( (_DWORD)v20 == 4 && v58 )
        return 0;
    }
    else
    {
      v19 = 0;
      v20 = 4;
    }
    v21 = **a4;
    if ( v21 != sub_210C0 )
    {
      v65 = v71;
      v81 = v17;
      v66 = ((__int64 (__fastcall *)(__int64 (***)(), __int64, __m128i *, _QWORD, __int64, _QWORD, __int64, __int64))v21)(
              a4,
              a2,
              &v90,
              (unsigned __int8)v17,
              v20,
              v19,
              v65,
              v15);
      v18 = v70;
      LOBYTE(v17) = v81;
      if ( !v66 )
      {
        if ( (debug & 8) != 0 )
          sub_E3D0(
            (__int64)"%a: wrong unwind info: range %a..%a prolog_size=%d\n",
            *(double *)v10.m128i_i64,
            a7,
            a8,
            a2);
        return 0;
      }
    }
    v72 = v17;
    if ( (_DWORD)v15 )
    {
      v22 = (2 * (_DWORD)v15 + 2) & 0xFFFFFFFC;
      if ( v12 < v13 + v22 || (unsigned __int8)get_fixups(0, a2 + 4, v22) )
      {
        if ( (debug & 8) != 0 )
          sub_E3D0((__int64)"%a: unwind info corrupted for %d wuop(s)\n", *(double *)v10.m128i_i64, a2 + 4);
        return 0;
      }
      v87 = 1;
      v89 = v12;
      v83 = v72;
      while ( 1 )
      {
        v23 = v15 - 1;
        if ( !(_DWORD)v15 )
          break;
        v24 = (unsigned __int8)get_byte(v13);
        v25 = get_byte(v13 + 1);
        v26 = v13 + 2;
        LOBYTE(v27) = v25 & 0xF;
        v28 = v25 >> 4;
        switch ( v25 & 0xF )
        {
          case 0:
            v18 = *a4;
            LODWORD(v15) = v15 - 1;
            v54 = (*a4)[1];
            if ( v54 == sub_15DC0 )
              goto LABEL_18;
            v88 = v27;
            v75 = v13 + 2;
            if ( ((unsigned __int8 (__fastcall *)(__int64 (***)(), _QWORD, __int64, _QWORD, _QWORD))v54)(
                   a4,
                   (unsigned __int8)v24,
                   112,
                   dword_278A0[v28 & 0xF],
                   0) )
            {
              goto LABEL_60;
            }
            return 0;
          case 1:
            v79 = v25 & 0xF;
            if ( v28 )
            {
              if ( v28 != 1 || v23 <= 1 )
                return 0;
              LODWORD(v15) = v15 - 3;
              dword = get_dword(v13 + 2);
              LOBYTE(v27) = v79;
              v26 = v13 + 6;
            }
            else
            {
              if ( (_DWORD)v15 == 1 )
                return 0;
              LODWORD(v15) = v15 - 2;
              word = get_word(v13 + 2);
              LOBYTE(v27) = v79;
              v26 = v13 + 4;
              v20 = word;
              dword = 8 * word;
            }
            v18 = *a4;
            v53 = (*a4)[1];
            if ( v53 == sub_15DC0 )
              goto LABEL_18;
            v88 = v27;
            v75 = v26;
            if ( !((unsigned __int8 (__fastcall *)(__int64 (***)(), _QWORD, __int64, __int64, _QWORD))v53)(
                    a4,
                    (unsigned __int8)v24,
                    97,
                    0xFFFFFFFFLL,
                    dword) )
              return 0;
            goto LABEL_60;
          case 2:
            v18 = *a4;
            LODWORD(v15) = v15 - 1;
            v50 = (*a4)[1];
            if ( v50 == sub_15DC0 )
              goto LABEL_18;
            v88 = v27;
            v75 = v13 + 2;
            if ( !((unsigned __int8 (__fastcall *)(__int64 (***)(), _QWORD, __int64, __int64, _QWORD))v50)(
                    a4,
                    (unsigned __int8)v24,
                    97,
                    0xFFFFFFFFLL,
                    8 * (unsigned int)(unsigned __int8)(v28 + 1)) )
              return 0;
            goto LABEL_60;
          case 3:
            v18 = *a4;
            LODWORD(v15) = v15 - 1;
            v49 = (*a4)[1];
            if ( v49 == sub_15DC0 )
              goto LABEL_18;
            v88 = v27;
            v75 = v13 + 2;
            if ( !((unsigned __int8 (__fastcall *)(__int64 (***)(), _QWORD, __int64, __int64, _QWORD))v49)(
                    a4,
                    (unsigned __int8)v24,
                    102,
                    0xFFFFFFFFLL,
                    0) )
              return 0;
            goto LABEL_60;
          case 4:
            v88 = v25 & 0xF;
            v78 = v25 >> 4;
            if ( (_DWORD)v15 == 1 )
              return 0;
            LODWORD(v15) = v15 - 2;
            v47 = get_word(v13 + 2);
            v18 = *a4;
            v48 = v78;
            v27 = v88;
            v26 = v13 + 4;
            v31 = (*a4)[1];
            if ( v31 == sub_15DC0 )
              goto LABEL_18;
            v35 = (unsigned __int8)v24;
            v75 = v13 + 4;
            v36 = dword_278A0[v48 & 0xF];
            v37 = 8 * (unsigned int)v47;
            goto LABEL_44;
          case 5:
            v88 = v25 & 0xF;
            v77 = v25 >> 4;
            if ( v23 <= 1 )
              return 0;
            LODWORD(v15) = v15 - 3;
            v44 = get_dword(v13 + 2);
            v18 = *a4;
            v45 = v77;
            v20 = v44;
            LOBYTE(v27) = v88;
            v26 = v13 + 6;
            v46 = (*a4)[1];
            if ( v46 == sub_15DC0 )
              goto LABEL_18;
            v75 = v13 + 6;
            if ( !((unsigned __int8 (__fastcall *)(__int64 (***)(), _QWORD, __int64, _QWORD, __int64, _QWORD))v46)(
                    a4,
                    (unsigned __int8)v24,
                    115,
                    dword_278A0[v45 & 0xF],
                    v20,
                    v88) )
              return 0;
            goto LABEL_60;
          case 6:
            if ( v83 == 1 )
            {
              v88 = v25 & 0xF;
              v82 = v25 >> 4;
              if ( (_DWORD)v15 == 1 )
                return 0;
              LODWORD(v15) = v15 - 2;
              v67 = get_word(v13 + 2);
              v18 = *a4;
              v68 = v82;
              v27 = v88;
              v26 = v13 + 4;
              v31 = (*a4)[1];
              if ( v31 == sub_15DC0 )
                goto LABEL_18;
              v75 = v13 + 4;
              v35 = (unsigned __int8)v24;
              v36 = (unsigned __int8)(v68 + 56);
              v37 = 8 * (unsigned int)v67;
LABEL_44:
              if ( !((unsigned __int8 (__fastcall *)(__int64 (***)(), __int64, __int64, __int64, __int64, __int64))v31)(
                      a4,
                      v35,
                      115,
                      v36,
                      v37,
                      v27) )
                return 0;
            }
            else
            {
              v18 = *a4;
              if ( v87 )
              {
                if ( !v28 )
                {
LABEL_85:
                  v87 = 0;
LABEL_86:
                  LODWORD(v15) = v15 - 1;
LABEL_18:
                  v32 = v18[3];
                  if ( v32 == sub_21090 )
                    goto LABEL_19;
                  goto LABEL_61;
                }
                v41 = v90.m128i_i64[1] - v24;
              }
              else
              {
                v40 = v24 | (v28 << 8);
                if ( !v40 )
                  goto LABEL_86;
                v41 = v90.m128i_i64[1] - v40;
              }
              if ( v41 == -1 )
                goto LABEL_85;
              v42 = v18[2];
              v87 = 0;
              LODWORD(v15) = v15 - 1;
              if ( v42 == sub_15DD0 )
                goto LABEL_18;
              v88 = v27;
              v75 = v13 + 2;
              if ( !((unsigned __int8 (__fastcall *)(__int64 (***)()))v42)(a4) )
                return 0;
            }
LABEL_60:
            v18 = *a4;
            v26 = v75;
            LOBYTE(v27) = v88;
            v32 = (*a4)[3];
            if ( v32 == sub_21090 )
              goto LABEL_19;
LABEL_61:
            v80 = v26;
            v55 = ((__int64 (__fastcall *)(__int64 (***)(), __int64, __int64, _QWORD, __int64))v32)(
                    a4,
                    v13,
                    v26,
                    (unsigned __int8)v27,
                    v20);
            v26 = v80;
            if ( !v55 )
              return 0;
LABEL_19:
            v13 = v26;
            break;
          case 7:
            v88 = v25 & 0xF;
            v76 = v25 >> 4;
            if ( v83 != 1 || v23 <= 1 )
              return 0;
            LODWORD(v15) = v15 - 3;
            v38 = get_dword(v13 + 2);
            v18 = *a4;
            v39 = v76;
            v27 = v88;
            v26 = v13 + 6;
            v31 = (*a4)[1];
            if ( v31 == sub_15DC0 )
              goto LABEL_18;
            v75 = v13 + 6;
            v35 = (unsigned __int8)v24;
            v36 = (unsigned __int8)(v39 + 56);
            goto LABEL_27;
          case 8:
            v88 = v25 & 0xF;
            v74 = v25 >> 4;
            if ( (_DWORD)v15 == 1 )
              return 0;
            LODWORD(v15) = v15 - 2;
            v33 = get_word(v13 + 2);
            v18 = *a4;
            v34 = v74;
            v27 = v88;
            v26 = v13 + 4;
            v31 = (*a4)[1];
            if ( v31 == sub_15DC0 )
              goto LABEL_18;
            v75 = v13 + 4;
            v35 = (unsigned __int8)v24;
            v36 = (unsigned __int8)(v34 + 64);
            v37 = 16 * (unsigned int)v33;
            goto LABEL_44;
          case 9:
            v88 = v25 & 0xF;
            v73 = v25 >> 4;
            if ( v23 <= 1 )
              return 0;
            LODWORD(v15) = v15 - 3;
            v29 = get_dword(v13 + 2);
            v18 = *a4;
            v30 = v73;
            v27 = v88;
            v26 = v13 + 6;
            v31 = (*a4)[1];
            if ( v31 == sub_15DC0 )
              goto LABEL_18;
            v75 = v13 + 6;
            v35 = (unsigned __int8)v24;
            v38 = 16 * v29;
            v36 = (unsigned __int8)(v30 + 64);
LABEL_27:
            v37 = v38;
            goto LABEL_44;
          case 0xA:
            if ( v28 > 1u )
              return 0;
            v18 = *a4;
            LODWORD(v15) = v15 - 1;
            v56 = (*a4)[1];
            if ( v56 == sub_15DC0 )
              goto LABEL_18;
            v88 = v27;
            v75 = v13 + 2;
            if ( !((unsigned __int8 (__fastcall *)(__int64 (***)(), _QWORD, __int64, __int64, _QWORD))v56)(
                    a4,
                    (unsigned __int8)v24,
                    109,
                    0xFFFFFFFFLL,
                    v28 & 0xF) )
              return 0;
            goto LABEL_60;
          default:
            return 0;
        }
      }
      v12 = v89;
      v59 = (*a4)[4];
      if ( v59 == sub_210A0 )
        goto LABEL_102;
    }
    else
    {
      v59 = (*a4)[4];
      if ( v59 == sub_210A0 )
        goto LABEL_71;
    }
    if ( !((unsigned __int8 (__fastcall *)(__int64 (***)(), __int64, __int64 (*)(), __int64 (**)(), __int64))v59)(
            a4,
            v13,
            sub_210A0,
            v18,
            v20) )
      return 0;
LABEL_102:
    if ( (v13 & 3) != 0 )
      v13 += 2;
LABEL_71:
    if ( (v85 & 4) == 0 )
      break;
    v60 = v90.m128i_i64[0];
    v90.m128i_i64[0] = sub_218F0(a1, v13);
    v90.m128i_i64[1] = sub_218F0(a1, v13 + 4);
    if ( v90.m128i_i64[0] < (unsigned __int64)v90.m128i_i64[1] )
    {
      v61 = *(_QWORD *)(a1 + 32);
      if ( v61 == -1 || v90.m128i_i64[0] >= v61 )
      {
        if ( getseg(v90.m128i_i64[0]) )
        {
          if ( getseg(v90.m128i_i64[1]) )
          {
            v62 = (*a4)[5];
            if ( v62 == sub_210B0 || ((unsigned __int8 (__fastcall *)(__int64 (***)(), __int64))v62)(a4, v60) )
            {
              v63 = sub_21970(a1, v13, v90.m128i_i64, a5);
              v64 = v84-- == 1;
              a2 = v63;
              if ( !v64 )
                continue;
            }
          }
        }
      }
    }
    return 0;
  }
  result = 1;
  if ( v85 )
  {
    if ( v12 >= v13 + 4 )
    {
      v69 = sub_218F0(a1, v13);
      if ( v69 != -1 )
        return ((__int64 (__fastcall *)(__int64 (***)(), __int64, __int64, __int64))(*a4)[6])(a4, v13, v69, v13 + 4);
    }
    return 0;
  }
  return result;
}
