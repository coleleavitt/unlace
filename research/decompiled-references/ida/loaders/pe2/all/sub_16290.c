__int64 __fastcall sub_16290(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  int v4; // r14d
  unsigned int v8; // r15d
  const char *v10; // rax
  unsigned int v11; // esi
  __int64 v13; // r15
  __int64 v14; // r15
  __int64 v15; // r15
  __int64 v16; // r15
  __int64 v17; // r15
  __int64 v18; // r15
  __int64 v19; // r15
  __int64 v20; // r15
  __int64 v21; // r15
  __int64 v22; // r15
  __int64 v23; // r15
  __int64 v24; // r15
  __int64 v25; // r15
  __int64 v26; // r15
  __int64 v27; // rdi
  char *v28; // rcx
  __int64 v29; // r15
  __int64 v30; // r15
  __int64 v31; // r15
  __int64 v32; // r15
  __int64 flags; // rax
  __int64 v34; // r10
  char *v35; // rdx
  __int64 v36; // r15
  __int64 v37; // r15
  __int64 v38; // r15
  __int64 v39; // r15
  __int64 v40; // rdi
  __int64 v41; // r10
  char v42; // al
  char v43; // al
  __int64 v44; // r10
  unsigned __int8 byte; // al
  __int64 v46; // r10
  char *v47; // rdx
  __int64 v48; // r15
  __int64 v49; // r15
  __int64 v50; // r15
  __int64 v51; // r15
  __int64 v52; // r15
  char *v53; // rdx
  __int64 v54; // r15
  __int64 v55; // r15
  __int64 v56; // r15
  __int64 v57; // rdi
  __int64 v58; // r15
  __int64 v59; // rdi
  __int64 v60; // r15
  __int64 v61; // rdi
  __int64 v62; // r10
  const char *v63; // rcx
  __int64 v64; // r15
  __int64 v65; // r15
  __int64 v66; // r15
  __int64 v67; // r15
  __int64 v68; // rdi
  char *v69; // rcx
  __int64 v70; // r15
  __int64 v71; // r15
  __int64 v72; // r15
  __int64 v73; // rdi
  __int64 v74; // r15
  __int64 v75; // rdi
  __int64 v76; // r10
  char *v77; // rcx
  __int64 v78; // r15
  __int64 v79; // r15
  __int64 v80; // r15
  __int64 v81; // r15
  char *v82; // rcx
  __int64 v83; // r12
  __int64 v84; // rdi
  __int64 v85; // r10
  __int64 v86; // r12
  const char *v87; // rcx
  char v88; // al
  __int64 v89; // rdi
  unsigned __int64 v90; // rbp
  __int64 v91; // rdi
  __int64 v92; // r10
  const char *v93; // rcx
  __int64 v94; // rbp
  __int64 v95; // rdi
  unsigned __int64 v96; // r12
  char *v97; // rcx
  __int64 v98; // rax
  __int16 v99; // ax
  __int64 v100; // rax
  int dword; // eax
  __int16 word; // ax
  int v103; // eax
  unsigned __int8 v104; // al
  char v105; // al
  char v106; // al
  __int64 v107; // r10
  unsigned __int8 v108; // al
  __int64 v109; // rax
  int v110; // eax
  __int64 v111; // rdi
  __int64 v112; // r15
  __int64 v113; // rdi
  __int64 v114; // r15
  __int64 v115; // rax
  __int16 v116; // ax
  unsigned __int64 v117; // [rsp+8h] [rbp-470h]
  __int64 v118; // [rsp+10h] [rbp-468h]
  __int64 v119; // [rsp+10h] [rbp-468h]
  unsigned __int8 v120; // [rsp+10h] [rbp-468h]
  __int64 v121; // [rsp+10h] [rbp-468h]
  __int64 v122; // [rsp+10h] [rbp-468h]
  __int64 v123; // [rsp+10h] [rbp-468h]
  __int64 v124; // [rsp+18h] [rbp-460h]
  unsigned __int64 v125; // [rsp+18h] [rbp-460h]
  __int64 v126; // [rsp+18h] [rbp-460h]
  __int64 v127; // [rsp+20h] [rbp-458h]
  unsigned __int64 v128; // [rsp+20h] [rbp-458h]
  __int64 v129; // [rsp+20h] [rbp-458h]
  __int64 v130; // [rsp+28h] [rbp-450h]
  __int64 v131; // [rsp+28h] [rbp-450h]
  __int64 v132; // [rsp+28h] [rbp-450h]
  __int64 v133; // [rsp+28h] [rbp-450h]
  __int64 v134; // [rsp+28h] [rbp-450h]
  __int64 v135; // [rsp+28h] [rbp-450h]
  unsigned __int64 v136; // [rsp+438h] [rbp-40h]

  v4 = 1;
  v8 = *a3;
  v136 = __readfsqword(0x28u);
  if ( !byte_379C0 )
  {
    v10 = sub_7780(*(unsigned __int16 *)(a4 + 4));
    v4 = strcmp(v10, "arm");
  }
  v11 = *(_DWORD *)(a4 + 204);
  if ( v8 )
  {
    if ( v8 <= 0x3F || v11 <= 0x3F )
      return sub_70E0((__int64)"Warning: load configuration directory size (%u) is invalid; ignoring.\n", v11);
    v117 = v8;
  }
  else
  {
    if ( v11 != 64 )
      return sub_70E0((__int64)"Warning: load configuration directory size (%u) is invalid; ignoring.\n", v11);
    v117 = 64;
  }
  create_data();
  num_flag();
  set_op_type();
  set_cmt();
  v13 = sub_72A0(
          *(_QWORD *)(a1 + 616),
          *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (a2 + 4),
          (__int64)"Time stamp: ",
          a3[1]);
  if ( v13 - a2 >= v117 )
    return v136 - __readfsqword(0x28u);
  create_data();
  qsnprintf();
  set_cmt();
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v13 + 4);
  v118 = 4 - a2;
  if ( v117 < v14 + 4 - a2 )
    return v136 - __readfsqword(0x28u);
  create_data();
  num_flag();
  set_op_type();
  set_cmt();
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v14 + 4);
  if ( v117 < v15 + v118 )
    return v136 - __readfsqword(0x28u);
  create_data();
  num_flag();
  set_op_type();
  set_cmt();
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v15 + 4);
  if ( v117 < v16 + v118 )
    return v136 - __readfsqword(0x28u);
  create_data();
  num_flag();
  set_op_type();
  set_cmt();
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v16 + 4);
  if ( v117 < v17 + v118 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v17 + 4);
  if ( v117 < v18 + v118 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v18 + 4);
  if ( v117 < v19 + v118 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v19 + 4);
  if ( v117 < v20 + v118 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v20 + 4);
  if ( v117 < v21 + v118 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v22 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v21 + 4);
  if ( v117 < v22 + v118 )
    return v136 - __readfsqword(0x28u);
  create_data();
  sub_7EC0(v22, 0);
  set_cmt();
  v23 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v22 + 4);
  if ( v117 < v23 + v118 )
    return v136 - __readfsqword(0x28u);
  create_data();
  sub_7EC0(v23, 0);
  set_cmt();
  v24 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v23 + 4);
  if ( v24 - a2 >= v117 )
    return v136 - __readfsqword(0x28u);
  if ( v117 < v24 - a2 + 2 )
    return v136 - __readfsqword(0x28u);
  create_data();
  sub_7EC0(v24, 0);
  set_cmt();
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v24 + 2);
  v124 = 2 - a2;
  if ( v117 < v25 + 2 - a2 )
    return v136 - __readfsqword(0x28u);
  create_data();
  sub_7EC0(v25, 0);
  set_cmt();
  v26 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v25 + 2);
  if ( v117 < v26 + v118 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v27 = *(_QWORD *)(a1 + 616);
  v28 = "___security_cookie";
  v29 = *(_QWORD *)(v27 + 16) & (v26 + 4);
  if ( !v4 )
    v28 = "__security_cookie";
  sub_7D90(v27, a2, 60, (__int64)v28, 0);
  if ( v117 < v29 + v118 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v30 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v29 + 4);
  if ( v117 < v30 + v118 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v31 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v30 + 4);
  if ( v117 < v31 + v118 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v32 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v31 + 4);
  flags = get_flags_ex();
  v34 = 4 - a2;
  if ( (flags & 0x4000) == 0 )
  {
    set_name();
    v34 = 4 - a2;
  }
  v35 = "___safe_se_handler_table";
  if ( !v4 )
    v35 = "__safe_se_handler_table";
  v119 = v34;
  sub_84A0(a1, a2, (__int64)v35, a4, 64, 68, 0);
  if ( v117 < v32 + v119 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v36 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v32 + 4);
  if ( v117 < v36 + v119 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v37 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v36 + 4);
  if ( v117 < v37 + v119 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v38 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v37 + 4);
  if ( v117 < v38 + v119 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v39 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v38 + 4);
  if ( v117 < v39 + v119 )
    return v136 - __readfsqword(0x28u);
  create_data();
  sub_7EC0(v39, 0);
  set_cmt();
  v40 = *(_QWORD *)(a1 + 616);
  v41 = v119;
  v127 = *(_QWORD *)(v40 + 16) & (v39 + 4);
  if ( !a3[18] )
    goto LABEL_44;
  if ( v4 )
    sub_7D90(v40, a2, 72, (__int64)"___guard_check_icall_fptr", 0);
  else
    sub_7D90(v40, a2, 72, (__int64)"__guard_check_icall_fptr", 0);
  v42 = is_mapped();
  v41 = v119;
  if ( !v42 )
    goto LABEL_44;
  v100 = get_flags_ex();
  v41 = v119;
  if ( (v100 & 0x4000) != 0 )
    goto LABEL_44;
  if ( !v4 )
  {
    dword = get_dword();
    v41 = v119;
    if ( dword == 1208019245 )
    {
      word = get_word();
      v41 = v119;
      if ( word == 18155 )
      {
        v103 = get_dword();
        v41 = v119;
        if ( v103 == -2013206339 )
        {
          set_name();
          v41 = v119;
          if ( !a3[19] )
            goto LABEL_107;
LABEL_46:
          v130 = v41;
          sub_7D90(*(_QWORD *)(a1 + 616), a2, 76, (__int64)"__guard_dispatch_icall_fptr", 0);
          v43 = is_mapped();
          v44 = v130;
          if ( v43 )
          {
            v109 = get_flags_ex();
            v44 = v130;
            if ( (v109 & 0x4000) == 0 )
            {
              v110 = get_dword();
              v44 = v130;
              if ( v110 == -702611168 )
              {
                set_name();
                v44 = v130;
              }
            }
          }
          v131 = v44;
          byte = get_byte();
          v46 = v131;
          v47 = "__guard_fids_table";
          v120 = byte >> 4;
          goto LABEL_48;
        }
      }
    }
    goto LABEL_44;
  }
  v105 = get_byte();
  v41 = v119;
  if ( v105 != -61 )
  {
LABEL_44:
    if ( !a3[19] )
      goto LABEL_107;
    if ( !v4 )
      goto LABEL_46;
LABEL_112:
    v134 = v41;
    sub_7D90(*(_QWORD *)(a1 + 616), a2, 76, (__int64)"___guard_dispatch_icall_fptr", 0);
    v106 = is_mapped();
    v107 = v134;
    if ( v106 )
    {
      v115 = get_flags_ex();
      v107 = v134;
      if ( (v115 & 0x4000) == 0 )
      {
        v116 = get_word();
        v107 = v134;
        if ( v116 == -7937 )
        {
          set_name();
          v107 = v134;
        }
      }
    }
    v135 = v107;
    v108 = get_byte();
    v46 = v135;
    v47 = "___guard_fids_table";
    v120 = v108 >> 4;
    goto LABEL_48;
  }
  set_name();
  v41 = v119;
  if ( a3[19] )
    goto LABEL_112;
LABEL_107:
  v133 = v41;
  v104 = get_byte();
  v46 = v133;
  v47 = "___guard_fids_table";
  v120 = v104 >> 4;
  if ( !v4 )
    v47 = "__guard_fids_table";
LABEL_48:
  v132 = v46;
  sub_84A0(a1, a2, (__int64)v47, a4, 80, 84, v120);
  if ( v117 < v127 + v124 )
    return v136 - __readfsqword(0x28u);
  create_data();
  sub_7EC0(v127, 0);
  set_cmt();
  v48 = (v127 + 2) & *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL);
  if ( v117 < v48 + v124 )
    return v136 - __readfsqword(0x28u);
  create_data();
  sub_7EC0(v48, 0);
  set_cmt();
  v49 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v48 + 2);
  if ( v117 < v49 + v132 )
    return v136 - __readfsqword(0x28u);
  create_data();
  sub_7EC0(v49, 0);
  set_cmt();
  v50 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v49 + 4);
  if ( v117 < v50 + v132 )
    return v136 - __readfsqword(0x28u);
  create_data();
  sub_7EC0(v50, 0);
  set_cmt();
  v51 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v50 + 4);
  if ( v117 < v51 + v132 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v52 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v51 + 4);
  if ( v117 < v52 + v132 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v53 = "___guard_iat_table";
  v54 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v52 + 4);
  if ( !v4 )
    v53 = "__guard_iat_table";
  sub_84A0(a1, a2, (__int64)v53, a4, 104, 108, v120);
  if ( v117 < v54 + v132 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v55 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v54 + 4);
  if ( v117 < v55 + v132 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v56 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v55 + 4);
  v128 = v56 + v132;
  if ( v4 )
  {
    sub_84A0(a1, a2, (__int64)"___guard_longjmp_table", a4, 112, 116, v120);
    sub_7D90(*(_QWORD *)(a1 + 616), a2, 120, (__int64)"___dynamic_value_reloc_table", 0);
    if ( v117 < v128 )
      return v136 - __readfsqword(0x28u);
    set_cmt();
    create_data();
    v111 = *(_QWORD *)(a1 + 616);
    v112 = *(_QWORD *)(v111 + 16) & (v56 + 4);
    sub_7D90(v111, a2, 124, (__int64)"___chpe_metadata", 0);
    if ( v117 < v112 + v132 )
      return v136 - __readfsqword(0x28u);
    set_cmt();
    create_data();
    v113 = *(_QWORD *)(a1 + 616);
    v114 = *(_QWORD *)(v113 + 16) & (v112 + 4);
    sub_7D90(v113, a2, 128, (__int64)"___guard_ss_verify_failure", 0);
    if ( v117 < v114 + v132 )
      return v136 - __readfsqword(0x28u);
    set_cmt();
    create_data();
    v61 = *(_QWORD *)(a1 + 616);
    v62 = v132;
    v63 = "___guard_ss_verify_failure_fptr";
    v64 = *(_QWORD *)(v61 + 16) & (v114 + 4);
  }
  else
  {
    sub_84A0(a1, a2, (__int64)"__guard_longjmp_table", a4, 112, 116, v120);
    sub_7D90(*(_QWORD *)(a1 + 616), a2, 120, (__int64)"__dynamic_value_reloc_table", 0);
    if ( v117 < v128 )
      return v136 - __readfsqword(0x28u);
    set_cmt();
    create_data();
    v57 = *(_QWORD *)(a1 + 616);
    v58 = *(_QWORD *)(v57 + 16) & (v56 + 4);
    sub_7D90(v57, a2, 124, (__int64)"__chpe_metadata", 0);
    if ( v117 < v58 + v132 )
      return v136 - __readfsqword(0x28u);
    set_cmt();
    create_data();
    v59 = *(_QWORD *)(a1 + 616);
    v60 = *(_QWORD *)(v59 + 16) & (v58 + 4);
    sub_7D90(v59, a2, 128, (__int64)"__guard_ss_verify_failure", 0);
    if ( v117 < v60 + v132 )
      return v136 - __readfsqword(0x28u);
    set_cmt();
    create_data();
    v61 = *(_QWORD *)(a1 + 616);
    v62 = v132;
    v63 = "__guard_ss_verify_failure_fptr";
    v64 = *(_QWORD *)(v61 + 16) & (v60 + 4);
  }
  v129 = v62;
  sub_7D90(v61, a2, 132, (__int64)v63, 0);
  if ( v117 < v64 + v129 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v65 = (v64 + 4) & *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL);
  if ( v117 < v65 + v129 )
    return v136 - __readfsqword(0x28u);
  create_data();
  sub_7EC0(v65, 0);
  set_cmt();
  v66 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v65 + 4);
  if ( v117 < v66 + v124 )
    return v136 - __readfsqword(0x28u);
  create_data();
  sub_7EC0(v66, 0);
  set_cmt();
  v67 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v66 + 2);
  if ( v117 < v67 + v124 )
    return v136 - __readfsqword(0x28u);
  create_data();
  sub_7EC0(v67, 0);
  set_cmt();
  v68 = *(_QWORD *)(a1 + 616);
  v69 = "___guard_ss_verify_sp_fptr";
  v70 = *(_QWORD *)(v68 + 16) & (v67 + 2);
  if ( !v4 )
    v69 = "__guard_ss_verify_sp_fptr";
  sub_7D90(v68, a2, 144, (__int64)v69, 0);
  if ( v117 < v70 + v129 )
    return v136 - __readfsqword(0x28u);
  set_cmt();
  create_data();
  v71 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v70 + 4);
  if ( v117 < v71 + v129 )
    return v136 - __readfsqword(0x28u);
  create_data();
  sub_7EC0(v71, 0);
  set_cmt();
  v72 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v71 + 4);
  if ( v117 < v72 + v129 )
    return v136 - __readfsqword(0x28u);
  create_data();
  sub_7EC0(v72, 0);
  set_cmt();
  v73 = *(_QWORD *)(a1 + 616);
  v74 = *(_QWORD *)(v73 + 16) & (v72 + 4);
  v125 = v74 + v129;
  if ( v4 )
  {
    sub_7D90(v73, a2, 156, (__int64)"____enclave_config", 0);
    if ( v117 < v125 )
      return v136 - __readfsqword(0x28u);
    set_cmt();
    create_data();
    v75 = *(_QWORD *)(a1 + 616);
    v76 = v129;
    v77 = "___volatile_metadata";
    v78 = *(_QWORD *)(v75 + 16) & (v74 + 4);
  }
  else
  {
    sub_7D90(v73, a2, 156, (__int64)"___enclave_config", 0);
    if ( v117 < v125 )
      return v136 - __readfsqword(0x28u);
    set_cmt();
    create_data();
    v75 = *(_QWORD *)(a1 + 616);
    v76 = v129;
    v77 = "__volatile_metadata";
    v78 = *(_QWORD *)(v75 + 16) & (v74 + 4);
  }
  v126 = v76;
  sub_7D90(v75, a2, 160, (__int64)v77, 0);
  if ( v117 >= v78 + v126 )
  {
    set_cmt();
    create_data();
    v79 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v78 + 4);
    if ( v117 >= v79 + v126 )
    {
      set_cmt();
      create_data();
      v80 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v79 + 4);
      if ( v117 >= v80 + v126 )
      {
        set_cmt();
        create_data();
        v81 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v80 + 4);
        if ( v4 )
        {
          sub_84A0(a1, a2, (__int64)"___guard_eh_cont_table", a4, 164, 168, v120);
          v82 = "___guard_xfg_check_icall_fptr";
        }
        else
        {
          sub_84A0(a1, a2, (__int64)"__guard_eh_cont_table", a4, 164, 168, v120);
          v82 = "__guard_xfg_check_icall_fptr";
        }
        sub_7D90(*(_QWORD *)(a1 + 616), a2, 172, (__int64)v82, 0);
        if ( v117 >= v81 + v126 )
        {
          set_cmt();
          create_data();
          v83 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v81 + 4);
          if ( v117 >= v83 + v126 )
          {
            set_cmt();
            create_data();
            v84 = *(_QWORD *)(a1 + 616);
            v85 = v126;
            v86 = *(_QWORD *)(v84 + 16) & (v83 + 4);
            if ( a3[44] )
            {
              v87 = "___guard_xfg_dispatch_icall_fptr";
              if ( !v4 )
                v87 = "__guard_xfg_dispatch_icall_fptr";
              sub_7D90(v84, a2, 176, (__int64)v87, 0);
              v88 = is_mapped();
              v85 = v126;
              if ( v88 )
              {
                v98 = get_flags_ex();
                v85 = v126;
                if ( (v98 & 0x4000) == 0 )
                {
                  v99 = get_word();
                  v85 = v126;
                  if ( v99 == 9727 )
                  {
                    set_name();
                    v85 = v126;
                  }
                }
              }
            }
            v89 = *(_QWORD *)(a1 + 616);
            v90 = v86 + v85;
            if ( v4 )
            {
              v123 = v85;
              sub_7D90(v89, a2, 180, (__int64)"___guard_xfg_table_dispatch_icall_fptr", 0);
              if ( v117 >= v90 )
              {
                set_cmt();
                create_data();
                v91 = *(_QWORD *)(a1 + 616);
                v92 = v123;
                v93 = "___castguard_check_failure_os_handled_fptr";
                v94 = *(_QWORD *)(v91 + 16) & (v86 + 4);
                goto LABEL_89;
              }
            }
            else
            {
              v121 = v85;
              sub_7D90(v89, a2, 180, (__int64)"__guard_xfg_table_dispatch_icall_fptr", 0);
              if ( v117 >= v90 )
              {
                set_cmt();
                create_data();
                v91 = *(_QWORD *)(a1 + 616);
                v92 = v121;
                v93 = "__castguard_check_failure_os_handled_fptr";
                v94 = *(_QWORD *)(v91 + 16) & (v86 + 4);
LABEL_89:
                v122 = v92;
                sub_7D90(v91, a2, 184, (__int64)v93, 0);
                if ( v117 >= v94 + v122 )
                {
                  set_cmt();
                  create_data();
                  v95 = *(_QWORD *)(a1 + 616);
                  v96 = (*(_QWORD *)(v95 + 16) & (v94 + 4)) - a2;
                  if ( v96 < v117 )
                  {
                    v97 = "___guard_memcpy_fptr";
                    if ( !v4 )
                      v97 = "__guard_memcpy_fptr";
                    sub_7D90(v95, a2, 188, (__int64)v97, 0);
                    if ( v117 >= v96 + 4 )
                    {
                      set_cmt();
                      create_data();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v136 - __readfsqword(0x28u);
}

