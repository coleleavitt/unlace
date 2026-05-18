char **__fastcall sub_35B60(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  char **result; // rax
  void *v4; // rdi
  void *v5; // rbp
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rbp
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  void *v13; // rdi
  void *v14; // r13
  void *v15; // r15
  void *v16; // r14
  void *v17; // rdi
  void *v18; // rbp
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rbp
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  void *v26; // rdi
  __m128i v27; // [rsp+0h] [rbp-428h] BYREF
  __int64 *v28; // [rsp+18h] [rbp-410h]
  __int64 v29; // [rsp+20h] [rbp-408h]
  void *v30; // [rsp+28h] [rbp-400h]
  void *v31; // [rsp+30h] [rbp-3F8h]
  void *v32; // [rsp+38h] [rbp-3F0h]
  void *v33; // [rsp+40h] [rbp-3E8h]
  __m128i *v34; // [rsp+48h] [rbp-3E0h]
  void **v35; // [rsp+50h] [rbp-3D8h]
  void **v36; // [rsp+58h] [rbp-3D0h]
  __int64 v37; // [rsp+60h] [rbp-3C8h] BYREF
  __int128 v38; // [rsp+68h] [rbp-3C0h]
  __int64 v39; // [rsp+78h] [rbp-3B0h] BYREF
  __int128 v40; // [rsp+80h] [rbp-3A8h]
  __int128 v41; // [rsp+90h] [rbp-398h]
  __int64 v42; // [rsp+A0h] [rbp-388h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-380h]
  __int64 v44; // [rsp+B8h] [rbp-370h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-368h]
  __int64 v46; // [rsp+D0h] [rbp-358h] BYREF
  __int128 v47; // [rsp+D8h] [rbp-350h]
  void *v48; // [rsp+F0h] [rbp-338h] BYREF
  __int128 v49; // [rsp+F8h] [rbp-330h]
  void *v50; // [rsp+108h] [rbp-320h] BYREF
  __int128 v51; // [rsp+110h] [rbp-318h]
  void *v52; // [rsp+120h] [rbp-308h] BYREF
  __int128 v53; // [rsp+128h] [rbp-300h]
  __int64 v54; // [rsp+138h] [rbp-2F0h]
  __int128 v55; // [rsp+140h] [rbp-2E8h]
  int v56; // [rsp+150h] [rbp-2D8h]
  __int64 v57; // [rsp+158h] [rbp-2D0h]
  int v58; // [rsp+160h] [rbp-2C8h]
  int v59; // [rsp+170h] [rbp-2B8h]
  void *ptr; // [rsp+178h] [rbp-2B0h] BYREF
  __int128 v61; // [rsp+180h] [rbp-2A8h]
  void *v62[3]; // [rsp+190h] [rbp-298h] BYREF
  void *v63; // [rsp+1A8h] [rbp-280h]
  void *v64; // [rsp+1C0h] [rbp-268h]
  void *v65; // [rsp+1D8h] [rbp-250h]
  __int64 v66; // [rsp+208h] [rbp-220h]
  void *v67; // [rsp+210h] [rbp-218h] BYREF
  __m128i v68[3]; // [rsp+218h] [rbp-210h] BYREF
  void *v69; // [rsp+248h] [rbp-1E0h]
  void *v70; // [rsp+260h] [rbp-1C8h]
  void *v71; // [rsp+278h] [rbp-1B0h]
  __int64 v72; // [rsp+2A8h] [rbp-180h]
  void *v73; // [rsp+2B0h] [rbp-178h] BYREF
  __int128 v74; // [rsp+2B8h] [rbp-170h]
  void *v75; // [rsp+2C8h] [rbp-160h] BYREF
  __int128 v76; // [rsp+2D0h] [rbp-158h]
  __int128 v77; // [rsp+2E0h] [rbp-148h]
  void *v78; // [rsp+2F0h] [rbp-138h] BYREF
  __m128i v79; // [rsp+2F8h] [rbp-130h] BYREF
  _BYTE v80[24]; // [rsp+308h] [rbp-120h] BYREF
  _BYTE v81[120]; // [rsp+320h] [rbp-108h] BYREF
  __int64 v82; // [rsp+398h] [rbp-90h]
  void *v83; // [rsp+3A0h] [rbp-88h] BYREF
  __int128 v84; // [rsp+3A8h] [rbp-80h]
  __int64 v85; // [rsp+3B8h] [rbp-70h] BYREF
  __int128 v86; // [rsp+3C0h] [rbp-68h]
  __int128 v87; // [rsp+3D0h] [rbp-58h]
  unsigned __int64 v88; // [rsp+3E8h] [rbp-40h]

  v2 = *(_QWORD *)a2;
  v88 = __readfsqword(0x28u);
  switch ( *(_BYTE *)(v2 + 8) )
  {
    case 0x14:
      v68[0].m128i_i8[0] = 21;
      memset(&v68[0].m128i_u64[1], 0, 24);
      v67 = &off_2370C8;
      if ( (*(_BYTE *)(a1 + 488) & 1) == 0 )
      {
        if ( !unk_2439A0 )
          sub_198E10(0);
        BUG();
      }
      v79.m128i_i64[1] = v2;
      v78 = off_236250;
      v79.m128i_i64[0] = a1 + 368;
      *(_QWORD *)v80 = &v67;
      *(_QWORD *)&v80[8] = a2;
      sub_314A0(a1, (__int64 (__fastcall ***)(_QWORD, __int64))&v78, 1);
      *(_DWORD *)(a2 + 72) = 0;
      sub_306F0((__int64)&v78, a1, (unsigned __int8 *)&v67);
      v4 = *(void **)(a2 + 80);
      v5 = v78;
      v78 = nullptr;
      v6 = _mm_loadu_si128(&v79);
      v79 = 0;
      if ( v4 )
      {
        *(_QWORD *)(a2 + 88) = 0;
        v27 = v6;
        j__free(v4);
        v7 = _mm_load_si128(&v27);
        *(_QWORD *)(a2 + 80) = v5;
        v8 = v78;
        *(__m128i *)(a2 + 88) = v7;
        if ( v8 )
        {
          v79.m128i_i64[0] = 0;
          j__free(v8);
        }
      }
      else
      {
        *(_QWORD *)(a2 + 80) = v5;
        *(__m128i *)(a2 + 88) = v6;
      }
      sub_68AA0(&v67);
      goto LABEL_8;
    case 0x16:
      v79.m128i_i8[0] = 23;
      *(_OWORD *)v80 = 0;
      v78 = &off_237128;
      v79.m128i_i64[1] = 0;
      sub_315A0(a1, &v78, a2, v2);
      *(_DWORD *)(a2 + 72) = 0;
      sub_306F0((__int64)&v67, a1, (unsigned __int8 *)&v78);
      v9 = *(void **)(a2 + 80);
      v10 = v67;
      v67 = nullptr;
      v11 = _mm_loadu_si128(v68);
      v68[0] = 0;
      if ( v9 )
      {
        *(_QWORD *)(a2 + 88) = 0;
        v27 = v11;
        j__free(v9);
        v12 = _mm_load_si128(&v27);
        *(_QWORD *)(a2 + 80) = v10;
        v13 = v67;
        *(__m128i *)(a2 + 88) = v12;
        if ( v13 )
        {
          v68[0].m128i_i64[0] = 0;
          j__free(v13);
        }
      }
      else
      {
        *(_QWORD *)(a2 + 80) = v10;
        *(__m128i *)(a2 + 88) = v11;
      }
      sub_661F0(&v78);
      goto LABEL_8;
    case 0x27:
      *(_DWORD *)(a2 + 72) = sub_30CD0(a1, a2, v2);
      goto LABEL_8;
    case 0x2A:
      *(_DWORD *)(a2 + 72) = sub_30DC0(a1, a2, v2);
      goto LABEL_8;
    case 0x2B:
      v37 = 0;
      v27.m128i_i64[0] = (__int64)&v48;
      v39 = 0;
      v42 = 0;
      v44 = 0;
      v46 = 0;
      v48 = nullptr;
      v52 = nullptr;
      v28 = &v42;
      v38 = 0;
      v40 = 0;
      v41 = 0;
      v43 = 0;
      v45 = 0;
      v47 = 0;
      v49 = 0;
      sub_2CE80(&v48, (__int64)&v42);
      v50 = nullptr;
      v51 = 0;
      sub_2CE80(&v50, (__int64)&v44);
      v52 = nullptr;
      v53 = 0;
      sub_2CE80(&v52, (__int64)&v46);
      v54 = 0;
      v14 = v48;
      v31 = v50;
      v56 = 0;
      v32 = v52;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      ptr = nullptr;
      v55 = 0;
      v61 = 0;
      sub_2F620((__int64)v62, (__int64)&v48);
      v66 = 0;
      memset(v68, 0, 24);
      v33 = ptr;
      v72 = 0;
      LODWORD(v67) = v59;
      v34 = v68;
      v73 = nullptr;
      v75 = nullptr;
      sub_2CE80(v68, (__int64)&ptr);
      sub_2F620((__int64)&v68[1].m128i_i64[1], (__int64)v62);
      v72 = 0;
      v35 = &v73;
      v73 = nullptr;
      v74 = 0;
      sub_2CE80(&v73, (__int64)&v37);
      v75 = nullptr;
      v36 = &v75;
      v76 = 0;
      sub_2CE80(&v75, (__int64)&v39);
      v79.m128i_i8[0] = 44;
      v15 = v73;
      v30 = (void *)v68[0].m128i_i64[0];
      v16 = v75;
      v77 = 0;
      v29 = v72;
      memset(v80, 0, sizeof(v80));
      v78 = &off_237518;
      v79.m128i_i32[2] = (int)v67;
      sub_2CE80(v80, (__int64)v68);
      sub_2F620((__int64)v81, (__int64)&v68[1].m128i_i64[1]);
      v84 = 0;
      v82 = v29;
      v83 = nullptr;
      sub_2CE80(&v83, (__int64)&v73);
      v85 = 0;
      v86 = 0;
      sub_2CE80(&v85, (__int64)&v75);
      v87 = 0;
      if ( v16 )
        j__free(v16);
      if ( v15 )
        j__free(v15);
      if ( v71 )
        j__free(v71);
      if ( v70 )
        j__free(v70);
      if ( v69 )
        j__free(v69);
      if ( v68[1].m128i_i64[1] )
        j__free((void *)v68[1].m128i_i64[1]);
      if ( v30 )
        j__free(v30);
      if ( v65 )
        j__free(v65);
      if ( v64 )
        j__free(v64);
      if ( v63 )
        j__free(v63);
      if ( v62[0] )
        j__free(v62[0]);
      if ( v33 )
        j__free(v33);
      if ( v32 )
        j__free(v32);
      if ( v31 )
        j__free(v31);
      if ( v14 )
        j__free(v14);
      sub_2F570((__int64)v28);
      sub_30E70(a1, (__int64)&v79.m128i_i64[1]);
      sub_32480(*(_QWORD *)(a1 + 304), (__int64 *)&v83);
      *(_DWORD *)(a2 + 72) = 0;
      sub_306F0((__int64)&v67, a1, (unsigned __int8 *)&v78);
      v17 = *(void **)(a2 + 80);
      v18 = v67;
      v67 = nullptr;
      v19 = _mm_loadu_si128(v68);
      v68[0] = 0;
      if ( v17 )
      {
        *(_QWORD *)(a2 + 88) = 0;
        v27 = v19;
        j__free(v17);
        v20 = _mm_load_si128(&v27);
        *(_QWORD *)(a2 + 80) = v18;
        v21 = v67;
        *(__m128i *)(a2 + 88) = v20;
        if ( v21 )
        {
          v68[0].m128i_i64[0] = 0;
          j__free(v21);
        }
      }
      else
      {
        *(_QWORD *)(a2 + 80) = v18;
        *(__m128i *)(a2 + 88) = v19;
      }
      sub_6B790(&v78);
      goto LABEL_8;
    case 0x2D:
      v79.m128i_i8[0] = 46;
      *(_OWORD *)v80 = 0;
      v78 = &off_237578;
      v79.m128i_i64[1] = 0;
      sub_34EF0(a1, (__int64 *)&v78, a2, v2);
      *(_DWORD *)(a2 + 72) = 0;
      sub_306F0((__int64)&v67, a1, (unsigned __int8 *)&v78);
      v22 = *(void **)(a2 + 80);
      v23 = v67;
      v67 = nullptr;
      v24 = _mm_loadu_si128(v68);
      v68[0] = 0;
      if ( v22 )
      {
        *(_QWORD *)(a2 + 88) = 0;
        v27 = v24;
        j__free(v22);
        v25 = _mm_load_si128(&v27);
        *(_QWORD *)(a2 + 80) = v23;
        v26 = v67;
        *(__m128i *)(a2 + 88) = v25;
        if ( v26 )
        {
          v68[0].m128i_i64[0] = 0;
          j__free(v26);
        }
      }
      else
      {
        *(_QWORD *)(a2 + 80) = v23;
        *(__m128i *)(a2 + 88) = v24;
      }
      sub_684B0(&v78);
LABEL_8:
      result = (char **)(v88 - __readfsqword(0x28u));
      break;
    default:
      result = sub_299F0((char **)(a2 + 16));
      break;
  }
  return result;
}
