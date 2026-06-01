__int64 __fastcall sub_209F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  unsigned __int8 v14; // [rsp+17h] [rbp-8E9h]
  __int64 v15; // [rsp+28h] [rbp-8D8h]
  __int64 v16; // [rsp+28h] [rbp-8D8h]
  unsigned int v17; // [rsp+34h] [rbp-8CCh] BYREF
  int v18; // [rsp+38h] [rbp-8C8h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-8C4h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-8C0h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-8BCh] BYREF
  int v22; // [rsp+48h] [rbp-8B8h] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-8B4h] BYREF
  __int64 v24; // [rsp+50h] [rbp-8B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-8A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-8A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-898h] BYREF
  _QWORD v28[2]; // [rsp+70h] [rbp-890h] BYREF
  __int128 v29; // [rsp+80h] [rbp-880h] BYREF
  __int64 v30; // [rsp+90h] [rbp-870h] BYREF
  __int128 v31; // [rsp+98h] [rbp-868h]
  __int64 v32; // [rsp+B0h] [rbp-850h] BYREF
  __int128 v33; // [rsp+B8h] [rbp-848h]
  __m128i v34; // [rsp+D0h] [rbp-830h] BYREF
  int v35; // [rsp+E0h] [rbp-820h]
  int v36; // [rsp+ECh] [rbp-814h]
  int v37; // [rsp+F8h] [rbp-808h]
  __int64 v38; // [rsp+100h] [rbp-800h] BYREF
  __int128 v39; // [rsp+108h] [rbp-7F8h]
  int v40; // [rsp+11Ch] [rbp-7E4h]
  int v41; // [rsp+128h] [rbp-7D8h]
  _DWORD v42[16]; // [rsp+130h] [rbp-7D0h] BYREF
  _QWORD v43[2]; // [rsp+170h] [rbp-790h] BYREF
  __int64 v44; // [rsp+180h] [rbp-780h]
  __int128 v45; // [rsp+188h] [rbp-778h]
  __int128 v46; // [rsp+198h] [rbp-768h]
  __int64 v47; // [rsp+1A8h] [rbp-758h]
  __int16 v48; // [rsp+1B0h] [rbp-750h]
  _BYTE v49[1800]; // [rsp+1B8h] [rbp-748h] BYREF
  unsigned __int64 v50; // [rsp+8C8h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  v48 = 0;
  v45 = 0;
  v43[0] = 0;
  v43[1] = 0;
  v44 = 0;
  memset(v49, 0, sizeof(v49));
  v47 = -1;
  v46 = -1;
  v14 = sub_225B0(v43, a1, a2);
  if ( v14 )
  {
    qword_44A18 = sub_27020(v43, NAN);
    v29 = 0;
    v3 = *(_QWORD *)qword_44A18;
    v17 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(v3 + 48))(qword_44A18, &v17);
    if ( !(unsigned __int8)sub_1CDD0("GetAssemblyFromScope", v4) )
    {
      v24 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v5 = *(_QWORD *)qword_44A18;
      v18 = 0;
      v19 = 0;
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, int *, __int128 *, void *, __int64, unsigned int *, __m128i *, char *))(v5 + 56))(
             qword_44A18,
             v17,
             &v24,
             &v18,
             &v29,
             &unk_34A00,
             0x8000,
             &v19,
             &v34,
             (char *)&v29 + 4);
      if ( !(unsigned __int8)sub_1CDD0("GetAssemblyProps", v6) )
      {
        *((_QWORD *)&v29 + 1) = _mm_shufflelo_epi16(_mm_loadl_epi64(&v34), 180).m128i_u64[0];
        sub_EF20(v17, &v29, 16, 97);
        if ( v19 > 0x7FFF )
          word_449FE = 0;
        v30 = 0;
        v31 = 0;
        utf16_utf8();
        sub_1D230(&v30);
        sub_F030(v17, (__int64)&v30);
        if ( v24 )
          sub_EF90();
        sub_EF20(0, &v17, 4, 0);
        v25 = 0;
        v20 = 0;
        while ( 1 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, __int64 *, _DWORD *, __int64, unsigned int *))(*(_QWORD *)qword_44A18
                                                                                                + 32LL))(
                 qword_44A18,
                 &v25,
                 v42,
                 16,
                 &v20);
          if ( v7 != 1 )
          {
            if ( (unsigned __int8)sub_1CDD0("EnumAssemblyRefs", v7) )
              break;
          }
          if ( !v20 )
            break;
          v15 = 0;
          do
          {
            v11 = (unsigned int)v42[v15];
            if ( (v11 & 0xFFFFFF) != 0 )
            {
              v26 = 0;
              DWORD2(v39) = 0;
              v40 = 0;
              v41 = 0;
              v27 = 0;
              v23 = 0;
              memset(v28, 0, 12);
              v9 = *(_QWORD *)qword_44A18;
              v21 = 0;
              v22 = 0;
              v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, int *, void *, __int64, unsigned int *, __int64 *, __int64 *, unsigned int *, _QWORD *))(v9 + 64))(
                      qword_44A18,
                      (unsigned int)v11,
                      &v26,
                      &v22,
                      &unk_34A00,
                      0x8000,
                      &v21,
                      &v38,
                      &v27,
                      &v23,
                      v28);
              if ( !(unsigned __int8)sub_1CDD0("GetAssemblyRefProps", v10) )
              {
                if ( v21 > 0x7FFF )
                  word_449FE = 0;
                v32 = 0;
                v33 = 0;
                utf16_utf8();
                sub_1D230(&v32);
                sub_F030(v11, (__int64)&v32);
                *(_QWORD *)((char *)v28 + 4) = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)&v38), 180).m128i_u64[0];
                sub_EF20(v11, v28, 12, 97);
                if ( v22 )
                  sub_EF90();
                if ( v23 )
                  sub_EF90();
                if ( v32 )
                {
                  *(_QWORD *)&v33 = 0;
                  qfree();
                }
              }
            }
            else
            {
              sub_A660((__int64)"%s: invalid token.", "display_assemblyref");
            }
            ++v15;
          }
          while ( (unsigned int)v15 < v20 );
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_44A18 + 24LL))(qword_44A18, v25);
        v28[0] = 0;
        v23 = 0;
        while ( 1 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _DWORD *, __int64, unsigned int *))(*(_QWORD *)qword_44A18
                                                                                               + 40LL))(
                 qword_44A18,
                 v28,
                 v42,
                 16,
                 &v23);
          if ( v8 != 1 )
          {
            if ( (unsigned __int8)sub_1CDD0("EnumFiles", v8) )
              break;
          }
          if ( !v23 )
            break;
          v16 = 0;
          do
          {
            v13 = (unsigned int)v42[v16];
            if ( (v13 & 0xFFFFFF) != 0 )
            {
              LODWORD(v25) = 0;
              v32 = 0;
              LODWORD(v26) = 0;
              LODWORD(v27) = 0;
              v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, __int64, __int64 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)qword_44A18 + 72LL))(
                      qword_44A18,
                      (unsigned int)v13,
                      &unk_34A00,
                      0x8000,
                      &v25,
                      &v32,
                      &v26,
                      &v27);
              if ( !(unsigned __int8)sub_1CDD0("GetFileProps", v12) )
              {
                if ( (unsigned int)v25 > 0x7FFF )
                  word_449FE = 0;
                v38 = 0;
                v39 = 0;
                utf16_utf8();
                sub_1D230(&v38);
                sub_F030(v13, (__int64)&v38);
                sub_EF20(v13, &v27, 4, 97);
                if ( (_DWORD)v26 )
                  sub_EF90();
                if ( v38 )
                {
                  *(_QWORD *)&v39 = 0;
                  qfree();
                }
              }
            }
            else
            {
              sub_A660((__int64)"%s: invalid token.", "display_file");
            }
            ++v16;
          }
          while ( (unsigned int)v16 < v23 );
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_44A18 + 24LL))(qword_44A18, v28[0]);
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree();
        }
      }
    }
    if ( qword_44A18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_44A18 + 8LL))(qword_44A18);
    qword_44A18 = 0;
    qword_44A20 = sub_27000(v43);
    sub_1E690();
    if ( qword_44A20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_44A20 + 8LL))(qword_44A20);
    qword_44A20 = 0;
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
  }
  return v14;
}
