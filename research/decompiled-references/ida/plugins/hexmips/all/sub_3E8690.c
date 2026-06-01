unsigned __int64 __fastcall sub_3E8690(__int64 a1, __m128 si128)
{
  int v2; // edx
  void *v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  int v13; // esi
  int v14; // edx
  int v15; // edx
  int v16; // esi
  int v17; // esi
  int v18; // eax
  int v19; // esi
  int v20; // edx
  __int64 *v21; // r14
  __int64 *v22; // r13
  int v23; // eax
  int v24; // esi
  bool v25; // zf
  int v26; // edx
  int v27; // eax
  int v28; // esi
  int v29; // edx
  int v30; // eax
  int v31; // esi
  int v32; // edx
  int v33; // esi
  int v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // esi
  int v38; // edx
  int v39; // eax
  int v40; // esi
  int v41; // edx
  int v42; // esi
  int v43; // edx
  int v44; // eax
  int v45; // esi
  int v46; // eax
  unsigned __int64 result; // rax
  int v48; // eax
  int v49; // esi
  int v50; // eax
  int v51; // esi
  int v52; // esi
  int v53; // edx
  int v54; // esi
  int v55; // edx
  int v56; // esi
  int v57; // edx
  int v58; // esi
  int v59; // edx
  int v60; // esi
  int v61; // edx
  int v62; // esi
  int v63; // edx
  int v64; // esi
  int v65; // edx
  int v66; // esi
  int v67; // edx
  int v68; // esi
  int v69; // edx
  int v70; // esi
  int v71; // edx
  int v72; // esi
  int v73; // edx
  void *v74; // rax
  void *v75; // rax
  int v76; // eax
  int v77; // esi
  int v78; // edx
  int v79; // eax
  int v80; // esi
  int v81; // edx
  int v82; // esi
  int v83; // edx
  int v84; // eax
  int v85; // esi
  int v86; // eax
  int v87; // esi
  int v88; // eax
  int v89; // esi
  int v90; // edx
  int v91; // eax
  int v92; // esi
  int v93; // edx
  int v94; // esi
  int v95; // edx
  int v96; // eax
  int v97; // esi
  int v98; // eax
  int v99; // esi
  int v100; // eax
  int v101; // esi
  __int64 *v102; // [rsp+8h] [rbp-90h]
  __int64 *v103; // [rsp+10h] [rbp-88h]
  __int64 *v104; // [rsp+18h] [rbp-80h]
  __int64 *v105; // [rsp+20h] [rbp-78h]
  __int64 *v106; // [rsp+28h] [rbp-70h]
  __int64 v107; // [rsp+30h] [rbp-68h] BYREF
  __int64 v108; // [rsp+38h] [rbp-60h]
  __int64 *v109; // [rsp+40h] [rbp-58h] BYREF
  __int128 v110; // [rsp+48h] [rbp-50h]
  unsigned __int64 v111; // [rsp+58h] [rbp-40h]

  v111 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 748);
  switch ( v2 )
  {
    case 0:
      v74 = &unk_418520;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
        v74 = &unk_418AA0;
      goto LABEL_87;
    case 1:
    case 2:
      v4 = &unk_419020;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
        v4 = &unk_4195A0;
      *(_QWORD *)(a1 + 736) = v4;
      *(_DWORD *)(a1 + 80) = 8;
      if ( v2 == 1 )
      {
        *(_DWORD *)(a1 + 84) = 4;
        *(_QWORD *)(a1 + 88) = 0x2000000010LL;
        v5 = *(_DWORD *)(a1 + 48) & 0xFFFFFE7F;
        LOBYTE(v5) = *(_BYTE *)(a1 + 48) & 0x7F | 0x80;
      }
      else
      {
        *(_DWORD *)(a1 + 84) = 8;
        *(_QWORD *)(a1 + 88) = 0x2000000010LL;
        v5 = *(_DWORD *)(a1 + 48) & 0xFFFFFE7F;
        BYTE1(v5) |= 1u;
      }
      goto LABEL_6;
    case 3:
      v74 = &unk_416F20;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
        v74 = &unk_4174A0;
      goto LABEL_87;
    case 4:
      v75 = &unk_417A20;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
        v75 = &unk_417FA0;
      *(_QWORD *)(a1 + 736) = v75;
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_407580);
      v5 = *(_DWORD *)(a1 + 48) & 0xFFFFFE7F;
      *(__m128 *)(a1 + 80) = si128;
      LOBYTE(v5) = v5 | 0x80;
LABEL_6:
      v6 = v5 | 0x80000;
      goto LABEL_7;
    case 5:
      v74 = &unk_416820;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
        v74 = &unk_416BA0;
LABEL_87:
      *(_QWORD *)(a1 + 736) = v74;
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_407570);
      v6 = *(_DWORD *)(a1 + 48) & 0xFFFFFE7F;
      *(__m128 *)(a1 + 80) = si128;
      LOBYTE(v6) = v6 | 0x80;
LABEL_7:
      *(_DWORD *)(a1 + 48) = v6;
      sub_3E8600(a1, *(double *)si128.m128_u64);
      v7 = *(_DWORD *)(a1 + 692);
      v8 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 68) = _mm_unpacklo_epi32(_mm_cvtsi32_si128((v7 + 31) & 0xFFFFFFE0), _mm_cvtsi32_si128(v7)).m128i_u64[0];
      if ( v8 )
      {
        *(_QWORD *)(a1 + 128) = 0;
        qfree();
        *(_QWORD *)(a1 + 120) = 0;
        *(_QWORD *)(a1 + 136) = 0;
      }
      v9 = *(_QWORD *)(a1 + 160);
      *(_QWORD *)(a1 + 152) = 0;
      if ( v9 )
      {
        *(_QWORD *)(a1 + 168) = 0;
        qfree();
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 176) = 0;
      }
      v10 = *(_QWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 192) = 0;
      if ( v10 )
      {
        *(_QWORD *)(a1 + 208) = 0;
        qfree();
        *(_QWORD *)(a1 + 200) = 0;
        *(_QWORD *)(a1 + 216) = 0;
      }
      v11 = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(a1 + 232) = 0;
      if ( v11 )
      {
        *(_QWORD *)(a1 + 248) = 0;
        qfree();
        *(_QWORD *)(a1 + 240) = 0;
        *(_QWORD *)(a1 + 256) = 0;
      }
      v12 = *(_QWORD *)(a1 + 280);
      *(_QWORD *)(a1 + 272) = 0;
      if ( v12 )
      {
        *(_QWORD *)(a1 + 288) = 0;
        qfree();
        *(_QWORD *)(a1 + 280) = 0;
        *(_QWORD *)(a1 + 296) = 0;
      }
      v13 = *(_DWORD *)(a1 + 676);
      v14 = *(_DWORD *)(a1 + 692);
      v107 = 0;
      v108 = 0;
      sub_5FC80(&v107, v13, v14 - v13);
      v109 = nullptr;
      v110 = 0;
      sub_60080((__int64 *)(a1 + 104), &v107);
      sub_311F30((__int64 *)(a1 + 120), &v109);
      if ( v109 )
      {
        *(_QWORD *)&v110 = 0;
        qfree();
      }
      qfree();
      v15 = *(_DWORD *)(a1 + 80);
      v16 = **(_DWORD **)(a1 + 696);
      v107 = 0;
      v108 = 0;
      sub_5FC80(&v107, v16, v15);
      v109 = nullptr;
      v110 = 0;
      sub_60080((__int64 *)(a1 + 104), &v107);
      sub_311F30((__int64 *)(a1 + 120), &v109);
      if ( v109 )
      {
        *(_QWORD *)&v110 = 0;
        qfree();
      }
      qfree();
      v107 = 0;
      v108 = 0;
      sub_5FC80(&v107, 0, 5);
      v109 = nullptr;
      v110 = 0;
      sub_60080((__int64 *)(a1 + 264), &v107);
      v104 = (__int64 *)(a1 + 280);
      sub_311F30((__int64 *)(a1 + 280), &v109);
      if ( v109 )
      {
        *(_QWORD *)&v110 = 0;
        qfree();
      }
      qfree();
      v107 = 0;
      v108 = 0;
      v109 = nullptr;
      v110 = 0;
      v109 = (__int64 *)qvector_reserve();
      *(__m128i *)&v109[2 * v110] = _mm_load_si128((const __m128i *)&xmmword_407240);
      *(_QWORD *)&v110 = v110 + 1;
      sub_60080((__int64 *)(a1 + 264), &v107);
      sub_311F30(v104, &v109);
      if ( v109 )
      {
        *(_QWORD *)&v110 = 0;
        qfree();
      }
      qfree();
      v17 = *(_DWORD *)(a1 + 352);
      v107 = 0;
      v108 = 0;
      sub_5FC80(&v107, v17, 1);
      v109 = nullptr;
      v110 = 0;
      sub_60080((__int64 *)(a1 + 264), &v107);
      sub_311F30(v104, &v109);
      if ( v109 )
      {
        *(_QWORD *)&v110 = 0;
        qfree();
      }
      qfree();
      v18 = *(_DWORD *)(a1 + 80);
      v19 = *(_DWORD *)(a1 + 360);
      v20 = 3 * v18;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
      {
        v107 = 0;
        v108 = 0;
        sub_5FC80(&v107, v18 + v19 - v20, v20);
        v21 = (__int64 *)(a1 + 184);
        v109 = nullptr;
        v110 = 0;
        sub_60080((__int64 *)(a1 + 184), &v107);
        v22 = (__int64 *)(a1 + 200);
        sub_311F30((__int64 *)(a1 + 200), &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
      }
      else
      {
        v107 = 0;
        v108 = 0;
        sub_5FC80(&v107, v19, v20);
        v21 = (__int64 *)(a1 + 184);
        v109 = nullptr;
        v110 = 0;
        sub_60080((__int64 *)(a1 + 184), &v107);
        v22 = (__int64 *)(a1 + 200);
        sub_311F30((__int64 *)(a1 + 200), &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
      }
      qfree();
      v23 = *(_DWORD *)(a1 + 80);
      v24 = *(_DWORD *)(a1 + 420);
      v25 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
      v26 = 8 * v23;
      v107 = 0;
      v108 = 0;
      if ( v25 )
      {
        sub_5FC80(&v107, v24, v26);
        v109 = nullptr;
        v102 = (__int64 *)(a1 + 224);
        v110 = 0;
        sub_60080((__int64 *)(a1 + 224), &v107);
        v103 = (__int64 *)(a1 + 240);
        sub_311F30((__int64 *)(a1 + 240), &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
      }
      else
      {
        sub_5FC80(&v107, v23 + v24 - v26, v26);
        v109 = nullptr;
        v102 = (__int64 *)(a1 + 224);
        v110 = 0;
        sub_60080((__int64 *)(a1 + 224), &v107);
        v103 = (__int64 *)(a1 + 240);
        sub_311F30((__int64 *)(a1 + 240), &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
      }
      qfree();
      v27 = *(_DWORD *)(a1 + 80);
      v28 = *(_DWORD *)(a1 + 452);
      v25 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
      v29 = 2 * v27;
      v107 = 0;
      v108 = 0;
      if ( v25 )
      {
        sub_5FC80(&v107, v28, v29);
        v109 = nullptr;
        v110 = 0;
        sub_60080(v21, &v107);
        sub_311F30(v22, &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
      }
      else
      {
        sub_5FC80(&v107, v27 + v28 - v29, v29);
        v109 = nullptr;
        v110 = 0;
        sub_60080(v21, &v107);
        sub_311F30(v22, &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
      }
      qfree();
      v30 = *(_DWORD *)(a1 + 80);
      v31 = *(_DWORD *)(a1 + 472);
      v25 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
      v32 = 2 * v30;
      v107 = 0;
      v108 = 0;
      if ( v25 )
      {
        sub_5FC80(&v107, v31, v32);
        v109 = nullptr;
        v110 = 0;
        sub_60080(v102, &v107);
        sub_311F30(v103, &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
      }
      else
      {
        sub_5FC80(&v107, v30 + v31 - v32, v32);
        v109 = nullptr;
        v110 = 0;
        sub_60080(v102, &v107);
        sub_311F30(v103, &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
      }
      qfree();
      v33 = *(_DWORD *)(a1 + 480);
      v34 = *(_DWORD *)(a1 + 80);
      v107 = 0;
      v108 = 0;
      sub_5FC80(&v107, v33, v34);
      v109 = nullptr;
      v110 = 0;
      sub_60080(v21, &v107);
      sub_311F30(v22, &v109);
      if ( v109 )
      {
        *(_QWORD *)&v110 = 0;
        qfree();
      }
      qfree();
      v35 = *(_DWORD *)(a1 + 748);
      if ( (unsigned int)(v35 - 1) <= 2 )
      {
        v76 = *(_DWORD *)(a1 + 80);
        v77 = *(_DWORD *)(a1 + 372);
        v25 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
        v78 = 8 * v76;
        v107 = 0;
        v108 = 0;
        if ( v25 )
        {
          sub_5FC80(&v107, v77, v78);
          v109 = nullptr;
          v105 = (__int64 *)(a1 + 144);
          v110 = 0;
          sub_60080((__int64 *)(a1 + 144), &v107);
          v106 = (__int64 *)(a1 + 160);
          sub_311F30((__int64 *)(a1 + 160), &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
        }
        else
        {
          sub_5FC80(&v107, v76 + v77 - v78, v78);
          v109 = nullptr;
          v105 = (__int64 *)(a1 + 144);
          v110 = 0;
          sub_60080((__int64 *)(a1 + 144), &v107);
          v106 = (__int64 *)(a1 + 160);
          sub_311F30((__int64 *)(a1 + 160), &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
        }
        qfree();
        v79 = *(_DWORD *)(a1 + 80);
        v80 = *(_DWORD *)(a1 + 404);
        v25 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
        v81 = 4 * v79;
        v107 = 0;
        v108 = 0;
        if ( v25 )
        {
          sub_5FC80(&v107, v80, v81);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v21, &v107);
          sub_311F30(v22, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
        }
        else
        {
          sub_5FC80(&v107, v79 + v80 - v81, v81);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v21, &v107);
          sub_311F30(v22, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
        }
        qfree();
        v82 = *(_DWORD *)(a1 + 468);
        v83 = *(_DWORD *)(a1 + 80);
        v107 = 0;
        v108 = 0;
        sub_5FC80(&v107, v82, v83);
        v109 = nullptr;
        v110 = 0;
        sub_60080(v102, &v107);
        sub_311F30(v103, &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
        qfree();
        v84 = *(_DWORD *)(a1 + 80);
        v85 = *(_DWORD *)(a1 + 532);
        v107 = 0;
        v108 = 0;
        sub_5FC80(&v107, v85, 8 * v84);
        v109 = nullptr;
        v110 = 0;
        sub_60080(v105, &v107);
        sub_311F30(v106, &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
        qfree();
        v86 = *(_DWORD *)(a1 + 80);
        v87 = *(_DWORD *)(a1 + 484);
        v107 = 0;
        v108 = 0;
        sub_5FC80(&v107, v87, 12 * v86);
        v109 = nullptr;
        v110 = 0;
        sub_60080(v21, &v107);
        sub_311F30(v22, &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
      }
      else if ( (v35 & 0xFFFFFFFB) != 0 )
      {
        if ( v35 != 5 )
        {
          if ( !under_debugger )
            sub_37E160(0xCE0Eu, 0.0);
LABEL_160:
          BUG();
        }
        v36 = *(_DWORD *)(a1 + 80);
        v37 = *(_DWORD *)(a1 + 372);
        v25 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
        v38 = 8 * v36;
        v107 = 0;
        v108 = 0;
        if ( v25 )
        {
          sub_5FC80(&v107, v37, v38);
          v109 = nullptr;
          v105 = (__int64 *)(a1 + 144);
          v110 = 0;
          sub_60080((__int64 *)(a1 + 144), &v107);
          v106 = (__int64 *)(a1 + 160);
          sub_311F30((__int64 *)(a1 + 160), &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
        }
        else
        {
          sub_5FC80(&v107, v36 + v37 - v38, v38);
          v109 = nullptr;
          v105 = (__int64 *)(a1 + 144);
          v110 = 0;
          sub_60080((__int64 *)(a1 + 144), &v107);
          v106 = (__int64 *)(a1 + 160);
          sub_311F30((__int64 *)(a1 + 160), &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
        }
        qfree();
        v39 = *(_DWORD *)(a1 + 80);
        v40 = *(_DWORD *)(a1 + 404);
        v25 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
        v41 = 4 * v39;
        v107 = 0;
        v108 = 0;
        if ( v25 )
        {
          sub_5FC80(&v107, v40, v41);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v21, &v107);
          sub_311F30(v22, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
        }
        else
        {
          sub_5FC80(&v107, v39 + v40 - v41, v41);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v21, &v107);
          sub_311F30(v22, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
        }
        qfree();
        v42 = *(_DWORD *)(a1 + 468);
        v43 = *(_DWORD *)(a1 + 80);
        v107 = 0;
        v108 = 0;
        sub_5FC80(&v107, v42, v43);
        v109 = nullptr;
        v110 = 0;
        sub_60080(v102, &v107);
        sub_311F30(v103, &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
      }
      else
      {
        v88 = *(_DWORD *)(a1 + 80);
        v89 = *(_DWORD *)(a1 + 372);
        v25 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
        v90 = 4 * v88;
        v107 = 0;
        v108 = 0;
        if ( v25 )
        {
          sub_5FC80(&v107, v89, v90);
          v109 = nullptr;
          v105 = (__int64 *)(a1 + 144);
          v110 = 0;
          sub_60080((__int64 *)(a1 + 144), &v107);
          v106 = (__int64 *)(a1 + 160);
          sub_311F30((__int64 *)(a1 + 160), &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
        }
        else
        {
          sub_5FC80(&v107, v88 + v89 - v90, v90);
          v109 = nullptr;
          v105 = (__int64 *)(a1 + 144);
          v110 = 0;
          sub_60080((__int64 *)(a1 + 144), &v107);
          v106 = (__int64 *)(a1 + 160);
          sub_311F30((__int64 *)(a1 + 160), &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
        }
        qfree();
        v91 = *(_DWORD *)(a1 + 80);
        v92 = *(_DWORD *)(a1 + 388);
        v25 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
        v93 = 8 * v91;
        v107 = 0;
        v108 = 0;
        if ( v25 )
        {
          sub_5FC80(&v107, v92, v93);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v21, &v107);
          sub_311F30(v22, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
        }
        else
        {
          sub_5FC80(&v107, v91 + v92 - v93, v93);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v21, &v107);
          sub_311F30(v22, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
        }
        qfree();
        v94 = *(_DWORD *)(a1 + 468);
        v95 = *(_DWORD *)(a1 + 80);
        v107 = 0;
        v108 = 0;
        sub_5FC80(&v107, v94, v95);
        v109 = nullptr;
        v110 = 0;
        sub_60080(v21, &v107);
        sub_311F30(v22, &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
        qfree();
        v96 = *(_DWORD *)(a1 + 80);
        v97 = *(_DWORD *)(a1 + 532);
        v107 = 0;
        v108 = 0;
        sub_5FC80(&v107, v97, 4 * v96);
        v109 = nullptr;
        v110 = 0;
        sub_60080(v105, &v107);
        sub_311F30(v106, &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
        qfree();
        v98 = *(_DWORD *)(a1 + 80);
        v99 = *(_DWORD *)(a1 + 548);
        v107 = 0;
        v108 = 0;
        sub_5FC80(&v107, v99, 4 * v98);
        v109 = nullptr;
        v110 = 0;
        sub_60080(v21, &v107);
        sub_311F30(v22, &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
        qfree();
        v100 = *(_DWORD *)(a1 + 80);
        v101 = *(_DWORD *)(a1 + 484);
        v107 = 0;
        v108 = 0;
        sub_5FC80(&v107, v101, 12 * v100);
        v109 = nullptr;
        v110 = 0;
        sub_60080(v21, &v107);
        sub_311F30(v22, &v109);
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
      }
      qfree();
      switch ( *(_DWORD *)(a1 + 748) )
      {
        case 0:
        case 3:
        case 4:
          v44 = *(_DWORD *)(a1 + 80);
          v45 = *(_DWORD *)(a1 + 564);
          v107 = 0;
          v108 = 0;
          sub_5FC80(&v107, v45, 12 * v44);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v102, &v107);
          sub_311F30(v103, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
          goto LABEL_55;
        case 1:
          v52 = *(_DWORD *)(a1 + 564);
          v53 = *(_DWORD *)(a1 + 80);
          v107 = 0;
          v108 = 0;
          sub_5FC80(&v107, v52, v53);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v102, &v107);
          sub_311F30(v103, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
          qfree();
          v54 = *(_DWORD *)(a1 + 572);
          v55 = *(_DWORD *)(a1 + 80);
          v107 = 0;
          v108 = 0;
          sub_5FC80(&v107, v54, v55);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v102, &v107);
          sub_311F30(v103, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
          qfree();
          v56 = *(_DWORD *)(a1 + 580);
          v57 = *(_DWORD *)(a1 + 80);
          v107 = 0;
          v108 = 0;
          sub_5FC80(&v107, v56, v57);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v102, &v107);
          sub_311F30(v103, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
          qfree();
          v58 = *(_DWORD *)(a1 + 588);
          v59 = *(_DWORD *)(a1 + 80);
          v107 = 0;
          v108 = 0;
          sub_5FC80(&v107, v58, v59);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v102, &v107);
          sub_311F30(v103, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
          qfree();
          v60 = *(_DWORD *)(a1 + 596);
          v61 = *(_DWORD *)(a1 + 80);
          v107 = 0;
          v108 = 0;
          sub_5FC80(&v107, v60, v61);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v102, &v107);
          sub_311F30(v103, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
          qfree();
          v62 = *(_DWORD *)(a1 + 604);
          v63 = *(_DWORD *)(a1 + 80);
          v107 = 0;
          v108 = 0;
          sub_5FC80(&v107, v62, v63);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v102, &v107);
          sub_311F30(v103, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
          qfree();
          v64 = *(_DWORD *)(a1 + 568);
          v65 = *(_DWORD *)(a1 + 80);
          v107 = 0;
          v108 = 0;
          sub_5FC80(&v107, v64, v65);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v21, &v107);
          sub_311F30(v22, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
          qfree();
          v66 = *(_DWORD *)(a1 + 576);
          v67 = *(_DWORD *)(a1 + 80);
          v107 = 0;
          v108 = 0;
          sub_5FC80(&v107, v66, v67);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v21, &v107);
          sub_311F30(v22, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
          qfree();
          v68 = *(_DWORD *)(a1 + 584);
          v69 = *(_DWORD *)(a1 + 80);
          v107 = 0;
          v108 = 0;
          sub_5FC80(&v107, v68, v69);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v21, &v107);
          sub_311F30(v22, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
          qfree();
          v70 = *(_DWORD *)(a1 + 592);
          v71 = *(_DWORD *)(a1 + 80);
          v107 = 0;
          v108 = 0;
          sub_5FC80(&v107, v70, v71);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v21, &v107);
          sub_311F30(v22, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
          qfree();
          v72 = *(_DWORD *)(a1 + 600);
          v73 = *(_DWORD *)(a1 + 80);
          v107 = 0;
          v108 = 0;
          sub_5FC80(&v107, v72, v73);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v21, &v107);
          sub_311F30(v22, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
          goto LABEL_55;
        case 2:
          v48 = *(_DWORD *)(a1 + 80);
          v49 = *(_DWORD *)(a1 + 564);
          v107 = 0;
          v108 = 0;
          sub_5FC80(&v107, v49, 4 * v48);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v21, &v107);
          sub_311F30(v22, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
          qfree();
          v50 = *(_DWORD *)(a1 + 80);
          v51 = *(_DWORD *)(a1 + 580);
          v107 = 0;
          v108 = 0;
          sub_5FC80(&v107, v51, 8 * v50);
          v109 = nullptr;
          v110 = 0;
          sub_60080(v102, &v107);
          sub_311F30(v103, &v109);
          if ( v109 )
          {
            *(_QWORD *)&v110 = 0;
            qfree();
          }
LABEL_55:
          qfree();
          goto LABEL_56;
        case 5:
LABEL_56:
          sub_60080((__int64 *)(a1 + 264), v105);
          sub_311F30(v104, (__int64 **)v106);
          sub_60080((__int64 *)(a1 + 264), v21);
          sub_311F30(v104, (__int64 **)v22);
          v46 = *(_DWORD *)(a1 + 64);
          *(_DWORD *)(a1 + 52) = v46;
          *(_DWORD *)(a1 + 56) = v46;
          *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 472);
          return v111 - __readfsqword(0x28u);
        default:
          if ( !under_debugger )
            sub_37E160(0xCE0Fu, 0.0);
          return result;
      }
      goto LABEL_160;
    default:
      if ( !under_debugger )
        sub_37E160(0xCE0Du, *(double *)si128.m128_u64);
      goto LABEL_160;
  }
}

