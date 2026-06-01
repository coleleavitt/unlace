__int64 __fastcall sub_42380(unsigned __int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rax
  __int64 v4; // rbx
  const char *v5; // rsi
  __int64 v6; // rdx
  char *v7; // r12
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v25; // [rsp+8h] [rbp-40h]
  unsigned __int64 v26; // [rsp+18h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( a1 <= 0x20 )
    return 0;
  v1 = is_loaded(a1);
  if ( !(_BYTE)v1 )
    return 0;
  v3 = getseg(a1);
  v4 = v3;
  if ( !v3 )
    return 0;
  if ( *(_BYTE *)(v3 + 184) == 2 )
    return v1;
  v5 = (const char *)v3;
  s1 = nullptr;
  v25 = 0;
  if ( get_segm_name(&s1, v3, 0) > 0 )
  {
    if ( (unsigned int)getinf(5) == 25 )
    {
      v7 = s1;
      if ( (_QWORD)v25 )
      {
        v5 = "__const";
        if ( !strcmp(s1, "__const") )
          goto LABEL_10;
        v5 = "__const_coal";
        if ( !strcmp(v7, "__const_coal") )
          goto LABEL_10;
        v5 = "__text";
        if ( !strcmp(v7, "__text") )
          goto LABEL_10;
        v5 = "__dyld";
        if ( !strcmp(v7, "__dyld") )
          goto LABEL_10;
        v5 = "__got";
        if ( !strcmp(v7, "__got") )
          goto LABEL_10;
        v5 = "__la_symbol_ptr";
        if ( !strcmp(v7, "__la_symbol_ptr") )
          goto LABEL_10;
        v5 = "__nl_symbol_ptr";
        if ( !strcmp(v7, "__nl_symbol_ptr") )
          goto LABEL_10;
        v5 = "__class";
        if ( !strcmp(v7, "__class") )
          goto LABEL_10;
      }
      v5 = "__cls_refs";
      LOBYTE(v8) = sub_42350((__int64)&s1, "__cls_refs");
      v1 = v8;
      if ( (_BYTE)v8 )
        goto LABEL_10;
      v5 = "__message_refs";
      LOBYTE(v9) = sub_42350((__int64)&s1, "__message_refs");
      v1 = v9;
      if ( (_BYTE)v9 )
        goto LABEL_10;
      v5 = "__inst_meth";
      LOBYTE(v10) = sub_42350((__int64)&s1, "__inst_meth");
      v1 = v10;
      if ( (_BYTE)v10 )
        goto LABEL_10;
      v5 = "__cat_inst_meth";
      LOBYTE(v11) = sub_42350((__int64)&s1, "__cat_inst_meth");
      v1 = v11;
      if ( (_BYTE)v11 )
        goto LABEL_10;
      v5 = "__cat_cls_meth";
      LOBYTE(v12) = sub_42350((__int64)&s1, "__cat_cls_meth");
      v1 = v12;
      if ( (_BYTE)v12 )
        goto LABEL_10;
      v5 = "__constructor";
      LOBYTE(v13) = sub_42350((__int64)&s1, "__constructor");
      v1 = v13;
      if ( (_BYTE)v13 )
        goto LABEL_10;
      v5 = "__destructor";
      LOBYTE(v14) = sub_42350((__int64)&s1, "__destructor");
      v1 = v14;
      if ( (_BYTE)v14 )
        goto LABEL_10;
      v5 = "__pointers";
      LOBYTE(v15) = sub_42350((__int64)&s1, "__pointers");
      v1 = v15;
      if ( (_BYTE)v15 )
        goto LABEL_10;
      v5 = "__objc_protorefs";
      LOBYTE(v16) = sub_42350((__int64)&s1, "__objc_protorefs");
      v1 = v16;
      if ( (_BYTE)v16 )
        goto LABEL_10;
      v5 = "__objc_selrefs";
      LOBYTE(v17) = sub_42350((__int64)&s1, "__objc_selrefs");
      v1 = v17;
      if ( (_BYTE)v17 )
        goto LABEL_10;
      v5 = "__objc_classrefs";
      LOBYTE(v18) = sub_42350((__int64)&s1, "__objc_classrefs");
      v1 = v18;
      if ( (_BYTE)v18 )
        goto LABEL_10;
      v5 = "__objc_superrefs";
      LOBYTE(v19) = sub_42350((__int64)&s1, "__objc_superrefs");
      v1 = v19;
      if ( (_BYTE)v19 )
        goto LABEL_10;
      v5 = "__objc_const";
      LOBYTE(v20) = sub_42350((__int64)&s1, "__objc_const");
      v1 = v20;
      if ( (_BYTE)v20 )
        goto LABEL_10;
    }
    else
    {
      v21 = getinf(5);
      v7 = s1;
      if ( v21 == 18 )
      {
        if ( (_QWORD)v25 )
        {
          v5 = ".text";
          if ( !strcmp(s1, ".text") )
            goto LABEL_10;
          v5 = ".got";
          if ( !strcmp(v7, ".got") )
            goto LABEL_10;
          v5 = ".got2";
          if ( !strcmp(v7, ".got2") )
            goto LABEL_10;
          v5 = ".rodata";
          if ( !strcmp(v7, ".rodata") )
            goto LABEL_10;
          v5 = ".got.plt";
          if ( !strcmp(v7, ".got.plt") )
            goto LABEL_10;
          v5 = ".plt";
          if ( !strcmp(v7, ".plt") )
            goto LABEL_10;
        }
        v5 = ".init";
        LOBYTE(v22) = sub_42350((__int64)&s1, ".init");
        v1 = v22;
        if ( (_BYTE)v22 )
          goto LABEL_10;
        v5 = ".fini";
        LOBYTE(v23) = sub_42350((__int64)&s1, ".fini");
        v1 = v23;
        if ( (_BYTE)v23 )
          goto LABEL_10;
        v5 = ".dynbss";
        if ( sub_42350((__int64)&s1, ".dynbss") )
          goto LABEL_10;
      }
    }
  }
  else
  {
    v7 = s1;
  }
  LOBYTE(v1) = *(_BYTE *)(v4 + 184) == 3;
LABEL_10:
  if ( v7 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v7, v5, v6, 0.0);
  }
  return v1;
}
