__int64 __fastcall sub_14BD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  unsigned int v8; // r15d
  const char *v10; // rax
  unsigned int v11; // esi
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r15
  __int64 flags; // rax
  __int64 v20; // r10
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // r15
  __int64 v24; // rdi
  __int64 v25; // r10
  __int64 v26; // r14
  __int64 v27; // r14
  __int64 v28; // r14
  __int64 v29; // r14
  __int64 v30; // r14
  __int64 v31; // r14
  __int64 v32; // r14
  __int64 v33; // r14
  __int64 v34; // rdi
  __int64 v35; // r14
  __int64 v36; // rdi
  __int64 v37; // r14
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // r14
  __int64 v41; // r14
  __int64 v42; // r14
  __int64 v43; // rdi
  __int64 v44; // r14
  __int64 v45; // r14
  __int64 v46; // r14
  __int64 v47; // rdi
  __int64 v48; // r14
  __int64 v49; // rdi
  __int64 v50; // r14
  __int64 v51; // r14
  __int64 v52; // r14
  __int64 v53; // r14
  __int64 v54; // r12
  __int64 v55; // rdi
  __int64 v56; // r12
  __int64 v57; // rdi
  __int64 v58; // rbp
  __int64 v59; // rdi
  unsigned __int64 v60; // r12
  __int64 v61; // r10
  char v62; // al
  __int64 v63; // rax
  int v64; // eax
  char v65; // al
  __int64 v66; // rax
  int dword; // eax
  char byte; // al
  char v69; // al
  __int64 v70; // rax
  __int16 v71; // ax
  __int16 word; // ax
  unsigned __int64 v73; // [rsp+0h] [rbp-478h]
  __int64 v74; // [rsp+8h] [rbp-470h]
  __int64 v75; // [rsp+8h] [rbp-470h]
  __int64 v76; // [rsp+8h] [rbp-470h]
  __int64 v77; // [rsp+10h] [rbp-468h]
  __int64 v78; // [rsp+10h] [rbp-468h]
  __int64 v79; // [rsp+10h] [rbp-468h]
  __int64 v80; // [rsp+10h] [rbp-468h]
  __int64 v81; // [rsp+10h] [rbp-468h]
  __int64 v82; // [rsp+10h] [rbp-468h]
  __int64 v83; // [rsp+10h] [rbp-468h]
  __int64 v84; // [rsp+10h] [rbp-468h]
  __int64 v85; // [rsp+10h] [rbp-468h]
  __int64 v86; // [rsp+10h] [rbp-468h]
  __int64 v87; // [rsp+10h] [rbp-468h]
  unsigned __int8 v88; // [rsp+10h] [rbp-468h]
  __int64 v89; // [rsp+10h] [rbp-468h]
  __int64 v90; // [rsp+10h] [rbp-468h]
  __int64 v91; // [rsp+10h] [rbp-468h]
  __int64 v92; // [rsp+10h] [rbp-468h]
  __int64 v93; // [rsp+18h] [rbp-460h]
  __int64 v94; // [rsp+18h] [rbp-460h]
  __int64 v95; // [rsp+18h] [rbp-460h]
  __int64 v96; // [rsp+18h] [rbp-460h]
  __int64 v97; // [rsp+18h] [rbp-460h]
  __int64 v98; // [rsp+18h] [rbp-460h]
  __int64 v99; // [rsp+18h] [rbp-460h]
  __int64 v100; // [rsp+20h] [rbp-458h]
  __int64 v101; // [rsp+20h] [rbp-458h]
  __int64 v102; // [rsp+28h] [rbp-450h]
  unsigned __int64 v103; // [rsp+438h] [rbp-40h]

  v4 = 1;
  v8 = *(_DWORD *)a3;
  v103 = __readfsqword(0x28u);
  if ( !byte_379C0 )
  {
    v10 = sub_7780(*(unsigned __int16 *)(a4 + 4));
    v4 = strcmp(v10, "arm");
  }
  v11 = *(_DWORD *)(a4 + 204);
  if ( v8 )
  {
    if ( v8 <= 0x5F || v11 <= 0x5F )
      return sub_70E0((__int64)"Warning: load configuration directory size (%u) is invalid; ignoring.\n", v11);
    v73 = v8;
  }
  else
  {
    if ( v11 != 96 )
      return sub_70E0((__int64)"Warning: load configuration directory size (%u) is invalid; ignoring.\n", v11);
    v73 = 96;
  }
  create_data();
  num_flag();
  set_op_type();
  set_cmt();
  v13 = sub_72A0(
          *(_QWORD *)(a1 + 616),
          *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (a2 + 4),
          (__int64)"Time stamp: ",
          *(_DWORD *)(a3 + 4));
  if ( v13 - a2 < v73 )
  {
    v77 = v13;
    create_data();
    qsnprintf();
    set_cmt();
    v74 = 4 - a2;
    if ( v73 >= (*(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (unsigned __int64)(v77 + 4)) + 4 - a2 )
    {
      v78 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v77 + 4);
      create_data();
      num_flag();
      set_op_type();
      set_cmt();
      if ( v73 >= (*(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (unsigned __int64)(v78 + 4)) + v74 )
      {
        v79 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v78 + 4);
        create_data();
        num_flag();
        set_op_type();
        set_cmt();
        if ( v73 >= (*(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (unsigned __int64)(v79 + 4)) + v74 )
        {
          v75 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v79 + 4);
          create_data();
          num_flag();
          set_op_type();
          set_cmt();
          v14 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v75 + 4);
          v76 = 8 - a2;
          if ( v73 >= v14 + 8 - a2 )
          {
            v93 = v14;
            set_cmt();
            create_data();
            if ( v73 >= (*(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (unsigned __int64)(v93 + 8)) + v76 )
            {
              v94 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v93 + 8);
              set_cmt();
              create_data();
              if ( v73 >= (*(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (unsigned __int64)(v94 + 8)) + v76 )
              {
                v95 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v94 + 8);
                set_cmt();
                create_data();
                if ( v73 >= (*(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (unsigned __int64)(v95 + 8)) + v76 )
                {
                  v96 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v95 + 8);
                  set_cmt();
                  create_data();
                  if ( v73 >= (*(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (unsigned __int64)(v96 + 8)) + v76 )
                  {
                    v97 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v96 + 8);
                    set_cmt();
                    create_data();
                    if ( v73 >= (*(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (unsigned __int64)(v97 + 8)) + v76 )
                    {
                      v98 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v97 + 8);
                      set_cmt();
                      create_data();
                      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v98 + 8);
                      if ( v73 >= v15 + 4 - a2 )
                      {
                        create_data();
                        sub_7EC0(v15, 0);
                        set_cmt();
                        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v15 + 4);
                        if ( v16 - a2 < v73 && v73 >= v16 - a2 + 2 )
                        {
                          create_data();
                          sub_7EC0(v16, 0);
                          set_cmt();
                          v17 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v16 + 2);
                          v99 = 2 - a2;
                          if ( v73 >= v17 + 2 - a2 )
                          {
                            create_data();
                            sub_7EC0(v17, 0);
                            set_cmt();
                            if ( v73 >= (*(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (unsigned __int64)(v17 + 2)) + v76 )
                            {
                              v80 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v17 + 2);
                              set_cmt();
                              create_data();
                              v81 = (v80 + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL);
                              sub_7D90(*(_QWORD *)(a1 + 616), a2, 88, (__int64)"__security_cookie", 1);
                              if ( v73 >= v81 + v76 )
                              {
                                set_cmt();
                                create_data();
                                if ( v73 >= ((unsigned __int64)(v81 + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL))
                                          + v76 )
                                {
                                  v82 = (v81 + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL);
                                  set_cmt();
                                  create_data();
                                  if ( v73 >= (*(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (unsigned __int64)(v82 + 8))
                                            + v76 )
                                  {
                                    v83 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v82 + 8);
                                    set_cmt();
                                    create_data();
                                    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v83 + 8);
                                    flags = get_flags_ex();
                                    v20 = 4 - a2;
                                    if ( (flags & 0x4000) == 0 )
                                    {
                                      set_name();
                                      v20 = 4 - a2;
                                    }
                                    v100 = v20;
                                    sub_84A0(a1, a2, (__int64)"__safe_se_handler_table", a4, 96, 104, 0);
                                    if ( v73 >= v18 + v76 )
                                    {
                                      set_cmt();
                                      create_data();
                                      if ( v73 >= ((unsigned __int64)(v18 + 8)
                                                 & *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL))
                                                + v76 )
                                      {
                                        v84 = (v18 + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL);
                                        set_cmt();
                                        create_data();
                                        if ( v73 >= (*(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL)
                                                   & (unsigned __int64)(v84 + 8))
                                                  + v76 )
                                        {
                                          v85 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v84 + 8);
                                          set_cmt();
                                          create_data();
                                          if ( v73 >= (*(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL)
                                                     & (unsigned __int64)(v85 + 8))
                                                    + v76 )
                                          {
                                            v86 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v85 + 8);
                                            set_cmt();
                                            create_data();
                                            v21 = v86 + 8;
                                            v87 = v100;
                                            v22 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & v21;
                                            if ( v73 >= v22 + v100 )
                                            {
                                              v23 = v22;
                                              create_data();
                                              sub_7EC0(v22, 0);
                                              set_cmt();
                                              v24 = *(_QWORD *)(a1 + 616);
                                              v25 = v100;
                                              v101 = *(_QWORD *)(v24 + 16) & (v23 + 4);
                                              if ( *(_QWORD *)(a3 + 112)
                                                && (sub_7D90(v24, a2, 112, (__int64)"__guard_check_icall_fptr", 1),
                                                    v65 = is_mapped(),
                                                    v25 = v87,
                                                    v65)
                                                && (v66 = get_flags_ex(), v25 = v87, (v66 & 0x4000) == 0) )
                                              {
                                                if ( !v4 )
                                                {
                                                  dword = get_dword();
                                                  v25 = v87;
                                                  if ( dword == -698416192 )
                                                  {
                                                    set_name();
                                                    v25 = v87;
                                                  }
                                                  if ( !*(_QWORD *)(a3 + 120) )
                                                    goto LABEL_38;
                                                  v91 = v25;
                                                  sub_7D90(
                                                    *(_QWORD *)(a1 + 616),
                                                    a2,
                                                    120,
                                                    (__int64)"__guard_dispatch_icall_fptr",
                                                    1);
                                                  v61 = v91;
LABEL_73:
                                                  v90 = v61;
                                                  v62 = is_mapped();
                                                  v25 = v90;
                                                  if ( v62 )
                                                  {
                                                    v63 = get_flags_ex();
                                                    v25 = v90;
                                                    if ( (v63 & 0x4000) == 0 )
                                                    {
                                                      v64 = get_dword();
                                                      v25 = v90;
                                                      if ( v64 == -702611168 )
                                                      {
LABEL_76:
                                                        set_name();
                                                        v25 = v90;
                                                      }
                                                    }
                                                  }
LABEL_38:
                                                  v102 = v25;
                                                  v88 = (unsigned __int8)get_byte() >> 4;
                                                  sub_84A0(a1, a2, (__int64)"__guard_fids_table", a4, 128, 136, v88);
                                                  if ( v73 >= v101 + v99 )
                                                  {
                                                    create_data();
                                                    sub_7EC0(v101, 0);
                                                    set_cmt();
                                                    v26 = (v101 + 2) & *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL);
                                                    if ( v73 >= v26 + v99 )
                                                    {
                                                      create_data();
                                                      sub_7EC0(v26, 0);
                                                      set_cmt();
                                                      v27 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v26 + 2);
                                                      if ( v73 >= v27 + v102 )
                                                      {
                                                        create_data();
                                                        sub_7EC0(v27, 0);
                                                        set_cmt();
                                                        v28 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v27 + 4);
                                                        if ( v73 >= v28 + v102 )
                                                        {
                                                          create_data();
                                                          sub_7EC0(v28, 0);
                                                          set_cmt();
                                                          v29 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v28 + 4);
                                                          if ( v73 >= v29 + v76 )
                                                          {
                                                            set_cmt();
                                                            create_data();
                                                            v30 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v29 + 8);
                                                            if ( v73 >= v30 + v76 )
                                                            {
                                                              set_cmt();
                                                              create_data();
                                                              v31 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL)
                                                                  & (v30 + 8);
                                                              sub_84A0(
                                                                a1,
                                                                a2,
                                                                (__int64)"__guard_iat_table",
                                                                a4,
                                                                160,
                                                                168,
                                                                v88);
                                                              if ( v73 >= v31 + v76 )
                                                              {
                                                                set_cmt();
                                                                create_data();
                                                                v32 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL)
                                                                    & (v31 + 8);
                                                                if ( v73 >= v32 + v76 )
                                                                {
                                                                  set_cmt();
                                                                  create_data();
                                                                  v33 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL)
                                                                      & (v32 + 8);
                                                                  sub_84A0(
                                                                    a1,
                                                                    a2,
                                                                    (__int64)"__guard_longjmp_table",
                                                                    a4,
                                                                    176,
                                                                    184,
                                                                    v88);
                                                                  sub_7D90(
                                                                    *(_QWORD *)(a1 + 616),
                                                                    a2,
                                                                    192,
                                                                    (__int64)"__dynamic_value_reloc_table",
                                                                    1);
                                                                  if ( v73 >= v33 + v76 )
                                                                  {
                                                                    set_cmt();
                                                                    create_data();
                                                                    v34 = *(_QWORD *)(a1 + 616);
                                                                    v35 = *(_QWORD *)(v34 + 16) & (v33 + 8);
                                                                    sub_7D90(
                                                                      v34,
                                                                      a2,
                                                                      200,
                                                                      (__int64)"__chpe_metadata",
                                                                      1);
                                                                    if ( v73 >= v35 + v76 )
                                                                    {
                                                                      set_cmt();
                                                                      create_data();
                                                                      v36 = *(_QWORD *)(a1 + 616);
                                                                      v37 = *(_QWORD *)(v36 + 16) & (v35 + 8);
                                                                      sub_7D90(
                                                                        v36,
                                                                        a2,
                                                                        208,
                                                                        (__int64)"__guard_ss_verify_failure",
                                                                        1);
                                                                      if ( v73 >= v37 + v76 )
                                                                      {
                                                                        set_cmt();
                                                                        create_data();
                                                                        v38 = *(_QWORD *)(a1 + 616);
                                                                        v39 = *(_QWORD *)(v38 + 16) & (v37 + 8);
                                                                        sub_7D90(
                                                                          v38,
                                                                          a2,
                                                                          216,
                                                                          (__int64)"__guard_ss_verify_failure_fptr",
                                                                          1);
                                                                        if ( v73 >= v39 + v76 )
                                                                        {
                                                                          set_cmt();
                                                                          create_data();
                                                                          v40 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL)
                                                                              & (v39 + 8);
                                                                          if ( v73 >= v40 + v102 )
                                                                          {
                                                                            create_data();
                                                                            sub_7EC0(v40, 0);
                                                                            set_cmt();
                                                                            v41 = *(_QWORD *)(*(_QWORD *)(a1 + 616)
                                                                                            + 16LL)
                                                                                & (v40 + 4);
                                                                            if ( v73 >= v41 + v99 )
                                                                            {
                                                                              create_data();
                                                                              sub_7EC0(v41, 0);
                                                                              set_cmt();
                                                                              v42 = *(_QWORD *)(*(_QWORD *)(a1 + 616)
                                                                                              + 16LL)
                                                                                  & (v41 + 2);
                                                                              if ( v73 >= v42 + v99 )
                                                                              {
                                                                                create_data();
                                                                                sub_7EC0(v42, 0);
                                                                                set_cmt();
                                                                                v43 = *(_QWORD *)(a1 + 616);
                                                                                v44 = *(_QWORD *)(v43 + 16) & (v42 + 2);
                                                                                sub_7D90(
                                                                                  v43,
                                                                                  a2,
                                                                                  232,
                                                                                  (__int64)"__guard_ss_verify_sp_fptr",
                                                                                  1);
                                                                                if ( v73 >= v44 + v76 )
                                                                                {
                                                                                  set_cmt();
                                                                                  create_data();
                                                                                  v45 = *(_QWORD *)(*(_QWORD *)(a1 + 616)
                                                                                                  + 16LL)
                                                                                      & (v44 + 8);
                                                                                  if ( v73 >= v45 + v102 )
                                                                                  {
                                                                                    create_data();
                                                                                    sub_7EC0(v45, 0);
                                                                                    set_cmt();
                                                                                    v46 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL)
                                                                                        & (v45 + 4);
                                                                                    if ( v73 >= v46 + v102 )
                                                                                    {
                                                                                      create_data();
                                                                                      sub_7EC0(v46, 0);
                                                                                      set_cmt();
                                                                                      v47 = *(_QWORD *)(a1 + 616);
                                                                                      v48 = *(_QWORD *)(v47 + 16)
                                                                                          & (v46 + 4);
                                                                                      sub_7D90(
                                                                                        v47,
                                                                                        a2,
                                                                                        248,
                                                                                        (__int64)"___enclave_config",
                                                                                        1);
                                                                                      if ( v73 >= v48 + v76 )
                                                                                      {
                                                                                        set_cmt();
                                                                                        create_data();
                                                                                        v49 = *(_QWORD *)(a1 + 616);
                                                                                        v50 = *(_QWORD *)(v49 + 16)
                                                                                            & (v48 + 8);
                                                                                        sub_7D90(
                                                                                          v49,
                                                                                          a2,
                                                                                          256,
                                                                                          (__int64)"__volatile_metadata",
                                                                                          1);
                                                                                        if ( v73 >= v50 + v76 )
                                                                                        {
                                                                                          set_cmt();
                                                                                          create_data();
                                                                                          v51 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL)
                                                                                              & (v50 + 8);
                                                                                          if ( v73 >= v51 + v76 )
                                                                                          {
                                                                                            set_cmt();
                                                                                            create_data();
                                                                                            v52 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL)
                                                                                                & (v51 + 8);
                                                                                            if ( v73 >= v52 + v76 )
                                                                                            {
                                                                                              set_cmt();
                                                                                              create_data();
                                                                                              v53 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v52 + 8);
                                                                                              sub_84A0(
                                                                                                a1,
                                                                                                a2,
                                                                                                (__int64)"__guard_eh_cont_table",
                                                                                                a4,
                                                                                                264,
                                                                                                272,
                                                                                                v88);
                                                                                              sub_7D90(
                                                                                                *(_QWORD *)(a1 + 616),
                                                                                                a2,
                                                                                                280,
                                                                                                (__int64)"__guard_xfg_check_icall_fptr",
                                                                                                1);
                                                                                              if ( v73 >= v53 + v76 )
                                                                                              {
                                                                                                set_cmt();
                                                                                                create_data();
                                                                                                v54 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL) & (v53 + 8);
                                                                                                if ( v73 >= v54 + v76 )
                                                                                                {
                                                                                                  set_cmt();
                                                                                                  create_data();
                                                                                                  v55 = *(_QWORD *)(a1 + 616);
                                                                                                  v56 = *(_QWORD *)(v55 + 16) & (v54 + 8);
                                                                                                  if ( *(_QWORD *)(a3 + 288) )
                                                                                                  {
                                                                                                    sub_7D90(v55, a2, 288, (__int64)"__guard_xfg_dispatch_icall_fptr", 1);
                                                                                                    if ( (unsigned __int8)is_mapped() )
                                                                                                    {
                                                                                                      if ( (get_flags_ex() & 0x4000) == 0 && (unsigned __int16)get_word() == 9727 )
                                                                                                        set_name();
                                                                                                    }
                                                                                                  }
                                                                                                  sub_7D90(
                                                                                                    *(_QWORD *)(a1 + 616),
                                                                                                    a2,
                                                                                                    296,
                                                                                                    (__int64)"__guard_xfg_table_dispatch_icall_fptr",
                                                                                                    1);
                                                                                                  if ( v73 >= v56 + v76 )
                                                                                                  {
                                                                                                    set_cmt();
                                                                                                    create_data();
                                                                                                    v57 = *(_QWORD *)(a1 + 616);
                                                                                                    v58 = *(_QWORD *)(v57 + 16) & (v56 + 8);
                                                                                                    sub_7D90(v57, a2, 304, (__int64)"__castguard_check_failure_os_handled_fptr", 1);
                                                                                                    if ( v73 >= v58 + v76 )
                                                                                                    {
                                                                                                      set_cmt();
                                                                                                      create_data();
                                                                                                      v59 = *(_QWORD *)(a1 + 616);
                                                                                                      v60 = (*(_QWORD *)(v59 + 16) & (v58 + 8)) - a2;
                                                                                                      if ( v60 < v73 )
                                                                                                      {
                                                                                                        sub_7D90(v59, a2, 312, (__int64)"__guard_memcpy_fptr", 1);
                                                                                                        if ( v73 >= v60 + 8 )
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
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  return v103 - __readfsqword(0x28u);
                                                }
                                                byte = get_byte();
                                                v25 = v87;
                                                if ( byte == -62 )
                                                {
                                                  word = get_word();
                                                  v25 = v87;
                                                  if ( !word )
                                                  {
                                                    set_name();
                                                    v25 = v87;
                                                  }
                                                }
                                                if ( !*(_QWORD *)(a3 + 120) )
                                                  goto LABEL_38;
                                                v92 = v25;
                                                sub_7D90(
                                                  *(_QWORD *)(a1 + 616),
                                                  a2,
                                                  120,
                                                  (__int64)"__guard_dispatch_icall_fptr",
                                                  1);
                                                v61 = v92;
                                              }
                                              else
                                              {
                                                if ( !*(_QWORD *)(a3 + 120) )
                                                  goto LABEL_38;
                                                v89 = v25;
                                                sub_7D90(
                                                  *(_QWORD *)(a1 + 616),
                                                  a2,
                                                  120,
                                                  (__int64)"__guard_dispatch_icall_fptr",
                                                  1);
                                                v61 = v89;
                                                if ( !v4 )
                                                  goto LABEL_73;
                                              }
                                              v90 = v61;
                                              v69 = is_mapped();
                                              v25 = v90;
                                              if ( v69 )
                                              {
                                                v70 = get_flags_ex();
                                                v25 = v90;
                                                if ( (v70 & 0x4000) == 0 )
                                                {
                                                  v71 = get_word();
                                                  v25 = v90;
                                                  if ( v71 == -7937 )
                                                    goto LABEL_76;
                                                }
                                              }
                                              goto LABEL_38;
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
    }
  }
  return v103 - __readfsqword(0x28u);
}

