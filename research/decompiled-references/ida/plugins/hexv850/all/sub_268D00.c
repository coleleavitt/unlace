__int64 __fastcall sub_268D00(_QWORD *a1, __int64 a2, char a3)
{
  int v5; // r14d
  char v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // edx
  int v17; // eax
  int v18; // edx
  __int64 v19; // rax
  int v20; // edx
  int v21; // r12d
  int tinfo_property; // r9d
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // r9d
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // r14d
  int v37; // r12d
  __int64 v38; // rax
  __int64 v39; // rax
  char v40; // al
  char v41; // al
  __int64 v42; // r8
  int v43; // r11d
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdi
  char v48; // al
  char v49; // al
  __m128 v50; // xmm0
  int v51; // r13d
  bool v52; // r12
  char v53; // r12
  char v54; // r12
  int v55; // eax
  __int64 v56; // rax
  char v57; // r14
  int v58; // eax
  int v59; // r14d
  __int64 v60; // rcx
  __int64 i; // rdi
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  int v65; // eax
  char v66; // al
  __int64 v67; // rdx
  int v68; // r8d
  int v69; // r9d
  int v70; // r8d
  int v71; // r9d
  char v72; // [rsp+16h] [rbp-DAh]
  int tinfo_size; // [rsp+20h] [rbp-D0h]
  __int64 v74; // [rsp+28h] [rbp-C8h]
  __int64 v75; // [rsp+40h] [rbp-B0h]
  char v76; // [rsp+48h] [rbp-A8h]
  int v77; // [rsp+48h] [rbp-A8h]
  int v78; // [rsp+4Ch] [rbp-A4h]
  __int64 v79; // [rsp+58h] [rbp-98h]
  char v80; // [rsp+58h] [rbp-98h]
  __int64 v81; // [rsp+58h] [rbp-98h]
  __int64 v82; // [rsp+58h] [rbp-98h]
  _QWORD v83[2]; // [rsp+68h] [rbp-88h] BYREF
  __int64 v84; // [rsp+78h] [rbp-78h]
  _QWORD v85[2]; // [rsp+80h] [rbp-70h] BYREF
  __int128 v86; // [rsp+90h] [rbp-60h] BYREF
  __int64 v87; // [rsp+A0h] [rbp-50h]
  int v88; // [rsp+A8h] [rbp-48h]
  __int16 v89; // [rsp+ACh] [rbp-44h]
  unsigned __int64 v90; // [rsp+B8h] [rbp-38h]

  v79 = a2;
  v90 = __readfsqword(0x28u);
  v75 = a1[11] - a1[12];
  if ( !(a1[8] | v75) )
    goto LABEL_32;
  if ( *((_DWORD *)a1 + 110) || *((_BYTE *)a1 + 453) )
  {
    v30 = sub_266370((__int64)a1, a2);
    *((_BYTE *)a1 + 453) = 0;
    v79 = v30;
  }
  get_tinfo_property();
  tinfo_size = get_tinfo_size();
  v5 = tinfo_size;
  if ( *(_DWORD *)(a1[3] + 8LL) != 48 )
    goto LABEL_5;
  v6 = *((_BYTE *)a1 + 452);
  if ( v6 )
    goto LABEL_104;
  tinfo_property = *((_DWORD *)a1 + 109);
  if ( !tinfo_property )
    tinfo_property = get_tinfo_property();
  v24 = a1[7];
  v25 = a1[8];
  if ( *((_BYTE *)a1 + 450) == 1 && tinfo_property <= tinfo_size && tinfo_size > 0 )
  {
    if ( 32 * v25 )
    {
      v63 = a1[7];
      while ( !(*(_QWORD *)(v63 + 24) % tinfo_size) )
      {
        v63 += 32;
        if ( v63 == v24 + 32 * v25 )
          goto LABEL_182;
      }
      if ( tinfo_property <= 0 )
        goto LABEL_5;
      v28 = v24 + 32 * v25;
      v26 = tinfo_property;
LABEL_50:
      v29 = v24;
      while ( !(*(_QWORD *)(v29 + 24) % v26) )
      {
        v29 += 32;
        if ( v29 == v28 )
          goto LABEL_167;
      }
      goto LABEL_5;
    }
LABEL_182:
    if ( !(v75 % tinfo_size) )
      goto LABEL_5;
  }
  if ( tinfo_property <= 0 )
    goto LABEL_5;
  v26 = tinfo_property;
  v27 = 32LL * a1[8];
  v28 = v24 + v27;
  if ( v27 )
    goto LABEL_50;
LABEL_167:
  if ( !(v75 % v26) )
  {
    if ( tinfo_property != 1 )
    {
      for ( ; v28 != v24; *(_QWORD *)(v24 - 8) = v64 / v26 )
      {
        v64 = *(_QWORD *)(v24 + 24);
        v24 += 32;
      }
      v75 /= v26;
    }
    *((_BYTE *)a1 + 451) = 1;
    v72 = 0;
    goto LABEL_14;
  }
LABEL_5:
  v6 = *((_BYTE *)a1 + 451);
  if ( v6 )
  {
LABEL_104:
    v72 = 0;
    v6 = 0;
    goto LABEL_14;
  }
  v72 = 0;
  if ( !*((_BYTE *)a1 + 452) )
  {
    v72 = a3 | (*((_DWORD *)a1 + 109) == 0);
    if ( v72 )
    {
      if ( tinfo_size > 0 )
      {
        v7 = a1[7];
        v8 = 32LL * a1[8];
        v9 = v7 + v8;
        if ( v8 )
        {
          v10 = a1[7];
          while ( !(*(_QWORD *)(v10 + 24) % tinfo_size) )
          {
            v10 += 32;
            if ( v10 == v9 )
              goto LABEL_147;
          }
          v6 = 0;
        }
        else
        {
LABEL_147:
          v6 = 0;
          if ( !(v75 % tinfo_size) )
          {
            v6 = a3 | (*((_DWORD *)a1 + 109) == 0);
            if ( tinfo_size != 1 )
            {
              for ( ; v7 != v9; *(_QWORD *)(v7 - 8) = v56 / tinfo_size )
              {
                v56 = *(_QWORD *)(v7 + 24);
                v7 += 32;
              }
              v75 /= tinfo_size;
              v6 = v72;
            }
          }
        }
      }
    }
  }
LABEL_14:
  v11 = *((_BYTE *)a1 + 449) == 0;
  v83[0] = 0;
  v78 = 35;
  if ( !v11 )
    v78 = 6;
  v85[0] = 0;
  v84 = 0;
  v86 = 0;
  copy_tinfo_t();
  v87 = 0;
  copy_tinfo_t();
  v88 = 0;
  v89 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  get_tinfo_details();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  v76 = *((_BYTE *)a1 + 451);
  if ( !v76 && (v6 || (unsigned __int8)sub_324BC0(*a1, v79 + 48, *a1 + 200LL)) )
  {
    v74 = 0;
    v12 = v79;
  }
  else
  {
    if ( *((_BYTE *)a1 + 449) )
    {
      v45 = j__qalloc_or_throw();
      v46 = a1[5];
      *(_QWORD *)v45 = -1;
      *(_DWORD *)(v45 + 8) = 0;
      *(_QWORD *)(v45 + 12) = -1;
      *(_QWORD *)(v45 + 48) = 0;
      *(_DWORD *)(v45 + 56) = 0;
      v74 = v45;
      sub_255C30(v45, v46);
      v78 = 35;
    }
    else
    {
      v74 = 0;
    }
    v31 = j__qalloc_or_throw();
    *(_QWORD *)v31 = -1;
    v12 = v31;
    *(_DWORD *)(v31 + 8) = 48;
    *(_QWORD *)(v31 + 12) = -1;
    *(_QWORD *)(v31 + 32) = 0;
    *(_QWORD *)(v31 + 24) = v79;
    *(_QWORD *)(v31 + 40) = 0;
    *(_QWORD *)(v31 + 48) = 0;
    *(_DWORD *)(v31 + 56) = 1;
    if ( *((_BYTE *)a1 + 451) )
    {
      copy_tinfo_t();
      if ( (*(_BYTE *)(a1[3] + 56LL) & 0x20) != 0 )
        *(_DWORD *)(v12 + 56) |= 0x20u;
      sub_268B70(v85);
      v32 = *(_QWORD *)(v12 + 48);
      *(_QWORD *)(v12 + 48) = v85[0];
      v33 = *((_DWORD *)a1 + 109);
      v85[0] = v32;
      if ( v33 )
      {
        sub_326AD0(&v86, *(_QWORD *)(*a1 + 112LL), v12 + 48);
        copy_tinfo_t();
        clear_tinfo_t();
        sub_266210(v12 + 48, 0);
      }
      clear_tinfo_t();
      v76 = 0;
    }
    else
    {
      copy_tinfo_t();
      v41 = get_tinfo_property();
      if ( (v41 & 0x3E) == 0
        || (v41 & 0xFu) > 8
        || ((v47 = a1[18], !(_BYTE)v47)
         || (v47 & 0xE) == 0 && (v47 & 0x30) != 0
         || (*(_QWORD *)&v86 = get_tinfo_property(), v80 = get_tinfo_property(), clear_tinfo_t(), (v80 & 0x3F) == 0x30))
        && *(_DWORD *)(*(_QWORD *)(*a1 + 112LL) + 84LL) == get_tinfo_size() )
      {
        if ( v72 )
        {
          v42 = 32LL * a1[8];
          if ( tinfo_size > 1 )
          {
            while ( (v5 & (v5 - 1)) == 0 )
            {
              v43 = v5 >> 1;
              if ( v5 <= 33 )
              {
                if ( v42 )
                {
                  v44 = a1[7];
                  while ( !(*(_QWORD *)(v44 + 24) % v43) )
                  {
                    v44 += 32;
                    if ( v44 == a1[7] + v42 )
                      goto LABEL_134;
                  }
                }
                else
                {
LABEL_134:
                  if ( !((int)v75 % (__int64)v43) )
                  {
                    if ( v43 == 1 )
                      break;
                    v77 = v5 >> 1;
                    v81 = v12 + 48;
                    if ( (get_tinfo_property() & 0xF) == 0xA )
                    {
                      *(_QWORD *)&v86 = get_tinfo_property();
                      v57 = get_tinfo_property();
                      clear_tinfo_t();
                      v81 = v12 + 48;
                      if ( (v57 & 0x3F) != 1 )
                      {
                        v58 = get_tinfo_property();
                        v59 = v58;
                        if ( v58 <= 1 )
                          break;
                        v81 = v12 + 48;
                        if ( !(v77 % v58) )
                        {
                          copy_tinfo_t();
                          v60 = a1[7];
                          for ( i = v60 + 32LL * a1[8]; i != v60; *(_QWORD *)(v60 - 8) = v62 / v59 )
                          {
                            v62 = *(_QWORD *)(v60 + 24);
                            v60 += 32;
                          }
                          v75 /= v59;
                        }
                      }
                    }
                    goto LABEL_137;
                  }
                }
              }
              if ( v43 == 1 )
                break;
              v5 >>= 1;
            }
          }
        }
        v81 = v12 + 48;
      }
      else
      {
        v81 = v12 + 48;
        copy_tinfo_t();
        clear_tinfo_t();
      }
LABEL_137:
      if ( !*(_BYTE *)(v12 + 48) )
      {
        copy_tinfo_t();
        sub_266210(v81, 0);
      }
      set_tinfo_property();
      *(_DWORD *)(v12 + 56) |= 0x20u;
      v76 = 1;
    }
  }
  v13 = sub_2688B0((__int64)a1, v75);
  if ( !v13 )
    goto LABEL_28;
  if ( !(unsigned __int8)sub_2659C0(*a1, *(_QWORD *)(a1[1] + 64LL), v13, v78) )
  {
    if ( v78 != 35 )
    {
      v78 = 6;
      goto LABEL_25;
    }
    if ( (unsigned int)(*(_DWORD *)(v13 + 8) - 35) > 1
      || !(unsigned __int8)sub_2659C0(*a1, *(_QWORD *)(a1[1] + 64LL), *(_QWORD *)(v13 + 24), 35) )
    {
      goto LABEL_25;
    }
    v49 = get_tinfo_property();
    if ( (v49 & 0x3E) != 0 && (v49 & 0xFu) <= 8 && (get_tinfo_property() & 0xF) == 0xA )
    {
      copy_tinfo_t();
      sub_266210(v12 + 48, 0);
    }
    v82 = j__qalloc_or_throw();
    v12 = v82;
    v50 = _mm_loadh_ps((const double *)(v13 + 24));
    *(_QWORD *)v82 = -1;
    *(_DWORD *)(v82 + 8) = 36;
    *(_QWORD *)(v82 + 12) = -1;
    *(_QWORD *)(v82 + 40) = 0;
    *(_QWORD *)(v82 + 48) = 0;
    *(_DWORD *)(v82 + 56) = 0;
    *(__m128 *)(v82 + 24) = v50;
    v78 = *(_DWORD *)(v13 + 8);
    sub_250490((__int64 *)v13, *(_QWORD *)(v13 + 32));
    sub_23EE00(v82, *(_QWORD *)(*a1 + 112LL), 0);
    *(_DWORD *)(v82 + 56) |= 1u;
    if ( v78 != 36 )
    {
      v12 = v82;
      goto LABEL_25;
    }
LABEL_114:
    v48 = get_tinfo_property();
    if ( (v48 & 0x3E) != 0 && (v48 & 0xFu) <= 8 && (get_tinfo_property() & 0xF) == 0xA )
    {
      if ( !(unsigned __int8)compare_tinfo() )
      {
        if ( !under_debugger )
          sub_37CFE0(52124);
        goto LABEL_200;
      }
      if ( (unsigned int)get_tinfo_property() != 1 )
      {
        if ( !under_debugger )
          sub_37CFE0(52125);
        goto LABEL_200;
      }
      copy_tinfo_t();
      sub_266210(v12 + 48, 0);
    }
    v78 = 36;
    goto LABEL_25;
  }
  if ( v78 == 35 )
    goto LABEL_114;
  v78 = 7;
LABEL_25:
  v14 = j__qalloc_or_throw();
  *(_QWORD *)(v14 + 32) = v13;
  v15 = v14;
  *(_QWORD *)v14 = -1;
  *(_DWORD *)(v14 + 8) = v78;
  *(_QWORD *)(v14 + 12) = -1;
  *(_QWORD *)(v14 + 24) = v12;
  *(_QWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 48) = 0;
  *(_DWORD *)(v14 + 56) = 0;
  sub_23EE00(v14, *(_QWORD *)(*a1 + 112LL), 0);
  v12 = v15;
  v16 = *(_DWORD *)(v15 + 56);
  v17 = v16 | 0x21;
  v18 = v16 | 1;
  if ( !v76 )
    v17 = v18;
  *(_DWORD *)(v15 + 56) = v17;
LABEL_28:
  if ( LOBYTE(v83[0]) )
  {
    if ( (get_tinfo_property() & 0xF) == 0xB && (get_tinfo_property() & 0xF) == 0xA )
    {
      copy_tinfo_t();
      set_tinfo_property();
    }
    else
    {
      v85[0] = 0;
      v85[1] = 0;
      if ( (unsigned __int8)get_tinfo_details() )
      {
        v83[1] = 0;
        v84 = 0;
        v86 = 0;
        copy_tinfo_t();
        v87 = 0;
        copy_tinfo_t();
        v88 = 0;
        v89 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        v39 = v86;
        *(_QWORD *)&v86 = v85[0];
        v85[0] = v39;
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      clear_tinfo_t();
    }
    v40 = sub_241780(v12, *a1, v83);
    if ( v76 && v40 )
      *(_DWORD *)(v12 + 56) |= 0x20u;
  }
  if ( v74 )
  {
    v79 = j__qalloc_or_throw();
    *(_QWORD *)v79 = -1;
    *(_DWORD *)(v79 + 8) = 2;
    *(_QWORD *)(v79 + 12) = -1;
    *(_QWORD *)(v79 + 24) = v74;
    *(_QWORD *)(v79 + 32) = v12;
    *(_QWORD *)(v79 + 40) = 0;
    *(_QWORD *)(v79 + 48) = 0;
    *(_DWORD *)(v79 + 56) = 0;
    sub_23EE00(v79, *(_QWORD *)(*a1 + 112LL), 0);
    *(_DWORD *)(v79 + 56) |= 1u;
  }
  else
  {
    v79 = v12;
  }
  clear_tinfo_t();
  clear_tinfo_t();
LABEL_32:
  if ( !*((_DWORD *)a1 + 109) && (*((_DWORD *)a1 + 110) || *((_BYTE *)a1 + 453)) )
    v79 = sub_266370((__int64)a1, v79);
  v19 = a1[3];
  v20 = *(_DWORD *)(v19 + 8);
  if ( v20 != 48 )
  {
    if ( v20 == 57 && v19 && a1[4] == *(_QWORD *)(v19 + 24) )
    {
      if ( !get_tinfo_property() )
        goto LABEL_58;
      *(_QWORD *)&v86 = 0;
      *(_QWORD *)&v86 = get_tinfo_property();
      if ( (unsigned int)verify_tinfo() )
      {
        clear_tinfo_t();
LABEL_58:
        if ( !get_tinfo_property() || (unsigned int)verify_tinfo() )
        {
          if ( !under_debugger )
            sub_37CFE0(52694);
          goto LABEL_200;
        }
        sub_241780(v79, *a1, (_QWORD *)(a1[4] + 48LL));
        if ( *((_BYTE *)a1 + 453) )
          goto LABEL_40;
        goto LABEL_61;
      }
      clear_tinfo_t();
    }
    v21 = sub_264C90();
    if ( v21 != (unsigned int)sub_264C90() )
    {
      *(_QWORD *)&v86 = 0;
      *(_QWORD *)&v86 = get_tinfo_property();
      if ( (get_tinfo_property() & 0xF) != 0xB )
      {
        clear_tinfo_t();
        sub_268B70(v85);
        v52 = (get_tinfo_property() & 0xF) == 9;
        if ( v52 == ((get_tinfo_property() & 0xF) == 9) )
        {
          sub_241780(v79, *a1, v85);
          *(_DWORD *)(v79 + 56) |= 0x20u;
        }
        else
        {
          *(_QWORD *)&v86 = 0;
          *(_QWORD *)&v86 = get_tinfo_property();
          v53 = get_tinfo_property();
          clear_tinfo_t();
          if ( (v53 & 0xF) != 0xB )
          {
            v54 = 4;
            if ( !*((_DWORD *)a1 + 110) && !*((_BYTE *)a1 + 453) )
              v54 = 6;
            v55 = get_tinfo_size();
            v79 = sub_2422E0(*a1, *(_QWORD *)v79, v79, 0, v85, v55, v54);
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
    v85[0] = 0;
    v85[0] = get_tinfo_property();
    if ( (get_tinfo_property() & 0xF) != 0xB )
      goto LABEL_63;
    if ( (get_tinfo_property() & 0xF) != 0xB
      || *(_DWORD *)(a1[4] + 8LL) == 51
      || (v65 = *((_DWORD *)a1 + 109), v65 <= 0) )
    {
      v66 = get_tinfo_property();
      v67 = a1[4];
      if ( (v66 & 0xF) == 0xA )
      {
        sub_241780(v79, *a1, (_QWORD *)(v67 + 48));
      }
      else if ( *(_DWORD *)(v67 + 8) == 51 )
      {
        sub_326AD0(&v86, *(_QWORD *)(*a1 + 112LL), v67 + 48);
        sub_241780(v79, *a1, &v86);
        clear_tinfo_t();
      }
      goto LABEL_63;
    }
    if ( v65 != get_tinfo_size() )
      v79 = sub_23EF60(*(_QWORD *)(*a1 + 112LL), v79, *((_DWORD *)a1 + 109), 0, v68, v69);
    if ( (get_tinfo_property() & 0xF) != 0xB || !sub_117EC0(*((_DWORD *)a1 + 109)) )
      goto LABEL_63;
    if ( (unsigned int)get_tinfo_property() == 1 )
    {
      v79 = sub_23EF60(*(_QWORD *)(*a1 + 112LL), v79, *((_DWORD *)a1 + 109), 0, v70, v71);
      *((_BYTE *)a1 + 453) = 1;
LABEL_63:
      clear_tinfo_t();
      goto LABEL_40;
    }
    if ( !under_debugger )
      sub_37CFE0(51708);
LABEL_200:
    BUG();
  }
  if ( !*((_BYTE *)a1 + 453) )
    goto LABEL_61;
LABEL_74:
  if ( (get_tinfo_property() & 0xF) == 9 && (get_tinfo_property() & 0xF) == 0xA )
    sub_241780(v79, *a1, (_QWORD *)(*a1 + 288LL));
LABEL_41:
  if ( *(_DWORD *)(v79 + 8) == 52 )
  {
    v34 = a1[2];
    v35 = *(_DWORD *)(v34 + 8) - 1;
    v36 = v35;
    if ( v35 > 0 )
    {
      v37 = *(_DWORD *)(v34 + 8) - 1;
      v38 = *(_QWORD *)v34 + 8LL * (unsigned int)v35;
      while ( *(_DWORD *)(*(_QWORD *)v38 + 8LL) == 51 )
      {
        v38 -= 8;
        if ( !--v37 )
          goto LABEL_129;
      }
      v36 = v35 - v37;
      if ( v35 - v37 <= 0 )
        return v79;
LABEL_129:
      v85[0] = 0;
      v51 = 0;
      copy_tinfo_t();
      do
      {
        *(_QWORD *)&v86 = 0;
        *(_QWORD *)&v86 = get_tinfo_property();
        copy_tinfo_t();
        ++v51;
        clear_tinfo_t();
      }
      while ( v51 != v36 );
      if ( !(unsigned __int8)sub_31E0D0(
                               *(_QWORD *)(a1[1] + 64LL),
                               *(_QWORD *)(*(_QWORD *)a1[2] + 8LL * v37),
                               *(_QWORD *)(*(_QWORD *)a1[2] + 8LL * (v37 + 1)),
                               v85) )
      {
        sub_268B70(&v86);
        sub_241780(v79, *a1, &v86);
        clear_tinfo_t();
      }
      clear_tinfo_t();
    }
  }
  return v79;
}

