__int64 __fastcall sub_26E0C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  char v6; // r13
  int v7; // r14d
  char v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r14
  int v27; // edx
  int v28; // eax
  __int64 v29; // rax
  int v30; // edx
  int v31; // r12d
  int tinfo_property; // r9d
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // r9d
  __int64 v44; // rdx
  int v45; // ecx
  int v46; // r14d
  int v47; // r12d
  __int64 v48; // rax
  __int64 v49; // rax
  char v50; // al
  char v51; // al
  __int64 v52; // r8
  int v53; // r11d
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdi
  char v57; // al
  __int64 v58; // rsi
  char v59; // al
  __int64 v60; // rdx
  __int64 v61; // rcx
  int v62; // r13d
  bool v63; // r12
  char v64; // r12
  char v65; // r12
  int v66; // eax
  __int64 v67; // rax
  char v68; // r14
  int v69; // eax
  int v70; // r14d
  __int64 v71; // rcx
  __int64 i; // rdi
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  int v76; // eax
  char v77; // al
  __int64 v78; // rdx
  char v79; // [rsp+16h] [rbp-DAh]
  int tinfo_size; // [rsp+20h] [rbp-D0h]
  __int64 v81; // [rsp+28h] [rbp-C8h]
  __int64 v82; // [rsp+40h] [rbp-B0h]
  char v83; // [rsp+48h] [rbp-A8h]
  int v84; // [rsp+48h] [rbp-A8h]
  int v85; // [rsp+4Ch] [rbp-A4h]
  __int64 v86; // [rsp+58h] [rbp-98h]
  char v87; // [rsp+58h] [rbp-98h]
  __int64 v88; // [rsp+58h] [rbp-98h]
  __int64 v89; // [rsp+58h] [rbp-98h]
  _QWORD v90[2]; // [rsp+68h] [rbp-88h] BYREF
  __int64 v91; // [rsp+78h] [rbp-78h]
  _QWORD v92[2]; // [rsp+80h] [rbp-70h] BYREF
  __int128 v93; // [rsp+90h] [rbp-60h] BYREF
  __int64 v94; // [rsp+A0h] [rbp-50h]
  int v95; // [rsp+A8h] [rbp-48h]
  __int16 v96; // [rsp+ACh] [rbp-44h]
  unsigned __int64 v97; // [rsp+B8h] [rbp-38h]

  v86 = a2;
  v97 = __readfsqword(0x28u);
  v82 = a1[11] - a1[12];
  if ( !(a1[8] | v82) )
    goto LABEL_32;
  v6 = a3;
  if ( *((_DWORD *)a1 + 110) || *((_BYTE *)a1 + 453) )
  {
    v40 = sub_26B730((__int64)a1, a2, a3, a4, *(double *)a5.m128_u64);
    *((_BYTE *)a1 + 453) = 0;
    v86 = v40;
  }
  get_tinfo_property();
  tinfo_size = get_tinfo_size();
  v7 = tinfo_size;
  if ( *(_DWORD *)(a1[3] + 8LL) != 48 )
    goto LABEL_5;
  v8 = *((_BYTE *)a1 + 452);
  if ( v8 )
    goto LABEL_104;
  tinfo_property = *((_DWORD *)a1 + 109);
  if ( !tinfo_property )
    tinfo_property = get_tinfo_property();
  v34 = a1[7];
  v35 = a1[8];
  if ( *((_BYTE *)a1 + 450) == 1 && tinfo_property <= tinfo_size && tinfo_size > 0 )
  {
    if ( 32 * v35 )
    {
      v74 = a1[7];
      while ( !(*(_QWORD *)(v74 + 24) % tinfo_size) )
      {
        v74 += 32;
        if ( v74 == v34 + 32 * v35 )
          goto LABEL_182;
      }
      if ( tinfo_property <= 0 )
        goto LABEL_5;
      v38 = v34 + 32 * v35;
      v36 = tinfo_property;
LABEL_50:
      v39 = v34;
      while ( !(*(_QWORD *)(v39 + 24) % v36) )
      {
        v39 += 32;
        if ( v39 == v38 )
          goto LABEL_167;
      }
      goto LABEL_5;
    }
LABEL_182:
    if ( !(v82 % tinfo_size) )
      goto LABEL_5;
  }
  if ( tinfo_property <= 0 )
    goto LABEL_5;
  v36 = tinfo_property;
  v37 = 32LL * a1[8];
  v38 = v34 + v37;
  if ( v37 )
    goto LABEL_50;
LABEL_167:
  if ( !(v82 % v36) )
  {
    if ( tinfo_property != 1 )
    {
      for ( ; v38 != v34; *(_QWORD *)(v34 - 8) = v75 / v36 )
      {
        v75 = *(_QWORD *)(v34 + 24);
        v34 += 32;
      }
      v82 /= v36;
    }
    *((_BYTE *)a1 + 451) = 1;
    v79 = 0;
    goto LABEL_14;
  }
LABEL_5:
  v8 = *((_BYTE *)a1 + 451);
  if ( v8 )
  {
LABEL_104:
    v79 = 0;
    v8 = 0;
    goto LABEL_14;
  }
  v79 = 0;
  if ( !*((_BYTE *)a1 + 452) )
  {
    v79 = v6 | (*((_DWORD *)a1 + 109) == 0);
    if ( v79 )
    {
      if ( tinfo_size > 0 )
      {
        v9 = a1[7];
        v10 = 32LL * a1[8];
        v11 = v9 + v10;
        if ( v10 )
        {
          v12 = a1[7];
          while ( !(*(_QWORD *)(v12 + 24) % tinfo_size) )
          {
            v12 += 32;
            if ( v12 == v11 )
              goto LABEL_147;
          }
          v8 = 0;
        }
        else
        {
LABEL_147:
          v8 = 0;
          if ( !(v82 % tinfo_size) )
          {
            v8 = v6 | (*((_DWORD *)a1 + 109) == 0);
            if ( tinfo_size != 1 )
            {
              for ( ; v9 != v11; *(_QWORD *)(v9 - 8) = v67 / tinfo_size )
              {
                v67 = *(_QWORD *)(v9 + 24);
                v9 += 32;
              }
              v82 /= tinfo_size;
              v8 = v79;
            }
          }
        }
      }
    }
  }
LABEL_14:
  v13 = *((_BYTE *)a1 + 449) == 0;
  v90[0] = 0;
  v85 = 35;
  if ( !v13 )
    v85 = 6;
  a5.m128_u64[0] = 0;
  v92[0] = 0;
  v91 = 0;
  v93 = 0;
  copy_tinfo_t();
  v94 = 0;
  copy_tinfo_t();
  v95 = 0;
  v96 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  v14 = 10;
  get_tinfo_details();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  v83 = *((_BYTE *)a1 + 451);
  if ( !v83 && (v8 || (v14 = v86 + 48, (unsigned __int8)sub_32A510(*a1))) )
  {
    v81 = 0;
    v17 = v86;
  }
  else
  {
    if ( *((_BYTE *)a1 + 449) )
    {
      v55 = j__qalloc_or_throw(64, v14, v15, v16);
      v14 = a1[5];
      *(_QWORD *)v55 = -1;
      *(_DWORD *)(v55 + 8) = 0;
      *(_QWORD *)(v55 + 12) = -1;
      *(_QWORD *)(v55 + 48) = 0;
      *(_DWORD *)(v55 + 56) = 0;
      v81 = v55;
      sub_25AFF0(v55, v14, 0.0);
      v85 = 35;
    }
    else
    {
      v81 = 0;
    }
    v41 = j__qalloc_or_throw(64, v14, v15, v16);
    *(_QWORD *)v41 = -1;
    v17 = v41;
    *(_DWORD *)(v41 + 8) = 48;
    *(_QWORD *)(v41 + 12) = -1;
    *(_QWORD *)(v41 + 32) = 0;
    *(_QWORD *)(v41 + 24) = v86;
    *(_QWORD *)(v41 + 40) = 0;
    *(_QWORD *)(v41 + 48) = 0;
    *(_DWORD *)(v41 + 56) = 1;
    if ( *((_BYTE *)a1 + 451) )
    {
      copy_tinfo_t();
      if ( (*(_BYTE *)(a1[3] + 56LL) & 0x20) != 0 )
        *(_DWORD *)(v17 + 56) |= 0x20u;
      sub_26DF30(v92);
      v42 = *(_QWORD *)(v17 + 48);
      *(_QWORD *)(v17 + 48) = v92[0];
      v43 = *((_DWORD *)a1 + 109);
      v92[0] = v42;
      if ( v43 )
      {
        sub_32C540(&v93, *(_QWORD *)(*a1 + 112LL), (_QWORD *)(v17 + 48));
        copy_tinfo_t();
        clear_tinfo_t();
        sub_26B5D0(v17 + 48, 0);
      }
      clear_tinfo_t();
      v83 = 0;
    }
    else
    {
      copy_tinfo_t();
      v51 = get_tinfo_property();
      if ( (v51 & 0x3E) == 0
        || (v51 & 0xFu) > 8
        || ((v56 = a1[18], !(_BYTE)v56)
         || (v56 & 0xE) == 0 && (v56 & 0x30) != 0
         || (*(_QWORD *)&v93 = get_tinfo_property(), v87 = get_tinfo_property(), clear_tinfo_t(), (v87 & 0x3F) == 0x30))
        && *(_DWORD *)(*(_QWORD *)(*a1 + 112LL) + 84LL) == get_tinfo_size() )
      {
        if ( v79 )
        {
          v52 = 32LL * a1[8];
          if ( tinfo_size > 1 )
          {
            while ( (v7 & (v7 - 1)) == 0 )
            {
              v53 = v7 >> 1;
              if ( v7 <= 33 )
              {
                if ( v52 )
                {
                  v54 = a1[7];
                  while ( !(*(_QWORD *)(v54 + 24) % v53) )
                  {
                    v54 += 32;
                    if ( v54 == a1[7] + v52 )
                      goto LABEL_134;
                  }
                }
                else
                {
LABEL_134:
                  if ( !((int)v82 % (__int64)v53) )
                  {
                    if ( v53 == 1 )
                      break;
                    v84 = v7 >> 1;
                    v88 = v17 + 48;
                    if ( (get_tinfo_property() & 0xF) == 0xA )
                    {
                      *(_QWORD *)&v93 = get_tinfo_property();
                      v68 = get_tinfo_property();
                      clear_tinfo_t();
                      v88 = v17 + 48;
                      if ( (v68 & 0x3F) != 1 )
                      {
                        v69 = get_tinfo_property();
                        v70 = v69;
                        if ( v69 <= 1 )
                          break;
                        v88 = v17 + 48;
                        if ( !(v84 % v69) )
                        {
                          copy_tinfo_t();
                          v71 = a1[7];
                          for ( i = v71 + 32LL * a1[8]; i != v71; *(_QWORD *)(v71 - 8) = v73 / v70 )
                          {
                            v73 = *(_QWORD *)(v71 + 24);
                            v71 += 32;
                          }
                          v82 /= v70;
                        }
                      }
                    }
                    goto LABEL_137;
                  }
                }
              }
              if ( v53 == 1 )
                break;
              v7 >>= 1;
            }
          }
        }
        v88 = v17 + 48;
      }
      else
      {
        v88 = v17 + 48;
        copy_tinfo_t();
        clear_tinfo_t();
      }
LABEL_137:
      if ( !*(_BYTE *)(v17 + 48) )
      {
        copy_tinfo_t();
        sub_26B5D0(v88, 0);
      }
      set_tinfo_property();
      *(_DWORD *)(v17 + 56) |= 0x20u;
      v83 = 1;
    }
  }
  v18 = v82;
  v21 = sub_26DC70((__int64)a1, v82, v15, v16, 0.0);
  if ( !v21 )
    goto LABEL_28;
  v22 = *(_QWORD *)(a1[1] + 64LL);
  if ( !(unsigned __int8)sub_26AD80(*a1, v22, v21, v85, 0.0) )
  {
    if ( v85 != 35 )
    {
      v85 = 6;
      goto LABEL_25;
    }
    if ( (unsigned int)(*(_DWORD *)(v21 + 8) - 35) > 1 )
      goto LABEL_25;
    v22 = *(_QWORD *)(a1[1] + 64LL);
    if ( !(unsigned __int8)sub_26AD80(*a1, v22, *(_QWORD *)(v21 + 24), 35, 0.0) )
      goto LABEL_25;
    v58 = 2;
    v59 = get_tinfo_property();
    if ( (v59 & 0x3E) != 0 && (v59 & 0xFu) <= 8 )
    {
      v58 = 2;
      if ( (get_tinfo_property() & 0xF) == 0xA )
      {
        copy_tinfo_t();
        v58 = 0;
        sub_26B5D0(v17 + 48, 0);
      }
    }
    v89 = j__qalloc_or_throw(64, v58, v60, v61);
    v17 = v89;
    a5 = _mm_loadh_ps((const double *)(v21 + 24));
    *(_QWORD *)v89 = -1;
    *(_DWORD *)(v89 + 8) = 36;
    *(_QWORD *)(v89 + 12) = -1;
    *(_QWORD *)(v89 + 40) = 0;
    *(_QWORD *)(v89 + 48) = 0;
    *(_DWORD *)(v89 + 56) = 0;
    *(__m128 *)(v89 + 24) = a5;
    v85 = *(_DWORD *)(v21 + 8);
    sub_255850((__int64 *)v21, *(_QWORD *)(v21 + 32), *(double *)a5.m128_u64);
    v22 = *(_QWORD *)(*a1 + 112LL);
    sub_2441C0(v89, v22, 0, *(double *)a5.m128_u64);
    *(_DWORD *)(v89 + 56) |= 1u;
    if ( v85 != 36 )
    {
      v17 = v89;
      goto LABEL_25;
    }
LABEL_114:
    v22 = 2;
    v57 = get_tinfo_property();
    if ( (v57 & 0x3E) != 0 && (v57 & 0xFu) <= 8 )
    {
      v22 = 2;
      if ( (get_tinfo_property() & 0xF) == 0xA )
      {
        if ( !(unsigned __int8)compare_tinfo() )
        {
          if ( !under_debugger )
            sub_383060(0xCB9Cu, *(double *)a5.m128_u64);
          goto LABEL_200;
        }
        if ( (unsigned int)get_tinfo_property() != 1 )
        {
          if ( !under_debugger )
            sub_383060(0xCB9Du, *(double *)a5.m128_u64);
          goto LABEL_200;
        }
        copy_tinfo_t();
        v22 = 0;
        sub_26B5D0(v17 + 48, 0);
      }
    }
    v85 = 36;
    goto LABEL_25;
  }
  if ( v85 == 35 )
    goto LABEL_114;
  v85 = 7;
LABEL_25:
  v25 = j__qalloc_or_throw(64, v22, v23, v24);
  *(_QWORD *)(v25 + 32) = v21;
  v26 = v25;
  *(_QWORD *)v25 = -1;
  *(_DWORD *)(v25 + 8) = v85;
  *(_QWORD *)(v25 + 12) = -1;
  *(_QWORD *)(v25 + 24) = v17;
  *(_QWORD *)(v25 + 40) = 0;
  *(_QWORD *)(v25 + 48) = 0;
  *(_DWORD *)(v25 + 56) = 0;
  v18 = *(_QWORD *)(*a1 + 112LL);
  sub_2441C0(v25, v18, 0, *(double *)a5.m128_u64);
  v17 = v26;
  v27 = *(_DWORD *)(v26 + 56);
  v28 = v27 | 0x21;
  v19 = v27 | 1u;
  if ( !v83 )
    v28 = v19;
  *(_DWORD *)(v26 + 56) = v28;
LABEL_28:
  if ( LOBYTE(v90[0]) )
  {
    if ( (get_tinfo_property() & 0xF) == 0xB && (get_tinfo_property() & 0xF) == 0xA )
    {
      copy_tinfo_t();
      set_tinfo_property();
    }
    else
    {
      v92[0] = 0;
      v92[1] = 0;
      if ( (unsigned __int8)get_tinfo_details() )
      {
        a5.m128_u64[0] = 0;
        v90[1] = 0;
        v91 = 0;
        v93 = 0;
        copy_tinfo_t();
        v94 = 0;
        copy_tinfo_t();
        v95 = 0;
        v96 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        v49 = v93;
        *(_QWORD *)&v93 = v92[0];
        v92[0] = v49;
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      clear_tinfo_t();
    }
    v18 = *a1;
    v50 = sub_246B40(v17, *a1, v90, *(double *)a5.m128_u64);
    if ( v83 && v50 )
      *(_DWORD *)(v17 + 56) |= 0x20u;
  }
  if ( v81 )
  {
    v86 = j__qalloc_or_throw(64, v18, v19, v20);
    *(_QWORD *)v86 = -1;
    *(_DWORD *)(v86 + 8) = 2;
    *(_QWORD *)(v86 + 12) = -1;
    *(_QWORD *)(v86 + 24) = v81;
    *(_QWORD *)(v86 + 32) = v17;
    *(_QWORD *)(v86 + 40) = 0;
    *(_QWORD *)(v86 + 48) = 0;
    *(_DWORD *)(v86 + 56) = 0;
    sub_2441C0(v86, *(_QWORD *)(*a1 + 112LL), 0, *(double *)a5.m128_u64);
    *(_DWORD *)(v86 + 56) |= 1u;
  }
  else
  {
    v86 = v17;
  }
  clear_tinfo_t();
  clear_tinfo_t();
LABEL_32:
  if ( !*((_DWORD *)a1 + 109) && (*((_DWORD *)a1 + 110) || *((_BYTE *)a1 + 453)) )
    v86 = sub_26B730((__int64)a1, v86, a3, a4, *(double *)a5.m128_u64);
  v29 = a1[3];
  v30 = *(_DWORD *)(v29 + 8);
  if ( v30 != 48 )
  {
    if ( v30 == 57 && v29 && a1[4] == *(_QWORD *)(v29 + 24) )
    {
      if ( !get_tinfo_property() )
        goto LABEL_58;
      *(_QWORD *)&v93 = 0;
      *(_QWORD *)&v93 = get_tinfo_property();
      if ( (unsigned int)verify_tinfo() )
      {
        clear_tinfo_t();
LABEL_58:
        if ( !get_tinfo_property() || (unsigned int)verify_tinfo() )
        {
          if ( !under_debugger )
            sub_383060(0xCDD6u, *(double *)a5.m128_u64);
          goto LABEL_200;
        }
        sub_246B40(v86, *a1, (_QWORD *)(a1[4] + 48LL), *(double *)a5.m128_u64);
        if ( *((_BYTE *)a1 + 453) )
          goto LABEL_40;
        goto LABEL_61;
      }
      clear_tinfo_t();
    }
    v31 = sub_26A050();
    if ( v31 != (unsigned int)sub_26A050() )
    {
      *(_QWORD *)&v93 = 0;
      *(_QWORD *)&v93 = get_tinfo_property();
      if ( (get_tinfo_property() & 0xF) != 0xB )
      {
        clear_tinfo_t();
        sub_26DF30(v92);
        v63 = (get_tinfo_property() & 0xF) == 9;
        if ( v63 == ((get_tinfo_property() & 0xF) == 9) )
        {
          sub_246B40(v86, *a1, v92, *(double *)a5.m128_u64);
          *(_DWORD *)(v86 + 56) |= 0x20u;
        }
        else
        {
          *(_QWORD *)&v93 = 0;
          *(_QWORD *)&v93 = get_tinfo_property();
          v64 = get_tinfo_property();
          clear_tinfo_t();
          if ( (v64 & 0xF) != 0xB )
          {
            v65 = 4;
            if ( !*((_DWORD *)a1 + 110) && !*((_BYTE *)a1 + 453) )
              v65 = 6;
            v66 = get_tinfo_size();
            v86 = sub_2476A0(*a1, *(_QWORD *)v86, v86, 0, v92, v66, *(double *)a5.m128_u64, v65);
            *((_BYTE *)a1 + 453) = 1;
          }
        }
      }
      clear_tinfo_t();
    }
    if ( *((_BYTE *)a1 + 453) )
    {
LABEL_40:
      if ( *(_DWORD *)(a1[3] + 8LL) != 48 )
        goto LABEL_41;
      goto LABEL_74;
    }
LABEL_61:
    if ( (get_tinfo_property() & 0xF) != 0xA )
      goto LABEL_40;
    v92[0] = 0;
    v92[0] = get_tinfo_property();
    if ( (get_tinfo_property() & 0xF) != 0xB )
      goto LABEL_63;
    if ( (get_tinfo_property() & 0xF) != 0xB
      || *(_DWORD *)(a1[4] + 8LL) == 51
      || (v76 = *((_DWORD *)a1 + 109), v76 <= 0) )
    {
      v77 = get_tinfo_property();
      v78 = a1[4];
      if ( (v77 & 0xF) == 0xA )
      {
        sub_246B40(v86, *a1, (_QWORD *)(v78 + 48), *(double *)a5.m128_u64);
      }
      else if ( *(_DWORD *)(v78 + 8) == 51 )
      {
        sub_32C540(&v93, *(_QWORD *)(*a1 + 112LL), (_QWORD *)(v78 + 48));
        sub_246B40(v86, *a1, &v93, *(double *)a5.m128_u64);
        clear_tinfo_t();
      }
      goto LABEL_63;
    }
    if ( v76 != get_tinfo_size() )
      v86 = sub_244320(*(_QWORD *)(*a1 + 112LL), v86, *((unsigned int *)a1 + 109), 0, *(double *)a5.m128_u64);
    if ( (get_tinfo_property() & 0xF) != 0xB || !sub_11CA80(*((_DWORD *)a1 + 109)) )
      goto LABEL_63;
    if ( (unsigned int)get_tinfo_property() == 1 )
    {
      v86 = sub_244320(*(_QWORD *)(*a1 + 112LL), v86, *((unsigned int *)a1 + 109), 0, *(double *)a5.m128_u64);
      *((_BYTE *)a1 + 453) = 1;
LABEL_63:
      clear_tinfo_t();
      goto LABEL_40;
    }
    if ( !under_debugger )
      sub_383060(0xC9FCu, *(double *)a5.m128_u64);
LABEL_200:
    BUG();
  }
  if ( !*((_BYTE *)a1 + 453) )
    goto LABEL_61;
LABEL_74:
  if ( (get_tinfo_property() & 0xF) == 9 && (get_tinfo_property() & 0xF) == 0xA )
    sub_246B40(v86, *a1, (_QWORD *)(*a1 + 288LL), *(double *)a5.m128_u64);
LABEL_41:
  if ( *(_DWORD *)(v86 + 8) == 52 )
  {
    v44 = a1[2];
    v45 = *(_DWORD *)(v44 + 8) - 1;
    v46 = v45;
    if ( v45 > 0 )
    {
      v47 = *(_DWORD *)(v44 + 8) - 1;
      v48 = *(_QWORD *)v44 + 8LL * (unsigned int)v45;
      while ( *(_DWORD *)(*(_QWORD *)v48 + 8LL) == 51 )
      {
        v48 -= 8;
        if ( !--v47 )
          goto LABEL_129;
      }
      v46 = v45 - v47;
      if ( v45 - v47 <= 0 )
        return v86;
LABEL_129:
      v92[0] = 0;
      v62 = 0;
      copy_tinfo_t();
      do
      {
        *(_QWORD *)&v93 = 0;
        *(_QWORD *)&v93 = get_tinfo_property();
        copy_tinfo_t();
        ++v62;
        clear_tinfo_t();
      }
      while ( v62 != v46 );
      if ( !(unsigned __int8)sub_323990(
                               *(_QWORD *)(a1[1] + 64LL),
                               *(_QWORD *)(*(_QWORD *)a1[2] + 8LL * v47),
                               *(_QWORD *)(*(_QWORD *)a1[2] + 8LL * (v47 + 1))) )
      {
        sub_26DF30(&v93);
        sub_246B40(v86, *a1, &v93, *(double *)a5.m128_u64);
        clear_tinfo_t();
      }
      clear_tinfo_t();
    }
  }
  return v86;
}

