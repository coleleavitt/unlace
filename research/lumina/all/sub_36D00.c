__int64 __fastcall sub_36D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  bool v7; // zf
  int v8; // eax
  unsigned int v9; // ebx
  const char *v11; // rdx
  __int64 v12; // r14
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // rdx
  __int64 v16; // rcx
  size_t v17; // r12
  char *v18; // rax
  const char *v19; // rax
  size_t v20; // rax
  size_t v21; // rbx
  void *v22; // rdi
  size_t v23; // r12
  const char *v24; // rsi
  const char *v25; // rsi
  const char *v26; // rsi
  __m128i v27; // xmm1
  void *v28; // r12
  void *v29; // rbx
  int v30; // r10d
  __int64 v31; // r9
  int v32; // r8d
  __int64 v33; // rax
  __int64 v34; // rsi
  __m128i v35; // xmm0
  __m128i v36; // xmm2
  void *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rsi
  __m128i v40; // xmm0
  void *v41; // rbx
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  void *v44; // rdi
  __m128i v45; // xmm0
  char *v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // r12
  __int64 v49; // rax
  size_t v50; // rbx
  size_t v51; // rbx
  __int64 v52; // rax
  size_t v53; // rbx
  const void *v54; // rbx
  char *v55; // rdi
  __int64 v56; // rbx
  __int64 v57; // r14
  __int64 v58; // rax
  int v59; // [rsp+4h] [rbp-3ECh]
  __int64 v60; // [rsp+8h] [rbp-3E8h]
  __int64 v61; // [rsp+10h] [rbp-3E0h]
  __int64 v62; // [rsp+18h] [rbp-3D8h]
  __int64 v63; // [rsp+28h] [rbp-3C8h]
  __int64 v64; // [rsp+30h] [rbp-3C0h]
  __int64 v65; // [rsp+40h] [rbp-3B0h]
  __int64 v66; // [rsp+48h] [rbp-3A8h]
  __int64 v67; // [rsp+50h] [rbp-3A0h]
  __int64 v68; // [rsp+58h] [rbp-398h]
  int v70; // [rsp+68h] [rbp-388h]
  int v71; // [rsp+6Ch] [rbp-384h]
  __m128i v72; // [rsp+70h] [rbp-380h] BYREF
  int v73; // [rsp+80h] [rbp-370h]
  int v74; // [rsp+84h] [rbp-36Ch]
  void *v75; // [rsp+88h] [rbp-368h]
  __m128i v76; // [rsp+90h] [rbp-360h] BYREF
  __m128i v77; // [rsp+A0h] [rbp-350h] BYREF
  void *v78; // [rsp+B0h] [rbp-340h]
  __int64 *v79; // [rsp+B8h] [rbp-338h]
  __m128i v80; // [rsp+C0h] [rbp-330h] BYREF
  unsigned __int64 v81; // [rsp+D0h] [rbp-320h]
  __int64 v82; // [rsp+D8h] [rbp-318h]
  __int64 v83; // [rsp+E0h] [rbp-310h] BYREF
  __int64 v84; // [rsp+E8h] [rbp-308h] BYREF
  void *v85; // [rsp+F0h] [rbp-300h] BYREF
  __int128 v86; // [rsp+F8h] [rbp-2F8h]
  void *v87; // [rsp+110h] [rbp-2E0h] BYREF
  __int128 v88; // [rsp+118h] [rbp-2D8h]
  void *v89; // [rsp+130h] [rbp-2C0h] BYREF
  __int128 v90; // [rsp+138h] [rbp-2B8h]
  void *v91; // [rsp+150h] [rbp-2A0h] BYREF
  __int128 v92; // [rsp+158h] [rbp-298h]
  void *v93; // [rsp+170h] [rbp-280h] BYREF
  __int128 v94; // [rsp+178h] [rbp-278h]
  _DWORD v95[8]; // [rsp+190h] [rbp-260h] BYREF
  __m128i v96; // [rsp+1B0h] [rbp-240h] BYREF
  void *v97; // [rsp+1C0h] [rbp-230h] BYREF
  size_t v98[2]; // [rsp+1C8h] [rbp-228h]
  void *v99; // [rsp+1D8h] [rbp-218h] BYREF
  size_t n[2]; // [rsp+1E0h] [rbp-210h]
  void *v101; // [rsp+1F0h] [rbp-200h] BYREF
  size_t v102[2]; // [rsp+1F8h] [rbp-1F8h]
  void *v103; // [rsp+208h] [rbp-1E8h] BYREF
  __int128 v104; // [rsp+210h] [rbp-1E0h]
  void *dest; // [rsp+220h] [rbp-1D0h] BYREF
  __int128 v106; // [rsp+228h] [rbp-1C8h]
  int v107; // [rsp+238h] [rbp-1B8h]
  __int64 v108; // [rsp+240h] [rbp-1B0h]
  int v109; // [rsp+248h] [rbp-1A8h]
  __m128i v110; // [rsp+250h] [rbp-1A0h]
  int v111; // [rsp+2D8h] [rbp-118h]
  __int64 v112; // [rsp+2E0h] [rbp-110h]
  int v113; // [rsp+2E8h] [rbp-108h]
  char *v114; // [rsp+2F0h] [rbp-100h] BYREF
  __int128 v115; // [rsp+2F8h] [rbp-F8h]
  __int64 v116; // [rsp+308h] [rbp-E8h]
  __int128 v117; // [rsp+310h] [rbp-E0h]
  __int64 v118; // [rsp+320h] [rbp-D0h]
  __int128 v119; // [rsp+328h] [rbp-C8h]
  char v120[24]; // [rsp+338h] [rbp-B8h] BYREF
  __int64 v121; // [rsp+350h] [rbp-A0h]
  __int128 v122; // [rsp+358h] [rbp-98h]
  __int64 v123; // [rsp+368h] [rbp-88h]
  __int128 v124; // [rsp+370h] [rbp-80h]
  __int64 v125; // [rsp+380h] [rbp-70h]
  __int128 v126; // [rsp+388h] [rbp-68h]
  __int64 v127; // [rsp+398h] [rbp-58h]
  __int128 v128; // [rsp+3A0h] [rbp-50h]
  unsigned __int64 v129; // [rsp+3B8h] [rbp-38h]

  v129 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 488) & 1) == 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(0);
    BUG();
  }
  v6 = *(_QWORD *)(a4 + 264);
  memset(v95, 255, 28);
  v81 = v6;
  v114 = nullptr;
  v116 = 0;
  v118 = 0;
  v115 = 0;
  v117 = 0;
  v119 = 0;
  sub_31930((__int64)v120, "pushes");
  v7 = *(_QWORD *)(a4 + 32) == 0;
  v121 = 0;
  v123 = 0;
  v125 = 0;
  v127 = 0;
  v122 = 0;
  v124 = 0;
  v126 = 0;
  v128 = 0;
  if ( v7 )
  {
    if ( !*(_QWORD *)(a4 + 176) )
      goto LABEL_4;
LABEL_22:
    sub_2A270(&v114, (_QWORD *)(a4 + 168));
    sub_2C120((__int64)&v114, "pushes", "fk_user", "users", "id");
    if ( !*(_QWORD *)(a4 + 56) )
      goto LABEL_5;
    goto LABEL_23;
  }
  sub_2A270(&v114, (_QWORD *)(a4 + 24));
  sub_2C120((__int64)&v114, "pushes", "fk_user", "users", "id");
  if ( *(_QWORD *)(a4 + 176) )
    goto LABEL_22;
LABEL_4:
  if ( !*(_QWORD *)(a4 + 56) )
    goto LABEL_5;
LABEL_23:
  sub_2A010(&v114, (__int64)"time", a4 + 48);
LABEL_5:
  v73 = -1;
  v8 = *(_DWORD *)(a4 + 16);
  if ( (v8 & 0x1000) != 0 )
  {
    v73 = sub_292E0((__int64 *)&v114, 115, "users", "license_name");
    v8 = *(_DWORD *)(a4 + 16);
  }
  v74 = -1;
  if ( (v8 & 0x2000) != 0 )
  {
    v74 = sub_292E0((__int64 *)&v114, 115, "users", "license_email");
    v8 = *(_DWORD *)(a4 + 16);
  }
  v71 = -1;
  if ( (v8 & 0x4000) != 0 )
    v71 = sub_292E0((__int64 *)&v114, 115, "users", "license_id");
  v80.m128i_i32[2] = sub_292E0((__int64 *)&v114, 117, "pushes", "id");
  v95[0] = v80.m128i_i32[2];
  v80.m128i_i32[0] = sub_292E0((__int64 *)&v114, 116, "pushes", "time");
  v95[1] = v80.m128i_i32[0];
  LODWORD(v78) = sub_292E0((__int64 *)&v114, 115, "idbs", "path");
  v95[2] = (_DWORD)v78;
  sub_2C120((__int64)&v114, "pushes", "fk_idb", "idbs", "id");
  v77.m128i_i32[2] = sub_292E0((__int64 *)&v114, 115, "users", "user_name");
  v95[3] = v77.m128i_i32[2];
  sub_2C120((__int64)&v114, "pushes", "fk_user", "users", "id");
  v85 = nullptr;
  v86 = 0;
  v82 = a3 + 40;
  v87 = nullptr;
  v89 = nullptr;
  v88 = 0;
  v90 = 0;
  if ( !(unsigned __int8)sub_28B60(&v114, (__int64 *)&v85)
    || !(unsigned __int8)sub_2AD40((__int64)&v114, (__int64 *)&v87, v82)
    || !(unsigned __int8)sub_28F70((__int64)&v114, (__int64 *)&v89) )
  {
    sub_2DC20((__int64 *)(a3 + 16), "Error executing query");
LABEL_13:
    v9 = -1;
    goto LABEL_14;
  }
  if ( 160 * v81 > 0x63FFFFF )
  {
    sub_2DC20((__int64 *)(a3 + 16), "Maximum number of entries is too high");
    goto LABEL_13;
  }
  v64 = a2 + 16;
  if ( *(_QWORD *)(a2 + 32) < v81 )
    *(_QWORD *)(a2 + 16) = sub_1987B0(v64, *(_QWORD *)(a2 + 16), v81, 160);
  v92 = 0;
  v91 = nullptr;
  sub_299F0((char **)&v91);
  v11 = s1;
  if ( (_QWORD)v92 )
    v11 = (const char *)v91;
  sub_318B0((__int64)&v83, a1, v11);
  if ( v83 && (unsigned __int8)sub_29560((__int64)&v114, v82, (__int64)&v83) )
  {
    v79 = &v84;
    unk_241E60(&v84, &v83, v82);
    if ( v84 )
    {
      v67 = 32LL * v80.m128i_i32[0];
      v66 = 32LL * v80.m128i_i32[2];
      v12 = 0;
      v68 = 32LL * (int)v78;
      v65 = 32LL * v77.m128i_i32[2];
      v62 = 32LL * v73;
      v61 = 32LL * v71;
      v63 = 32LL * v74;
      while ( 1 )
      {
        if ( !(unsigned __int8)unk_241E70(v79, v82) )
          goto LABEL_94;
        if ( v12 == v81 )
        {
          *(_BYTE *)(a2 + 40) = 1;
LABEL_94:
          v9 = 0;
          goto LABEL_95;
        }
        v93 = nullptr;
        v94 = 0;
        if ( !(unsigned __int8)sub_295D0(&v114, (__int64 *)&v93, (__int64)v79, v82) )
          break;
        v13 = (char *)v93;
        v96.m128i_i64[1] = 0;
        v97 = nullptr;
        v99 = nullptr;
        v101 = nullptr;
        v103 = nullptr;
        dest = nullptr;
        v107 = 0;
        v108 = 0;
        v109 = 0;
        *(_OWORD *)v98 = 0;
        *(_OWORD *)n = 0;
        *(_OWORD *)v102 = 0;
        v104 = 0;
        v106 = 0;
        v14 = *(unsigned int *)((char *)v93 + v66 + 8);
        v96.m128i_i64[1] = *(_QWORD *)((char *)v93 + v67 + 8);
        v15 = (char *)v93 + v68;
        v96.m128i_i64[0] = v14;
        if ( &v97 != (void **)((char *)v93 + v68 + 8) )
        {
          v16 = *((_QWORD *)v15 + 2);
          v80.m128i_i64[1] = v16;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v16 != 1 )
            {
              v54 = *((const void **)v15 + 1);
              v97 = (void *)sub_1987B0(&v97, 0, v80.m128i_i64[1], 1);
              v98[0] = v80.m128i_u64[1];
              memmove(v97, v54, v17);
              *((char *)v97 + v80.m128i_i64[1] - 1) = 0;
              v13 = (char *)v93;
            }
          }
        }
        v18 = &v13[v65];
        if ( *((_QWORD *)v18 + 2)
          && (v19 = *((const char **)v18 + 1), (v80.m128i_i64[1] = (__int64)v19) != 0)
          && (v20 = strlen(v19), (v21 = v20) != 0) )
        {
          v22 = dest;
          v23 = v20 + 1;
          if ( *((_QWORD *)&v106 + 1) < v20 + 1 )
          {
            dest = (void *)sub_1987B0(&dest, dest, v23, 1);
            v22 = dest;
          }
          *(_QWORD *)&v106 = v23;
          memmove(v22, (const void *)v80.m128i_i64[1], v21);
          *((_BYTE *)dest + v21) = 0;
        }
        else
        {
          *(_QWORD *)&v106 = 0;
        }
        if ( v73 >= 0 )
        {
          v24 = s1;
          if ( *(_QWORD *)((char *)v93 + v62 + 16) )
            v24 = *(const char **)((char *)v93 + v62 + 8);
          sub_2DC20((__int64 *)&v101, v24);
        }
        if ( v71 >= 0 )
        {
          v25 = s1;
          if ( *(_QWORD *)((char *)v93 + v61 + 16) )
            v25 = *(const char **)((char *)v93 + v61 + 8);
          sub_2DC20((__int64 *)&v99, v25);
        }
        if ( v74 >= 0 )
        {
          v26 = s1;
          if ( *(_QWORD *)((char *)v93 + v63 + 16) )
            v26 = *(const char **)((char *)v93 + v63 + 8);
          sub_2DC20((__int64 *)&v103, v26);
        }
        v27 = _mm_load_si128(&v96);
        v78 = nullptr;
        v77.m128i_i64[0] = v98[0];
        v72 = v27;
        v110 = v27;
        if ( v98[0] )
        {
          v51 = v98[0];
          v78 = (void *)sub_198760(v98[0]);
          memcpy(v78, v97, v51);
        }
        v77.m128i_i64[1] = 0;
        v76.m128i_i64[1] = n[0];
        if ( n[0] )
        {
          v50 = n[0];
          v77.m128i_i64[1] = sub_198760(n[0]);
          memcpy((void *)v77.m128i_i64[1], v99, v50);
        }
        v28 = nullptr;
        v76.m128i_i64[0] = v102[0];
        if ( v102[0] )
        {
          v53 = v102[0];
          v28 = (void *)sub_198760(v102[0]);
          memcpy(v28, v101, v53);
        }
        v29 = nullptr;
        v80.m128i_i64[1] = v104;
        if ( (_QWORD)v104 )
        {
          v29 = (void *)sub_198760(v104);
          memcpy(v29, v103, v80.m128i_u64[1]);
        }
        v80.m128i_i64[0] = v106;
        if ( (_QWORD)v106 )
        {
          v75 = (void *)sub_198760(v80.m128i_i64[0]);
          memcpy(v75, dest, v80.m128i_u64[0]);
        }
        else
        {
          v75 = nullptr;
        }
        v30 = v107;
        v31 = v108;
        v32 = v109;
        v33 = *(_QWORD *)(a2 + 24);
        v111 = v107;
        v34 = *(_QWORD *)(a2 + 16);
        v112 = v108;
        v113 = v109;
        if ( *(_QWORD *)(a2 + 32) < (unsigned __int64)(v33 + 1) )
        {
          v59 = v109;
          v60 = v108;
          v70 = v107;
          v52 = sub_1987B0(v64, v34, v33 + 1, 160);
          *(_QWORD *)(a2 + 16) = v52;
          v34 = v52;
          v32 = v59;
          v33 = *(_QWORD *)(a2 + 24);
          v31 = v60;
          v30 = v70;
        }
        v35 = _mm_loadl_epi64(&v77);
        v36 = _mm_load_si128(&v72);
        v37 = v78;
        v38 = v34 + 160 * v33;
        v39 = v77.m128i_i64[1];
        *(__m128i *)(v38 + 24) = _mm_unpacklo_epi64(v35, v35);
        v40 = _mm_loadl_epi64((const __m128i *)&v76.m128i_u64[1]);
        *(_QWORD *)(v38 + 88) = v29;
        v41 = v75;
        *(_QWORD *)(v38 + 16) = v37;
        *(__m128i *)(v38 + 48) = _mm_unpacklo_epi64(v40, v40);
        v42 = _mm_loadl_epi64(&v76);
        *(_QWORD *)(v38 + 40) = v39;
        *(_QWORD *)(v38 + 64) = v28;
        *(__m128i *)(v38 + 72) = _mm_unpacklo_epi64(v42, v42);
        v43 = _mm_loadl_epi64((const __m128i *)&v80.m128i_u64[1]);
        *(_QWORD *)(v38 + 112) = v41;
        *(__m128i *)v38 = v36;
        *(__m128i *)(v38 + 96) = _mm_unpacklo_epi64(v43, v43);
        v44 = dest;
        v45 = _mm_loadl_epi64(&v80);
        *(_DWORD *)(v38 + 136) = v30;
        *(_QWORD *)(v38 + 144) = v31;
        *(_DWORD *)(v38 + 152) = v32;
        *(__m128i *)(v38 + 120) = _mm_unpacklo_epi64(v45, v45);
        ++*(_QWORD *)(a2 + 24);
        if ( v44 )
        {
          *(_QWORD *)&v106 = 0;
          j__free(v44);
        }
        if ( v103 )
        {
          *(_QWORD *)&v104 = 0;
          j__free(v103);
        }
        if ( v101 )
        {
          v102[0] = 0;
          j__free(v101);
        }
        if ( v99 )
        {
          n[0] = 0;
          j__free(v99);
        }
        if ( v97 )
        {
          v98[0] = 0;
          j__free(v97);
        }
        v46 = (char *)v93;
        if ( v93 )
        {
          if ( (_QWORD)v94 )
          {
            v47 = 0;
            v48 = v94;
            do
            {
              v49 = v47++;
              sub_176520(&v46[32 * v49]);
              v46 = (char *)v93;
            }
            while ( v48 != v47 );
          }
          *(_QWORD *)&v94 = 0;
          j__free(v46);
        }
        ++v12;
      }
      sub_2DC20((__int64 *)(a3 + 16), "Error executing query");
      v55 = (char *)v93;
      if ( v93 )
      {
        if ( (_QWORD)v94 )
        {
          v56 = 0;
          v57 = v94;
          do
          {
            v58 = v56++;
            sub_176520(&v55[32 * v58]);
            v55 = (char *)v93;
          }
          while ( v57 != v56 );
        }
        *(_QWORD *)&v94 = 0;
        j__free(v55);
      }
    }
    else
    {
      sub_2DC20((__int64 *)(a3 + 16), "Error executing query");
    }
    v9 = -1;
LABEL_95:
    sub_33A10(v79);
  }
  else
  {
    sub_2DC20((__int64 *)(a3 + 16), "Error executing query");
    v9 = -1;
  }
  sub_32C50(&v83);
  if ( v91 )
  {
    *(_QWORD *)&v92 = 0;
    j__free(v91);
  }
LABEL_14:
  if ( v89 )
  {
    *(_QWORD *)&v90 = 0;
    j__free(v89);
  }
  if ( v87 )
  {
    *(_QWORD *)&v88 = 0;
    j__free(v87);
  }
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    j__free(v85);
  }
  sub_30780(&v114);
  return v9;
}
