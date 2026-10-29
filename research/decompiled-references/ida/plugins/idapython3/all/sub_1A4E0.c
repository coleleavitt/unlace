__int64 __fastcall sub_1A4E0(__int64 a1, const char *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r15
  unsigned int v15; // ebp
  size_t v17; // rbp
  char *v18; // rbx
  __int64 v19; // rax
  const char *v20; // r12
  char *v21; // rbp
  unsigned __int64 v22; // r14
  __int64 v23; // r13
  size_t v24; // r11
  __int64 *v25; // r15
  __int64 v26; // r13
  __int64 v27; // rsi
  size_t v28; // rdx
  char *v29; // r9
  char *v30; // rbx
  __int64 v31; // rax
  size_t v32; // r9
  unsigned __int64 v33; // r14
  _BYTE *v34; // rsi
  __int64 v35; // rbp
  __int64 v36; // rbx
  __int64 *v37; // rax
  const char *v38; // rbp
  __int64 v39; // rsi
  __int64 *v40; // r14
  size_t v41; // rbx
  const char *v42; // rbx
  __int64 plugin_instance; // rax
  __int64 *v44; // rbx
  const char *v45; // rsi
  const char *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  void *v51; // rbx
  __int64 *v52; // rax
  __int64 *v53; // rbp
  __int64 *v54; // rbx
  __int64 *v55; // rcx
  unsigned __int64 v56; // rdi
  unsigned __int64 v57; // r12
  unsigned __int64 v58; // rdx
  _BYTE *v59; // rsi
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rdx
  _BYTE *v64; // rdi
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // r15
  unsigned __int64 v68; // rbx
  __int64 *v69; // rbp
  __int64 v70; // rdx
  char *v71; // r15
  __int64 *v72; // rax
  __int64 v73; // rcx
  unsigned __int64 v74; // r12
  size_t v75; // r9
  size_t v76; // r10
  unsigned __int64 v77; // rdx
  char *v78; // rax
  char v79; // r12
  const char *v80; // r14
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  int v93; // eax
  char v94; // bp
  struct _Unwind_Exception *v95; // rbp
  char **v96; // [rsp+0h] [rbp-F8h]
  size_t v97; // [rsp+8h] [rbp-F0h]
  size_t v98; // [rsp+8h] [rbp-F0h]
  size_t v99; // [rsp+8h] [rbp-F0h]
  size_t v100; // [rsp+10h] [rbp-E8h]
  size_t v101; // [rsp+18h] [rbp-E0h]
  unsigned int v102; // [rsp+24h] [rbp-D4h]
  char v104; // [rsp+37h] [rbp-C1h] BYREF
  __int64 *v105; // [rsp+38h] [rbp-C0h] BYREF
  void *src; // [rsp+40h] [rbp-B8h]
  __int128 v107; // [rsp+48h] [rbp-B0h]
  const char *v108; // [rsp+60h] [rbp-98h] BYREF
  __int128 v109; // [rsp+68h] [rbp-90h]
  __int64 *v110; // [rsp+80h] [rbp-78h] BYREF
  __int128 v111; // [rsp+88h] [rbp-70h]
  __int64 v112; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v113; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v114; // [rsp+B8h] [rbp-40h]

  v15 = 1;
  v114 = __readfsqword(0x28u);
  v102 = (*(__int64 (**)(void))(qword_24798 + 536))();
  if ( !*a2 )
    goto LABEL_2;
  src = nullptr;
  v107 = 0;
  if ( a2 )
  {
    v17 = strlen(a2);
    *(_QWORD *)&v107 = v17 + 1;
    src = (void *)qvector_reserve();
    memmove(src, a2, v17);
    *((_BYTE *)src + v17) = 0;
    v18 = (char *)src;
    v19 = v107;
    v111 = 0;
    v110 = nullptr;
    v20 = (const char *)src;
    if ( (_QWORD)v107 )
    {
      v21 = (char *)src + v107 - 1;
      if ( src >= v21 )
      {
        if ( (_QWORD)v107 == 1 )
          goto LABEL_30;
        v14 = nullptr;
        v23 = 0;
      }
      else
      {
        v14 = nullptr;
        v22 = 0;
        v23 = 0;
        v96 = (char **)&v110;
        while ( 1 )
        {
          v29 = strchr(v20, 10);
          v30 = v29;
          if ( !v29 )
            v29 = v21;
          v32 = v29 - v20;
          if ( v22 < v23 + 1 )
          {
            v97 = v32;
            v110 = (__int64 *)qvector_reserve();
            v23 = v111;
            v14 = v110;
            v32 = v97;
          }
          v24 = v32;
          v25 = &v14[3 * v23];
          *(_OWORD *)(v25 + 1) = 0;
          *v25 = 0;
          *(_QWORD *)&v111 = v111 + 1;
          v26 = v25[1];
          if ( v26 )
          {
            --v26;
            v24 = v32 + v26;
          }
          v27 = *v25;
          v28 = v24 + 1;
          if ( v24 != -1 )
          {
            v101 = v24;
            v100 = v32;
            v98 = v24 + 1;
            v31 = qvector_reserve();
            v24 = v101;
            v32 = v100;
            *v25 = v31;
            v27 = v31;
            v28 = v98;
          }
          v25[1] = v28;
          *(_BYTE *)(v27 + v24) = 0;
          memmove((void *)(v26 + *v25), v20, v32);
          v14 = v110;
          v23 = v111;
          if ( !v30 )
            break;
          v20 = v30 + 1;
          if ( v30 + 1 >= v21 )
            break;
          v22 = *((_QWORD *)&v111 + 1);
        }
        v19 = v107;
        if ( (unsigned __int64)v107 < 2 )
          goto LABEL_53;
        v18 = (char *)src;
      }
      if ( v18[v19 - 2] == 10 )
      {
        if ( *((_QWORD *)&v111 + 1) < (unsigned __int64)(v23 + 1) )
        {
          v110 = (__int64 *)qvector_reserve();
          v23 = v111;
          v14 = v110;
        }
        v52 = &v14[3 * v23];
        *v52 = 0;
        *(_OWORD *)(v52 + 1) = 0;
        v14 = v110;
        v23 = v111 + 1;
        *(_QWORD *)&v111 = v111 + 1;
      }
LABEL_53:
      v53 = &v14[3 * v23];
      if ( v53 == v14 )
        goto LABEL_23;
      v54 = v14;
      v55 = v14;
      v56 = -1;
      v57 = -1;
      do
      {
        v58 = v55[1];
        if ( v58 > 1 )
        {
          v59 = (_BYTE *)*v55;
          if ( *(_BYTE *)*v55 != 35 )
          {
            v60 = v58 - 1;
            v61 = 0;
            do
            {
              if ( v59[v61] != 32 )
                break;
              ++v61;
            }
            while ( v60 != v61 );
            if ( v57 > v61 )
              v57 = v61;
            v62 = 0;
            do
            {
              if ( v59[v62] != 9 )
                break;
              ++v62;
            }
            while ( v60 != v62 );
            if ( v56 > v62 )
              v56 = v62;
          }
        }
        v55 += 3;
      }
      while ( v53 != v55 );
      if ( v57 )
      {
        if ( !v56 )
          goto LABEL_72;
        goto LABEL_23;
      }
      if ( !v56 )
      {
LABEL_23:
        if ( v14 )
        {
          v35 = v111;
          if ( (_QWORD)v111 )
          {
            v36 = 0;
            do
            {
              v37 = &v14[3 * v36];
              if ( *v37 )
              {
                v37[1] = 0;
                qfree();
              }
              ++v36;
              v14 = v110;
            }
            while ( v35 != v36 );
          }
          *(_QWORD *)&v111 = 0;
          qfree();
        }
        goto LABEL_30;
      }
      v57 = v56;
      do
      {
LABEL_72:
        while ( 1 )
        {
          v63 = v54[1];
          if ( v63 > 1 )
          {
            v64 = (_BYTE *)*v54;
            if ( *(_BYTE *)*v54 != 35 )
              break;
          }
          v54 += 3;
          if ( v53 == v54 )
            goto LABEL_79;
        }
        v65 = v63 - 1;
        v66 = 1;
        v67 = 0;
        if ( v57 < v65 )
        {
          v67 = v65 - v57;
          memmove(v64, &v64[v57], v65 - v57);
          v64 = (_BYTE *)*v54;
          v66 = v67 + 1;
        }
        if ( v54[2] < v66 )
        {
          v96 = (char **)v66;
          v81 = qvector_reserve();
          *v54 = v81;
          v66 = (unsigned __int64)v96;
          v64 = (_BYTE *)v81;
        }
        v54[1] = v66;
        v54 += 3;
        v64[v67] = 0;
      }
      while ( v53 != v54 );
LABEL_79:
      v68 = v111;
      v112 = 0;
      v113 = 0;
      if ( (_QWORD)v111 )
      {
        v69 = v110;
        v70 = v111 - 1;
        v71 = (char *)&v110[3 * v111];
        if ( v110 == (__int64 *)v71 )
        {
          if ( (_QWORD)v111 == 1 )
          {
            v33 = 0;
            v68 = 0;
            v34 = nullptr;
            goto LABEL_19;
          }
        }
        else
        {
          v72 = v110;
          do
          {
            v73 = v72[1];
            if ( v73 )
              v70 = v70 + v73 - 1;
            v72 += 3;
          }
          while ( v72 != (__int64 *)v71 );
          v33 = 0;
          v34 = nullptr;
          if ( !v70 )
            goto LABEL_86;
        }
        v112 = qvector_reserve();
        v34 = (_BYTE *)v112;
        v69 = v110;
        v33 = *((_QWORD *)&v113 + 1);
        v70 = v113;
        v71 = (char *)&v110[3 * v111];
        if ( v71 != (char *)v110 )
        {
LABEL_86:
          v68 = v70;
          do
          {
            if ( v68 > 1 )
            {
              v77 = v68 + 1;
              if ( v33 < v68 + 1 )
              {
                LOBYTE(v96) = v68 + 1;
                v112 = qvector_reserve();
                v77 = v68 + 1;
                v34 = (_BYTE *)v112;
              }
              *(_QWORD *)&v113 = v77;
              v34[v68] = 0;
              *(_BYTE *)(v112 + v68 - 1) = 10;
              v33 = *((_QWORD *)&v113 + 1);
              v68 = v113;
              v34 = (_BYTE *)v112;
            }
            v74 = v69[1];
            if ( v74 )
            {
              v75 = v74 - 1;
              if ( v74 != 1 )
              {
                v76 = v74 - 1;
                if ( v68 )
                {
                  --v68;
                  v76 = v75 + v68;
                  v74 += v68;
                }
                if ( v33 < v74 )
                {
                  v96 = (char **)v75;
                  v99 = v76;
                  v112 = qvector_reserve();
                  v76 = v99;
                  v34 = (_BYTE *)v112;
                  v75 = (size_t)v96;
                }
                *(_QWORD *)&v113 = v74;
                v34[v76] = 0;
                memcpy((void *)(v112 + v68), (const void *)*v69, v75);
                v34 = (_BYTE *)v112;
                v33 = *((_QWORD *)&v113 + 1);
                v68 = v113;
              }
            }
            v69 += 3;
          }
          while ( v71 != (char *)v69 );
          goto LABEL_19;
        }
        v68 = v113;
      }
      else
      {
        v33 = 0;
        v34 = nullptr;
      }
LABEL_19:
      v112 = 0;
      v113 = 0;
      if ( src )
      {
        LOBYTE(v96) = (_BYTE)v34;
        qfree();
        *(_QWORD *)&v107 = v68;
        *((_QWORD *)&v107 + 1) = v33;
        src = v34;
        if ( v112 )
        {
          *(_QWORD *)&v113 = 0;
          qfree();
        }
      }
      else
      {
        src = v34;
        *(_QWORD *)&v107 = v68;
        *((_QWORD *)&v107 + 1) = v33;
      }
      v14 = v110;
      goto LABEL_23;
    }
  }
LABEL_30:
  if ( !(_QWORD)v107 )
  {
    v108 = nullptr;
    v109 = 0;
LABEL_32:
    v38 = ::src;
    goto LABEL_33;
  }
  v51 = src;
  v38 = (const char *)src;
  v78 = strrchr((const char *)src, 10);
  if ( v78 )
  {
    v79 = v78[1];
    v80 = v78 + 1;
  }
  else
  {
    v79 = *(_BYTE *)src;
    v80 = (const char *)src;
  }
  if ( !v79 || v80[strlen(v80) - 1] != 58 && ((unsigned int)v79 > 0x7F || !isspace(v79)) )
  {
    v108 = nullptr;
    v109 = 0;
    if ( *(_BYTE *)src == 63 || *(_BYTE *)src == 33 )
    {
      sub_14130((__int64 *)&v108);
      if ( !(_QWORD)v109 )
        goto LABEL_32;
      v38 = v108;
    }
LABEL_33:
    v39 = 1;
    setup_new_execution(&v104, 1);
    v40 = (__int64 *)&v110;
    v110 = nullptr;
    v111 = 0;
    if ( v38 )
    {
      v40 = (__int64 *)&v110;
      v41 = strlen(v38);
      LOBYTE(v96) = v41 + 1;
      v39 = (__int64)v38;
      v110 = (__int64 *)qvector_reserve();
      *(_QWORD *)&v111 = v41 + 1;
      memmove(v110, v38, v41);
      *((_BYTE *)v110 + v41) = 0;
    }
    v42 = sub_6F90((__int64 *)&v110);
    plugin_instance = get_plugin_instance(&v110, v39);
    v44 = (__int64 *)(*(__int64 (__fastcall **)(const char *, const char *, __int64, _QWORD, __int64))(plugin_instance + 976))(
                       v42,
                       "<string>",
                       258,
                       0,
                       0xFFFFFFFFLL);
    if ( !v44 || (*(__int64 (**)(void))(qword_24798 + 424))() )
    {
      (*(void (**)(void))(qword_24798 + 400))();
      LODWORD(v45) = 0;
      v46 = v38;
      (*(void (__fastcall **)(const char *, _QWORD))(a1 + 816))(v38, 0);
      if ( !v44 )
      {
LABEL_40:
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree();
        }
        setup_new_execution(&v104, 0);
        if ( v108 )
        {
          *(_QWORD *)&v109 = 0;
          qfree();
        }
        v51 = src;
        v15 = 1;
        goto LABEL_45;
      }
      goto LABEL_38;
    }
    v45 = (const char *)(*(__int64 (__fastcall **)(const char *))(qword_24798 + 560))("__main__");
    v82 = qword_24798;
    if ( v45 )
    {
      v45 = (const char *)(*(__int64 (__fastcall **)(const char *))(qword_24798 + 696))(v45);
      v82 = qword_24798;
    }
    v46 = (const char *)v44;
    v40 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, const char *, const char *))(v82 + 456))(v44, v45, v45);
    if ( !v40 )
    {
      (*(void (**)(void))(qword_24798 + 432))();
      goto LABEL_38;
    }
    v83 = (*(__int64 (**)(void))(qword_24798 + 424))();
    v45 = (const char *)qword_24798;
    if ( v83 )
    {
      (*(void (**)(void))(qword_24798 + 432))();
      goto LABEL_119;
    }
    v46 = (const char *)&v105;
    sub_12260(&v105, qword_24798);
    v14 = v105;
    v85 = qword_24798;
    if ( v105 )
    {
      v45 = (const char *)v40;
      v88 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(qword_24798 + 728))(v105, v40, 0);
      v46 = (const char *)v88;
      if ( v88 )
      {
        if ( *v88 <= 0 )
        {
LABEL_152:
          sub_6C20((__int64)v46, (int)v45, v89, v90, v91, v92, (char)v96);
LABEL_153:
          v95 = (struct _Unwind_Exception *)sub_6C20((__int64)v46, (int)v45, v89, v90, v91, v92, (char)v96);
          sub_6DF0(v14, (int)v45, v2, v3, v4, v5);
          sub_6DF0(v40, (int)v45, v6, v7, v8, v9);
          sub_6DF0(v44, (int)v45, v10, v11, v12, v13);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree();
          }
          setup_new_execution(&v104, 0);
          if ( v108 )
          {
            *(_QWORD *)&v109 = 0;
            qfree();
          }
          if ( src )
          {
            *(_QWORD *)&v107 = 0;
            qfree();
          }
          (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v102);
          _Unwind_Resume(v95);
        }
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v88);
      }
      if ( *v14 <= 0 )
        goto LABEL_153;
      v46 = (const char *)v14;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v14);
      goto LABEL_119;
    }
    if ( *(__int64 **)(qword_24798 + 1136) == v40 )
    {
LABEL_119:
      if ( *v40 <= 0 )
      {
LABEL_151:
        sub_6C20((__int64)v46, (int)v45, v84, v85, v86, v87, (char)v96);
        goto LABEL_152;
      }
      v46 = (const char *)v40;
      (*(void (__fastcall **)(__int64 *, const char *))(qword_24798 + 984))(v40, v45);
LABEL_38:
      if ( *v44 > 0 )
      {
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v44);
        goto LABEL_40;
      }
      sub_6C20((__int64)v46, (int)v45, v47, v48, v49, v50, (char)v96);
      goto LABEL_151;
    }
    v93 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 928))(v40[1]);
    v112 = 0;
    v113 = 0;
    if ( (v93 & 0x10000000) != 0 )
    {
      sub_8D30((__int64)&v112, (__int64)v40);
      v45 = ::src;
      if ( (_QWORD)v113 )
        v45 = (const char *)v112;
      sub_7F30((__int64)"%s\n", v45);
      if ( v112 )
      {
        *(_QWORD *)&v113 = 0;
        qfree();
      }
      goto LABEL_138;
    }
    v45 = (const char *)&v112;
    v94 = PyW_ObjectToString(v40, &v112);
    if ( v94 )
    {
      v45 = ::src;
      if ( (_QWORD)v113 )
        v45 = (const char *)v112;
      sub_7F30((__int64)"%s\n", v45);
      v46 = (const char *)v112;
      if ( !v112 )
        goto LABEL_119;
    }
    else
    {
      v46 = (const char *)v112;
      if ( !v112 )
      {
LABEL_138:
        v46 = "*** IDAPython: Couldn't convert evaluation result\n";
        sub_7F30((__int64)"*** IDAPython: Couldn't convert evaluation result\n");
        goto LABEL_119;
      }
    }
    *(_QWORD *)&v113 = 0;
    qfree();
    if ( v94 )
      goto LABEL_119;
    goto LABEL_138;
  }
  v15 = 0;
LABEL_45:
  if ( v51 )
  {
    *(_QWORD *)&v107 = 0;
    qfree();
  }
LABEL_2:
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v102);
  return v15;
}

