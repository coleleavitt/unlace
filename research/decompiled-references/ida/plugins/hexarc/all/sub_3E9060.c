__int64 __fastcall sub_3E9060(__int64 a1, double a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  bool v6; // cc
  int v8; // ebp
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rcx
  __int16 v11; // si
  unsigned __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r12
  int v22; // r14d
  unsigned int v23; // eax
  unsigned int v24; // r12d
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v29; // rax
  unsigned __int8 *v30; // r15
  __int64 v31; // r12
  int v32; // eax
  __int64 v33; // r13
  int v34; // eax
  unsigned __int16 v35; // ax
  __int64 v36; // rbp
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 *v40; // r10
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rbp
  int v44; // r12d
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rbp
  __int64 v51; // rax
  unsigned __int8 *v52; // r13
  bool v53; // cf
  int v54; // eax
  __int64 v55; // rax
  unsigned __int64 v56; // r12
  __int16 v57; // ax
  int v58; // r12d
  unsigned __int64 v59; // rbp
  int v60; // eax
  __int64 v61; // r13
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r12
  bool v66; // zf
  __int64 v67; // r12
  int v68; // eax
  __int64 v69; // rdx
  int v70; // r12d
  int dtype_size; // eax
  unsigned int v72; // eax
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rbp
  __int64 v79; // rbp
  int v80; // eax
  __int64 v81; // rax
  unsigned __int64 v82; // rbp
  int v83; // eax
  __int64 v84; // r12
  int v85; // eax
  __int64 v86; // rax
  unsigned int *v87; // rax
  __int64 v88; // rbp
  int v89; // eax
  __int64 v90; // rax
  __int64 v91; // rcx
  _QWORD *v92; // rdi
  __int64 v93; // r12
  _QWORD *v94; // r14
  __int64 v95; // r15
  __int64 v96; // rdx
  unsigned __int8 *v97; // r13
  __int64 v98; // rdi
  unsigned __int64 v99; // [rsp+0h] [rbp-78h]
  __int64 v100; // [rsp+8h] [rbp-70h]
  _QWORD v101[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v102; // [rsp+20h] [rbp-58h] BYREF
  __int64 v103; // [rsp+28h] [rbp-50h]
  unsigned __int64 v104; // [rsp+38h] [rbp-40h]

  v6 = *(_WORD *)(a1 + 48) <= 4u;
  v104 = __readfsqword(0x28u);
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 784) == -1 )
    {
      v9 = *(_QWORD *)(a1 + 416);
      v8 = 0;
      if ( v9 != -1 )
      {
LABEL_5:
        if ( *(_BYTE *)(a1 + 384) )
        {
          v24 = 0;
          if ( v9 < *(_QWORD *)(a1 + 408) )
            return sub_3E8E80(a1, 1, a4, a5, a6, a2);
          return v24;
        }
        v10 = *(_QWORD *)(a1 + 40);
        if ( v10 < *(_QWORD *)(a1 + 856) )
        {
          if ( !under_debugger )
            sub_37B760(0xCC14u, a2);
          goto LABEL_150;
        }
        v11 = *(_WORD *)(a1 + 48);
        if ( v11 == 15 || v11 == 18 || v11 == 14 || v11 == 17 )
        {
          v12 = *(_QWORD *)(a1 + 408);
          if ( v9 >= v12 )
          {
            v40 = *(__int64 **)(a1 + 912);
            a4 = (__int64)&v40[4 * *(_QWORD *)(a1 + 920)];
            if ( v40 != (__int64 *)a4 )
              goto LABEL_67;
            if ( !v8 )
            {
              if ( v9 < v12 )
                goto LABEL_50;
              v30 = nullptr;
              goto LABEL_129;
            }
            v30 = nullptr;
          }
          else
          {
            v30 = nullptr;
            if ( !v8 )
            {
              if ( v9 >= v12 )
                goto LABEL_116;
              goto LABEL_50;
            }
          }
        }
        else
        {
          if ( (unsigned __int16)(v11 - 41) > 2u && v11 != 16 )
          {
            if ( !under_debugger )
              sub_37B760(0xCC12u, a2);
            goto LABEL_150;
          }
          v12 = *(_QWORD *)(a1 + 408);
          if ( v9 < v12 )
          {
            if ( v11 == 16 )
            {
              if ( !under_debugger )
                sub_37B760(0xCDBFu, a2);
              goto LABEL_150;
            }
            v30 = nullptr;
            goto LABEL_70;
          }
          v40 = *(__int64 **)(a1 + 912);
          a4 = (__int64)&v40[4 * *(_QWORD *)(a1 + 920)];
          if ( (__int64 *)a4 == v40 )
          {
            v30 = nullptr;
            if ( v11 == 16 )
              goto LABEL_106;
            goto LABEL_70;
          }
LABEL_67:
          while ( 1 )
          {
            v30 = (unsigned __int8 *)v40;
            if ( v10 == *(_QWORD *)(*v40 + 72) )
              break;
            v40 += 4;
            if ( (__int64 *)a4 == v40 )
            {
              v30 = nullptr;
              break;
            }
          }
          if ( v11 == 16 )
          {
LABEL_106:
            if ( v8 )
            {
              v70 = sub_3E6620(a1, v8, 0);
              dtype_size = get_dtype_size();
              sub_1CF210(a1, 4u, dtype_size, v70, 0x3BEA45E214ADDC55LL, 7, 0);
              v61 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              v65 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              v72 = *(_DWORD *)(v65 + 72);
              v101[0] = 0xFFFFFFFF00000007LL;
              v101[1] = v72;
              LODWORD(v103) = sub_3E6620(a1, v8, 1);
              v102 = 0x100000001LL;
              sub_1CF350(a1, 42, (unsigned __int8 *)&v102, nullptr, (unsigned __int8 *)v101);
              sub_1166E0((__int64)&v102);
              sub_1166E0((__int64)v101);
            }
            else
            {
              sub_1CF210(a1, 3u, 1, 0, 0x3BEA45E214ADDC55LL, 7, 0);
              v61 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              v65 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
            }
            *(_QWORD *)(a1 + 16) = v61;
            if ( (unsigned int)sub_3E7480(a1, 0, a2, v62, v63, v64) != 1 )
            {
              if ( !under_debugger )
                sub_37B760(0xCDC0u, a2);
              goto LABEL_150;
            }
            v66 = *(_BYTE *)(a1 + 792) == 0;
            *(_QWORD *)(a1 + 16) = v65;
            if ( !v66 )
            {
              v67 = *(_QWORD *)(a1 + 400);
              v68 = get_dtype_size();
              sub_1CF210(a1, 0x2Au, v68, 7, 0x3BEA45E214ADDC55LL, v67, 0);
              goto LABEL_111;
            }
            goto LABEL_72;
          }
          if ( (unsigned __int16)(v11 - 41) <= 2u )
          {
LABEL_70:
            v24 = sub_3E7480(a1, 1, a2, a4, v10, a6);
            if ( v24 )
              return v24;
            if ( !*(_BYTE *)(a1 + 792) )
              goto LABEL_72;
            if ( !under_debugger )
              sub_37B760(0xCC4Au, a2);
LABEL_150:
            BUG();
          }
          if ( !v8 )
          {
            if ( v9 < v12 )
              goto LABEL_50;
LABEL_129:
            sub_1CF210(a1, 3u, 1, 0, 0x3BEA45E214ADDC55LL, 7, 0);
            v41 = *(_QWORD *)(a1 + 408);
            v9 = *(_QWORD *)(a1 + 416);
LABEL_73:
            if ( v9 >= v41 )
            {
              if ( v30 )
              {
                sub_1CF350(a1, 55, v30 + 8, nullptr, nullptr);
                v42 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
                *(_QWORD *)(a1 + 16) = v42;
                v43 = *(_QWORD *)v30;
                v44 = *(_DWORD *)(v42 + 72);
                sub_1166E0(*(_QWORD *)v30 + 64LL);
                *(_BYTE *)(v43 + 64) = 7;
                *(_DWORD *)(v43 + 72) = v44;
LABEL_76:
                if ( *(_WORD *)(a1 + 48) == 16 )
                {
                  v24 = 0;
                  v82 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL)
                      & (16LL * *(_QWORD *)(a1 + 24) + (*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFFELL));
                  v83 = get_dtype_size();
                  sub_1CF210(a1, 0x37u, v83, v82, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
                }
                else
                {
                  v24 = sub_3E7480(a1, 0, a2, v45, v46, v47);
                  if ( v24 == 1 )
                  {
                    v77 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
                    v78 = *(_QWORD *)(a1 + 416) + *(unsigned __int16 *)(a1 + 450);
                    *(_QWORD *)(a1 + 16) = v77;
                    v79 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL) & v78;
                    v80 = get_dtype_size();
                    sub_1CF210(a1, 0x37u, v80, v79, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
                  }
                }
                if ( v30 )
                {
                  sub_1166E0((__int64)(v30 + 8));
                  v48 = *(_QWORD *)(a1 + 920);
                  v49 = (__int64)(v30 + 8);
                  v50 = ((*(_QWORD *)(a1 + 912) + 32 * v48 - (__int64)v30) >> 5) - 2;
                  if ( v50 >= 0 )
                  {
                    while ( 1 )
                    {
                      v51 = *((_QWORD *)v30 + 4);
                      v52 = v30 + 40;
                      v30 += 32;
                      *((_QWORD *)v30 - 4) = v51;
                      sub_11D380(v49, v52);
                      *((_DWORD *)v30 - 2) = *((_DWORD *)v30 + 6);
                      sub_1166E0((__int64)v52);
                      v53 = v50-- == 0;
                      if ( v53 )
                        break;
                      v49 = (__int64)(v30 + 8);
                    }
                    v48 = *(_QWORD *)(a1 + 920);
                  }
                  *(_QWORD *)(a1 + 920) = v48 - 1;
                }
                return v24;
              }
LABEL_116:
              v30 = nullptr;
              v73 = get_dtype_size();
              v74 = sub_1CF210(a1, 0x37u, v73, v9, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
              *(_DWORD *)(a1 + 904) = v8;
              v75 = *(_QWORD *)(a1 + 40);
              *(_QWORD *)(a1 + 880) = v74;
              v76 = sub_61A50(*(_QWORD *)(a1 + 8), v75, 2);
              *(_QWORD *)(a1 + 16) = v76;
              LODWORD(v76) = *(_DWORD *)(v76 + 72);
              *(_BYTE *)(a1 + 888) = 7;
              *(_DWORD *)(a1 + 896) = v76;
              goto LABEL_76;
            }
LABEL_50:
            v24 = sub_3E8E80(a1, 1, a4, v10, a6, a2);
            if ( !v24 )
            {
              v35 = *(_WORD *)(a1 + 48);
              if ( v35 != 43 && v35 > 4u && (unsigned __int8)((*(_BYTE *)(a1 + 52) & 0x1F) - 1) <= 0xEu )
              {
                v36 = *(_QWORD *)(a1 + 400);
                v37 = get_dtype_size();
                sub_1CF210(a1, 0x2Au, v37, 7, 0x3BEA45E214ADDC55LL, v36, 0);
                *(_QWORD *)(a1 + 16) = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              }
              return sub_3E7480(a1, 0, a2, a4, a5, a6);
            }
            return v24;
          }
        }
        v31 = (int)sub_3E6620(a1, v8, 1);
        v32 = get_dtype_size();
        sub_1CF210(a1, 4u, v32, v31, 0x3BEA45E214ADDC55LL, 7, 0);
        if ( *(_BYTE *)(a1 + 792) )
        {
          v33 = *(_QWORD *)(a1 + 400);
          v34 = get_dtype_size();
          sub_1CF210(a1, 0x2Au, v34, v31, 0x3BEA45E214ADDC55LL, v33, 0);
LABEL_111:
          *(_QWORD *)(a1 + 16) = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 416), 2);
        }
LABEL_72:
        v41 = *(_QWORD *)(a1 + 408);
        v9 = *(_QWORD *)(a1 + 416);
        goto LABEL_73;
      }
LABEL_38:
      v24 = sub_3E7480(a1, 0, a2, a4, a5, a6);
      if ( v24 <= 1 )
      {
        v29 = *(_QWORD *)(a1 + 400);
        if ( *(_QWORD *)(a1 + 848) == v29 )
        {
          v87 = *(unsigned int **)(*(_QWORD *)(a1 + 16) + 56LL);
          if ( v87 && sub_327800(*v87, 1) )
            *(_QWORD *)(a1 + 16) = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
          v88 = *(_QWORD *)(a1 + 856);
          v89 = get_dtype_size();
          sub_1CF210(a1, 0x37u, v89, v88, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
        }
        else
        {
          if ( *(_QWORD *)(a1 + 856) != v29 )
            return v24;
          *(_OWORD *)(a1 + 848) = 0;
        }
        return 1;
      }
      return v24;
    }
    v8 = 0;
    goto LABEL_19;
  }
  v8 = *(_DWORD *)(a1 + 52) & 0x1F;
  if ( (*(_DWORD *)(a1 + 52) & 0x10) == 0 )
  {
    v8 = (unsigned __int8)v8;
    if ( *(_QWORD *)(a1 + 784) == -1 )
    {
LABEL_4:
      v9 = *(_QWORD *)(a1 + 416);
      if ( v9 != -1 )
        goto LABEL_5;
      if ( v8 )
      {
        v57 = *(_WORD *)(a1 + 48);
        if ( v57 == 16 || (a5 = *(_QWORD *)(a1 + 856), *(_QWORD *)(a1 + 40) >= a5) && v57 != 43 )
        {
          v58 = sub_3E6620(a1, v8, 1);
          if ( *(_WORD *)(a1 + 48) == 16 )
            v59 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL)
                & (16LL * *(_QWORD *)(a1 + 24) + (*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFFELL));
          else
            v59 = sub_3E3E40((_QWORD *)a1, v8);
          v60 = get_dtype_size();
          sub_1CF210(a1, 0x2Au, v60, v58, 0x3BEA45E214ADDC55LL, v59, 0);
          *(_QWORD *)(a1 + 16) = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
        }
      }
      goto LABEL_38;
    }
LABEL_19:
    v13 = sub_11C2E0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL));
    if ( v13 )
    {
      if ( !under_debugger )
        sub_37B760(0xCF02u, a2);
      goto LABEL_150;
    }
    v14 = *(_QWORD *)(a1 + 16);
    v15 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(v14 + 32) != v15 )
    {
      if ( !under_debugger )
        sub_37B760(0xCF03u, a2);
      goto LABEL_150;
    }
    if ( (*(_BYTE *)(v14 + 24) & 2) != 0 )
    {
      if ( !under_debugger )
        sub_37B760(0xCF04u, a2);
      goto LABEL_150;
    }
    v16 = *(_QWORD *)(a1 + 880);
    if ( v16 )
    {
      if ( *(_DWORD *)v16 != 55
        || *(_BYTE *)(v16 + 32) != 6
        || v15 != *(_QWORD *)(v16 + 40)
        || *(_DWORD *)(a1 + 904) == 16 )
      {
        if ( !under_debugger )
          sub_37B760(0xCC13u, a2);
        goto LABEL_150;
      }
    }
    else if ( (unsigned __int8)netnode_charval()
           || (v54 = *(unsigned __int16 *)(a1 + 48), a4 = (unsigned int)(v54 - 14), (unsigned __int16)(v54 - 14) <= 4u)
           || (_WORD)v54 == 65
           || (unsigned __int16)(v54 - 41) <= 2u
           || *(_WORD *)(a1 + 50) > 4u )
    {
      if ( !*(_QWORD *)(a1 + 880) )
        goto LABEL_4;
    }
    else
    {
      v55 = *(_QWORD *)(a1 + 920);
      v56 = *(_QWORD *)(a1 + 928);
      a4 = v55 + 1;
      if ( v56 < v55 + 1 )
      {
        v90 = qvector_reserve();
        v91 = *(_QWORD *)(a1 + 928);
        v92 = *(_QWORD **)(a1 + 912);
        *(_QWORD *)(a1 + 928) = v56;
        v99 = v90;
        v93 = v90;
        v100 = v91;
        v94 = v92;
        v95 = *(_QWORD *)(a1 + 920) - 1LL;
        if ( v95 >= 0 )
        {
          do
          {
            v96 = *v94;
            v97 = (unsigned __int8 *)(v94 + 1);
            v98 = v93 + 8;
            v94 += 4;
            v93 += 32;
            *(_QWORD *)(v93 - 32) = v96;
            sub_11D380(v98, v97);
            *(_DWORD *)(v93 - 8) = *((_DWORD *)v94 - 2);
            sub_1166E0((__int64)v97);
            v53 = v95-- == 0;
          }
          while ( !v53 );
        }
        qfree();
        *(_QWORD *)(a1 + 912) = v99;
        *(_QWORD *)(a1 + 928) = v100;
        v55 = *(_QWORD *)(a1 + 920);
      }
      else
      {
        a5 = *(_QWORD *)(a1 + 912);
        v99 = a5;
      }
      v13 = 32 * v55 + v99;
      *(_QWORD *)(v13 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)v13 = 0;
      *(_QWORD *)(v13 + 16) = 0;
      *(_DWORD *)(v13 + 24) = 16;
      ++*(_QWORD *)(a1 + 920);
      if ( !(*(_QWORD *)(a1 + 880) | v13) )
        goto LABEL_4;
    }
    sub_1CF210(a1, 3u, 1, 1, 0x3BEA45E214ADDC55LL, 7, 0);
    v17 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
    v21 = *(_QWORD *)(a1 + 880);
    *(_QWORD *)(a1 + 16) = v17;
    v22 = *(_DWORD *)(v17 + 72);
    if ( v21 )
    {
      sub_1166E0(v21 + 32);
      *(_BYTE *)(v21 + 32) = 7;
      *(_DWORD *)(v21 + 40) = v22;
    }
    else
    {
      *(_BYTE *)(v13 + 8) = 7;
      *(_DWORD *)(v13 + 16) = v22;
    }
    v23 = sub_3E8E80(a1, 0, v18, v19, v20, a2);
    v24 = v23;
    if ( v23 )
    {
      if ( v23 == 1 )
        v24 = -32;
      if ( v13 )
      {
        v38 = *(_QWORD *)(a1 + 920);
        if ( v38 )
        {
          v81 = v38 - 1;
          *(_QWORD *)(a1 + 920) = v81;
          sub_1166E0(*(_QWORD *)(a1 + 912) + 32 * v81 + 8);
        }
      }
      v39 = *(_QWORD *)(a1 + 880);
    }
    else
    {
      v25 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 784);
      *(_QWORD *)(a1 + 784) = v25;
      v26 = get_dtype_size();
      sub_1CF210(a1, 6u, v26, 7, 0x3BEA45E214ADDC55LL, 7, 0);
      if ( *(_QWORD *)(a1 + 880) )
      {
        if ( !*(_DWORD *)(a1 + 904) )
        {
          v27 = *(_QWORD *)(a1 + 40);
          v24 = 1;
          *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 784);
          *(_QWORD *)(a1 + 784) = v27;
LABEL_33:
          *(_QWORD *)(a1 + 880) = 0;
          sub_1166E0(a1 + 888);
          return v24;
        }
        v103 = 7;
        v102 = 0x100000001LL;
        sub_1CF350(a1, 42, (unsigned __int8 *)&v102, nullptr, (unsigned __int8 *)(a1 + 888));
        sub_1166E0((__int64)&v102);
        v39 = *(_QWORD *)(a1 + 880);
      }
      else
      {
        v84 = *(_QWORD *)(a1 + 40);
        v85 = get_dtype_size();
        v86 = sub_1CF210(a1, 0x2Au, v85, 7, 0x3BEA45E214ADDC55LL, v84, 0);
        *(_DWORD *)(v13 + 24) = v8;
        *(_QWORD *)v13 = v86;
        v39 = *(_QWORD *)(a1 + 880);
      }
      v69 = *(_QWORD *)(a1 + 40);
      v24 = 1;
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 784);
      *(_QWORD *)(a1 + 784) = v69;
    }
    if ( !v39 )
      return v24;
    goto LABEL_33;
  }
  return sub_3E7480(a1, 0, a2, a4, a5, a6);
}

