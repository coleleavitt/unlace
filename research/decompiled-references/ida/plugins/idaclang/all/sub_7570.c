__int64 sub_7570()
{
  _QWORD *v0; // rax
  __int64 v1; // rbx
  __int64 v2; // rax
  void *v3; // rax
  void *v4; // rax
  void *v5; // rax
  void *v6; // rax
  void *v7; // rax
  void *v8; // rax
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  void *v16; // rax
  void *v17; // rax
  void *v18; // rax
  void *v19; // rax
  void *v20; // rax
  void *v21; // rax
  void *v22; // rax
  void *v23; // rax
  void *v24; // rax
  void *v25; // rax
  void *v26; // rax
  void *v27; // rax
  void *v28; // rax
  void *v29; // rax
  void *v30; // rax
  void *v31; // rax
  void *v32; // rax
  void *v33; // rax
  void *v34; // rax
  void *v35; // rax
  void *v36; // rax
  void *v37; // rax
  void *v38; // rax
  void *v39; // rax
  void *v40; // rax
  void *v41; // rax
  void *v42; // rax
  void *v43; // rax
  void *v44; // rax
  void *v45; // rax
  void *v46; // rax
  void *v47; // rax
  void *v48; // rax
  void *v49; // rax
  void *v50; // rax
  void *v51; // rax
  void *v52; // rax
  void *v53; // rax
  void *v54; // rax
  void *v55; // rax
  void *v56; // rax
  void *v57; // rax
  void *v58; // rax
  void *v59; // rax
  void *v60; // rax
  void *v61; // rax
  void *v62; // rax
  void *v63; // rax
  void *v64; // rax
  void *v65; // rax
  void *v66; // rax
  void *v67; // rax
  void *v68; // rax
  void *v69; // rax
  void *v70; // rax
  void *v71; // rax
  void *v72; // rax
  void *v73; // rax
  void *v74; // rax
  void *v75; // rax
  void *v76; // rax
  void *v77; // rax
  void *v78; // rax
  void *v79; // rax
  void *v80; // rax
  void *v81; // rax
  void *v82; // rax
  void *v83; // rax
  void *v84; // rax
  void *v85; // rax
  void *v86; // rax
  void *v87; // rax
  void *v88; // rax
  void *v89; // rax
  void *v90; // rax
  void *v91; // rax
  void *v92; // rax
  void *v93; // rax
  void *v94; // rax
  void *v95; // rax
  void *v96; // rax
  void *v97; // rax
  void *v98; // rax
  void *v99; // rax
  void *v100; // rax
  void *v101; // rax
  void *v102; // rax
  void *v103; // rax
  void *v104; // rax
  void *v105; // rax
  void *v106; // rax
  void *v107; // rax
  void *v108; // rax
  void *v109; // rax
  void *v110; // rax
  void *v111; // rax
  void *v112; // rax
  void *v113; // rax
  void *v114; // rax
  void *v115; // rax
  void *v116; // rax
  void *v117; // rax
  void *v118; // rax
  void *v119; // rax
  void *v120; // rax
  void *v121; // rax
  void *v122; // rax
  void *v123; // rax
  void *v124; // rax
  void *v125; // rax
  __int64 v127; // rax
  char *v128; // rax
  char v129[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v130; // [rsp+1008h] [rbp-20h]

  v130 = __readfsqword(0x28u);
  v0 = (_QWORD *)operator new(0x3D8u);
  *v0 = 0;
  v1 = (__int64)v0;
  v0[122] = 0;
  memset(
    (void *)((unsigned __int64)(v0 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v0 - (((_DWORD)v0 + 8) & 0xFFFFFFF8) + 984) >> 3));
  v2 = idadir(0);
  qmakepath(v129, 4096, v2, "libclang.so", 0);
  if ( (unsigned __int8)qfileexist(v129) )
  {
    if ( (unsigned __int8)qfileexist(v129) )
      goto LABEL_3;
LABEL_131:
    sub_7470((__int64)"failed to locate library");
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
LABEL_330:
    operator delete((void *)v1, 0x3D8u);
    return 0;
  }
  v127 = idadir(0);
  qmakepath(v129, 4096, v127, "..", "..");
  if ( !(unsigned __int8)qfileexist(v129) )
    goto LABEL_131;
LABEL_3:
  v3 = dlopen(v129, 2);
  *(_QWORD *)v1 = v3;
  if ( !v3 )
  {
    v128 = dlerror();
    sub_7470((__int64)"%s\n", v128);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v4 = dlsym(v3, "clang_createIndex");
  *(_QWORD *)(v1 + 8) = v4;
  if ( !v4 )
  {
    sub_7470((__int64)"could not find function clang_createIndex in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v5 = dlsym(*(void **)v1, "clang_parseTranslationUnit");
  *(_QWORD *)(v1 + 16) = v5;
  if ( !v5 )
  {
    sub_7470((__int64)"could not find function clang_parseTranslationUnit in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v6 = dlsym(*(void **)v1, "clang_getTranslationUnitCursor");
  *(_QWORD *)(v1 + 24) = v6;
  if ( !v6 )
  {
    sub_7470((__int64)"could not find function clang_getTranslationUnitCursor in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v7 = dlsym(*(void **)v1, "clang_visitChildren");
  *(_QWORD *)(v1 + 32) = v7;
  if ( !v7 )
  {
    sub_7470((__int64)"could not find function clang_visitChildren in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v8 = dlsym(*(void **)v1, "clang_disposeTranslationUnit");
  *(_QWORD *)(v1 + 40) = v8;
  if ( !v8 )
  {
    sub_7470((__int64)"could not find function clang_disposeTranslationUnit in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v9 = dlsym(*(void **)v1, "clang_disposeIndex");
  *(_QWORD *)(v1 + 48) = v9;
  if ( !v9 )
  {
    sub_7470((__int64)"could not find function clang_disposeIndex in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v10 = dlsym(*(void **)v1, "clang_getCursorKind");
  *(_QWORD *)(v1 + 56) = v10;
  if ( !v10 )
  {
    sub_7470((__int64)"could not find function clang_getCursorKind in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v11 = dlsym(*(void **)v1, "clang_isDeclaration");
  *(_QWORD *)(v1 + 64) = v11;
  if ( !v11 )
  {
    sub_7470((__int64)"could not find function clang_isDeclaration in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v12 = dlsym(*(void **)v1, "clang_getCursorExtent");
  *(_QWORD *)(v1 + 72) = v12;
  if ( !v12 )
  {
    sub_7470((__int64)"could not find function clang_getCursorExtent in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v13 = dlsym(*(void **)v1, "clang_getRangeStart");
  *(_QWORD *)(v1 + 80) = v13;
  if ( !v13 )
  {
    sub_7470((__int64)"could not find function clang_getRangeStart in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v14 = dlsym(*(void **)v1, "clang_getFileLocation");
  *(_QWORD *)(v1 + 88) = v14;
  if ( !v14 )
  {
    sub_7470((__int64)"could not find function clang_getFileLocation in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v15 = dlsym(*(void **)v1, "clang_getFileName");
  *(_QWORD *)(v1 + 96) = v15;
  if ( !v15 )
  {
    sub_7470((__int64)"could not find function clang_getFileName in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v16 = dlsym(*(void **)v1, "clang_visitFiles");
  *(_QWORD *)(v1 + 104) = v16;
  if ( !v16 )
  {
    sub_7470((__int64)"could not find function clang_visitFiles in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v17 = dlsym(*(void **)v1, "clang_getCursorKindSpelling");
  *(_QWORD *)(v1 + 112) = v17;
  if ( !v17 )
  {
    sub_7470((__int64)"could not find function clang_getCursorKindSpelling in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v18 = dlsym(*(void **)v1, "clang_getCursorDisplayName");
  *(_QWORD *)(v1 + 120) = v18;
  if ( !v18 )
  {
    sub_7470((__int64)"could not find function clang_getCursorDisplayName in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v19 = dlsym(*(void **)v1, "clang_getCursorType");
  *(_QWORD *)(v1 + 128) = v19;
  if ( !v19 )
  {
    sub_7470((__int64)"could not find function clang_getCursorType in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v20 = dlsym(*(void **)v1, "clang_getTypeSpelling");
  *(_QWORD *)(v1 + 136) = v20;
  if ( !v20 )
  {
    sub_7470((__int64)"could not find function clang_getTypeSpelling in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v21 = dlsym(*(void **)v1, "clang_getCString");
  *(_QWORD *)(v1 + 144) = v21;
  if ( !v21 )
  {
    sub_7470((__int64)"could not find function clang_getCString in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v22 = dlsym(*(void **)v1, "clang_disposeString");
  *(_QWORD *)(v1 + 152) = v22;
  if ( !v22 )
  {
    sub_7470((__int64)"could not find function clang_disposeString in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v23 = dlsym(*(void **)v1, "clang_isFunctionTypeVariadic");
  *(_QWORD *)(v1 + 160) = v23;
  if ( !v23 )
  {
    sub_7470((__int64)"could not find function clang_isFunctionTypeVariadic in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v24 = dlsym(*(void **)v1, "clang_Cursor_isVariadic");
  *(_QWORD *)(v1 + 168) = v24;
  if ( !v24 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_isVariadic in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v25 = dlsym(*(void **)v1, "clang_getTypedefDeclUnderlyingType");
  *(_QWORD *)(v1 + 176) = v25;
  if ( !v25 )
  {
    sub_7470((__int64)"could not find function clang_getTypedefDeclUnderlyingType in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v26 = dlsym(*(void **)v1, "clang_Type_getObjCObjectSuperClassType");
  *(_QWORD *)(v1 + 184) = v26;
  if ( !v26 )
  {
    sub_7470((__int64)"could not find function clang_Type_getObjCObjectSuperClassType in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v27 = dlsym(*(void **)v1, "clang_getCursorResultType");
  *(_QWORD *)(v1 + 192) = v27;
  if ( !v27 )
  {
    sub_7470((__int64)"could not find function clang_getCursorResultType in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v28 = dlsym(*(void **)v1, "clang_getPointeeType");
  *(_QWORD *)(v1 + 200) = v28;
  if ( !v28 )
  {
    sub_7470((__int64)"could not find function clang_getPointeeType in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v29 = dlsym(*(void **)v1, "clang_getTypeDeclaration");
  *(_QWORD *)(v1 + 208) = v29;
  if ( !v29 )
  {
    sub_7470((__int64)"could not find function clang_getTypeDeclaration in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v30 = dlsym(*(void **)v1, "clang_getCursorDefinition");
  *(_QWORD *)(v1 + 216) = v30;
  if ( !v30 )
  {
    sub_7470((__int64)"could not find function clang_getCursorDefinition in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v31 = dlsym(*(void **)v1, "clang_getNumElements");
  *(_QWORD *)(v1 + 224) = v31;
  if ( !v31 )
  {
    sub_7470((__int64)"could not find function clang_getNumElements in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v32 = dlsym(*(void **)v1, "clang_getElementType");
  *(_QWORD *)(v1 + 232) = v32;
  if ( !v32 )
  {
    sub_7470((__int64)"could not find function clang_getElementType in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v33 = dlsym(*(void **)v1, "clang_getResultType");
  *(_QWORD *)(v1 + 240) = v33;
  if ( !v33 )
  {
    sub_7470((__int64)"could not find function clang_getResultType in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v34 = dlsym(*(void **)v1, "clang_getNumArgTypes");
  *(_QWORD *)(v1 + 248) = v34;
  if ( !v34 )
  {
    sub_7470((__int64)"could not find function clang_getNumArgTypes in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v35 = dlsym(*(void **)v1, "clang_getArgType");
  *(_QWORD *)(v1 + 256) = v35;
  if ( !v35 )
  {
    sub_7470((__int64)"could not find function clang_getArgType in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v36 = dlsym(*(void **)v1, "clang_getCursorSpelling");
  *(_QWORD *)(v1 + 264) = v36;
  if ( !v36 )
  {
    sub_7470((__int64)"could not find function clang_getCursorSpelling in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v37 = dlsym(*(void **)v1, "clang_isConstQualifiedType");
  *(_QWORD *)(v1 + 272) = v37;
  if ( !v37 )
  {
    sub_7470((__int64)"could not find function clang_isConstQualifiedType in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v38 = dlsym(*(void **)v1, "clang_Cursor_isAnonymousRecordDecl");
  *(_QWORD *)(v1 + 280) = v38;
  if ( !v38 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_isAnonymousRecordDecl in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v39 = dlsym(*(void **)v1, "clang_getFunctionTypeCallingConv");
  *(_QWORD *)(v1 + 288) = v39;
  if ( !v39 )
  {
    sub_7470((__int64)"could not find function clang_getFunctionTypeCallingConv in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v40 = dlsym(*(void **)v1, "clang_getEnumDeclIntegerType");
  *(_QWORD *)(v1 + 296) = v40;
  if ( !v40 )
  {
    sub_7470((__int64)"could not find function clang_getEnumDeclIntegerType in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v41 = dlsym(*(void **)v1, "clang_getEnumConstantDeclValue");
  *(_QWORD *)(v1 + 304) = v41;
  if ( !v41 )
  {
    sub_7470((__int64)"could not find function clang_getEnumConstantDeclValue in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v42 = dlsym(*(void **)v1, "clang_Type_getAlignOf");
  *(_QWORD *)(v1 + 312) = v42;
  if ( !v42 )
  {
    sub_7470((__int64)"could not find function clang_Type_getAlignOf in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v43 = dlsym(*(void **)v1, "clang_Cursor_isAnonymous");
  *(_QWORD *)(v1 + 320) = v43;
  if ( !v43 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_isAnonymous in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v44 = dlsym(*(void **)v1, "clang_Type_getNamedType");
  *(_QWORD *)(v1 + 328) = v44;
  if ( !v44 )
  {
    sub_7470((__int64)"could not find function clang_Type_getNamedType in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v45 = dlsym(*(void **)v1, "clang_Cursor_getObjCCategoryInterfaceDecl");
  *(_QWORD *)(v1 + 336) = v45;
  if ( !v45 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_getObjCCategoryInterfaceDecl in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v46 = dlsym(*(void **)v1, "clang_getCanonicalType");
  *(_QWORD *)(v1 + 344) = v46;
  if ( !v46 )
  {
    sub_7470((__int64)"could not find function clang_getCanonicalType in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v47 = dlsym(*(void **)v1, "clang_Cursor_isBitField");
  *(_QWORD *)(v1 + 352) = v47;
  if ( !v47 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_isBitField in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v48 = dlsym(*(void **)v1, "clang_getFieldDeclBitWidth");
  *(_QWORD *)(v1 + 360) = v48;
  if ( !v48 )
  {
    sub_7470((__int64)"could not find function clang_getFieldDeclBitWidth in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v49 = dlsym(*(void **)v1, "clang_Type_getSizeOf");
  *(_QWORD *)(v1 + 368) = v49;
  if ( !v49 )
  {
    sub_7470((__int64)"could not find function clang_Type_getSizeOf in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v50 = dlsym(*(void **)v1, "clang_getCursorLanguage");
  *(_QWORD *)(v1 + 376) = v50;
  if ( !v50 )
  {
    sub_7470((__int64)"could not find function clang_getCursorLanguage in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v51 = dlsym(*(void **)v1, "clang_isCXXSyntaxEnabled");
  *(_QWORD *)(v1 + 384) = v51;
  if ( !v51 )
  {
    sub_7470((__int64)"could not find function clang_isCXXSyntaxEnabled in %s\n", v129);
    if ( !v1 )
      return 0;
    if ( *(_QWORD *)v1 )
      dlclose(*(void **)v1);
    goto LABEL_330;
  }
  v52 = dlsym(*(void **)v1, "clang_isObjCSyntaxEnabled");
  *(_QWORD *)(v1 + 392) = v52;
  if ( !v52 )
  {
    sub_7470((__int64)"could not find function clang_isObjCSyntaxEnabled in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v53 = dlsym(*(void **)v1, "clang_getNumDiagnostics");
  *(_QWORD *)(v1 + 400) = v53;
  if ( !v53 )
  {
    sub_7470((__int64)"could not find function clang_getNumDiagnostics in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v54 = dlsym(*(void **)v1, "clang_getDiagnostic");
  *(_QWORD *)(v1 + 408) = v54;
  if ( !v54 )
  {
    sub_7470((__int64)"could not find function clang_getDiagnostic in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v55 = dlsym(*(void **)v1, "clang_formatDiagnostic");
  *(_QWORD *)(v1 + 416) = v55;
  if ( !v55 )
  {
    sub_7470((__int64)"could not find function clang_formatDiagnostic in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v56 = dlsym(*(void **)v1, "clang_defaultDiagnosticDisplayOptions");
  *(_QWORD *)(v1 + 424) = v56;
  if ( !v56 )
  {
    sub_7470((__int64)"could not find function clang_defaultDiagnosticDisplayOptions in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v57 = dlsym(*(void **)v1, "clang_getDiagnosticSeverity");
  *(_QWORD *)(v1 + 432) = v57;
  if ( !v57 )
  {
    sub_7470((__int64)"could not find function clang_getDiagnosticSeverity in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v58 = dlsym(*(void **)v1, "clang_disposeDiagnostic");
  *(_QWORD *)(v1 + 440) = v58;
  if ( !v58 )
  {
    sub_7470((__int64)"could not find function clang_disposeDiagnostic in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v59 = dlsym(*(void **)v1, "clang_getDiagnosticLocation");
  *(_QWORD *)(v1 + 448) = v59;
  if ( !v59 )
  {
    sub_7470((__int64)"could not find function clang_getDiagnosticLocation in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v60 = dlsym(*(void **)v1, "clang_getDiagnosticSpelling");
  *(_QWORD *)(v1 + 456) = v60;
  if ( !v60 )
  {
    sub_7470((__int64)"could not find function clang_getDiagnosticSpelling in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v61 = dlsym(*(void **)v1, "clang_Cursor_getOffsetOfField");
  *(_QWORD *)(v1 + 464) = v61;
  if ( !v61 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_getOffsetOfField in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v62 = dlsym(*(void **)v1, "clang_isFunctionTypeNoReturn");
  *(_QWORD *)(v1 + 472) = v62;
  if ( !v62 )
  {
    sub_7470((__int64)"could not find function clang_isFunctionTypeNoReturn in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v63 = dlsym(*(void **)v1, "clang_tokenize");
  *(_QWORD *)(v1 + 480) = v63;
  if ( !v63 )
  {
    sub_7470((__int64)"could not find function clang_tokenize in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v64 = dlsym(*(void **)v1, "clang_disposeTokens");
  *(_QWORD *)(v1 + 488) = v64;
  if ( !v64 )
  {
    sub_7470((__int64)"could not find function clang_disposeTokens in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v65 = dlsym(*(void **)v1, "clang_getTokenKind");
  *(_QWORD *)(v1 + 496) = v65;
  if ( !v65 )
  {
    sub_7470((__int64)"could not find function clang_getTokenKind in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v66 = dlsym(*(void **)v1, "clang_getTokenSpelling");
  *(_QWORD *)(v1 + 504) = v66;
  if ( !v66 )
  {
    sub_7470((__int64)"could not find function clang_getTokenSpelling in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v67 = dlsym(*(void **)v1, "clang_getTokenHasLeadingSpace");
  *(_QWORD *)(v1 + 512) = v67;
  if ( !v67 )
  {
    sub_7470((__int64)"could not find function clang_getTokenHasLeadingSpace in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v68 = dlsym(*(void **)v1, "clang_getTokenIsAtStartOfLine");
  *(_QWORD *)(v1 + 520) = v68;
  if ( !v68 )
  {
    sub_7470((__int64)"could not find function clang_getTokenIsAtStartOfLine in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v69 = dlsym(*(void **)v1, "clang_Cursor_isMacroFunctionLike");
  *(_QWORD *)(v1 + 528) = v69;
  if ( !v69 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_isMacroFunctionLike in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v70 = dlsym(*(void **)v1, "clang_Cursor_isMacroBuiltin");
  *(_QWORD *)(v1 + 536) = v70;
  if ( !v70 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_isMacroBuiltin in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v71 = dlsym(*(void **)v1, "clang_Cursor_isMacroPredefined");
  *(_QWORD *)(v1 + 544) = v71;
  if ( !v71 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_isMacroPredefined in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v72 = dlsym(*(void **)v1, "clang_Cursor_isMacroUsedForHeaderGuard");
  *(_QWORD *)(v1 + 552) = v72;
  if ( !v72 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_isMacroUsedForHeaderGuard in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v73 = dlsym(*(void **)v1, "clang_Cursor_getTranslationUnit");
  *(_QWORD *)(v1 + 560) = v73;
  if ( !v73 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_getTranslationUnit in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v74 = dlsym(*(void **)v1, "clang_isCursorDefinition");
  *(_QWORD *)(v1 + 568) = v74;
  if ( !v74 )
  {
    sub_7470((__int64)"could not find function clang_isCursorDefinition in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v75 = dlsym(*(void **)v1, "clang_Cursor_getMangling");
  *(_QWORD *)(v1 + 576) = v75;
  if ( !v75 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_getMangling in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v76 = dlsym(*(void **)v1, "clang_CXXMethod_isStatic");
  *(_QWORD *)(v1 + 584) = v76;
  if ( !v76 )
  {
    sub_7470((__int64)"could not find function clang_CXXMethod_isStatic in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v77 = dlsym(*(void **)v1, "clang_CXXMethod_isVirtual");
  *(_QWORD *)(v1 + 592) = v77;
  if ( !v77 )
  {
    sub_7470((__int64)"could not find function clang_CXXMethod_isVirtual in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v78 = dlsym(*(void **)v1, "clang_CXXMethod_isConst");
  *(_QWORD *)(v1 + 600) = v78;
  if ( !v78 )
  {
    sub_7470((__int64)"could not find function clang_CXXMethod_isConst in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v79 = dlsym(*(void **)v1, "clang_Cursor_getCXXManglings");
  *(_QWORD *)(v1 + 608) = v79;
  if ( !v79 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_getCXXManglings in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v80 = dlsym(*(void **)v1, "clang_disposeStringSet");
  *(_QWORD *)(v1 + 616) = v80;
  if ( !v80 )
  {
    sub_7470((__int64)"could not find function clang_disposeStringSet in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v81 = dlsym(*(void **)v1, "clang_Type_visitFields");
  *(_QWORD *)(v1 + 624) = v81;
  if ( !v81 )
  {
    sub_7470((__int64)"could not find function clang_Type_visitFields in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v82 = dlsym(*(void **)v1, "clang_Type_isAlignmentRequired");
  *(_QWORD *)(v1 + 632) = v82;
  if ( !v82 )
  {
    sub_7470((__int64)"could not find function clang_Type_isAlignmentRequired in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v83 = dlsym(*(void **)v1, "clang_Type_getMaxFieldAlignment");
  *(_QWORD *)(v1 + 640) = v83;
  if ( !v83 )
  {
    sub_7470((__int64)"could not find function clang_Type_getMaxFieldAlignment in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v84 = dlsym(*(void **)v1, "clang_Type_hasPackedAttr");
  *(_QWORD *)(v1 + 648) = v84;
  if ( !v84 )
  {
    sub_7470((__int64)"could not find function clang_Type_hasPackedAttr in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v85 = dlsym(*(void **)v1, "clang_getCursorSemanticParent");
  *(_QWORD *)(v1 + 656) = v85;
  if ( !v85 )
  {
    sub_7470((__int64)"could not find function clang_getCursorSemanticParent in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v86 = dlsym(*(void **)v1, "clang_Cursor_isFieldPacked");
  *(_QWORD *)(v1 + 664) = v86;
  if ( !v86 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_isFieldPacked in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v87 = dlsym(*(void **)v1, "clang_Cursor_getFieldDeclAlign");
  *(_QWORD *)(v1 + 672) = v87;
  if ( !v87 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_getFieldDeclAlign in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v88 = dlsym(*(void **)v1, "clang_Cursor_isFunctionInlined");
  *(_QWORD *)(v1 + 680) = v88;
  if ( !v88 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_isFunctionInlined in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v89 = dlsym(*(void **)v1, "clang_getCursorLinkage");
  *(_QWORD *)(v1 + 688) = v89;
  if ( !v89 )
  {
    sub_7470((__int64)"could not find function clang_getCursorLinkage in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v90 = dlsym(*(void **)v1, "clang_Type_hasOwnVFPtr");
  *(_QWORD *)(v1 + 696) = v90;
  if ( !v90 )
  {
    sub_7470((__int64)"could not find function clang_Type_hasOwnVFPtr in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v91 = dlsym(*(void **)v1, "clang_getVTableLayout");
  *(_QWORD *)(v1 + 704) = v91;
  if ( !v91 )
  {
    sub_7470((__int64)"could not find function clang_getVTableLayout in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v92 = dlsym(*(void **)v1, "clang_getVTableCXXRecordDecl");
  *(_QWORD *)(v1 + 712) = v92;
  if ( !v92 )
  {
    sub_7470((__int64)"could not find function clang_getVTableCXXRecordDecl in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v93 = dlsym(*(void **)v1, "clang_getVTableMangling");
  *(_QWORD *)(v1 + 720) = v93;
  if ( !v93 )
  {
    sub_7470((__int64)"could not find function clang_getVTableMangling in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v94 = dlsym(*(void **)v1, "clang_getVTableOffsetValue");
  *(_QWORD *)(v1 + 728) = v94;
  if ( !v94 )
  {
    sub_7470((__int64)"could not find function clang_getVTableOffsetValue in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v95 = dlsym(*(void **)v1, "clang_visitVTableComponents");
  *(_QWORD *)(v1 + 736) = v95;
  if ( !v95 )
  {
    sub_7470((__int64)"could not find function clang_visitVTableComponents in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v96 = dlsym(*(void **)v1, "clang_isVirtualBase");
  *(_QWORD *)(v1 + 744) = v96;
  if ( !v96 )
  {
    sub_7470((__int64)"could not find function clang_isVirtualBase in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v97 = dlsym(*(void **)v1, "clang_isInvalid");
  *(_QWORD *)(v1 + 752) = v97;
  if ( !v97 )
  {
    sub_7470((__int64)"could not find function clang_isInvalid in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v98 = dlsym(*(void **)v1, "clang_Cursor_getNumArguments");
  *(_QWORD *)(v1 + 760) = v98;
  if ( !v98 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_getNumArguments in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v99 = dlsym(*(void **)v1, "clang_Cursor_getArgument");
  *(_QWORD *)(v1 + 768) = v99;
  if ( !v99 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_getArgument in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v100 = dlsym(*(void **)v1, "clang_defaultSaveOptions");
  *(_QWORD *)(v1 + 776) = v100;
  if ( !v100 )
  {
    sub_7470((__int64)"could not find function clang_defaultSaveOptions in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v101 = dlsym(*(void **)v1, "clang_saveTranslationUnit");
  *(_QWORD *)(v1 + 784) = v101;
  if ( !v101 )
  {
    sub_7470((__int64)"could not find function clang_saveTranslationUnit in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v102 = dlsym(*(void **)v1, "clang_isInvalidDeclaration");
  *(_QWORD *)(v1 + 792) = v102;
  if ( !v102 )
  {
    sub_7470((__int64)"could not find function clang_isInvalidDeclaration in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v103 = dlsym(*(void **)v1, "clang_Type_getNumTemplateArguments");
  *(_QWORD *)(v1 + 800) = v103;
  if ( !v103 )
  {
    sub_7470((__int64)"could not find function clang_Type_getNumTemplateArguments in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v104 = dlsym(*(void **)v1, "clang_Type_getTemplateArgumentAsType");
  *(_QWORD *)(v1 + 808) = v104;
  if ( !v104 )
  {
    sub_7470((__int64)"could not find function clang_Type_getTemplateArgumentAsType in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v105 = dlsym(*(void **)v1, "clang_Type_getReplacementType");
  *(_QWORD *)(v1 + 816) = v105;
  if ( !v105 )
  {
    sub_7470((__int64)"could not find function clang_Type_getReplacementType in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v106 = dlsym(*(void **)v1, "clang_Type_getTemplateSpecializationDecl");
  *(_QWORD *)(v1 + 824) = v106;
  if ( !v106 )
  {
    sub_7470((__int64)"could not find function clang_Type_getTemplateSpecializationDecl in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v107 = dlsym(*(void **)v1, "clang_getTranslationUnitTargetInfo");
  *(_QWORD *)(v1 + 832) = v107;
  if ( !v107 )
  {
    sub_7470((__int64)"could not find function clang_getTranslationUnitTargetInfo in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v108 = dlsym(*(void **)v1, "clang_TargetInfo_dispose");
  *(_QWORD *)(v1 + 840) = v108;
  if ( !v108 )
  {
    sub_7470((__int64)"could not find function clang_TargetInfo_dispose in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v109 = dlsym(*(void **)v1, "clang_TargetInfo_getTriple");
  *(_QWORD *)(v1 + 848) = v109;
  if ( !v109 )
  {
    sub_7470((__int64)"could not find function clang_TargetInfo_getTriple in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v110 = dlsym(*(void **)v1, "clang_TargetInfo_getPointerWidth");
  *(_QWORD *)(v1 + 856) = v110;
  if ( !v110 )
  {
    sub_7470((__int64)"could not find function clang_TargetInfo_getPointerWidth in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v111 = dlsym(*(void **)v1, "clang_TargetInfo_getDefaultCallingConv");
  *(_QWORD *)(v1 + 864) = v111;
  if ( !v111 )
  {
    sub_7470((__int64)"could not find function clang_TargetInfo_getDefaultCallingConv in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v112 = dlsym(*(void **)v1, "clang_TargetInfo_getSizeOf");
  *(_QWORD *)(v1 + 872) = v112;
  if ( !v112 )
  {
    sub_7470((__int64)"could not find function clang_TargetInfo_getSizeOf in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v113 = dlsym(*(void **)v1, "clang_TargetInfo_isTargetWindows");
  *(_QWORD *)(v1 + 880) = v113;
  if ( !v113 )
  {
    sub_7470((__int64)"could not find function clang_TargetInfo_isTargetWindows in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v114 = dlsym(*(void **)v1, "clang_Cursor_getRawCommentText");
  *(_QWORD *)(v1 + 888) = v114;
  if ( !v114 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_getRawCommentText in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v115 = dlsym(*(void **)v1, "clang_Cursor_getBriefCommentText");
  *(_QWORD *)(v1 + 896) = v115;
  if ( !v115 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_getBriefCommentText in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v116 = dlsym(*(void **)v1, "clang_isAttribute");
  *(_QWORD *)(v1 + 904) = v116;
  if ( !v116 )
  {
    sub_7470((__int64)"could not find function clang_isAttribute in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v117 = dlsym(*(void **)v1, "clang_Cursor_hasAttrs");
  *(_QWORD *)(v1 + 912) = v117;
  if ( !v117 )
  {
    sub_7470((__int64)"could not find function clang_Cursor_hasAttrs in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v118 = dlsym(*(void **)v1, "clang_getCursorPrintingPolicy");
  *(_QWORD *)(v1 + 920) = v118;
  if ( !v118 )
  {
    sub_7470((__int64)"could not find function clang_getCursorPrintingPolicy in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v119 = dlsym(*(void **)v1, "clang_PrintingPolicy_dispose");
  *(_QWORD *)(v1 + 928) = v119;
  if ( !v119 )
  {
    sub_7470((__int64)"could not find function clang_PrintingPolicy_dispose in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v120 = dlsym(*(void **)v1, "clang_PrintingPolicy_getProperty");
  *(_QWORD *)(v1 + 936) = v120;
  if ( !v120 )
  {
    sub_7470((__int64)"could not find function clang_PrintingPolicy_getProperty in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v121 = dlsym(*(void **)v1, "clang_PrintingPolicy_setProperty");
  *(_QWORD *)(v1 + 944) = v121;
  if ( !v121 )
  {
    sub_7470((__int64)"could not find function clang_PrintingPolicy_setProperty in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v122 = dlsym(*(void **)v1, "clang_getCursorPrettyPrinted");
  *(_QWORD *)(v1 + 952) = v122;
  if ( !v122 )
  {
    sub_7470((__int64)"could not find function clang_getCursorPrettyPrinted in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v123 = dlsym(*(void **)v1, "clang_getClangVersion");
  *(_QWORD *)(v1 + 960) = v123;
  if ( !v123 )
  {
    sub_7470((__int64)"could not find function clang_getClangVersion in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v124 = dlsym(*(void **)v1, "clang_getCursorVisibility");
  *(_QWORD *)(v1 + 968) = v124;
  if ( !v124 )
  {
    sub_7470((__int64)"could not find function clang_getCursorVisibility in %s\n", v129);
    if ( !v1 )
      return 0;
    goto LABEL_127;
  }
  v125 = dlsym(*(void **)v1, "clang_getCXXAccessSpecifier");
  *(_QWORD *)(v1 + 976) = v125;
  if ( !v125 )
  {
    sub_7470((__int64)"could not find function clang_getCXXAccessSpecifier in %s\n", v129);
    if ( !v1 )
      return 0;
LABEL_127:
    sub_7530(v1);
    operator delete((void *)v1, 0x3D8u);
    return 0;
  }
  return v1;
}

