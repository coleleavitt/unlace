__int64 __fastcall sub_21A30(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  double v11; // xmm0_8
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  double v16; // xmm4_8
  double v17; // xmm5_8
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rbx
  unsigned __int8 v25; // [rsp+17h] [rbp-8E9h]
  __int64 v26; // [rsp+28h] [rbp-8D8h]
  __int64 v27; // [rsp+28h] [rbp-8D8h]
  unsigned int v28; // [rsp+34h] [rbp-8CCh] BYREF
  int v29; // [rsp+38h] [rbp-8C8h] BYREF
  unsigned int v30; // [rsp+3Ch] [rbp-8C4h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-8C0h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-8BCh] BYREF
  int v33; // [rsp+48h] [rbp-8B8h] BYREF
  unsigned int v34; // [rsp+4Ch] [rbp-8B4h] BYREF
  __int64 v35; // [rsp+50h] [rbp-8B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-8A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-8A0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-898h] BYREF
  _QWORD v39[2]; // [rsp+70h] [rbp-890h] BYREF
  __int128 v40; // [rsp+80h] [rbp-880h] BYREF
  __int64 v41; // [rsp+90h] [rbp-870h] BYREF
  __int128 v42; // [rsp+98h] [rbp-868h]
  __int64 v43; // [rsp+B0h] [rbp-850h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-848h]
  __m128i v45; // [rsp+D0h] [rbp-830h] BYREF
  int v46; // [rsp+E0h] [rbp-820h]
  int v47; // [rsp+ECh] [rbp-814h]
  int v48; // [rsp+F8h] [rbp-808h]
  __int64 v49; // [rsp+100h] [rbp-800h] BYREF
  __int128 v50; // [rsp+108h] [rbp-7F8h]
  int v51; // [rsp+11Ch] [rbp-7E4h]
  int v52; // [rsp+128h] [rbp-7D8h]
  _DWORD v53[16]; // [rsp+130h] [rbp-7D0h] BYREF
  _QWORD v54[2]; // [rsp+170h] [rbp-790h] BYREF
  __int64 v55; // [rsp+180h] [rbp-780h]
  __int128 v56; // [rsp+188h] [rbp-778h]
  __int128 v57; // [rsp+198h] [rbp-768h]
  __int64 v58; // [rsp+1A8h] [rbp-758h]
  __int16 v59; // [rsp+1B0h] [rbp-750h]
  _BYTE v60[1800]; // [rsp+1B8h] [rbp-748h] BYREF
  unsigned __int64 v61; // [rsp+8C8h] [rbp-38h]

  v61 = __readfsqword(0x28u);
  v59 = 0;
  v56 = 0;
  v54[0] = 0;
  v54[1] = 0;
  v55 = 0;
  memset(v60, 0, sizeof(v60));
  v58 = -1;
  v57 = -1;
  v25 = sub_23650(v54, a1, a2);
  if ( v25 )
  {
    v11 = 0.0;
    qword_47A18 = sub_281A0(v54, NAN);
    v40 = 0;
    v12 = *(_QWORD *)qword_47A18;
    v28 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(v12 + 48))(qword_47A18, &v28);
    if ( !(unsigned __int8)sub_1D810("GetAssemblyFromScope", v13) )
    {
      v35 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v14 = *(_QWORD *)qword_47A18;
      v29 = 0;
      v30 = 0;
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, int *, __int128 *, void *, __int64, unsigned int *, __m128i *, char *))(v14 + 56))(
              qword_47A18,
              v28,
              &v35,
              &v29,
              &v40,
              &unk_37A00,
              0x8000,
              &v30,
              &v45,
              (char *)&v40 + 4);
      if ( !(unsigned __int8)sub_1D810("GetAssemblyProps", v15) )
      {
        *((_QWORD *)&v40 + 1) = _mm_shufflelo_epi16(_mm_loadl_epi64(&v45), 180).m128i_u64[0];
        sub_F0A0(v28, &v40, 16, 97);
        if ( v30 > 0x7FFF )
          word_479FE = 0;
        v11 = 0.0;
        v41 = 0;
        v42 = 0;
        utf16_utf8();
        sub_1DC70(&v41);
        sub_F1B0(v28, (__int64)&v41);
        if ( v35 )
          sub_F110();
        sub_F0A0(0, &v28, 4, 0);
        v36 = 0;
        v31 = 0;
        while ( 1 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64, __int64 *, _DWORD *, __int64, unsigned int *))(*(_QWORD *)qword_47A18
                                                                                                 + 32LL))(
                  qword_47A18,
                  &v36,
                  v53,
                  16,
                  &v31);
          if ( v18 != 1 )
          {
            if ( (unsigned __int8)sub_1D810("EnumAssemblyRefs", v18) )
              break;
          }
          if ( !v31 )
            break;
          v26 = 0;
          do
          {
            v22 = (unsigned int)v53[v26];
            if ( (v22 & 0xFFFFFF) != 0 )
            {
              v37 = 0;
              DWORD2(v50) = 0;
              v51 = 0;
              v52 = 0;
              v38 = 0;
              v34 = 0;
              memset(v39, 0, 12);
              v20 = *(_QWORD *)qword_47A18;
              v32 = 0;
              v33 = 0;
              v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, int *, void *, __int64, unsigned int *, __int64 *, __int64 *, unsigned int *, _QWORD *))(v20 + 64))(
                      qword_47A18,
                      (unsigned int)v22,
                      &v37,
                      &v33,
                      &unk_37A00,
                      0x8000,
                      &v32,
                      &v49,
                      &v38,
                      &v34,
                      v39);
              if ( !(unsigned __int8)sub_1D810("GetAssemblyRefProps", v21) )
              {
                if ( v32 > 0x7FFF )
                  word_479FE = 0;
                v43 = 0;
                v44 = 0;
                utf16_utf8();
                sub_1DC70(&v43);
                sub_F1B0(v22, (__int64)&v43);
                *(_QWORD *)&v11 = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)&v49), 180).m128i_u64[0];
                *(double *)((char *)v39 + 4) = v11;
                sub_F0A0(v22, v39, 12, 97);
                if ( v33 )
                  sub_F110();
                if ( v34 )
                  sub_F110();
                if ( v43 )
                {
                  *(_QWORD *)&v44 = 0;
                  qfree();
                }
              }
            }
            else
            {
              sub_A7E0((__int64)"%s: invalid token.", "display_assemblyref");
            }
            ++v26;
          }
          while ( (unsigned int)v26 < v31 );
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_47A18 + 24LL))(qword_47A18, v36);
        v39[0] = 0;
        v34 = 0;
        while ( 1 )
        {
          v19 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _DWORD *, __int64, unsigned int *))(*(_QWORD *)qword_47A18
                                                                                                + 40LL))(
                  qword_47A18,
                  v39,
                  v53,
                  16,
                  &v34);
          if ( v19 != 1 )
          {
            if ( (unsigned __int8)sub_1D810("EnumFiles", v19) )
              break;
          }
          if ( !v34 )
            break;
          v27 = 0;
          do
          {
            v24 = (unsigned int)v53[v27];
            if ( (v24 & 0xFFFFFF) != 0 )
            {
              LODWORD(v36) = 0;
              v43 = 0;
              LODWORD(v37) = 0;
              LODWORD(v38) = 0;
              v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, __int64, __int64 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)qword_47A18 + 72LL))(
                      qword_47A18,
                      (unsigned int)v24,
                      &unk_37A00,
                      0x8000,
                      &v36,
                      &v43,
                      &v37,
                      &v38);
              if ( !(unsigned __int8)sub_1D810("GetFileProps", v23) )
              {
                if ( (unsigned int)v36 > 0x7FFF )
                  word_479FE = 0;
                v11 = 0.0;
                v49 = 0;
                v50 = 0;
                utf16_utf8();
                sub_1DC70(&v49);
                sub_F1B0(v24, (__int64)&v49);
                sub_F0A0(v24, &v38, 4, 97);
                if ( (_DWORD)v37 )
                  sub_F110();
                if ( v49 )
                {
                  *(_QWORD *)&v50 = 0;
                  qfree();
                }
              }
            }
            else
            {
              sub_A7E0((__int64)"%s: invalid token.", "display_file");
            }
            ++v27;
          }
          while ( (unsigned int)v27 < v34 );
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_47A18 + 24LL))(qword_47A18, v39[0]);
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree();
        }
      }
    }
    if ( qword_47A18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_47A18 + 8LL))(qword_47A18);
    qword_47A18 = 0;
    qword_47A20 = sub_28180(v54);
    sub_1F3F0(v11, a4, a5, a6, v16, v17, a9, a10);
    if ( qword_47A20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_47A20 + 8LL))(qword_47A20);
    qword_47A20 = 0;
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  return v25;
}

