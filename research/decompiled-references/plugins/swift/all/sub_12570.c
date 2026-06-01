unsigned __int64 __fastcall sub_12570(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  const char *plugin_options; // rax
  const char *v8; // rbx
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // r12
  void *v12; // rdi
  __int64 i; // rbx
  size_t v14; // rax
  size_t v15; // r8
  char v16; // al
  size_t v17; // rdx
  void *v18; // rdi
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // ecx
  int v23; // ecx
  int v24; // edx
  unsigned int v25; // ecx
  int v26; // ecx
  int v27; // edx
  unsigned int v28; // ecx
  int v29; // edx
  int v30; // ecx
  int v31; // ecx
  int v32; // edx
  unsigned int v33; // ecx
  int v34; // ecx
  int v35; // edx
  unsigned int v36; // ecx
  int v37; // ecx
  unsigned int v38; // edx
  int v39; // ecx
  __int64 v40; // [rsp-18h] [rbp-240h]
  size_t v41; // [rsp+0h] [rbp-228h]
  size_t v42; // [rsp+8h] [rbp-220h]
  size_t v43; // [rsp+8h] [rbp-220h]
  unsigned int v45; // [rsp+1Ch] [rbp-20Ch] BYREF
  __int64 v46; // [rsp+20h] [rbp-208h] BYREF
  __int64 v47; // [rsp+28h] [rbp-200h] BYREF
  __int128 v48; // [rsp+30h] [rbp-1F8h]
  void *v49; // [rsp+48h] [rbp-1E0h] BYREF
  __int128 v50; // [rsp+50h] [rbp-1D8h]
  const char *v51; // [rsp+68h] [rbp-1C0h] BYREF
  __int128 v52; // [rsp+70h] [rbp-1B8h]
  __m128i v53; // [rsp+88h] [rbp-1A0h] BYREF
  int v54; // [rsp+98h] [rbp-190h]
  __m128i si128; // [rsp+A0h] [rbp-188h]
  const char *v56; // [rsp+B0h] [rbp-178h]
  __int64 v57; // [rsp+B8h] [rbp-170h]
  int v58; // [rsp+C0h] [rbp-168h]
  __int64 v59; // [rsp+C8h] [rbp-160h]
  const char *v60; // [rsp+D8h] [rbp-150h]
  __int64 v61; // [rsp+E0h] [rbp-148h]
  int v62; // [rsp+E8h] [rbp-140h]
  int v63; // [rsp+F0h] [rbp-138h]
  const char *v64; // [rsp+100h] [rbp-128h]
  __int64 v65; // [rsp+108h] [rbp-120h]
  int v66; // [rsp+110h] [rbp-118h]
  int v67; // [rsp+118h] [rbp-110h]
  const char *v68; // [rsp+128h] [rbp-100h]
  __int64 v69; // [rsp+130h] [rbp-F8h]
  int v70; // [rsp+138h] [rbp-F0h]
  int v71; // [rsp+140h] [rbp-E8h]
  const char *v72; // [rsp+150h] [rbp-D8h]
  __int64 v73; // [rsp+158h] [rbp-D0h]
  int v74; // [rsp+160h] [rbp-C8h]
  int v75; // [rsp+168h] [rbp-C0h]
  const char *v76; // [rsp+178h] [rbp-B0h]
  __int64 v77; // [rsp+180h] [rbp-A8h]
  int v78; // [rsp+188h] [rbp-A0h]
  int v79; // [rsp+190h] [rbp-98h]
  __m128i v80; // [rsp+1A0h] [rbp-88h]
  int v81; // [rsp+1B0h] [rbp-78h]
  __int64 v82; // [rsp+1B8h] [rbp-70h]
  const char *v83; // [rsp+1C8h] [rbp-60h]
  __int64 v84; // [rsp+1D0h] [rbp-58h]
  int v85; // [rsp+1D8h] [rbp-50h]
  int v86; // [rsp+1E0h] [rbp-48h]
  unsigned __int64 v87; // [rsp+1F0h] [rbp-38h]

  v1 = a1 + 112;
  v87 = __readfsqword(0x28u);
  v48 = 0;
  v47 = 0;
  v56 = "DEMANGLER_PATH";
  v60 = "METADATA_MARKUP";
  v53 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"DEMANGLER_ENABLED", (__m128i)(unsigned __int64)&v45);
  v64 = "SWIFT_ENUMS";
  si128 = _mm_load_si128((const __m128i *)&xmmword_21830);
  v54 = 201326594;
  v57 = a1 + 112;
  v58 = 50331649;
  v59 = 0;
  v61 = a1 + 240;
  v62 = 3;
  v63 = 4;
  v65 = a1 + 240;
  v68 = "SWIFT_STRUCTS";
  v72 = "SWIFT_APPLY_VARIABLE_TYPES";
  v76 = "SWIFT_APPLY_FUNCTION_TYPES";
  v66 = 3;
  v83 = "SWIFT_GROUP_FUNCTIONS";
  v67 = 8;
  v69 = a1 + 240;
  v70 = 3;
  v71 = 16;
  v73 = a1 + 240;
  v74 = 3;
  v75 = 32;
  v77 = a1 + 240;
  v78 = 3;
  v79 = 64;
  v81 = 50331649;
  v82 = 0;
  v84 = a1 + 240;
  v85 = 3;
  v86 = 128;
  v80 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"CTYPE_MAPPING", (__m128i)(unsigned __int64)&v47);
  read_config("swift", 1, &v53, 9, 0, 0, 0);
  v3 = v45;
  v4 = *(_DWORD *)(a1 + 240);
  if ( v45 == 1 )
  {
    v5 = v4 | 1;
  }
  else
  {
    v5 = v4 & 0xFFFFFFFE;
    if ( v45 == 2 )
    {
      v6 = v5 | 2;
      goto LABEL_4;
    }
  }
  v6 = v5 & 0xFFFFFFFD;
LABEL_4:
  *(_DWORD *)(a1 + 240) = v6;
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))netnode_inited)(v40, 1, v3, v2) )
  {
    netnode_supval(*(_QWORD *)(a1 + 104), -2, a1 + 240, 4, 83);
    reg_str_get(v1, "SwiftDemanglerPath", 0);
    netnode_qsupstr(*(_QWORD *)(a1 + 104), &v47, -4, 83);
  }
  sub_8D50(&v47, (__int64 *)(a1 + 536), ";", 1);
  plugin_options = (const char *)get_plugin_options("swift");
  v8 = plugin_options;
  v49 = nullptr;
  v50 = 0;
  if ( !plugin_options )
    goto LABEL_25;
  v9 = strlen(plugin_options);
  v10 = v9 + 1;
  v11 = v9;
  v49 = (void *)qvector_reserve(&v49, 0, v9 + 1, 1);
  *(_QWORD *)&v50 = v10;
  memmove(v49, v8, v11);
  *((_BYTE *)v49 + v11) = 0;
  v12 = v49;
  if ( (unsigned __int64)v50 <= 1 )
    goto LABEL_23;
  v51 = nullptr;
  v46 = 0;
  v52 = 0;
  for ( i = qstrtok(v49, ":", &v46); i; i = qstrtok(0, ":", &v46) )
  {
    v14 = strlen((const char *)i);
    v15 = v14;
    if ( v14 != 2 )
    {
      if ( !v14 )
      {
        *(_QWORD *)(a1 + 120) = 0;
        continue;
      }
LABEL_15:
      v17 = v15 + 1;
      v18 = *(void **)(a1 + 112);
      if ( *(_QWORD *)(a1 + 128) < v15 + 1 )
      {
        v41 = v15;
        v43 = v15 + 1;
        v18 = (void *)qvector_reserve(v1, *(_QWORD *)(a1 + 112), v17, 1);
        v15 = v41;
        v17 = v43;
        *(_QWORD *)(a1 + 112) = v18;
      }
      v42 = v15;
      *(_QWORD *)(a1 + 120) = v17;
      memmove(v18, (const void *)i, v15);
      *(_BYTE *)(*(_QWORD *)(a1 + 112) + v42) = 0;
      continue;
    }
    v16 = *(_BYTE *)i;
    if ( ((*(_BYTE *)i - 43) & 0xFD) != 0 )
      goto LABEL_15;
    switch ( *(_BYTE *)(i + 1) )
    {
      case 'd':
        v37 = *(_DWORD *)(a1 + 240);
        v38 = v37 & 0xFFFFFFFE;
        v39 = v37 | 1;
        if ( v16 == 43 )
          v38 = v39;
        *(_DWORD *)(a1 + 240) = v38 & 0xFFFFFFFD;
        break;
      case 'e':
        v34 = *(_DWORD *)(a1 + 240);
        v35 = v34 | 8;
        v36 = v34 & 0xFFFFFFF7;
        if ( v16 != 43 )
          v35 = v36;
        *(_DWORD *)(a1 + 240) = v35;
        break;
      case 'f':
        v31 = *(_DWORD *)(a1 + 240);
        v32 = v31 | 0x40;
        v33 = v31 & 0xFFFFFFBF;
        if ( v16 != 43 )
          v32 = v33;
        *(_DWORD *)(a1 + 240) = v32;
        break;
      case 'g':
        v29 = *(_DWORD *)(a1 + 240);
        v30 = v29;
        LOBYTE(v29) = v29 | 0x80;
        LOBYTE(v30) = v30 & 0x7F;
        if ( v16 != 43 )
          v29 = v30;
        *(_DWORD *)(a1 + 240) = v29;
        break;
      case 'm':
        v26 = *(_DWORD *)(a1 + 240);
        v27 = v26 | 4;
        v28 = v26 & 0xFFFFFFFB;
        if ( v16 != 43 )
          v27 = v28;
        *(_DWORD *)(a1 + 240) = v27;
        break;
      case 's':
        v23 = *(_DWORD *)(a1 + 240);
        v24 = v23 | 0x10;
        v25 = v23 & 0xFFFFFFEF;
        if ( v16 != 43 )
          v24 = v25;
        *(_DWORD *)(a1 + 240) = v24;
        break;
      case 'v':
        v20 = *(_DWORD *)(a1 + 240);
        v21 = v20 | 0x20;
        v22 = v20 & 0xFFFFFFDF;
        if ( v16 != 43 )
          v21 = v22;
        *(_DWORD *)(a1 + 240) = v21;
        break;
      default:
        sub_10D20((__int64 *)&v51, (__int64)"bad flag: %c", (unsigned int)*(char *)(i + 1));
        break;
    }
  }
  if ( (unsigned __int64)v52 > 1 )
    sub_CB10((__int64)"Warning: %s\n", v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  v12 = v49;
LABEL_23:
  if ( v12 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v12);
  }
LABEL_25:
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47);
  }
  return v87 - __readfsqword(0x28u);
}
