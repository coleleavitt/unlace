__int64 __fastcall sub_34EF0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  const char *v8; // r13
  __int64 v9; // rbp
  void (__fastcall ***v10)(_QWORD); // rdi
  bool v11; // zf
  unsigned __int64 v12; // rbp
  void *v13; // r12
  void *v14; // r13
  void *v15; // rbp
  int v16; // r11d
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // rsi
  int v20; // r9d
  __int64 v21; // r8
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __m128i v24; // xmm2
  void *v25; // rcx
  __int64 v26; // rax
  __m128i v27; // xmm2
  __int64 v28; // rdi
  __m128i v29; // xmm2
  __m128i v30; // xmm2
  void (__fastcall ***v31)(_QWORD); // rdi
  void (__fastcall ***v32)(_QWORD); // rdi
  void (__fastcall ***v33)(_QWORD); // rdi
  void *v34; // rdi
  void (__fastcall ***v36)(_QWORD); // rdi
  __int64 v37; // rax
  size_t v38; // rbp
  size_t v39; // rbp
  const void *v40; // r13
  void *v41; // rax
  __int64 v42; // r14
  __int64 v44; // [rsp+20h] [rbp-288h]
  __m128i v45; // [rsp+40h] [rbp-268h] BYREF
  __m128i v46; // [rsp+50h] [rbp-258h] BYREF
  void *v47; // [rsp+60h] [rbp-248h]
  __int64 v48; // [rsp+68h] [rbp-240h]
  __int64 v49; // [rsp+70h] [rbp-238h]
  int v50; // [rsp+78h] [rbp-230h]
  int v51; // [rsp+7Ch] [rbp-22Ch]
  __m128i v52; // [rsp+80h] [rbp-228h] BYREF
  __m128i v53; // [rsp+90h] [rbp-218h] BYREF
  unsigned int v54; // [rsp+ACh] [rbp-1FCh] BYREF
  __int64 v55; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-1F0h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-1E8h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-1E0h] BYREF
  void *ptr; // [rsp+D0h] [rbp-1D8h] BYREF
  __int128 v60; // [rsp+D8h] [rbp-1D0h]
  __int64 v61; // [rsp+E8h] [rbp-1C0h]
  __int128 v62; // [rsp+F0h] [rbp-1B8h]
  __int64 v63; // [rsp+100h] [rbp-1A8h]
  __int128 v64; // [rsp+108h] [rbp-1A0h]
  void *v65; // [rsp+120h] [rbp-188h] BYREF
  size_t v66[2]; // [rsp+128h] [rbp-180h]
  void *v67; // [rsp+138h] [rbp-170h]
  size_t v68[2]; // [rsp+140h] [rbp-168h]
  void *v69; // [rsp+150h] [rbp-158h]
  __int128 v70; // [rsp+158h] [rbp-150h]
  void *src; // [rsp+168h] [rbp-140h] BYREF
  __int128 v72; // [rsp+170h] [rbp-138h]
  __int64 v73; // [rsp+180h] [rbp-128h]
  __int64 v74; // [rsp+188h] [rbp-120h]
  __int64 v75; // [rsp+190h] [rbp-118h]
  __m128i v76; // [rsp+198h] [rbp-110h] BYREF
  __m128i v77; // [rsp+1A8h] [rbp-100h] BYREF
  __int64 v78; // [rsp+1B8h] [rbp-F0h] BYREF
  void *v79; // [rsp+1C0h] [rbp-E8h] BYREF
  void *v80; // [rsp+1D8h] [rbp-D0h]
  void *v81; // [rsp+1F0h] [rbp-B8h]
  void *v82; // [rsp+208h] [rbp-A0h]
  int v83; // [rsp+220h] [rbp-88h]
  __int64 v84; // [rsp+228h] [rbp-80h]
  int v85; // [rsp+230h] [rbp-78h]
  __m128i v86; // [rsp+238h] [rbp-70h]
  __m128i v87; // [rsp+248h] [rbp-60h]
  __int64 v88; // [rsp+258h] [rbp-50h]
  unsigned __int64 v89; // [rsp+268h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a4 + 24);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a4 + 16);
    v44 = v7 + 24 * v6;
    if ( v44 == v7 )
      return 0;
    while ( 1 )
    {
      v65 = nullptr;
      v67 = nullptr;
      v69 = nullptr;
      src = nullptr;
      v73 = 0;
      v74 = 0;
      v75 = 0;
      v78 = 0;
      ptr = nullptr;
      *(_OWORD *)v66 = 0;
      *(_OWORD *)v68 = 0;
      v70 = 0;
      v72 = 0;
      v76 = 0;
      v77 = 0;
      v60 = 0;
      sub_299F0((char **)&ptr);
      v8 = s1;
      v9 = a3 + 40;
      if ( (_QWORD)v60 )
        v8 = (const char *)ptr;
      if ( *(_BYTE *)(a1 + 184) )
        sub_2F0E0(a1, (__int64)"sql_create_stmt(\"%s\")\n", v8);
      unk_241E58(&v55, a1 + 368);
      if ( !v55 )
        goto LABEL_63;
      unk_241E60(&v56, &v55, v9);
      if ( !v56 )
        break;
      v54 = 0;
      if ( (unsigned __int8)unk_241E70(&v56, v9) && !(unsigned __int8)sub_2F910(v9, (__int64)&v56, (__int64)"u", &v54) )
      {
        sub_33A10(&v56);
        sub_32C50(&v55);
        if ( ptr )
        {
          *(_QWORD *)&v60 = 0;
          j__free(ptr);
        }
        sub_2F5C0((__int64)&v65);
        return 0;
      }
      if ( v54 )
      {
        sub_318B0(
          (__int64)&v57,
          a1,
          "SELECT COUNT(DISTINCT(history.id)), COUNT(DISTINCT(fk_func)), COUNT(DISTINCT(pushes.id)) FROM history RIGHT JO"
          "IN pushes ON pushes.id = fk_push WHERE fk_user = ?");
        if ( v57 && (unsigned __int8)sub_2F9D0(v9, (__int64)&v57, (__int64)"u", v54) )
        {
          unk_241E60(&v79, &v57, v9);
          if ( (unsigned __int8)unk_241E70(&v79, v9) )
            sub_2F910(v9, (__int64)&v79, (__int64)"UUU", &v77, &v76, &v76.m128i_u64[1]);
          v10 = (void (__fastcall ***)(_QWORD))v79;
          if ( v79 )
          {
            v11 = (*((_DWORD *)v79 + 2))-- == 1;
            if ( v11 )
              (**v10)(v10);
          }
        }
        sub_318B0((__int64)&v58, a1, "SELECT COUNT(1), COUNT(DISTINCT(fk_input)) FROM idbs WHERE fk_user = ?");
        if ( v58 && (unsigned __int8)sub_2F9D0(v9, (__int64)&v58, (__int64)"u", v54) )
        {
          unk_241E60(&v79, &v58, v9);
          if ( (unsigned __int8)unk_241E70(&v79, v9) )
            sub_2F910(v9, (__int64)&v79, (__int64)"UU", &v77.m128i_u64[1], &v78);
          sub_33A10(&v79);
        }
        if ( (void **)v7 != &src )
        {
          v12 = *(_QWORD *)(v7 + 8);
          if ( v12 > 1 )
          {
            v40 = *(const void **)v7;
            v41 = src;
            if ( *((_QWORD *)&v72 + 1) < v12 )
            {
              v41 = (void *)sub_1987B0(&src, src, *(_QWORD *)(v7 + 8), 1);
              src = v41;
            }
            *(_QWORD *)&v72 = v12;
            memmove(v41, v40, v12 - 1);
            *((char *)src + v12 - 1) = 0;
          }
          else
          {
            *(_QWORD *)&v72 = 0;
          }
        }
        v13 = nullptr;
        v46.m128i_i64[0] = v66[0];
        if ( v66[0] )
        {
          v39 = v66[0];
          v13 = (void *)sub_198760(v66[0]);
          memcpy(v13, v65, v39);
        }
        v14 = nullptr;
        v46.m128i_i64[1] = v68[0];
        if ( v68[0] )
        {
          v38 = v68[0];
          v14 = (void *)sub_198760(v68[0]);
          memcpy(v14, v67, v38);
        }
        v15 = nullptr;
        v45.m128i_i64[0] = v70;
        if ( (_QWORD)v70 )
        {
          v15 = (void *)sub_198760(v70);
          memcpy(v15, v69, v45.m128i_u64[0]);
        }
        v45.m128i_i64[1] = v72;
        if ( (_QWORD)v72 )
        {
          v47 = (void *)sub_198760(v45.m128i_i64[1]);
          memcpy(v47, src, v45.m128i_u64[1]);
        }
        else
        {
          v47 = nullptr;
        }
        v16 = v73;
        v17 = a2[3];
        v18 = v74;
        v19 = a2[2];
        v20 = v75;
        v21 = v78;
        v83 = v73;
        v22 = _mm_loadu_si128(&v76);
        v84 = v74;
        v23 = _mm_loadu_si128(&v77);
        v85 = v75;
        v88 = v78;
        v86 = v22;
        v87 = v23;
        if ( a2[4] < (unsigned __int64)(v17 + 1) )
        {
          v51 = v75;
          v49 = v74;
          v50 = v73;
          v48 = v78;
          v53 = v22;
          v52 = v23;
          v37 = sub_1987B0(a2 + 2, v19, v17 + 1, 160);
          a2[2] = v37;
          v19 = v37;
          v22 = _mm_load_si128(&v53);
          v17 = a2[3];
          v20 = v51;
          v23 = _mm_load_si128(&v52);
          v18 = v49;
          v16 = v50;
          v21 = v48;
        }
        v24 = _mm_loadl_epi64(&v46);
        v25 = v47;
        v26 = v19 + 160 * v17;
        *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64(v24, v24);
        v27 = _mm_loadl_epi64((const __m128i *)&v46.m128i_u64[1]);
        *(_QWORD *)v26 = v13;
        v28 = v58;
        *(_QWORD *)(v26 + 24) = v14;
        *(__m128i *)(v26 + 32) = _mm_unpacklo_epi64(v27, v27);
        v29 = _mm_loadl_epi64(&v45);
        *(_QWORD *)(v26 + 48) = v15;
        *(_QWORD *)(v26 + 72) = v25;
        *(__m128i *)(v26 + 56) = _mm_unpacklo_epi64(v29, v29);
        v30 = _mm_loadl_epi64((const __m128i *)&v45.m128i_u64[1]);
        *(_DWORD *)(v26 + 96) = v16;
        *(_QWORD *)(v26 + 104) = v18;
        *(_DWORD *)(v26 + 112) = v20;
        *(_QWORD *)(v26 + 152) = v21;
        *(__m128i *)(v26 + 80) = _mm_unpacklo_epi64(v30, v30);
        *(__m128i *)(v26 + 120) = v22;
        *(__m128i *)(v26 + 136) = v23;
        ++a2[3];
        if ( v28 )
        {
          v11 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v11 )
            (**(void (__fastcall ***)(__int64))v28)(v28);
        }
        v31 = (void (__fastcall ***)(_QWORD))v57;
        if ( v57 )
        {
          v11 = (*(_DWORD *)(v57 + 8))-- == 1;
          if ( v11 )
            (**v31)(v31);
        }
      }
      v32 = (void (__fastcall ***)(_QWORD))v56;
      if ( v56 )
      {
        v11 = (*(_DWORD *)(v56 + 8))-- == 1;
        if ( v11 )
          (**v32)(v32);
      }
      v33 = (void (__fastcall ***)(_QWORD))v55;
      if ( v55 )
      {
        v11 = (*(_DWORD *)(v55 + 8))-- == 1;
        if ( v11 )
          (**v33)(v33);
      }
      if ( ptr )
      {
        *(_QWORD *)&v60 = 0;
        j__free(ptr);
      }
      if ( src )
      {
        *(_QWORD *)&v72 = 0;
        j__free(src);
      }
      if ( v69 )
      {
        *(_QWORD *)&v70 = 0;
        j__free(v69);
      }
      if ( v67 )
      {
        v68[0] = 0;
        j__free(v67);
      }
      v34 = v65;
      if ( v65 )
        goto LABEL_57;
LABEL_58:
      v7 += 24;
      if ( v44 == v7 )
        return 0;
    }
    sub_33A10(&v56);
    v36 = (void (__fastcall ***)(_QWORD))v55;
    if ( v55 )
    {
      v11 = (*(_DWORD *)(v55 + 8))-- == 1;
      if ( v11 )
        (**v36)(v36);
    }
LABEL_63:
    if ( ptr )
    {
      *(_QWORD *)&v60 = 0;
      j__free(ptr);
    }
    if ( src )
    {
      *(_QWORD *)&v72 = 0;
      j__free(src);
    }
    if ( v69 )
    {
      *(_QWORD *)&v70 = 0;
      j__free(v69);
    }
    if ( v67 )
    {
      v68[0] = 0;
      j__free(v67);
    }
    v34 = v65;
    if ( !v65 )
      goto LABEL_58;
LABEL_57:
    v66[0] = 0;
    j__free(v34);
    goto LABEL_58;
  }
  ptr = nullptr;
  v61 = 0;
  v63 = 0;
  v65 = nullptr;
  v67 = nullptr;
  v69 = nullptr;
  src = nullptr;
  v73 = 0;
  v74 = 0;
  LODWORD(v75) = 0;
  v60 = 0;
  v62 = 0;
  v64 = 0;
  *(_OWORD *)v66 = 0;
  *(_OWORD *)v68 = 0;
  v70 = 0;
  v72 = 0;
  sub_2F620((__int64)&v79, (__int64)&v65);
  v88 = 0;
  v86 = 0;
  v87 = 0;
  sub_2F570((__int64)&ptr);
  sub_31930((__int64)&v65, "funcs");
  v42 = a1 + 368;
  v86.m128i_i64[0] = sub_33A40(a1 + 368);
  if ( v65 )
  {
    v66[0] = 0;
    j__free(v65);
  }
  sub_31930((__int64)&v65, "pushes");
  v86.m128i_i64[1] = sub_33A40(v42);
  if ( v65 )
  {
    v66[0] = 0;
    j__free(v65);
  }
  sub_31930((__int64)&v65, "history");
  v87.m128i_i64[0] = sub_33A40(v42);
  if ( v65 )
  {
    v66[0] = 0;
    j__free(v65);
  }
  sub_31930((__int64)&v65, "idbs");
  v87.m128i_i64[1] = sub_33A40(v42);
  if ( v65 )
  {
    v66[0] = 0;
    j__free(v65);
  }
  sub_31930((__int64)&v65, "inputs");
  v88 = sub_33A40(v42);
  if ( v65 )
  {
    v66[0] = 0;
    j__free(v65);
  }
  sub_320B0(a2 + 2, (__int64)&v79);
  if ( v82 )
    j__free(v82);
  if ( v81 )
    j__free(v81);
  if ( v80 )
    j__free(v80);
  if ( v79 )
    j__free(v79);
  return 0;
}
