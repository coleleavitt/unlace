unsigned __int64 sub_1E870(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        ...)
{
  __int64 v14; // rdx
  int v15; // eax
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // r15
  size_t v20; // r15
  __int64 v21; // r12
  size_t v22; // r8
  __int64 v23; // rsi
  const char *v24; // rsi
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // r14
  int v33; // eax
  unsigned int v34; // r15d
  __int64 v35; // rax
  int v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r9
  __int64 v42; // r13
  int v43; // eax
  const char *v44; // rsi
  __int64 v45; // r14
  char v46; // [rsp+0h] [rbp-1C0h]
  unsigned int v47; // [rsp+38h] [rbp-188h]
  size_t v48; // [rsp+38h] [rbp-188h]
  __int64 v49; // [rsp+40h] [rbp-180h]
  unsigned __int64 v50; // [rsp+40h] [rbp-180h]
  unsigned int v51; // [rsp+40h] [rbp-180h]
  unsigned int v52; // [rsp+4Ch] [rbp-174h] BYREF
  unsigned int v53; // [rsp+54h] [rbp-16Ch] BYREF
  unsigned int v54; // [rsp+58h] [rbp-168h] BYREF
  unsigned int v55; // [rsp+5Ch] [rbp-164h] BYREF
  unsigned int v56; // [rsp+60h] [rbp-160h] BYREF
  int v57; // [rsp+64h] [rbp-15Ch] BYREF
  __int64 v58; // [rsp+68h] [rbp-158h] BYREF
  __int64 v59; // [rsp+70h] [rbp-150h] BYREF
  _DWORD *v60; // [rsp+78h] [rbp-148h] BYREF
  __int128 v61; // [rsp+80h] [rbp-140h] BYREF
  void *src; // [rsp+90h] [rbp-130h] BYREF
  __int128 v63; // [rsp+98h] [rbp-128h]
  __int64 v64; // [rsp+B0h] [rbp-110h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-108h]
  unsigned __int64 v66; // [rsp+C0h] [rbp-100h]
  _OWORD v67[2]; // [rsp+D0h] [rbp-F0h] BYREF
  const char *v68; // [rsp+F0h] [rbp-D0h] BYREF
  gcc_va_list va; // [rsp+F8h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+110h] [rbp-B0h]
  __int16 v71; // [rsp+118h] [rbp-A8h]
  __int128 v72; // [rsp+120h] [rbp-A0h]
  __int64 v73; // [rsp+130h] [rbp-90h]
  __int64 v74; // [rsp+138h] [rbp-88h]
  int v75; // [rsp+140h] [rbp-80h]
  __int64 v76; // [rsp+148h] [rbp-78h]
  int v77; // [rsp+150h] [rbp-70h]
  __int64 v78; // [rsp+158h] [rbp-68h]
  int v79; // [rsp+160h] [rbp-60h]
  __int64 v80; // [rsp+168h] [rbp-58h]
  int v81; // [rsp+170h] [rbp-50h]
  __int64 v82; // [rsp+178h] [rbp-48h]
  _BYTE v83[4]; // [rsp+184h] [rbp-3Ch] BYREF
  unsigned __int64 v84; // [rsp+188h] [rbp-38h]

  v52 = a2;
  v84 = __readfsqword(0x28u);
  memset(v67, 0, 28);
  v58 = 0;
  v14 = *(_QWORD *)qword_47A20;
  v53 = 0;
  v54 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(v14 + 48))(qword_47A20) )
  {
    sub_A7E0((__int64)"%s: invalid token.", "display_method");
    return v84 - __readfsqword(0x28u);
  }
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _OWORD *, void *, __int64, unsigned int *, char *, __int64 *, unsigned int *, char *, char *))(*(_QWORD *)qword_47A20 + 224LL))(
          qword_47A20,
          v52,
          v67,
          &unk_37A00,
          0x8000,
          &v53,
          (char *)v67 + 4,
          &v58,
          &v54,
          (char *)v67 + 8,
          (char *)v67 + 12);
  if ( !(unsigned __int8)sub_1D810("GetMethodProps", v15) )
  {
    if ( v53 > 0x7FFF )
      word_479FE = 0;
    v63 = 0;
    src = nullptr;
    utf16_utf8();
    sub_1DC70((__int64 *)&src);
    sub_F1B0(v52, (__int64)&src);
    if ( (BYTE5(v67[0]) & 0x60) != 0 )
    {
      v64 = 0;
      if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, __int64 *, void *, __int64, unsigned int *, char *))(*(_QWORD *)qword_47A20 + 264LL))(
              qword_47A20,
              v52,
              &v64,
              &unk_37A00,
              0x8000,
              &v53,
              (char *)&v64 + 4) )
      {
        if ( v53 > 0x7FFF )
          word_479FE = 0;
        *(_OWORD *)&va[0].gp_offset = 0;
        v68 = nullptr;
        utf16_utf8();
        sub_1DC70((__int64 *)&v68);
        sub_F0A0(v52, &v64, 8, 107);
        v44 = s1;
        if ( *(_QWORD *)&va[0].gp_offset )
          v44 = v68;
        sub_F0A0(v52, v44, 0, 108);
        if ( v68 )
        {
          *(_QWORD *)&va[0].gp_offset = 0;
          qfree();
        }
      }
    }
    sub_EDC0((__int64)&v64);
    v49 = v65;
    if ( v65 )
    {
      v19 = v65 + 1;
      v18 = v65 + 2;
      v17 = v64;
      v49 = v65 - 1;
      if ( v66 >= v65 + 2 )
        goto LABEL_10;
    }
    else
    {
      v17 = v64;
      v18 = 3;
      v19 = 2;
      if ( v66 >= 3 )
      {
LABEL_10:
        v65 = v18;
        *(_BYTE *)(v17 + v19) = 0;
        *(_WORD *)(v64 + v49) = 14906;
        v50 = v63;
        if ( (_QWORD)v63 )
        {
          v20 = v63 - 1;
          if ( (_QWORD)v63 != 1 )
          {
            v21 = v65;
            v22 = v63 - 1;
            if ( v65 )
            {
              v21 = v65 - 1;
              v22 = v20 + v65 - 1;
              v50 = v20 + v65;
            }
            v23 = v64;
            if ( v66 < v50 )
            {
              v48 = v22;
              v64 = qvector_reserve();
              v22 = v48;
              v23 = v64;
            }
            v65 = v50;
            *(_BYTE *)(v23 + v22) = 0;
            memcpy((void *)(v21 + v64), src, v20);
          }
        }
        if ( (BYTE12(v67[0]) & 3) == 1 && DWORD2(v67[0]) )
        {
          v45 = DWORD2(v67[0]) + sub_F2B0();
          if ( (unsigned __int8)is_loaded() )
          {
            v68 = (const char *)v45;
            va_start(va, a14);
            v70 = 0;
            v71 = 0;
            v73 = 0xFFFFFFFFLL;
            v74 = 0;
            v75 = 0;
            v76 = 0;
            v77 = 0;
            v78 = 0;
            v79 = 0;
            v80 = 0;
            v81 = 0;
            v82 = 0;
            v72 = 0;
            add_func_ex();
            set_name();
            sub_F0A0(v45, &v52, 4, 112);
          }
          v25 = 0;
        }
        else
        {
          v24 = s1;
          if ( v65 )
            v24 = (const char *)v64;
          v25 = sub_14430(v52, v24, (__int64)v67, (unsigned __int64 *)&qword_47A10);
        }
        LODWORD(v67[1]) = v25;
        sub_F0A0(v52, v67, 28, 97);
        sub_F0A0(v52, v58, v54, 100);
        sub_F0A0(DWORD2(v67[0]), &v52, 4, 112);
        if ( (v67[1] & 0xFFFFFF) != 0 )
        {
          v68 = nullptr;
          LODWORD(v61) = 0;
          v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, const char **, __int128 *))(*(_QWORD *)qword_47A20 + 296LL))(
                  qword_47A20,
                  LODWORD(v67[1]),
                  &v68,
                  &v61);
          if ( (unsigned __int8)sub_1D810("GetSigFromToken", v26) )
          {
LABEL_46:
            if ( v64 )
            {
              v65 = 0;
              qfree();
            }
            if ( src )
            {
              *(_QWORD *)&v63 = 0;
              qfree();
            }
            return v84 - __readfsqword(0x28u);
          }
          sub_F0A0(LODWORD(v67[1]), v68, (unsigned int)v61, 100);
        }
        sub_1DA20(v52);
        v59 = 0;
        v27 = *(_QWORD *)qword_47A20;
        v55 = 0;
        v51 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _BYTE *, __int64, unsigned int *))(v27 + 112))(
                qword_47A20,
                &v59,
                v52,
                v83,
                1,
                &v55);
        if ( !v51 && v55 )
        {
          (*(void (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)qword_47A20 + 24LL))(
            qword_47A20,
            v59,
            &v55);
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)qword_47A20 + 32LL))(qword_47A20, v59, 0);
          v28 = qcalloc();
          v32 = v28;
          if ( !v28 )
            sub_DB80((__int64)"No memory (requested memory for %zu tokens)", v55, v29, v30, v55, v31, v46);
          v33 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)qword_47A20 + 112LL))(
                  qword_47A20,
                  &v59,
                  v52,
                  v28,
                  v55,
                  &v55);
          if ( !(unsigned __int8)sub_1D810("EnumParams(&enr, tok, toks, count, &count)", v33) && v55 )
          {
            do
            {
              v34 = *(_DWORD *)(v32 + 4LL * (int)v51);
              v60 = nullptr;
              v61 = 0;
              v47 = v52;
              v35 = *(_QWORD *)qword_47A20;
              v56 = 0;
              v57 = 0;
              v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *, void *, __int64, unsigned int *, char *, char *, _DWORD **, int *))(v35 + 256))(
                      qword_47A20,
                      v34,
                      0,
                      (char *)&v61 + 4,
                      &unk_37A00,
                      0x8000,
                      &v56,
                      (char *)&v61 + 8,
                      (char *)&v61 + 12,
                      &v60,
                      &v57);
              if ( !(unsigned __int8)sub_1D810("GetParamProps", v36) )
              {
                if ( v56 > 0x7FFF )
                  word_479FE = 0;
                *(_OWORD *)&va[0].gp_offset = 0;
                v68 = nullptr;
                utf16_utf8();
                v46 = v34;
                sub_F1B0((int)v34, (__int64)&v68);
                LODWORD(v61) = v47;
                sub_F0A0((int)v34, &v61, 16, 97);
                sub_1D7C0(v34, HIDWORD(v61), v60, v57);
                if ( v68 )
                {
                  *(_QWORD *)&va[0].gp_offset = 0;
                  qfree();
                }
              }
              ++v51;
            }
            while ( v51 < v55 );
            sub_F110();
          }
          qfree();
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_47A20 + 40LL))(qword_47A20, v59);
        v68 = nullptr;
        LODWORD(v61) = 0;
        v37 = (*(__int64 (__fastcall **)(__int64, const char **, _QWORD, _BYTE *, __int64, __int128 *))(*(_QWORD *)qword_47A20 + 88LL))(
                qword_47A20,
                &v68,
                v52,
                v83,
                1,
                &v61);
        if ( !v37 && (_DWORD)v61 )
        {
          (*(void (__fastcall **)(__int64, const char *, __int128 *))(*(_QWORD *)qword_47A20 + 24LL))(
            qword_47A20,
            v68,
            &v61);
          (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)qword_47A20 + 32LL))(qword_47A20, v68, 0);
          v38 = qcalloc();
          v42 = v38;
          if ( !v38 )
            sub_DB80(
              (__int64)"No memory (requested memory for %zu tokens)",
              (unsigned int)v61,
              v39,
              v40,
              (unsigned int)v61,
              v41,
              v46);
          v43 = (*(__int64 (__fastcall **)(__int64, const char **, _QWORD, __int64, _QWORD, __int128 *))(*(_QWORD *)qword_47A20 + 88LL))(
                  qword_47A20,
                  &v68,
                  v52,
                  v38,
                  (unsigned int)v61,
                  &v61);
          if ( !(unsigned __int8)sub_1D810("EnumMemberRefs(&enr, tok, toks, count, &count)", v43) && (_DWORD)v61 )
          {
            do
              sub_1D880(*(_DWORD *)(v42 + 4LL * (int)v37++));
            while ( v37 < (unsigned int)v61 );
            sub_F110();
          }
          qfree();
        }
        (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)qword_47A20 + 40LL))(qword_47A20, v68);
        goto LABEL_46;
      }
    }
    v64 = qvector_reserve();
    v17 = v64;
    goto LABEL_10;
  }
  return v84 - __readfsqword(0x28u);
}

