char **__fastcall sub_41850(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rcx
  char **result; // rax
  int v8; // eax
  void *v9; // rdi
  void *v10; // rbp
  __m128i v11; // xmm1
  __m128i si128; // xmm1
  void *v13; // rdi
  int v14; // eax
  void *v15; // rdi
  void *v16; // rbp
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rbp
  __m128i v22; // xmm1
  __m128i v23; // xmm1
  void *v24; // rdi
  int v25; // eax
  void *v26; // rdi
  void *v27; // rbp
  __m128i v28; // xmm1
  __m128i v29; // xmm1
  void *v30; // rdi
  int v31; // eax
  void *v32; // rdi
  void *v33; // rbp
  __m128i v34; // xmm0
  void *v35; // rdi
  int v36; // eax
  void *v37; // rdi
  void *v38; // rbp
  __m128i v39; // xmm1
  __m128i v40; // xmm1
  void *v41; // rdi
  int v42; // eax
  void *v43; // rdi
  void *v44; // rbp
  __m128i v45; // xmm1
  __m128i v46; // xmm1
  void *v47; // rdi
  int v48; // eax
  void *v49; // rdi
  void *v50; // rbp
  __m128i v51; // xmm0
  __m128i v52; // xmm0
  void *v53; // rdi
  int v54[4]; // [rsp+0h] [rbp-258h] BYREF
  int v55[2]; // [rsp+10h] [rbp-248h] BYREF
  int v56[4]; // [rsp+18h] [rbp-240h]
  void *v57; // [rsp+30h] [rbp-228h] BYREF
  __m128i v58; // [rsp+38h] [rbp-220h] BYREF
  void *v59; // [rsp+50h] [rbp-208h] BYREF
  void *v60[2]; // [rsp+58h] [rbp-200h] BYREF
  int v61[4]; // [rsp+68h] [rbp-1F0h]
  void *ptr; // [rsp+78h] [rbp-1E0h]
  int v63[4]; // [rsp+80h] [rbp-1D8h]
  __int64 v64; // [rsp+90h] [rbp-1C8h] BYREF
  int v65[4]; // [rsp+98h] [rbp-1C0h]
  int v66[2]; // [rsp+A8h] [rbp-1B0h] BYREF
  int v67[4]; // [rsp+B0h] [rbp-1A8h]
  __int64 v68; // [rsp+C0h] [rbp-198h]
  __int128 v69; // [rsp+C8h] [rbp-190h]
  __int64 v70; // [rsp+D8h] [rbp-180h]
  __int128 v71; // [rsp+E0h] [rbp-178h]
  __int64 v72; // [rsp+F0h] [rbp-168h]
  __int128 v73; // [rsp+F8h] [rbp-160h]
  __int64 v74; // [rsp+108h] [rbp-150h]
  __int128 v75; // [rsp+110h] [rbp-148h]
  __int64 v76; // [rsp+120h] [rbp-138h]
  __int128 v77; // [rsp+128h] [rbp-130h]
  __int64 v78; // [rsp+138h] [rbp-120h]
  __int128 v79; // [rsp+140h] [rbp-118h]
  __int64 v80; // [rsp+150h] [rbp-108h]
  __int128 v81; // [rsp+158h] [rbp-100h]
  __int64 v82; // [rsp+168h] [rbp-F0h]
  __int128 v83; // [rsp+170h] [rbp-E8h]
  __int64 v84; // [rsp+180h] [rbp-D8h]
  __int128 v85; // [rsp+188h] [rbp-D0h]
  __int64 v86; // [rsp+198h] [rbp-C0h]
  __int128 v87; // [rsp+1A0h] [rbp-B8h]
  __int64 v88; // [rsp+1B0h] [rbp-A8h]
  __int128 v89; // [rsp+1B8h] [rbp-A0h]
  __int64 v90; // [rsp+1C8h] [rbp-90h]
  __int128 v91; // [rsp+1D0h] [rbp-88h]
  __int64 v92; // [rsp+1E0h] [rbp-78h]
  __int128 v93; // [rsp+1E8h] [rbp-70h]
  __int64 v94; // [rsp+1F8h] [rbp-60h]
  __int128 v95; // [rsp+200h] [rbp-58h]
  char v96; // [rsp+210h] [rbp-48h]
  void *v97; // [rsp+218h] [rbp-40h]

  v6 = *(_QWORD *)a2;
  v97 = (void *)__readfsqword(0x28u);
  switch ( *(_BYTE *)(v6 + 8) )
  {
    case 0xE:
      LOBYTE(v60[0]) = 15;
      *(_OWORD *)v61 = 0;
      v59 = &off_236FA8;
      v60[1] = nullptr;
      ptr = nullptr;
      *(_OWORD *)v63 = 0;
      v8 = sub_3C300(a1, &v59, (__int64 *)a2, v6);
      *(_DWORD *)(a2 + 72) = v8;
      if ( !v8 )
      {
        sub_306F0((__int64)&v57, a1, (unsigned __int8 *)&v59);
        v9 = *(void **)(a2 + 80);
        v10 = v57;
        v57 = nullptr;
        v11 = _mm_loadu_si128(&v58);
        v58 = 0;
        if ( v9 )
        {
          *(_QWORD *)(a2 + 88) = 0;
          *(__m128i *)v54 = v11;
          j__free(v9);
          si128 = _mm_load_si128((const __m128i *)v54);
          v13 = v57;
          *(_QWORD *)(a2 + 80) = v10;
          *(__m128i *)(a2 + 88) = si128;
          if ( v13 )
          {
            v58.m128i_i64[0] = 0;
            j__free(v13);
          }
        }
        else
        {
          *(_QWORD *)(a2 + 80) = v10;
          *(__m128i *)(a2 + 88) = v11;
        }
      }
      sub_67250(&v59);
      goto LABEL_17;
    case 0x10:
      LOBYTE(v60[0]) = 17;
      *(_OWORD *)v61 = 0;
      v59 = &off_237008;
      v60[1] = nullptr;
      v14 = sub_37C90(a1, &v59, a2, v6);
      *(_DWORD *)(a2 + 72) = v14;
      if ( !v14 )
      {
        sub_306F0((__int64)&v57, a1, (unsigned __int8 *)&v59);
        v15 = *(void **)(a2 + 80);
        v16 = v57;
        v57 = nullptr;
        v17 = _mm_loadu_si128(&v58);
        v58 = 0;
        if ( v15 )
        {
          *(_QWORD *)(a2 + 88) = 0;
          *(__m128i *)v54 = v17;
          j__free(v15);
          v18 = _mm_load_si128((const __m128i *)v54);
          v19 = v57;
          *(_QWORD *)(a2 + 80) = v16;
          *(__m128i *)(a2 + 88) = v18;
          if ( v19 )
          {
            v58.m128i_i64[0] = 0;
            j__free(v19);
          }
        }
        else
        {
          *(_QWORD *)(a2 + 80) = v16;
          *(__m128i *)(a2 + 88) = v17;
        }
      }
      sub_661B0(&v59);
      goto LABEL_17;
    case 0x12:
      LOBYTE(v60[0]) = 19;
      *(_OWORD *)v61 = 0;
      v59 = &off_237068;
      v60[1] = nullptr;
      sub_365A0(a1, (__int64)&v59, a2, v6, a5, a6);
      *(_DWORD *)(a2 + 72) = 0;
      sub_306F0((__int64)&v57, a1, (unsigned __int8 *)&v59);
      v20 = *(void **)(a2 + 80);
      v21 = v57;
      v57 = nullptr;
      v22 = _mm_loadu_si128(&v58);
      v58 = 0;
      if ( v20 )
      {
        *(_QWORD *)(a2 + 88) = 0;
        *(__m128i *)v54 = v22;
        j__free(v20);
        v23 = _mm_load_si128((const __m128i *)v54);
        v24 = v57;
        *(_QWORD *)(a2 + 80) = v21;
        *(__m128i *)(a2 + 88) = v23;
        if ( v24 )
        {
          v58.m128i_i64[0] = 0;
          j__free(v24);
        }
      }
      else
      {
        *(_QWORD *)(a2 + 80) = v21;
        *(__m128i *)(a2 + 88) = v22;
      }
      sub_673E0(&v59);
      goto LABEL_17;
    case 0x18:
      v58.m128i_i8[0] = 25;
      v58.m128i_i32[1] = 0;
      v57 = off_237188;
      v25 = sub_3A320(a1, (__int64)&v57, a2, v6);
      *(_DWORD *)(a2 + 72) = v25;
      if ( !v25 )
      {
        sub_306F0((__int64)&v59, a1, (unsigned __int8 *)&v57);
        v26 = *(void **)(a2 + 80);
        v27 = v59;
        v59 = nullptr;
        v28 = _mm_loadu_si128((const __m128i *)v60);
        *(_OWORD *)v60 = 0;
        if ( v26 )
        {
          *(_QWORD *)(a2 + 88) = 0;
          *(__m128i *)v54 = v28;
          j__free(v26);
          v29 = _mm_load_si128((const __m128i *)v54);
          v30 = v59;
          *(_QWORD *)(a2 + 80) = v27;
          *(__m128i *)(a2 + 88) = v29;
          if ( v30 )
          {
            v60[0] = nullptr;
            j__free(v30);
          }
        }
        else
        {
          *(_QWORD *)(a2 + 80) = v27;
          *(__m128i *)(a2 + 88) = v28;
        }
      }
      nullsub_26(&v57);
      goto LABEL_17;
    case 0x1A:
      LOBYTE(v60[0]) = 27;
      v60[1] = nullptr;
      v59 = &off_2371E8;
      ptr = nullptr;
      v64 = 0;
      *(_QWORD *)v66 = 0;
      v68 = 0;
      v70 = 0;
      v72 = 0;
      v74 = 0;
      v76 = 0;
      v78 = 0;
      v80 = 0;
      v82 = 0;
      v84 = 0;
      v86 = 0;
      v88 = 0;
      *(_OWORD *)v61 = 0;
      *(_OWORD *)v63 = 0;
      *(_OWORD *)v65 = 0;
      *(_OWORD *)v67 = 0;
      v69 = 0;
      v71 = 0;
      v73 = 0;
      v75 = 0;
      v77 = 0;
      v79 = 0;
      v81 = 0;
      v83 = 0;
      v85 = 0;
      v87 = 0;
      v89 = 0;
      v90 = 0;
      v92 = 0;
      v94 = 0;
      v96 = 0;
      v91 = 0;
      v93 = 0;
      v95 = 0;
      v31 = sub_3D780(a1, (__int64)&v59, a2, v6);
      *(_DWORD *)(a2 + 72) = v31;
      if ( !v31 )
      {
        sub_306F0((__int64)&v57, a1, (unsigned __int8 *)&v59);
        v32 = *(void **)(a2 + 80);
        v33 = v57;
        v34 = _mm_loadu_si128(&v58);
        v57 = nullptr;
        v58 = 0;
        if ( v32 )
        {
          *(__m128i *)v54 = v34;
          *(_QWORD *)(a2 + 88) = 0;
          j__free(v32);
          v34 = _mm_load_si128((const __m128i *)v54);
        }
        v35 = v57;
        *(_QWORD *)(a2 + 80) = v33;
        *(__m128i *)(a2 + 88) = v34;
        if ( v35 )
        {
          v58.m128i_i64[0] = 0;
          j__free(v35);
        }
      }
      sub_69210(&v59);
      goto LABEL_17;
    case 0x25:
      LOBYTE(v60[0]) = 38;
      LOBYTE(ptr) = 0;
      v59 = &off_2373F8;
      v60[1] = nullptr;
      *(_OWORD *)v61 = 0;
      v42 = sub_36D00(a1, (__int64)&v59, a2, v6);
      *(_DWORD *)(a2 + 72) = v42;
      if ( !v42 )
      {
        sub_306F0((__int64)&v57, a1, (unsigned __int8 *)&v59);
        v43 = *(void **)(a2 + 80);
        v44 = v57;
        v57 = nullptr;
        v45 = _mm_loadu_si128(&v58);
        v58 = 0;
        if ( v43 )
        {
          *(_QWORD *)(a2 + 88) = 0;
          *(__m128i *)v54 = v45;
          j__free(v43);
          v46 = _mm_load_si128((const __m128i *)v54);
          v47 = v57;
          *(_QWORD *)(a2 + 80) = v44;
          *(__m128i *)(a2 + 88) = v46;
          if ( v47 )
          {
            v58.m128i_i64[0] = 0;
            j__free(v47);
          }
        }
        else
        {
          *(_QWORD *)(a2 + 80) = v44;
          *(__m128i *)(a2 + 88) = v45;
        }
      }
      sub_687E0(&v59);
      goto LABEL_17;
    case 0x28:
      LOBYTE(v60[0]) = 41;
      LODWORD(ptr) = 0;
      v59 = &off_237488;
      v60[1] = nullptr;
      *(_OWORD *)v61 = 0;
      v36 = sub_34700(a1, (__int64)&v59, a2, v6);
      *(_DWORD *)(a2 + 72) = v36;
      if ( !v36 )
      {
        sub_306F0((__int64)&v57, a1, (unsigned __int8 *)&v59);
        v37 = *(void **)(a2 + 80);
        v38 = v57;
        v57 = nullptr;
        v39 = _mm_loadu_si128(&v58);
        v58 = 0;
        if ( v37 )
        {
          *(_QWORD *)(a2 + 88) = 0;
          *(__m128i *)v54 = v39;
          j__free(v37);
          v40 = _mm_load_si128((const __m128i *)v54);
          v41 = v57;
          *(_QWORD *)(a2 + 80) = v38;
          *(__m128i *)(a2 + 88) = v40;
          if ( v41 )
          {
            v58.m128i_i64[0] = 0;
            j__free(v41);
          }
        }
        else
        {
          *(_QWORD *)(a2 + 80) = v38;
          *(__m128i *)(a2 + 88) = v39;
        }
      }
      sub_683F0(&v59);
      goto LABEL_17;
    case 0x2F:
      *(_QWORD *)v54 = v6;
      LOBYTE(v60[0]) = 48;
      v57 = nullptr;
      *(_QWORD *)v55 = 0;
      v59 = &off_2375D8;
      v60[1] = nullptr;
      ptr = nullptr;
      v64 = 0;
      v58 = 0;
      *(_OWORD *)v56 = 0;
      *(_OWORD *)v61 = 0;
      *(_OWORD *)v63 = 0;
      *(_OWORD *)v65 = 0;
      sub_2E040(&v64, v55);
      *(_QWORD *)v66 = 0;
      *(_OWORD *)v67 = 0;
      sub_2E040((__int64 *)v66, &v57);
      v48 = sub_3FE20(a1, &v59, a2, *(__int64 *)v54);
      *(_DWORD *)(a2 + 72) = v48;
      if ( !v48 )
      {
        sub_306F0((__int64)&v57, a1, (unsigned __int8 *)&v59);
        v49 = *(void **)(a2 + 80);
        v50 = v57;
        v57 = nullptr;
        v51 = _mm_loadu_si128(&v58);
        v58 = 0;
        if ( v49 )
        {
          *(_QWORD *)(a2 + 88) = 0;
          *(__m128i *)v54 = v51;
          j__free(v49);
          v52 = _mm_load_si128((const __m128i *)v54);
          v53 = v57;
          *(_QWORD *)(a2 + 80) = v50;
          *(__m128i *)(a2 + 88) = v52;
          if ( v53 )
          {
            v58.m128i_i64[0] = 0;
            j__free(v53);
          }
        }
        else
        {
          *(_QWORD *)(a2 + 80) = v50;
          *(__m128i *)(a2 + 88) = v51;
        }
      }
      sub_67F20(&v59);
LABEL_17:
      result = (char **)((char *)v97 - __readfsqword(0x28u));
      break;
    default:
      result = sub_299F0((char **)(a2 + 16));
      break;
  }
  return result;
}
