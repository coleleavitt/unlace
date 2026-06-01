__int64 __fastcall sub_22CD70(__int64 a1, __int64 a2, int a3, _QWORD *a4, char a5, __int64 *a6)
{
  unsigned int i; // ebp
  __m128 v10; // xmm0
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r13
  int tinfo_udt_member; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 data_elsize; // rax
  unsigned __int64 v25; // rsi
  unsigned __int8 v26; // r12
  char v27; // r14
  __int64 v28; // rax
  __int64 v29; // r12
  unsigned __int64 v30; // r12
  unsigned __int64 *v31; // rax
  void *v32; // rbx
  unsigned __int64 v35; // [rsp+18h] [rbp-200h]
  unsigned __int64 v36; // [rsp+18h] [rbp-200h]
  __int64 v37; // [rsp+20h] [rbp-1F8h]
  __int64 v38; // [rsp+20h] [rbp-1F8h]
  __int64 v39; // [rsp+30h] [rbp-1E8h]
  __int64 v40; // [rsp+40h] [rbp-1D8h]
  int v41; // [rsp+50h] [rbp-1C8h]
  bool v42; // [rsp+63h] [rbp-1B5h]
  int v43; // [rsp+64h] [rbp-1B4h] BYREF
  __int64 v44; // [rsp+68h] [rbp-1B0h] BYREF
  __int64 v45; // [rsp+78h] [rbp-1A0h] BYREF
  char v46[8]; // [rsp+80h] [rbp-198h] BYREF
  char v47[8]; // [rsp+88h] [rbp-190h] BYREF
  __m128 v48; // [rsp+90h] [rbp-188h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-178h]
  unsigned __int64 v50; // [rsp+B0h] [rbp-168h]
  unsigned __int64 v51; // [rsp+B8h] [rbp-160h]
  __int64 v52; // [rsp+C0h] [rbp-158h]
  __int128 v53; // [rsp+C8h] [rbp-150h]
  __int64 v54; // [rsp+D8h] [rbp-140h]
  __int128 v55; // [rsp+E0h] [rbp-138h]
  __int128 v56; // [rsp+F0h] [rbp-128h]
  __int64 v57; // [rsp+120h] [rbp-F8h]
  int v58; // [rsp+128h] [rbp-F0h]
  __int64 v59; // [rsp+130h] [rbp-E8h]
  char v60; // [rsp+138h] [rbp-E0h]
  __int64 v61; // [rsp+140h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+148h] [rbp-D0h]
  void *src; // [rsp+150h] [rbp-C8h] BYREF
  __int128 v64; // [rsp+158h] [rbp-C0h]
  __int64 v65; // [rsp+168h] [rbp-B0h]
  __int128 v66; // [rsp+170h] [rbp-A8h]
  __int128 v67; // [rsp+180h] [rbp-98h]
  __int64 v68; // [rsp+1B0h] [rbp-68h]
  int v69; // [rsp+1B8h] [rbp-60h]
  __int64 v70; // [rsp+1C0h] [rbp-58h]
  char v71; // [rsp+1C8h] [rbp-50h]
  unsigned __int64 v72; // [rsp+1D8h] [rbp-40h]

  v44 = a2;
  v43 = a3;
  v72 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 8) || a2 + a3 > 0x100000 )
    return 0;
  v10 = _mm_loadh_ps((const double *)(a1 + 816));
  v49 = *(_QWORD *)(a1 + 816);
  v48 = v10;
  if ( sub_223D90((__int64)&v48, (unsigned __int64 *)&v44, &v43, a1) )
    a4 = nullptr;
  v11 = v44;
  v12 = v44;
  v13 = sub_1CC2C0(a1, v44);
  v14 = *(_QWORD *)(v13 + 32);
  v41 = v43;
  v15 = v12 - v14;
  v35 = v43;
  v16 = v11 + v43 - v14;
  v37 = v11 + v43;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL) != 8 )
  {
    v15 = (int)v15;
    v16 = (int)v16;
  }
  if ( v15 < 0 )
    return 0;
  get_func();
  v45 = 0;
  tinfo_get_func_frame();
  v51 = 0;
  v57 = 1;
  v50 = 8 * v15;
  v52 = 0;
  v54 = 0;
  v58 = -1;
  v59 = 0;
  v60 = 0;
  v53 = 0;
  v55 = 0;
  v56 = 0;
  tinfo_udt_member = find_tinfo_udt_member();
  v40 = tinfo_udt_member;
  if ( tinfo_udt_member == -1 )
  {
    v39 = v15;
  }
  else
  {
    v18 = v51;
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 8LL);
    if ( v51 >> 3 == *(_QWORD *)(v19 + 120) )
    {
      if ( (unsigned __int8)getinf() )
        v28 = (unsigned __int8)getinf();
      else
        v28 = *(_QWORD *)(v19 + 120);
      if ( v35 == v28 )
      {
        v61 = 0;
        copy_tinfo_t();
        if ( (get_tinfo_property() & 0x3F) == 0x39 )
        {
          i = 0;
          clear_tinfo_t();
          goto LABEL_24;
        }
        clear_tinfo_t();
      }
      v18 = v51;
    }
    v15 = v50 >> 3;
    v39 = (v18 + v50) >> 3;
  }
  if ( v39 >= v16 )
  {
LABEL_18:
    clear_tinfo_t();
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree();
    }
    if ( v52 )
    {
      *(_QWORD *)&v53 = 0;
      qfree();
    }
    clear_tinfo_t();
    return 0;
  }
  if ( !(_BYTE)v45 )
  {
    add_frame();
    tinfo_get_func_frame();
    if ( !(_BYTE)v45 )
      goto LABEL_23;
  }
  if ( (unsigned __int8)sub_32F120(&v45, v15, v16) )
    goto LABEL_23;
  if ( (a5 & 1) == 0 )
    goto LABEL_18;
  v20 = *(_QWORD *)(a1 + 936);
  if ( v20 )
  {
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 40LL))(v20);
    v22 = *(_QWORD *)(a1 + 144);
    v23 = v21;
    if ( v22 <= v21 )
      v23 = *(_QWORD *)(a1 + 144);
    if ( v21 != -1 )
      v22 = v23;
  }
  else
  {
    v22 = *(_QWORD *)(a1 + 144);
  }
  v42 = v37 > v22 && v11 < v22;
  if ( v42 )
    goto LABEL_23;
  if ( v16 - v15 != v35 )
  {
    a4 = nullptr;
    v41 = v16 - v15;
    v43 = v16 - v15;
    v35 = (int)v16 - (int)v15;
  }
  v38 = v22;
  get_dtype_by_size();
  get_dtype_flag();
  data_elsize = get_data_elsize();
  if ( v35 < data_elsize )
  {
    v41 = data_elsize;
    v43 = data_elsize;
    v16 = (int)data_elsize + v15;
  }
  v25 = v15 + *(_QWORD *)(v13 + 32);
  v36 = v25;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL) != 8 )
    v36 = (int)v25;
  if ( v11 < v38 || (unsigned __int8)sub_224C70((_QWORD *)a1, v36, v41, a4) )
  {
    v26 = 1;
    if ( (signed __int64)(v41 + v36) <= *(_QWORD *)(a1 + 128) )
    {
      v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(a1 + 1440) + v36);
      v64 = 0;
      v61 = 0;
      v62 = 0;
      src = nullptr;
      if ( v30 + v41 - 1 >= v30 )
      {
        src = (void *)qvector_reserve();
        v31 = (unsigned __int64 *)((char *)src + 16 * v64);
        *v31 = v30;
        v31[1] = v41;
        *(_QWORD *)&v64 = v64 + 1;
      }
      v26 = sub_60D40((_QWORD *)(a1 + 832), &v61);
      if ( !v26 )
        v26 = sub_3142F0(a1 + 848, &src);
      if ( src )
      {
        *(_QWORD *)&v64 = 0;
        qfree();
      }
      qfree();
    }
    v27 = sub_229D20(a1, v13, &v45, v15, v16, a6);
    if ( v27 )
    {
      sub_327F40(v46, *(_QWORD *)(a1 + 1504), (unsigned int)v41);
      if ( !v46[0] )
      {
        sub_327F40(v47, *(_QWORD *)(a1 + 1504), 1);
        LODWORD(v62) = 0;
        v61 = 0;
        HIDWORD(v62) = v41;
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      for ( i = 0; ; i = a5 & 1 )
      {
        if ( v40 == -1 )
        {
          if ( (unsigned __int8)add_frame_member() )
          {
LABEL_84:
            if ( !v26 && (a5 & 2) != 0 )
              sub_22C830((__int64)&v48, v36, v41);
            *(_DWORD *)a1 |= 0x8000000u;
            i = (v42 || v40 != -1) + 1;
            goto LABEL_68;
          }
        }
        else if ( (int)set_tinfo_property4() >= 0 )
        {
          goto LABEL_84;
        }
        if ( i )
          goto LABEL_58;
        if ( v26 )
          goto LABEL_68;
        if ( !(unsigned __int8)delete_frame_members() )
        {
LABEL_58:
          if ( !v42 )
          {
            if ( a6 )
            {
              v62 = 0;
              v68 = 1;
              src = nullptr;
              v65 = 0;
              v61 = v40 + 1;
              v71 = 0;
              v69 = -1;
              v70 = 0;
              v64 = 0;
              v66 = 0;
              v67 = 0;
              if ( (unsigned int)find_tinfo_udt_member() != -1 )
              {
                v29 = v64;
                if ( (unsigned __int64)v64 > 1 )
                {
                  v32 = src;
                  if ( a6[2] < (unsigned __int64)v64 )
                    *a6 = qvector_reserve();
                  a6[1] = v29;
                  memmove((void *)*a6, v32, v29 - 1);
                  *(_BYTE *)(*a6 + v29 - 1) = 0;
                }
                else
                {
                  a6[1] = 0;
                }
              }
              clear_tinfo_t();
              if ( v65 )
              {
                *(_QWORD *)&v66 = 0;
                qfree();
              }
              if ( src )
              {
                *(_QWORD *)&v64 = 0;
                qfree();
              }
            }
            i = -1;
LABEL_68:
            clear_tinfo_t();
            goto LABEL_24;
          }
        }
        v50 = 8 * v15;
        v40 = (int)find_tinfo_udt_member();
        if ( i == 1 )
          break;
        v42 = v27;
      }
      clear_tinfo_t();
      goto LABEL_18;
    }
    i = v26 - 1;
  }
  else
  {
LABEL_23:
    i = -1;
  }
LABEL_24:
  clear_tinfo_t();
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree();
  }
  clear_tinfo_t();
  return i;
}

