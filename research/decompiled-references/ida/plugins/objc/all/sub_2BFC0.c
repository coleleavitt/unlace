__int64 __fastcall sub_2BFC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  int v8; // eax
  char v9; // r14
  _QWORD *v10; // r13
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  size_t v14; // rax
  const char *v15; // r8
  size_t v16; // r15
  __int64 v17; // rdx
  int v18; // esi
  char v19; // cl
  int v20; // eax
  __int64 v21; // rbx
  int flags; // eax
  const char *v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  void *v26; // rdi
  void *v27; // rdx
  _BYTE *v28; // rcx
  __int64 name_ea; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 segm_by_name; // rax
  __int64 v34; // r12
  __int64 v35; // rdi
  unsigned __int64 v36; // rbx
  char v37; // dl
  __int64 v38; // rax
  const char *src; // [rsp+0h] [rbp-188h]
  void *srca; // [rsp+0h] [rbp-188h]
  const char *v41; // [rsp+8h] [rbp-180h]
  __int64 v42; // [rsp+18h] [rbp-170h] BYREF
  __int64 tinfo_property; // [rsp+20h] [rbp-168h] BYREF
  __int128 v44; // [rsp+28h] [rbp-160h]
  __int64 v45; // [rsp+38h] [rbp-150h]
  __int64 v46; // [rsp+40h] [rbp-148h]
  __int64 v47; // [rsp+48h] [rbp-140h]
  __int128 v48; // [rsp+50h] [rbp-138h]
  __int64 v49; // [rsp+60h] [rbp-128h]
  __int128 v50; // [rsp+68h] [rbp-120h]
  char v51; // [rsp+78h] [rbp-110h]
  __int128 v52; // [rsp+80h] [rbp-108h]
  __int128 v53; // [rsp+90h] [rbp-F8h]
  __int64 v54; // [rsp+A0h] [rbp-E8h]
  __int64 v55; // [rsp+A8h] [rbp-E0h]
  __int64 selector; // [rsp+B0h] [rbp-D8h]
  _BYTE v57[128]; // [rsp+B8h] [rbp-D0h] BYREF
  unsigned __int64 v58; // [rsp+138h] [rbp-50h]
  unsigned __int64 v59; // [rsp+148h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 8) != 57 )
    return 0;
  v5 = *(_QWORD *)(a3 + 24);
  v8 = *(_DWORD *)(v5 + 8);
  if ( v8 == 64 )
  {
    v9 = sub_13E50(a1, *(_QWORD *)(v5 + 24));
  }
  else
  {
    if ( v8 != 68 )
      return 0;
    v9 = sub_13EE0(*(char **)(v5 + 24));
  }
  if ( v9 != 71 && v9 != 115 )
    return 0;
  v10 = *(_QWORD **)(a3 + 32);
  if ( v10[1] <= 1u )
    return 0;
  v11 = *v10;
  v12 = *(_DWORD *)(*v10 + 80LL);
  if ( v12 == 52 )
  {
    v13 = *(_QWORD *)(v11 + 96);
    if ( *(_DWORD *)(v13 + 8) != 64 || *(_QWORD *)(v13 + 24) == -1 )
      return 0;
LABEL_16:
    if ( get_strlit_contents() <= 0 )
      return 0;
    goto LABEL_22;
  }
  if ( v12 == 64 )
  {
    if ( *(_QWORD *)(v11 + 96) == -1 )
      return 0;
    goto LABEL_16;
  }
  if ( v12 != 63 )
    return 0;
  if ( *(_QWORD *)(v11 + 96) && (src = *(const char **)(v11 + 96), v14 = strlen(src), v15 = src, (v16 = v14) != 0) )
  {
    v26 = *(void **)a2;
    v27 = (void *)(v14 + 1);
    if ( *(_QWORD *)(a2 + 16) < v14 + 1 )
    {
      srca = (void *)(v14 + 1);
      v41 = v15;
      v32 = qvector_reserve();
      v15 = v41;
      v27 = srca;
      *(_QWORD *)a2 = v32;
      v26 = (void *)v32;
    }
    *(_QWORD *)(a2 + 8) = v27;
    memmove(v26, v15, v16);
    *(_BYTE *)(*(_QWORD *)a2 + v16) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0;
  }
LABEL_22:
  v17 = *v10;
  v18 = *(_DWORD *)(*v10 + 8LL);
  v19 = v18 - 48;
  if ( (unsigned int)(v18 - 48) > 0x11 )
    return 0;
  if ( ((1LL << v19) & 0x21E09) != 0 )
  {
    *(_BYTE *)(a2 + 72) = 1;
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0x100) != 0 && get_tinfo_pdata() )
    {
      sub_16A30(*(_QWORD *)(a1 + 1808), (__int64 *)(a2 + 56));
      v31 = tinfo_property;
      tinfo_property = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 48) = v31;
    }
    clear_tinfo_t();
    goto LABEL_36;
  }
  if ( ((1LL << v19) & 0x10010) == 0 )
    return 0;
  if ( v18 != 52 )
    goto LABEL_26;
  v30 = *(_DWORD *)(*(_QWORD *)(v17 + 24) + 8LL);
  if ( v30 != 65 || v9 != 115 )
  {
    if ( v30 != 64 )
      goto LABEL_36;
LABEL_26:
    *(_BYTE *)(a2 + 72) = 0;
    v20 = *(_DWORD *)(v17 + 8);
    if ( v20 == 52 )
    {
      v17 = *(_QWORD *)(v17 + 24);
      v20 = *(_DWORD *)(v17 + 8);
    }
    v21 = -1;
    if ( v20 == 64
      && (v21 = *(_QWORD *)(v17 + 24), v21 != -1)
      && (flags = get_flags_ex(), (flags & 0x600) == 0x400)
      && (flags & 0xF0000000) == 0x50000000 )
    {
      if ( get_strlit_contents() <= 0 )
        goto LABEL_36;
      sub_16A30(*(_QWORD *)(a1 + 1808), (__int64 *)(a2 + 56));
      v23 = ::src;
      if ( !*(_QWORD *)(a2 + 32) )
        goto LABEL_34;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 1808) + 400LL))(
        *(_QWORD *)(a1 + 1808),
        a2 + 56,
        v21);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 1808) + 408LL))(
              *(_QWORD *)(a1 + 1808),
              a2 + 24,
              v21) )
        goto LABEL_36;
      v23 = ::src;
      if ( !*(_QWORD *)(a2 + 32) )
        goto LABEL_34;
    }
    v23 = *(const char **)(a2 + 24);
LABEL_34:
    if ( v23 )
    {
      *(_QWORD *)&v44 = v23;
      WORD4(v44) = 256;
      tinfo_property = get_idati();
      create_tinfo();
    }
    goto LABEL_36;
  }
  *(_BYTE *)(a2 + 72) = 1;
  v45 = 0;
  tinfo_property = 0;
  v46 = 0;
  v47 = 0;
  v49 = 0;
  v51 = 16;
  v44 = 0;
  v48 = 0;
  v50 = 0;
  if ( get_func() )
  {
    if ( (unsigned __int8)get_tinfo() )
    {
      if ( (unsigned __int8)get_tinfo_details() )
      {
        if ( (_QWORD)v44 )
        {
          if ( (get_tinfo_property() & 0xF) == 0xA )
          {
            v42 = get_tinfo_property();
            copy_tinfo_t();
            clear_tinfo_t();
            if ( (*(_QWORD *)(a2 + 48) & 0x100) != 0 )
            {
              if ( get_tinfo_pdata() )
              {
                v35 = *(_QWORD *)(a1 + 1808);
                v42 = 0;
                if ( (unsigned __int8)sub_16A30(v35, &v42) )
                  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 1808) + 448LL))(
                    *(_QWORD *)(a1 + 1808),
                    a2 + 56,
                    v42);
              }
            }
          }
        }
      }
    }
  }
  sub_12840(&tinfo_property);
  clear_tinfo_t();
LABEL_36:
  v24 = *(_QWORD *)(a2 + 56);
  if ( v24 == -1 )
  {
    v25 = *(_QWORD *)(a2 + 64);
  }
  else
  {
    v25 = sub_16810(*(__int64 **)(a1 + 1808), v24, a2);
    *(_QWORD *)(a2 + 64) = v25;
  }
  if ( v25 != -1 )
    return 1;
  if ( *(_QWORD *)(a2 + 8) <= 1u )
    return 1;
  if ( *(_QWORD *)(a2 + 32) <= 1u )
    return 1;
  v28 = *(_BYTE **)(a2 + 24);
  if ( *v28 == 35 || *v28 == 105 && v28[1] == 100 && !v28[2] )
    return 1;
  tinfo_property = 0;
  v44 = 0;
  sub_D6A0(&tinfo_property);
  name_ea = get_name_ea();
  if ( name_ea != -1 )
  {
    *(_QWORD *)(a2 + 64) = name_ea;
    goto LABEL_54;
  }
  if ( !(unsigned __int8)is_debugger_on() )
  {
    segm_by_name = get_segm_by_name();
    if ( segm_by_name )
    {
      v34 = *(_QWORD *)(segm_by_name + 8);
      getinf_flag();
      if ( !(unsigned __int8)set_segm_end() )
        goto LABEL_54;
    }
    else
    {
      v54 = 0;
      v55 = 0;
      selector = 0;
      v58 = 0xFFFFFFFF00000000LL;
      memset(v57, -1, sizeof(v57));
      v52 = 0;
      v53 = 0;
      v36 = (getinf() + 15) & 0xFFFFFFFFFFFFFFF0LL;
      *(_QWORD *)&v52 = v36;
      v37 = getinf_flag();
      v38 = 4;
      if ( v37 )
        v38 = 8;
      LOBYTE(v58) = 1;
      *((_QWORD *)&v52 + 1) = v38 + v36;
      LOWORD(v55) = 515;
      BYTE3(v55) = getinf_flag() + 1;
      selector = allocate_selector();
      if ( !(unsigned __int8)add_segm_ex() )
        goto LABEL_54;
      v34 = v52;
    }
    set_name();
    *(_QWORD *)(a2 + 64) = v34;
  }
LABEL_54:
  if ( tinfo_property )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  return 1;
}
