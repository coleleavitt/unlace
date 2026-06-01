unsigned __int64 __fastcall sub_1CA50(__int64 a1)
{
  __int64 eah; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm7
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm6
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm5
  __m128i v12; // xmm4
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm3
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __m128i v26; // xmm2
  __m128i v27; // xmm1
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __m128i v31; // xmm0
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128i v35; // xmm0
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // r8
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v115; // [rsp-C0h] [rbp-C8h]
  __int64 v116; // [rsp-C0h] [rbp-C8h]
  __int64 v117; // [rsp-C0h] [rbp-C8h]
  __int64 v118; // [rsp-C0h] [rbp-C8h]
  __int64 v119; // [rsp-C0h] [rbp-C8h]
  __int64 v120; // [rsp-C0h] [rbp-C8h]
  __int64 v121; // [rsp-C0h] [rbp-C8h]
  __int64 v122; // [rsp-C0h] [rbp-C8h]
  __int64 v123; // [rsp-C0h] [rbp-C8h]
  __int64 v124; // [rsp-C0h] [rbp-C8h]
  __int64 v125; // [rsp-C0h] [rbp-C8h]
  __int64 v126; // [rsp-C0h] [rbp-C8h]
  __int64 v127; // [rsp-C0h] [rbp-C8h]
  __int64 v128; // [rsp-C0h] [rbp-C8h]
  __int64 v129; // [rsp-C0h] [rbp-C8h]
  __int64 v130; // [rsp-C0h] [rbp-C8h]
  __int64 v131; // [rsp-C0h] [rbp-C8h]
  __int64 v132; // [rsp-C0h] [rbp-C8h]
  __int64 v133; // [rsp-C0h] [rbp-C8h]
  __int64 v134; // [rsp-C0h] [rbp-C8h]
  __int64 v135; // [rsp-C0h] [rbp-C8h]
  __int64 v136; // [rsp-C0h] [rbp-C8h]
  __int64 v137; // [rsp-C0h] [rbp-C8h]
  __int64 v138; // [rsp-C0h] [rbp-C8h]
  __int64 v139; // [rsp-C0h] [rbp-C8h]
  __int64 v140; // [rsp-C0h] [rbp-C8h]
  __int64 v141; // [rsp-C0h] [rbp-C8h]
  __int64 v142; // [rsp-C0h] [rbp-C8h]
  __int64 v143; // [rsp-C0h] [rbp-C8h]
  __int64 v144; // [rsp-C0h] [rbp-C8h]
  __int64 v145; // [rsp-C0h] [rbp-C8h]
  __int64 v146; // [rsp-B8h] [rbp-C0h]
  __int64 v147; // [rsp-B8h] [rbp-C0h]
  __int64 v148; // [rsp-B8h] [rbp-C0h]
  __int64 v149; // [rsp-B8h] [rbp-C0h]
  __int64 v150; // [rsp-B8h] [rbp-C0h]
  __int64 v151; // [rsp-B8h] [rbp-C0h]
  __int64 v152; // [rsp-B8h] [rbp-C0h]
  __int64 v153; // [rsp-B8h] [rbp-C0h]
  __int64 v154; // [rsp-B8h] [rbp-C0h]
  __int64 v155; // [rsp-B8h] [rbp-C0h]
  __int64 v156; // [rsp-B8h] [rbp-C0h]
  __int64 v157; // [rsp-B8h] [rbp-C0h]
  __int64 v158; // [rsp-B8h] [rbp-C0h]
  __int64 v159; // [rsp-B8h] [rbp-C0h]
  __int64 v160; // [rsp-B8h] [rbp-C0h]
  __int64 v161; // [rsp-B8h] [rbp-C0h]
  __int64 v162; // [rsp-B8h] [rbp-C0h]
  __int64 v163; // [rsp-B8h] [rbp-C0h]
  __int64 v164; // [rsp-B8h] [rbp-C0h]
  __int64 v165; // [rsp-B8h] [rbp-C0h]
  __int64 v166; // [rsp-B8h] [rbp-C0h]
  __int64 v167; // [rsp-B8h] [rbp-C0h]
  __int64 v168; // [rsp-B8h] [rbp-C0h]
  __int64 v169; // [rsp-B8h] [rbp-C0h]
  __int64 v170; // [rsp-B8h] [rbp-C0h]
  __int64 v171; // [rsp-B8h] [rbp-C0h]
  __int64 v172; // [rsp-B8h] [rbp-C0h]
  __int64 v173; // [rsp-B8h] [rbp-C0h]
  __int64 v174; // [rsp-B8h] [rbp-C0h]
  __int64 v175; // [rsp-B8h] [rbp-C0h]
  __int64 v176; // [rsp-B8h] [rbp-C0h]
  __m128i v177; // [rsp-B0h] [rbp-B8h] BYREF
  __m128i v178; // [rsp-A0h] [rbp-A8h] BYREF
  __m128i v179; // [rsp-90h] [rbp-98h] BYREF
  __m128i v180; // [rsp-80h] [rbp-88h] BYREF
  __m128i v181; // [rsp-70h] [rbp-78h] BYREF
  __m128i v182; // [rsp-60h] [rbp-68h] BYREF
  __m128i v183; // [rsp-50h] [rbp-58h] BYREF
  char v184; // [rsp-3Eh] [rbp-46h] BYREF
  char v185; // [rsp-3Dh] [rbp-45h] BYREF
  char v186; // [rsp-3Ch] [rbp-44h] BYREF
  char v187; // [rsp-3Bh] [rbp-43h] BYREF
  char v188; // [rsp-3Ah] [rbp-42h] BYREF
  char v189; // [rsp-39h] [rbp-41h] BYREF
  unsigned __int64 v190; // [rsp-38h] [rbp-40h]

  v190 = __readfsqword(0x28u);
  v177 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4BB68), (__m128i)(unsigned __int64)"Xrefs graph to");
  v178 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4BB70), (__m128i)(unsigned __int64)"Pin node(s)");
  v179 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4BB78), (__m128i)(unsigned __int64)"Search bar");
  v180 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4BB80), (__m128i)(unsigned __int64)"Options");
  v181 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"xref_graph:ToggleMinimap", (__m128i)(unsigned __int64)"Minimap");
  v182 = _mm_unpacklo_epi64(
           _mm_loadl_epi64((const __m128i *)off_4BB88),
           (__m128i)(unsigned __int64)"Layout calculation");
  v183 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4BB90), (__m128i)(unsigned __int64)"Always");
  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  eah = get_eah();
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 24) = eah;
  *(_QWORD *)a1 = &off_4C458;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  QT::QObject::QObject((QT::QObject *)(a1 + 104), nullptr);
  v3 = _mm_loadl_epi64((const __m128i *)&off_4BB98);
  *(_QWORD *)a1 = xref_graph_plugin_ctx___vtable;
  *(_QWORD *)(a1 + 104) = &off_4C7C8;
  *(_QWORD *)(a1 + 120) = idp_listener_t___vtable;
  *(_QWORD *)(a1 + 144) = idb_listener_t___vtable;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = a1;
  *(_QWORD *)(a1 + 168) = fit_in_view_ah_t___vtable;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 208) = a1 + 168;
  v4 = _mm_load_si128(&v183);
  *(__m128i *)(a1 + 192) = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)"Now");
  v5 = _mm_loadl_epi64((const __m128i *)&off_4BBA0);
  *(__m128i *)(a1 + 272) = v4;
  *(_QWORD *)(a1 + 160) = a1;
  *(_QWORD *)(a1 + 248) = toggle_fit_constantly_ah_t___vtable;
  *(_QWORD *)(a1 + 288) = a1 + 248;
  *(__m128i *)(a1 + 224) = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)"Fit the selected nodes in the view");
  v6 = _mm_loadl_epi64((const __m128i *)off_4BBA8);
  *(_DWORD *)(a1 + 176) = 1;
  *(_QWORD *)(a1 + 216) = a1;
  *(__m128i *)(a1 + 304) = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)"Constantly fit whole graph in the view");
  *(_DWORD *)(a1 + 184) = 64;
  *(_QWORD *)(a1 + 240) = 0x4FFFFFFFFLL;
  *(_DWORD *)(a1 + 256) = 1;
  *(_DWORD *)(a1 + 264) = 64;
  *(_QWORD *)(a1 + 296) = a1;
  *(_QWORD *)(a1 + 320) = 0x4FFFFFFFFLL;
  *(_DWORD *)(a1 + 336) = 1;
  v7 = _mm_loadl_epi64((const __m128i *)off_4BBB0);
  v8 = _mm_load_si128(&v182);
  *(_DWORD *)(a1 + 344) = 64;
  *(_QWORD *)(a1 + 376) = a1;
  *(_QWORD *)(a1 + 328) = run_layout_ah_t___vtable;
  *(_QWORD *)(a1 + 368) = a1 + 328;
  *(__m128i *)(a1 + 352) = v8;
  *(_QWORD *)(a1 + 400) = 0x4FFFFFFFFLL;
  *(__m128i *)(a1 + 384) = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)"Toggle the layout calculation");
  v9 = _mm_loadl_epi64((const __m128i *)off_4BBB8);
  *(_QWORD *)(a1 + 408) = search_ah_t___vtable;
  *(_DWORD *)(a1 + 416) = 1;
  *(_QWORD *)(a1 + 448) = a1 + 408;
  *(_QWORD *)(a1 + 464) = "Ctrl-F";
  *(__m128i *)(a1 + 432) = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)"Search nodes");
  v10 = _mm_loadl_epi64((const __m128i *)off_4BBC0);
  *(_DWORD *)(a1 + 424) = 64;
  *(_QWORD *)(a1 + 488) = select_all_ah_t___vtable;
  *(_QWORD *)(a1 + 456) = a1;
  *(_QWORD *)(a1 + 528) = a1 + 488;
  *(_QWORD *)(a1 + 544) = "Ctrl-A";
  *(__m128i *)(a1 + 512) = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)"Select all");
  *(_QWORD *)(a1 + 472) = 0;
  *(_QWORD *)(a1 + 480) = 0x4FFFFFFFFLL;
  *(_DWORD *)(a1 + 496) = 1;
  *(_DWORD *)(a1 + 504) = 64;
  *(_QWORD *)(a1 + 536) = a1;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = 0x4FFFFFFFFLL;
  *(_DWORD *)(a1 + 576) = 1;
  v11 = _mm_load_si128(&v181);
  v12 = _mm_load_si128(&v180);
  *(_DWORD *)(a1 + 584) = 64;
  v13 = _mm_loadl_epi64((const __m128i *)off_4BBC8);
  *(__m128i *)(a1 + 672) = v11;
  *(__m128i *)(a1 + 752) = v12;
  *(_QWORD *)(a1 + 568) = invert_selection_ah_t___vtable;
  *(_QWORD *)(a1 + 616) = a1;
  *(_QWORD *)(a1 + 608) = a1 + 568;
  *(_QWORD *)(a1 + 624) = "Ctrl-I";
  *(__m128i *)(a1 + 592) = _mm_unpacklo_epi64(v13, (__m128i)(unsigned __int64)"Invert selection");
  v14 = _mm_loadl_epi64((const __m128i *)off_4BBD0);
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 648) = toggle_minimap_ah_t___vtable;
  *(_QWORD *)(a1 + 688) = a1 + 648;
  *(_QWORD *)(a1 + 640) = 0x4FFFFFFFFLL;
  *(_QWORD *)(a1 + 696) = a1;
  *(__m128i *)(a1 + 704) = _mm_unpacklo_epi64(v14, (__m128i)(unsigned __int64)"Toggle the minimap");
  v15 = _mm_loadl_epi64((const __m128i *)off_4BBD8);
  *(_QWORD *)(a1 + 728) = toggle_options_ah_t___vtable;
  *(_QWORD *)(a1 + 768) = a1 + 728;
  *(_QWORD *)(a1 + 720) = 0x4FFFFFFFFLL;
  *(_DWORD *)(a1 + 656) = 1;
  *(__m128i *)(a1 + 784) = _mm_unpacklo_epi64(v15, (__m128i)(unsigned __int64)"Toggle the options panel");
  *(_DWORD *)(a1 + 664) = 64;
  *(_DWORD *)(a1 + 736) = 1;
  *(_DWORD *)(a1 + 744) = 64;
  *(_QWORD *)(a1 + 776) = a1;
  *(_QWORD *)(a1 + 800) = 0x4FFFFFFFFLL;
  *(_DWORD *)(a1 + 816) = 1;
  v16 = _mm_load_si128(&v179);
  *(_QWORD *)(a1 + 856) = a1;
  *(_QWORD *)(a1 + 880) = 0x4FFFFFFFFLL;
  v17 = _mm_loadl_epi64((const __m128i *)off_4BBE0);
  *(_QWORD *)(a1 + 808) = toggle_bottom_line_ah_t___vtable;
  *(_QWORD *)(a1 + 848) = a1 + 808;
  *(__m128i *)(a1 + 832) = v16;
  *(_QWORD *)(a1 + 896) = 0x1FF00000001LL;
  *(_QWORD *)(a1 + 888) = add_xrefs_all_ah_t___vtable;
  *(__m128i *)(a1 + 864) = _mm_unpacklo_epi64(v17, (__m128i)(unsigned __int64)"Toggle the Search bar and Layout button");
  v18 = _mm_loadl_epi64((const __m128i *)&off_4BBE8);
  *(_QWORD *)(a1 + 928) = a1 + 888;
  *(_DWORD *)(a1 + 824) = 64;
  *(_QWORD *)(a1 + 976) = 0x1FE00000001LL;
  *(_QWORD *)(a1 + 968) = add_xrefs_from_ah_t___vtable;
  *(__m128i *)(a1 + 912) = _mm_unpacklo_epi64(v18, (__m128i)(unsigned __int64)"Add xrefs to/from node");
  v19 = _mm_loadl_epi64((const __m128i *)&off_4BBF0);
  *(_QWORD *)(a1 + 1008) = a1 + 968;
  *(_QWORD *)(a1 + 1024) = "F";
  *(_QWORD *)(a1 + 1056) = 0x1FD00000001LL;
  *(__m128i *)(a1 + 944) = _mm_unpacklo_epi64(
                             v19,
                             (__m128i)(unsigned __int64)"Add all nodes with an xref with this node");
  v20 = _mm_loadl_epi64((const __m128i *)off_4BBF8);
  *(_QWORD *)(a1 + 1048) = add_xrefs_to_ah_t___vtable;
  *(_DWORD *)(a1 + 904) = 64;
  *(__m128i *)(a1 + 992) = _mm_unpacklo_epi64(v20, (__m128i)(unsigned __int64)"Add xrefs from node");
  *(_QWORD *)(a1 + 936) = a1;
  *(_QWORD *)(a1 + 960) = 0x4FFFFFFFFLL;
  *(_DWORD *)(a1 + 984) = 64;
  *(_QWORD *)(a1 + 1016) = a1;
  *(_QWORD *)(a1 + 1032) = 0;
  *(_QWORD *)(a1 + 1040) = 0x4FFFFFFFFLL;
  *(_DWORD *)(a1 + 1064) = 64;
  v21 = _mm_loadl_epi64((const __m128i *)off_4BC00);
  *(_QWORD *)(a1 + 1088) = a1 + 1048;
  *(_QWORD *)(a1 + 1104) = "T";
  *(__m128i *)(a1 + 1072) = _mm_unpacklo_epi64(v21, (__m128i)(unsigned __int64)"Add xrefs to node");
  v22 = _mm_loadl_epi64((const __m128i *)&off_4BC08);
  *(_QWORD *)(a1 + 1096) = a1;
  *(_QWORD *)(a1 + 1128) = choose_xrefs_ah_t___vtable;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1168) = a1 + 1128;
  *(__m128i *)(a1 + 1152) = _mm_unpacklo_epi64(v22, (__m128i)(unsigned __int64)"Add xrefs...");
  v23 = _mm_loadl_epi64((const __m128i *)&off_4BC10);
  *(_QWORD *)(a1 + 1120) = 0x4FFFFFFFFLL;
  *(_DWORD *)(a1 + 1136) = 1;
  *(_QWORD *)(a1 + 1208) = delete_nodes_ah_t___vtable;
  *(__m128i *)(a1 + 1184) = _mm_unpacklo_epi64(v23, (__m128i)(unsigned __int64)"Choose which xrefs to add");
  v24 = _mm_loadl_epi64((const __m128i *)off_4BC18);
  *(_QWORD *)(a1 + 1248) = a1 + 1208;
  *(_QWORD *)(a1 + 1264) = "D";
  *(__m128i *)(a1 + 1232) = _mm_unpacklo_epi64(v24, (__m128i)(unsigned __int64)"Delete selected nodes");
  *(_QWORD *)(a1 + 1176) = a1;
  *(_QWORD *)(a1 + 1288) = pin_nodes_ah_t___vtable;
  *(_DWORD *)(a1 + 1144) = 64;
  *(_QWORD *)(a1 + 1200) = 0x4FFFFFFFFLL;
  *(_DWORD *)(a1 + 1216) = 1;
  *(_DWORD *)(a1 + 1224) = 64;
  *(_QWORD *)(a1 + 1256) = a1;
  *(_QWORD *)(a1 + 1272) = 0;
  *(_QWORD *)(a1 + 1280) = 0x4FFFFFFFFLL;
  *(_DWORD *)(a1 + 1296) = 1;
  *(_DWORD *)(a1 + 1304) = 64;
  v25 = _mm_loadl_epi64((const __m128i *)off_4BC20);
  *(_QWORD *)(a1 + 1328) = a1 + 1288;
  v26 = _mm_load_si128(&v178);
  v27 = _mm_load_si128(&v177);
  *(_QWORD *)(a1 + 1368) = show_xref_graph_to_ah_t___vtable;
  *(_QWORD *)(a1 + 1424) = a1 + 1368;
  *(_QWORD *)(a1 + 1336) = a1;
  *(_QWORD *)(a1 + 1360) = 0x4FFFFFFFFLL;
  *(_DWORD *)(a1 + 1376) = 1;
  *(_QWORD *)(a1 + 1384) = a1;
  *(_DWORD *)(a1 + 1392) = 381;
  *(_DWORD *)(a1 + 1400) = 64;
  *(_QWORD *)(a1 + 1432) = a1;
  *(_QWORD *)(a1 + 1440) = "";
  *(_QWORD *)(a1 + 1448) = 0;
  *(__m128i *)(a1 + 1312) = v26;
  *(__m128i *)(a1 + 1344) = _mm_unpacklo_epi64(
                              v25,
                              (__m128i)(unsigned __int64)"Fix the nodes so that they will be immovable during the layer calculation");
  *(__m128i *)(a1 + 1408) = v27;
  *(_DWORD *)(a1 + 1456) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                             193,
                             "ChartXrefsTo",
                             &callui,
                             v28,
                             v29,
                             v30);
  v31 = _mm_loadl_epi64((const __m128i *)off_4BC28);
  *(_QWORD *)(a1 + 1464) = show_xref_graph_from_ah_t___vtable;
  *(_DWORD *)(a1 + 1460) = 4;
  *(_QWORD *)(a1 + 1520) = a1 + 1464;
  *(_DWORD *)(a1 + 1472) = 1;
  *(_QWORD *)(a1 + 1480) = a1;
  *(_DWORD *)(a1 + 1488) = 382;
  *(_DWORD *)(a1 + 1496) = 64;
  *(_QWORD *)(a1 + 1528) = a1;
  *(_QWORD *)(a1 + 1536) = "";
  *(_QWORD *)(a1 + 1544) = 0;
  *(__m128i *)(a1 + 1504) = _mm_unpacklo_epi64(v31, (__m128i)(unsigned __int64)"Xrefs graph from");
  *(_DWORD *)(a1 + 1552) = callui(
                             193,
                             "ChartXrefsFrom",
                             &callui,
                             v32,
                             v33,
                             v34,
                             v115,
                             v146,
                             v177.m128i_i64[0],
                             v177.m128i_i64[1]);
  v35 = _mm_loadl_epi64((const __m128i *)off_4BC30);
  *(_QWORD *)(a1 + 1560) = func_call_xref_graph_ah_t___vtable;
  *(_DWORD *)(a1 + 1556) = 4;
  *(_QWORD *)(a1 + 1608) = a1 + 1560;
  *(_DWORD *)(a1 + 1568) = 1;
  *(_QWORD *)(a1 + 1576) = a1;
  *(_DWORD *)(a1 + 1584) = 64;
  *(_QWORD *)(a1 + 1616) = a1;
  *(_QWORD *)(a1 + 1624) = "";
  *(_QWORD *)(a1 + 1632) = 0;
  *(__m128i *)(a1 + 1592) = _mm_unpacklo_epi64(v35, (__m128i)(unsigned __int64)"Function calls");
  *(_DWORD *)(a1 + 1640) = callui(
                             193,
                             "CallFlow",
                             &callui,
                             v36,
                             v37,
                             v38,
                             v116,
                             v147,
                             v177.m128i_i64[0],
                             v177.m128i_i64[1]);
  v39 = _mm_loadl_epi64((const __m128i *)&off_4BC38);
  *(_QWORD *)(a1 + 1648) = show_xref_graph_dialog_ah_t___vtable;
  *(_DWORD *)(a1 + 1644) = 4;
  *(_QWORD *)(a1 + 1696) = a1 + 1648;
  *(__m128i *)(a1 + 1680) = _mm_unpacklo_epi64(v39, (__m128i)(unsigned __int64)"Manage...");
  v40 = _mm_loadl_epi64((const __m128i *)&off_4BC40);
  *(_DWORD *)(a1 + 1656) = 1;
  *(_QWORD *)(a1 + 1664) = a1;
  *(_DWORD *)(a1 + 1672) = 64;
  *(_QWORD *)(a1 + 1704) = a1;
  *(_QWORD *)(a1 + 1728) = 0x4FFFFFFFFLL;
  *(_QWORD *)(a1 + 1752) = 0;
  *(_QWORD *)(a1 + 1760) = 0;
  *(__m128i *)(a1 + 1712) = _mm_unpacklo_epi64(
                              v40,
                              (__m128i)(unsigned __int64)"Show dialog for managing graphs or create new one");
  *(_OWORD *)(a1 + 1736) = 0;
  *(_OWORD *)(a1 + 1768) = 0;
  QT::QObject::QObject((QT::QObject *)(a1 + 1784), nullptr);
  *(_QWORD *)(a1 + 1800) = a1;
  *(_DWORD *)(a1 + 1808) = 1000;
  *(_QWORD *)(a1 + 1784) = &xref_graph_slotpoline_t___vtable;
  hook_event_listener(0, a1 + 120, a1, 0);
  hook_event_listener(3, a1 + 144, a1, 0);
  callui(127, a1 + 184, &callui, v41, v42, v43, v117, v148, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 264, &callui, v44, v45, v46, v118, v149, v177.m128i_i64[0], v177.m128i_i64[1]);
  v184 = 1;
  callui(140, "xref_graph:ToggleFitConstantly", 6, &v184, v47, v48, v119, v150, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 344, v49, &callui, v50, v51, v120, v151, v177.m128i_i64[0], v177.m128i_i64[1]);
  v185 = 1;
  callui(140, "xref_graph:RunLayout", 6, &v185, v52, v53, v121, v152, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 424, &callui, v54, v55, v56, v122, v153, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 504, v57, &callui, v58, v59, v123, v154, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 584, &callui, v60, v61, v62, v124, v155, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 664, v63, &callui, v64, v65, v125, v156, v177.m128i_i64[0], v177.m128i_i64[1]);
  v186 = 1;
  callui(140, "xref_graph:ToggleMinimap", 6, &v186, &callui, v66, v126, v157, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 744, &callui, v67, v68, v69, v127, v158, v177.m128i_i64[0], v177.m128i_i64[1]);
  v187 = 1;
  callui(140, "xref_graph:ToggleOptions", 6, &v187, v70, &callui, v128, v159, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 824, v71, &callui, v72, v73, v129, v160, v177.m128i_i64[0], v177.m128i_i64[1]);
  v188 = 1;
  callui(140, "xref_graph:ToggleBottomLine", 6, &v188, v74, v75, v130, v161, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 1304, &callui, v76, v77, v78, v131, v162, v177.m128i_i64[0], v177.m128i_i64[1]);
  v189 = 1;
  callui(140, "xref_graph:PinNodes", 6, &v189, v79, v80, v132, v163, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 904, v81, &callui, v82, v83, v133, v164, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 984, &callui, v84, v85, v86, v134, v165, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 1064, v87, &callui, v88, v89, v135, v166, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 1144, &callui, v90, v91, v92, v136, v167, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 1224, v93, &callui, v94, v95, v137, v168, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(127, a1 + 1400, &callui, v96, v97, v98, v138, v169, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(
    129,
    "View/Graphs/",
    "xref_graph:ShowXrefGraphTo",
    2,
    &callui,
    v99,
    v139,
    v170,
    v177.m128i_i64[0],
    v177.m128i_i64[1]);
  callui(127, a1 + 1496, v100, &callui, v101, v102, v140, v171, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(
    129,
    "View/Graphs/",
    "xref_graph:ShowXrefGraphFrom",
    2,
    v103,
    &callui,
    v141,
    v172,
    v177.m128i_i64[0],
    v177.m128i_i64[1]);
  callui(127, a1 + 1584, &callui, v104, v105, v106, v142, v173, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(
    129,
    "View/Graphs/",
    "xref_graph:FuncCallXrefGraph",
    2,
    v107,
    v108,
    v143,
    v174,
    v177.m128i_i64[0],
    v177.m128i_i64[1]);
  callui(127, a1 + 1672, v109, &callui, v110, v111, v144, v175, v177.m128i_i64[0], v177.m128i_i64[1]);
  callui(
    129,
    "View/Graphs/",
    "xref_graph:ShowGraphsDialog",
    2,
    v112,
    v113,
    v145,
    v176,
    v177.m128i_i64[0],
    v177.m128i_i64[1]);
  read_config2("xref_graph", 1, &off_4BB40, 1, 0, 0);
  sub_1C4C0((_QWORD *)a1, 0);
  return v190 - __readfsqword(0x28u);
}
