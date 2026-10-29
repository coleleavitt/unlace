__int64 __fastcall idcvar_to_pyvar(__int64 a1, char *a2, char a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 **v7; // rbp
  __int64 *v8; // rbx
  __int64 *v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // r14
  char Error; // r15
  __int64 idcv_attr; // r12
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 *v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 (__fastcall *v67)(__int64 *, char *, _QWORD); // r12
  __int64 v68; // rax
  __int64 *v69; // r12
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  char v74; // al
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // eax
  __int64 *v84; // r12
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 *v90; // r12
  __int64 *v91; // r13
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  unsigned int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 *v102; // r12
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 *v111; // rdi
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 *v116; // rdi
  struct _Unwind_Exception *v117; // rbp
  char *v118; // [rsp+0h] [rbp-A8h]
  unsigned int v119; // [rsp+0h] [rbp-A8h]
  unsigned int v120; // [rsp+Ch] [rbp-9Ch]
  __int64 *v121; // [rsp+18h] [rbp-90h] BYREF
  char v122; // [rsp+20h] [rbp-88h] BYREF
  __int128 v123; // [rsp+28h] [rbp-80h]
  __int64 v124; // [rsp+38h] [rbp-70h]
  char v125[8]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v126; // [rsp+48h] [rbp-60h]
  __int64 v127; // [rsp+58h] [rbp-50h]
  unsigned __int64 v128; // [rsp+68h] [rbp-40h]

  v128 = __readfsqword(0x28u);
  v7 = (__int64 **)a2;
  v8 = (__int64 *)a1;
  switch ( *(_BYTE *)a1 )
  {
    case 2:
      if ( *(_QWORD *)a2 )
      {
        if ( (unsigned int)sub_C290(*(_QWORD *)a2) )
          return 0;
        v61 = (*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 664))(*(_QWORD *)(a1 + 8));
        (*(void (__fastcall **)(_QWORD, const char *, __int64))(qword_24798 + 800))(
          *(_QWORD *)a2,
          "__idc_cvt_value__",
          v61);
      }
      else
      {
        v56 = (*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 664))(*(_QWORD *)(a1 + 8));
        v8 = *(__int64 **)a2;
        v37 = (__int64 *)v56;
        *(_QWORD *)a2 = v56;
        if ( v56 )
        {
          v9 = (__int64 *)v56;
          (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v56);
          if ( v8 )
          {
            v9 = v8;
            (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v8);
          }
          if ( *v37 <= 0 )
            goto LABEL_177;
LABEL_147:
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v37);
        }
        else if ( v8 )
        {
LABEL_52:
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v8);
        }
      }
      return 1;
    case 3:
      if ( *(_QWORD *)a2 )
        return 0;
      a2 = (char *)(a1 + 8);
      if ( (unsigned int)ieee_realcvt() != 1 )
        goto LABEL_169;
      v12 = (*(__int64 (__fastcall **)(__int64 **, char *, double))(qword_24798 + 512))(&v121, a2, *(double *)&v121);
      v13 = *v7;
      v8 = (__int64 *)v12;
      *v7 = (__int64 *)v12;
      if ( v12 )
      {
        v9 = (__int64 *)v12;
        (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v12);
        if ( v13 )
        {
          v9 = v13;
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v13);
        }
        if ( *v8 <= 0 )
          goto LABEL_173;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v8);
      }
      else if ( v13 )
      {
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v13);
      }
      return 1;
    case 5:
      a2 = (char *)a1;
      v122 = 2;
      v118 = &v122;
      v124 = 0;
      v123 = 0;
      if ( !(unsigned int)get_idcv_attr() )
      {
        a2 = (char *)a1;
        if ( !(unsigned int)get_idcv_attr() )
        {
          v8 = (__int64 *)v123;
          if ( (_QWORD)v123 )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(qword_24798 + 1008))(v123, a1);
            v84 = *v7;
            *v7 = v8;
            v9 = v8;
            (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v8);
            if ( v84 )
            {
              v9 = v84;
              (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v84);
            }
            if ( *v8 <= 0 )
              goto LABEL_178;
            (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v8);
          }
          else
          {
            v116 = *v7;
            *v7 = nullptr;
            if ( v116 )
              (*(void (__fastcall **)(__int64 *, char *))(qword_24798 + 984))(v116, a2);
          }
          v83 = 2;
          goto LABEL_93;
        }
      }
      v18 = *v7;
      if ( *v7 )
      {
        (*(void (__fastcall **)(__int64 *, char *))(qword_24798 + 1008))(*v7, a2);
        Error = ((*(__int64 (__fastcall **)(__int64))(qword_24798 + 928))(v18[1]) & 0x20000000) != 0;
LABEL_21:
        idcv_attr = first_idcv_attr();
        if ( idcv_attr )
        {
          while ( 1 )
          {
            v125[0] = 2;
            v127 = 0;
            v126 = 0;
            get_idcv_attr();
            a2 = (char *)&v121;
            v9 = (__int64 *)v125;
            v121 = nullptr;
            v21 = idcvar_to_pyvar(v125, &v121, 0);
            v25 = v121;
            if ( v21 <= 0 )
              break;
            LODWORD(a2) = idcv_attr;
            if ( Error )
              (*(void (__fastcall **)(__int64 *, __int64, __int64 *))(qword_24798 + 392))(v18, idcv_attr, v121);
            else
              (*(void (__fastcall **)(__int64 *, __int64, __int64 *))(qword_24798 + 800))(v18, idcv_attr, v121);
            if ( v121 )
            {
              if ( *v121 <= 0 )
              {
                sub_6C20((__int64)v121, idcv_attr, v26, v27, v28, v29, (char)&v122);
LABEL_158:
                if ( under_debugger )
                  goto LABEL_183;
                v9 = (_QWORD *)(&loc_7730 + 1);
                interr();
LABEL_160:
                sub_6C20((__int64)v9, (int)a2, (__int64)v25, v22, v23, v24, (char)v118);
LABEL_161:
                sub_6C20((__int64)v9, (int)a2, v43, v44, v45, v46, (char)v118);
LABEL_162:
                sub_6C20((__int64)v9, (int)a2, v79, v80, v81, v82, (char)v118);
LABEL_163:
                sub_6C20((__int64)v9, (int)a2, v112, v113, v114, v115, (char)v118);
LABEL_164:
                sub_6C20((__int64)v9, (int)a2, v79, v80, v81, v82, (char)v118);
LABEL_165:
                sub_6C20((__int64)v9, (int)a2, v70, v71, v72, v73, (char)v118);
LABEL_166:
                sub_6C20((__int64)v9, (int)a2, v38, v39, v40, v41, (char)v118);
LABEL_167:
                sub_6C20((__int64)v9, (int)a2, v103, v104, v105, v106, (char)v118);
LABEL_168:
                sub_6C20((__int64)v9, (int)a2, v75, v76, v77, v78, (char)v118);
LABEL_169:
                if ( under_debugger )
LABEL_183:
                  BUG();
                v9 = (_QWORD *)&loc_75D0;
                interr();
LABEL_171:
                sub_6C20((__int64)v9, (int)a2, v100, v97, v98, v99, (char)v118);
LABEL_172:
                sub_6C20((__int64)v9, (int)a2, v75, v76, v77, v78, (char)v118);
LABEL_173:
                sub_6C20((__int64)v9, (int)a2, v14, v15, v16, v17, (char)v118);
LABEL_174:
                sub_6C20((__int64)v9, (int)a2, v50, v51, v52, v53, (char)v118);
LABEL_175:
                sub_6C20((__int64)v9, (int)a2, v30, v31, v32, v33, (char)v118);
LABEL_176:
                sub_6C20((__int64)v9, (int)a2, v63, v64, v65, v66, (char)v118);
LABEL_177:
                sub_6C20((__int64)v9, (int)a2, v57, v58, v59, v60, (char)v118);
LABEL_178:
                sub_6C20((__int64)v9, (int)a2, v85, v86, v87, v88, (char)v118);
LABEL_179:
                sub_6C20((__int64)v9, (int)a2, v79, v80, v81, v82, (char)v118);
LABEL_180:
                sub_6C20((__int64)v9, (int)a2, v100, v97, v98, v99, (char)v118);
LABEL_181:
                sub_6C20((__int64)v9, (int)a2, v92, v93, v94, v95, (char)v118);
LABEL_182:
                v117 = (struct _Unwind_Exception *)sub_6C20((__int64)v9, (int)a2, v107, v108, v109, v110, (char)v118);
                sub_6DF0(v8, (int)a2, v3, v4, v5, v6);
                _Unwind_Resume(v117);
              }
              (*(void (**)(void))(qword_24798 + 984))();
            }
            free_idcv();
            LODWORD(a2) = idcv_attr;
            idcv_attr = next_idcv_attr();
            if ( !idcv_attr )
              goto LABEL_29;
          }
          if ( v121 )
          {
            if ( *v121 <= 0 )
              goto LABEL_160;
            (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v121);
          }
          v9 = (__int64 *)v125;
          free_idcv();
          goto LABEL_90;
        }
LABEL_29:
        v8 = *v7;
        *v7 = v18;
        v9 = v18;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v18);
        if ( v8 )
        {
          v9 = v8;
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v8);
        }
        if ( *v18 <= 0 )
          goto LABEL_175;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v18);
        free_idcv();
        return 1;
      }
      sub_78E0((__int64 *)&v121, 1);
      if ( !v121 )
        goto LABEL_92;
      LODWORD(a2) = 0;
      v101 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(qword_24798 + 728))(v121, 0);
      v102 = (__int64 *)v101;
      if ( v101 )
      {
        v9 = (__int64 *)v101;
        (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v101);
        if ( *v102 <= 0 )
          goto LABEL_167;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v102);
        LODWORD(a2) = 1;
        Error = PyW_GetError(0, 1);
        if ( !Error )
        {
          v9 = v121;
          if ( v121 )
          {
            if ( *v121 <= 0 )
              goto LABEL_162;
            (*(void (**)(void))(qword_24798 + 984))();
          }
          v18 = v102;
          goto LABEL_21;
        }
        v9 = v121;
        if ( !v121 )
        {
LABEL_143:
          v18 = v102;
LABEL_90:
          if ( *v18 <= 0 )
            goto LABEL_179;
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v18);
          goto LABEL_92;
        }
      }
      else
      {
        LODWORD(a2) = 1;
        PyW_GetError(0, 1);
        v9 = v121;
        if ( !v121 )
          goto LABEL_92;
      }
      if ( *v9 <= 0 )
        goto LABEL_164;
      (*(void (**)(void))(qword_24798 + 984))();
      if ( v102 )
        goto LABEL_143;
LABEL_92:
      v83 = -1;
LABEL_93:
      v120 = v83;
      free_idcv();
      return v120;
    case 7:
      if ( *(_QWORD *)a2 )
        return 0;
      v34 = *(_QWORD *)(a1 + 16);
      v35 = *(_QWORD *)(a1 + 8);
      a2 = (char *)((v34 == 0) + v34 - 1);
      if ( (a3 & 4) != 0 )
      {
        v36 = (*(__int64 (__fastcall **)(__int64, char *))(qword_24798 + 312))(v35, a2);
        v37 = *v7;
        v8 = (__int64 *)v36;
        *v7 = (__int64 *)v36;
        if ( v36 )
        {
          v9 = (__int64 *)v36;
          (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v36);
          if ( v37 )
          {
            v9 = v37;
            (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v37);
          }
          if ( *v8 <= 0 )
            goto LABEL_166;
          goto LABEL_52;
        }
        if ( !v37 )
          return 1;
      }
      else
      {
        v62 = (*(__int64 (__fastcall **)(__int64, char *))(qword_24798 + 960))(v35, a2);
        v37 = *v7;
        v8 = (__int64 *)v62;
        *v7 = (__int64 *)v62;
        if ( v62 )
        {
          v9 = (__int64 *)v62;
          (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v62);
          if ( v37 )
          {
            v9 = v37;
            (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v37);
          }
          if ( *v8 <= 0 )
            goto LABEL_176;
          goto LABEL_52;
        }
        if ( !v37 )
          return 1;
      }
      goto LABEL_147;
    case 8:
      if ( *(_QWORD *)a2 )
        return 0;
      a2 = "$valid$";
      v42 = (*(__int64 (__fastcall **)(_QWORD, const char *, _QWORD))(qword_24798 + 352))(
              *(_QWORD *)(a1 + 8),
              "$valid$",
              0);
      v37 = *v7;
      v8 = (__int64 *)v42;
      *v7 = (__int64 *)v42;
      if ( v42 )
      {
        v9 = (__int64 *)v42;
        (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v42);
        if ( v37 )
        {
          v9 = v37;
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v37);
        }
        if ( *v8 <= 0 )
          goto LABEL_161;
        goto LABEL_52;
      }
      if ( !v37 )
        return 1;
      goto LABEL_147;
    case 9:
      v47 = a3 & 2;
      v48 = *(_QWORD *)a2;
      if ( !(_DWORD)v47 )
      {
        if ( v48 )
        {
          v54 = sub_C290(v48);
          result = 0;
          if ( !v54 )
          {
            v55 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 664))(v8[1]);
            (*(void (__fastcall **)(_QWORD, const char *, __int64))(qword_24798 + 800))(
              *(_QWORD *)a2,
              "__idc_cvt_value__",
              v55);
            return 1;
          }
          return result;
        }
        sub_78E0((__int64 *)&v121, 0);
        if ( !v121 )
          return 0xFFFFFFFFLL;
        v67 = *(__int64 (__fastcall **)(__int64 *, char *, _QWORD))(qword_24798 + 728);
        a2 = (char *)(*(__int64 (__fastcall **)(__int64))(qword_24798 + 664))(v8[1]);
        v68 = v67(v121, a2, 0);
        v69 = *v7;
        v8 = (__int64 *)v68;
        *v7 = (__int64 *)v68;
        if ( v68 )
        {
          v9 = (__int64 *)v68;
          (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v68);
          if ( v69 )
          {
            v9 = v69;
            (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v69);
          }
          if ( *v8 <= 0 )
            goto LABEL_165;
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v8);
        }
        else if ( v69 )
        {
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v69);
        }
        LODWORD(a2) = 1;
        v74 = PyW_GetError(0, 1);
        v9 = v121;
        if ( !v74 && *v7 )
        {
          if ( v121 )
          {
            if ( *v121 <= 0 )
              goto LABEL_168;
            (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v121);
          }
          return 1;
        }
        if ( !v121 )
          return 0xFFFFFFFFLL;
        if ( *v121 <= 0 )
          goto LABEL_172;
        goto LABEL_132;
      }
      if ( v48 )
        goto LABEL_158;
      v49 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(qword_24798 + 688))(v8[1], a2, v47);
      v37 = *(__int64 **)a2;
      v8 = (__int64 *)v49;
      *(_QWORD *)a2 = v49;
      if ( v49 )
      {
        v9 = (__int64 *)v49;
        (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v49);
        if ( v37 )
        {
          v9 = v37;
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v37);
        }
        if ( *v8 <= 0 )
          goto LABEL_174;
        goto LABEL_52;
      }
      if ( !v37 )
        return 1;
      goto LABEL_147;
    case 0xA:
      v9 = *(__int64 **)a2;
      if ( *(_QWORD *)a2 )
        goto LABEL_3;
      sub_78E0((__int64 *)&v121, 2);
      if ( !v121 )
        return 0xFFFFFFFFLL;
      a2 = *(char **)(qword_24798 + 1136);
      v89 = (*(__int64 (__fastcall **)(__int64 *, char *, _QWORD))(qword_24798 + 728))(v121, a2, 0);
      v90 = *v7;
      v91 = (__int64 *)v89;
      *v7 = (__int64 *)v89;
      if ( v89 )
      {
        v9 = (__int64 *)v89;
        (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v89);
        if ( v90 )
        {
          v9 = v90;
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v90);
        }
        if ( *v91 <= 0 )
          goto LABEL_181;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v91);
      }
      else if ( v90 )
      {
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v90);
      }
      LODWORD(a2) = 1;
      v9 = nullptr;
      v96 = PyW_GetError(0, 1);
      v100 = v96;
      if ( (_BYTE)v96 || (v9 = *v7) == nullptr )
      {
        if ( v121 )
        {
          if ( *v121 <= 0 )
            goto LABEL_171;
LABEL_132:
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v121);
        }
        return 0xFFFFFFFFLL;
      }
      if ( v121 )
      {
        if ( *v121 <= 0 )
          goto LABEL_180;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v121);
        v9 = *v7;
      }
LABEL_3:
      if ( (unsigned int)sub_C290((__int64)v9) != 1 )
        return 0xFFFFFFFFLL;
      v8 = (__int64 *)deref_idcv();
      if ( !v8 )
        return 0xFFFFFFFFLL;
      PyW_TryGetAttrString(&v121, *v7, "__idc_cvt_value__");
      if ( v121 )
      {
        a2 = (char *)&v121;
        result = idcvar_to_pyvar(v8, &v121, 0);
        if ( (_DWORD)result == 1 )
          goto LABEL_127;
        v111 = v121;
        v121 = nullptr;
        if ( v111 )
          (*(void (**)(void))(qword_24798 + 984))();
      }
      a2 = (char *)&v121;
      if ( (unsigned int)idcvar_to_pyvar(v8, &v121, 0) == 1 )
      {
        a2 = "__idc_cvt_value__";
        (*(void (__fastcall **)(__int64 *, const char *, __int64 *))(qword_24798 + 800))(*v7, "__idc_cvt_value__", v121);
        v9 = v121;
        if ( v121 )
        {
          if ( *v121 <= 0 )
            goto LABEL_163;
          (*(void (**)(void))(qword_24798 + 984))();
        }
        return 1;
      }
      result = 0xFFFFFFFFLL;
LABEL_127:
      v9 = v121;
      if ( v121 )
      {
        if ( *v121 <= 0 )
          goto LABEL_182;
        v119 = result;
        (*(void (**)(void))(qword_24798 + 984))();
        return v119;
      }
      return result;
    default:
      v11 = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0;
      if ( v11 )
        (*(void (**)(void))(qword_24798 + 984))();
      return 0xFFFFFFFFLL;
  }
}

