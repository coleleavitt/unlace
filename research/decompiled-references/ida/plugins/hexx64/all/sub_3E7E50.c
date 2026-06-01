unsigned __int64 __fastcall sub_3E7E50(__m128i *a1, __m128i *a2, __int64 a3, __int64 a4, __m128 a5)
{
  _DWORD *v5; // rax
  void *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  _DWORD *v9; // rax
  _QWORD *exception; // rdi
  _DWORD *v11; // rax
  __int64 v12; // r12
  __m128i *v13; // rbp
  char v14; // r13
  int v15; // r12d
  int v16; // r13d
  __int16 v17; // ax
  __int16 v18; // ax
  __int32 v19; // ecx
  int v20; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __m128i *v24; // rax
  __m128i *v25; // r12
  __m128i *v26; // r13
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int8 v29; // dl
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // r12d
  __int16 v33; // ax
  __int16 v34; // ax
  __int16 v35; // ax
  __m128i *v36; // r14
  __int32 v37; // eax
  __int32 v38; // r12d
  __int32 v39; // r12d
  __int32 v40; // r12d
  __int16 v41; // ax
  __int64 v42; // r12
  char v43; // al
  int v44; // r14d
  __int64 v45; // r12
  unsigned __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __m128i *v49; // rax
  __m128i *v50; // r12
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int16 v55; // ax
  __int64 v56; // r12
  __int64 v57; // r14
  __int64 v58; // rax
  __int16 v59; // ax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __m128i *v63; // rax
  __m128i *v64; // r12
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int16 v67; // ax
  __int64 name_ea; // r12
  __int64 v69; // rax
  int v70; // ecx
  _QWORD *v71; // rax
  __int16 v72; // ax
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int16 v77; // ax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int16 v82; // ax
  __int16 v83; // ax
  __int64 v84; // rax
  __m128i *v85; // rsi
  __int64 v86; // rdx
  __int64 v87; // rcx
  int v88; // r12d
  __int64 v89; // r14
  __int64 v90; // rdx
  __int64 v91; // rcx
  __m128i *v92; // rax
  size_t v93; // rax
  size_t v94; // r12
  __int64 v95; // rcx
  size_t v96; // [rsp+8h] [rbp-100h]
  __int128 v97; // [rsp+20h] [rbp-E8h] BYREF
  void *v98; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v99; // [rsp+38h] [rbp-D0h]
  __int64 v100; // [rsp+48h] [rbp-C0h]
  __int128 v101; // [rsp+50h] [rbp-B8h]
  __int128 v102; // [rsp+60h] [rbp-A8h]
  __int64 v103; // [rsp+90h] [rbp-78h]
  int v104; // [rsp+98h] [rbp-70h]
  __int64 v105; // [rsp+A0h] [rbp-68h]
  char v106; // [rsp+A8h] [rbp-60h]
  __m128i v107; // [rsp+B0h] [rbp-58h] BYREF
  __int32 v108; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v109; // [rsp+C8h] [rbp-40h]

  v12 = a1[67].m128i_u16[2];
  v109 = __readfsqword(0x28u);
  v13 = a2;
  if ( (unsigned __int16)v12 <= 0x5Bu )
  {
    if ( (unsigned __int16)v12 <= 1u )
      goto LABEL_148;
    v14 = a3;
    switch ( v12 )
    {
      case 2LL:
        v36 = a1 + 2;
        v37 = sub_122A60(*(_DWORD **)(a1->m128i_i64[0] + 112), (__int64)a1[2].m128i_i64, nullptr);
        a2->m128i_i8[0] = 1;
        a2->m128i_i32[2] = v37;
        if ( *(_DWORD *)(sub_339CA0() + 52) == v37
          || (v38 = a2->m128i_i32[2], v38 == *(_DWORD *)(sub_339CA0() + 56))
          || (v39 = a2->m128i_i32[2], v39 == *(_DWORD *)(sub_339CA0() + 64)) )
        {
          a2->m128i_i32[2] = -1;
LABEL_115:
          v85 = a1 + 2;
          v88 = sub_3E7C00((__int64)a1, v36->m128i_i8);
          if ( v88 == -1 )
          {
            v85 = a1 + 2;
            v88 = sub_3E7CB0((__int64)a1, v36->m128i_i8);
          }
          v89 = a1[68].m128i_i64[0];
          v13->m128i_i8[0] = 9;
          v58 = j__qalloc_or_throw(24, (__int64)v85, v86, v87);
          *(_QWORD *)v58 = v89;
          *(_QWORD *)(v58 + 8) = 0;
          *(_DWORD *)(v58 + 16) = v88;
          goto LABEL_62;
        }
        v40 = a2->m128i_i32[2];
        if ( v40 <= *(_DWORD *)(sub_339CA0() + 72) )
        {
          if ( a2->m128i_i32[2] != -1 )
          {
LABEL_40:
            sub_3E6730(a1, v13->m128i_i8, *(double *)a5.m128_u64);
            v34 = a1[67].m128i_i16[2];
            goto LABEL_41;
          }
          goto LABEL_115;
        }
        exception = __cxa_allocate_exception(8u);
        *exception = "this register cannot be used in rasm";
        goto LABEL_145;
      case 33LL:
        v32 = sub_3E6140(a1);
        if ( v32 )
          goto LABEL_139;
        v35 = a1[67].m128i_i16[2];
        if ( v35 == 4 )
        {
          a1[67].m128i_i16[2] = 2;
        }
        else if ( v35 != 2 )
        {
          goto LABEL_151;
        }
        a2->m128i_i8[0] = 11;
        a2->m128i_i64[1] = qstrdup();
        return sub_3E65E0(a1);
      case 35LL:
        sub_3E65E0(a1);
        if ( a1[67].m128i_i16[2] != 40 )
        {
          v44 = *(_DWORD *)(sub_339CA0() + 80);
          v45 = sub_3E6800(a1);
          v46 = (unsigned __int64 *)sub_339CA0();
          sub_120A10((__int64)a2, v46, v45, v44, -1, 0);
          v34 = a1[67].m128i_i16[2];
          goto LABEL_41;
        }
        sub_3E6880(a1);
        a2->m128i_i8[0] = 13;
        v92 = (__m128i *)j__qalloc_or_throw(20, (__int64)&v107, v90, v91);
        *v92 = _mm_load_si128(&v107);
        v92[1].m128i_i32[0] = v108;
        a2->m128i_i64[1] = (__int64)v92;
        goto LABEL_68;
      case 36LL:
        v32 = sub_3E6140(a1);
        if ( v32 )
          goto LABEL_139;
        v67 = a1[67].m128i_i16[2];
        switch ( v67 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            goto LABEL_79;
          case 3:
            name_ea = a1[66].m128i_i64[0];
            sub_3E65E0(a1);
LABEL_81:
            v69 = *(_QWORD *)(a1->m128i_i64[0] + 112);
            a2->m128i_i8[0] = 6;
            v70 = 8 * *(_DWORD *)(v69 + 84);
            if ( (unsigned __int64)v70 <= 0x3F )
              name_ea &= ~(-1LL << v70);
            a2->m128i_i64[1] = name_ea;
            v34 = a1[67].m128i_i16[2];
LABEL_41:
            if ( v14 )
            {
              if ( v34 == 46 )
              {
                v32 = sub_3E6140(a1);
                if ( !v32 )
                {
                  v41 = a1[67].m128i_i16[2];
                  if ( v41 != 4 )
                  {
                    if ( v41 == 3 )
                    {
                      v42 = a1[66].m128i_i64[0];
                      if ( v42 != (int)v42 )
                        sub_5C0B4();
                      sub_3E65E0(a1);
                      v43 = v13->m128i_i8[0];
                      v13->m128i_i32[1] = v42;
                      if ( v43 == 4 )
                      {
                        *(_DWORD *)(v13->m128i_i64[1] + 68) = v42;
                      }
                      else if ( v43 == 13 )
                      {
                        *(_DWORD *)(v13->m128i_i64[1] + 16) = v42;
                      }
                      return v109 - __readfsqword(0x28u);
                    }
LABEL_151:
                    sub_5C092();
                  }
LABEL_150:
                  a1[67].m128i_i16[2] = 2;
                  goto LABEL_151;
                }
                goto LABEL_139;
              }
              goto LABEL_148;
            }
            goto LABEL_29;
          case 2:
LABEL_79:
            name_ea = get_name_ea();
            if ( name_ea == -1 )
            {
              exception = __cxa_allocate_exception(8u);
              *exception = "No such global variable";
LABEL_145:
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
            }
            sub_3E6730(a1, a2->m128i_i8, *(double *)a5.m128_u64);
            goto LABEL_81;
        }
        goto LABEL_148;
      case 37LL:
        v32 = sub_3E6140(a1);
        if ( v32 )
          goto LABEL_139;
        v55 = a1[67].m128i_i16[2];
        switch ( v55 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            break;
          case 2:
            break;
          case 3:
            v56 = a1[66].m128i_i64[0];
LABEL_61:
            v57 = a1[68].m128i_i64[0];
            v13->m128i_i8[0] = 5;
            v58 = j__qalloc_or_throw(16, (__int64)a2, v53, v54);
            *(_QWORD *)v58 = v57;
            *(_QWORD *)(v58 + 8) = v56;
LABEL_62:
            v13->m128i_i64[1] = v58;
            goto LABEL_40;
          default:
LABEL_148:
            v9 = __cxa_allocate_exception(4u);
            *v9 = 47;
            v6 = v9;
            goto LABEL_140;
        }
        sub_1CE9E0(a1[68].m128i_i64[0]);
        if ( !(unsigned __int8)get_func_frame() )
        {
          v8 = __cxa_allocate_exception(8u);
          *v8 = "Missing function frame";
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'char const*, nullptr);
        }
        a5.m128_u64[0] = 0;
        v98 = nullptr;
        v97 = 0;
        v100 = 0;
        v103 = 1;
        v104 = -1;
        v105 = 0;
        v106 = 0;
        v99 = 0;
        v101 = 0;
        v102 = 0;
        v93 = strlen(a1[2].m128i_i8);
        v94 = v93;
        if ( v93 )
        {
          v96 = v93 + 1;
          v98 = (void *)qvector_reserve((__int64)&v98, 0, v93 + 1, 1);
          *(_QWORD *)&v99 = v96;
          memmove(v98, &a1[2], v94);
          *((_BYTE *)v98 + v94) = 0;
        }
        if ( (unsigned int)find_tinfo_udt_member() == -1 )
        {
          v7 = __cxa_allocate_exception(8u);
          *v7 = "No such stack variable";
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'char const*, nullptr);
        }
        a2 = (__m128i *)((unsigned __int64)v97 >> 3);
        v56 = sub_1CFDD0(a1[68].m128i_i64[0], (unsigned __int64)v97 >> 3);
        clear_tinfo_t();
        if ( v100 )
        {
          *(_QWORD *)&v101 = 0;
          qfree(v100);
        }
        if ( v98 )
        {
          *(_QWORD *)&v99 = 0;
          qfree((__int64)v98);
        }
        clear_tinfo_t();
        goto LABEL_61;
      case 38LL:
        v32 = sub_3E6140(a1);
        if ( v32 )
          goto LABEL_139;
        v77 = a1[67].m128i_i16[2];
        if ( v77 == 4 )
          goto LABEL_150;
        if ( v77 != 40 )
          goto LABEL_151;
        sub_3E65E0(a1);
        sub_3E7E50(a1, a2, 0, v78, a5);
        v79 = sub_339CA0();
        sub_11C950((unsigned __int8 *)a2, v79, v80, v81, *(double *)a5.m128_u64);
        if ( a1[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3E65E0(a1);
        v34 = a1[67].m128i_i16[2];
        if ( v34 != 60 )
          goto LABEL_41;
        v32 = sub_3E6140(a1);
        if ( v32 )
          goto LABEL_139;
        v82 = a1[67].m128i_i16[2];
        if ( v82 == 4 )
        {
          a1[67].m128i_i16[2] = 2;
          goto LABEL_142;
        }
        if ( v82 == 3 )
        {
          *(_DWORD *)(a2->m128i_i64[1] + 16) = sub_3E7310(a1);
          v82 = a1[67].m128i_i16[2];
        }
        if ( v82 != 47 )
          goto LABEL_142;
        v32 = sub_3E6140(a1);
        if ( v32 )
          goto LABEL_139;
        v83 = a1[67].m128i_i16[2];
        if ( v83 == 4 )
        {
          a1[67].m128i_i16[2] = 2;
          v84 = a2->m128i_i64[1];
          if ( *(int *)(v84 + 16) >= 0 )
            goto LABEL_142;
        }
        else
        {
          if ( v83 == 3 )
            *(_DWORD *)(a2->m128i_i64[1] + 20) = sub_3E7310(a1);
          v84 = a2->m128i_i64[1];
          if ( *(int *)(v84 + 16) >= 0 )
            goto LABEL_107;
        }
        if ( *(int *)(v84 + 20) < 0 )
          goto LABEL_148;
LABEL_107:
        if ( a1[67].m128i_i16[2] == 62 )
        {
          v32 = sub_3E6140(a1);
          if ( !v32 )
          {
            v34 = a1[67].m128i_i16[2];
            if ( v34 != 4 )
              goto LABEL_41;
            a1[67].m128i_i16[2] = 2;
LABEL_111:
            if ( !v14 )
            {
              v34 = a1[67].m128i_i16[2];
LABEL_29:
              if ( v34 != 46 )
                return v109 - __readfsqword(0x28u);
              goto LABEL_148;
            }
            goto LABEL_148;
          }
LABEL_139:
          v5 = __cxa_allocate_exception(4u);
          *v5 = v32;
          v6 = v5;
          goto LABEL_140;
        }
LABEL_142:
        sub_5C092();
      case 40LL:
        sub_3E65E0(a1);
        v49 = (__m128i *)sub_3E66C0((__int64)a1, 0, v47, v48);
        a2->m128i_i8[0] = 4;
        a2->m128i_i64[1] = (__int64)v49;
        v50 = v49;
        sub_3E7E50(a1, v49 + 2, 1, v51, a5);
        v50[4].m128i_i32[1] = v50[2].m128i_i32[1];
        v50->m128i_i32[0] = sub_3E6FB0((__int64)a1, &v50[4].m128i_i32[1], &v97);
        if ( (_BYTE)v97 )
          v50->m128i_i32[1] |= 0x10u;
        sub_3E65E0(a1);
        sub_3E7E50(a1, v50 + 3, 1, v52, a5);
        if ( a1[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3E65E0(a1);
        a2->m128i_i32[1] = v50[4].m128i_i32[1];
        return v109 - __readfsqword(0x28u);
      case 45LL:
        v19 = 0;
        v20 = 5;
        return sub_3E8B20(a1, a2, v20, v19, a5);
      case 58LL:
        v71 = (_QWORD *)j__qalloc_or_throw(32, (__int64)a2, a3, a4);
        *v71 = 0xFFFFFFFF00000000LL;
        v71[1] = 0;
        v71[2] = 0xFFFFFFFF00000000LL;
        v71[3] = 0;
        a2->m128i_i8[0] = 14;
        a2->m128i_i64[1] = (__int64)v71;
        v32 = sub_3E6140(a1);
        if ( v32 )
          goto LABEL_139;
        v72 = a1[67].m128i_i16[2];
        if ( v72 == 4 )
          goto LABEL_150;
        if ( v72 != 40 )
          goto LABEL_151;
        sub_3E65E0(a1);
        sub_3E7E50(a1, (__m128i *)(a2->m128i_i64[1] + 16), 1, v73, a5);
        if ( a1[67].m128i_i16[2] != 44 )
          goto LABEL_142;
        sub_3E65E0(a1);
        sub_3E7E50(a1, (__m128i *)a2->m128i_i64[1], 1, v74, a5);
        if ( a1[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3E65E0(a1);
        a2->m128i_i32[1] = *(_DWORD *)(a2->m128i_i64[1] + 4) + *(_DWORD *)(a2->m128i_i64[1] + 20);
        return v109 - __readfsqword(0x28u);
      case 60LL:
        sub_3E65E0(a1);
        a2->m128i_i8[0] = 8;
        a2->m128i_i32[1] = sub_3E8F30(a1, &a2->m128i_i64[1], v75, v76);
        return v109 - __readfsqword(0x28u);
      case 64LL:
        v32 = sub_3E6140(a1);
        if ( v32 )
          goto LABEL_139;
        v59 = a1[67].m128i_i16[2];
        switch ( v59 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            goto LABEL_148;
          case 60:
            sub_3E6BA0(a1, a2->m128i_i64);
            break;
          case 3:
            v60 = a1[66].m128i_i64[0];
            a2->m128i_i8[0] = 7;
            a2->m128i_i32[2] = v60;
            break;
          default:
            goto LABEL_148;
        }
LABEL_68:
        sub_3E65E0(a1);
        v34 = a1[67].m128i_i16[2];
        goto LABEL_41;
      case 91LL:
        sub_3E65E0(a1);
        v63 = (__m128i *)sub_3E66C0((__int64)a1, 2, v61, v62);
        a2->m128i_i8[0] = 4;
        a2->m128i_i64[1] = (__int64)v63;
        v64 = v63;
        sub_3E7E50(a1, v63 + 2, 1, v65, a5);
        if ( a1[67].m128i_i16[2] != 58 )
          goto LABEL_142;
        sub_3E65E0(a1);
        sub_3E7E50(a1, v64 + 3, 1, v66, a5);
        if ( a1[67].m128i_i16[2] != 93 )
          goto LABEL_142;
        sub_3E65E0(a1);
        v34 = a1[67].m128i_i16[2];
        if ( v34 != 2 )
          goto LABEL_41;
        if ( a1[2].m128i_i8[0] != 102 || a1[2].m128i_i8[1] )
          goto LABEL_111;
        v64->m128i_i32[1] |= 0x10u;
        sub_3E65E0(a1);
        v34 = a1[67].m128i_i16[2];
        goto LABEL_41;
      default:
        goto LABEL_148;
    }
  }
  switch ( (int)v12 )
  {
    case 123:
      sub_3E65E0(a1);
      a2->m128i_i8[0] = 12;
      a2->m128i_i64[1] = sub_3E7380(a1, a2->m128i_i8, v30, v31);
      return v109 - __readfsqword(0x28u);
    case 132:
      v19 = 0;
      v20 = 4;
      return sub_3E8B20(a1, a2, v20, v19, a5);
    case 134:
      v19 = 0;
      v20 = 6;
      return sub_3E8B20(a1, a2, v20, v19, a5);
    case 135:
      v19 = 0;
      v20 = 7;
      return sub_3E8B20(a1, a2, v20, v19, a5);
    case 136:
    case 137:
    case 138:
    case 139:
    case 191:
    case 193:
    case 194:
    case 195:
    case 196:
      v15 = v12 - 128;
      v16 = sub_3E6140(a1);
      if ( v16 )
        goto LABEL_152;
      v17 = a1[67].m128i_i16[2];
      if ( v17 == 4 )
        goto LABEL_150;
      if ( v17 != 46 )
        goto LABEL_151;
      v16 = sub_3E6140(a1);
      if ( v16 )
      {
LABEL_152:
        v11 = __cxa_allocate_exception(4u);
        *v11 = v16;
        v6 = v11;
LABEL_140:
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'int, nullptr);
      }
      v18 = a1[67].m128i_i16[2];
      if ( v18 == 4 )
        goto LABEL_150;
      if ( v18 != 3 )
        goto LABEL_151;
      v19 = a1[66].m128i_i32[0];
      v20 = v15;
      return sub_3E8B20(a1, a2, v20, v19, a5);
    case 184:
    case 185:
      sub_3E65E0(a1);
      v24 = (__m128i *)sub_3E66C0((__int64)a1, (unsigned int)(unsigned __int16)v12 - 128, v22, v23);
      a2->m128i_i8[0] = 4;
      a2->m128i_i64[1] = (__int64)v24;
      v25 = v24;
      v26 = v24 + 4;
      sub_3E7E50(a1, v24 + 2, 1, v27, a5);
      sub_3E7E50(a1, v26, 1, v28, a5);
      if ( a1[67].m128i_i16[2] == 60 )
      {
        sub_11CA10((char *)(a2->m128i_i64[1] + 48), v26->m128i_i8);
        sub_3E7E50(a1, v26, 1, v95, a5);
      }
      a2->m128i_i32[1] = v25[4].m128i_i32[1];
      return v109 - __readfsqword(0x28u);
    case 207:
      v29 = 1;
      return sub_3E8BB0(a1, a2, v29, a5);
    case 208:
      v29 = 0;
      return sub_3E8BB0(a1, a2, v29, a5);
    case 209:
      v19 = 1;
      v20 = 29;
      return sub_3E8B20(a1, a2, v20, v19, a5);
    case 225:
      v32 = sub_3E6140(a1);
      if ( v32 )
        goto LABEL_139;
      v33 = a1[67].m128i_i16[2];
      if ( v33 == 4 )
        goto LABEL_150;
      if ( v33 != 40 )
        goto LABEL_151;
      sub_3E65E0(a1);
      sub_3E68D0(a1, (__int64)a2);
      v34 = a1[67].m128i_i16[2];
      goto LABEL_29;
    default:
      goto LABEL_148;
  }
}

