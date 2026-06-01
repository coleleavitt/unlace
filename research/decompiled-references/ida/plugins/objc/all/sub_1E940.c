unsigned __int64 __fastcall sub_1E940(__int64 *a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v5; // r12
  __int64 idati; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r12
  unsigned __int64 v12; // r9
  size_t v13; // r11
  __int64 v14; // r15
  __int64 v15; // rbx
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rdx
  __int64 v20; // rax
  int v21; // esi
  char v22; // bl
  const void *v23; // r8
  void *v24; // rdi
  char tinfo; // r15
  __int64 v26; // rdi
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 v29; // r14
  __int64 v30; // rdi
  __int64 v31; // r12
  __int64 v32; // r14
  _QWORD *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  const void *v37; // [rsp+8h] [rbp-1C8h]
  size_t v38; // [rsp+10h] [rbp-1C0h]
  unsigned __int64 v39; // [rsp+18h] [rbp-1B8h]
  unsigned __int64 v40; // [rsp+20h] [rbp-1B0h]
  __int64 v42; // [rsp+38h] [rbp-198h]
  int v43; // [rsp+48h] [rbp-188h]
  int v44; // [rsp+58h] [rbp-178h] BYREF
  int v45; // [rsp+5Ch] [rbp-174h] BYREF
  __int64 v46; // [rsp+60h] [rbp-170h] BYREF
  __int128 v47; // [rsp+68h] [rbp-168h]
  const char *v48; // [rsp+80h] [rbp-150h] BYREF
  __int128 v49; // [rsp+88h] [rbp-148h]
  __int64 v50; // [rsp+A0h] [rbp-130h]
  __int128 v51; // [rsp+A8h] [rbp-128h]
  __int64 v52; // [rsp+C0h] [rbp-110h] BYREF
  __int128 v53; // [rsp+C8h] [rbp-108h]
  __int128 v54; // [rsp+D8h] [rbp-F8h]
  __int64 v55; // [rsp+E8h] [rbp-E8h]
  int v56; // [rsp+F0h] [rbp-E0h]
  _BYTE v57[24]; // [rsp+100h] [rbp-D0h] BYREF
  __int128 v58; // [rsp+118h] [rbp-B8h]
  __int64 v59; // [rsp+128h] [rbp-A8h]
  __int128 v60; // [rsp+130h] [rbp-A0h]
  _OWORD v61[3]; // [rsp+140h] [rbp-90h] BYREF
  __int64 v62; // [rsp+170h] [rbp-60h]
  int v63; // [rsp+178h] [rbp-58h]
  __int64 v64; // [rsp+180h] [rbp-50h]
  char v65; // [rsp+188h] [rbp-48h]
  unsigned __int64 v66; // [rsp+198h] [rbp-38h]

  v66 = __readfsqword(0x28u);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 424))(a1) )
  {
    v52 = 0;
    *(_WORD *)&v57[16] = 0;
    v5 = a4->m128i_i64[0];
    *(_QWORD *)&v57[8] = "";
    idati = v5;
    if ( !v5 )
      idati = get_idati();
    *(_QWORD *)v57 = idati;
    create_tinfo();
    save_tinfo();
    if ( *(_BYTE *)(a1[1] + 2216) )
    {
      *(_OWORD *)&v57[8] = 0;
      print_tinfo();
      sub_EC40();
    }
    clear_tinfo_t();
    return v66 - __readfsqword(0x28u);
  }
  v8 = *a1;
  v44 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, int *, __int64))(v8 + 432))(a1, &v44, a2) && v44 )
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 440))(a1, a2);
  v9 = *a1;
  v45 = 0;
  (*(void (__fastcall **)(__int64 *, int *, __int64))(v9 + 416))(a1, &v45, a2);
  v52 = 0;
  v55 = 0;
  v56 = 1;
  v46 = 0;
  v53 = 0;
  v54 = 0;
  v47 = 0;
  sub_16260(a1, (__int64)&v46, a2, v44, a4);
  if ( sub_169D0(a1, a2) )
  {
    v17 = *a1;
    v49 = 0;
    v48 = 0;
    (*(void (__fastcall **)(__int64 *, const char **, __int64))(v17 + 456))(a1, &v48, a2);
    v65 = 0;
    v62 = 1;
    v59 = 0;
    v63 = -1;
    v64 = 0;
    memset(v57, 0, sizeof(v57));
    v58 = 0;
    v60 = 0;
    v61[0] = 0;
    v18 = qvector_reserve();
    *(_QWORD *)&v57[16] = v18;
    *(_QWORD *)&v58 = 6;
    *(_DWORD *)v18 = 1701868915;
    *(_BYTE *)(v18 + 4) = 114;
    *(_BYTE *)(*(_QWORD *)&v57[16] + 5LL) = 0;
    if ( (_QWORD)v49 )
    {
      v19 = v48;
      if ( !v48 )
        goto LABEL_38;
    }
    else
    {
      v19 = src;
      if ( !src )
        goto LABEL_38;
    }
    *(_QWORD *)&v51 = v19;
    WORD4(v51) = 256;
    v20 = a4->m128i_i64[0];
    if ( !a4->m128i_i64[0] )
      v20 = get_idati();
    v50 = v20;
    if ( (unsigned __int8)create_tinfo() && get_tinfo_size() != -1 )
    {
      v22 = *(_BYTE *)(a1[1] + 2216);
      if ( !v22 )
        goto LABEL_86;
LABEL_92:
      v50 = 0;
      v51 = 0;
      print_tinfo();
      sub_EC40();
      if ( v50 )
      {
        *(_QWORD *)&v51 = 0;
        qfree();
      }
LABEL_41:
      if ( !v22 )
      {
LABEL_42:
        clear_tinfo_t();
        if ( v59 )
        {
          *(_QWORD *)&v60 = 0;
          qfree();
        }
        if ( *(_QWORD *)&v57[16] )
        {
          *(_QWORD *)&v58 = 0;
          qfree();
        }
        if ( v48 )
        {
          *(_QWORD *)&v49 = 0;
          qfree();
        }
        goto LABEL_10;
      }
LABEL_86:
      sub_195B0(&v52, (__int64)v57);
      goto LABEL_42;
    }
LABEL_38:
    sub_D6A0((__int64 *)&v57[16]);
    if ( (_QWORD)v47 )
      v21 = *(_DWORD *)(v46 + 40);
    else
      v21 = v45;
    v22 = sub_EA50((__int64)v61, v21);
    if ( !*(_BYTE *)(a1[1] + 2216) )
      goto LABEL_41;
    goto LABEL_92;
  }
LABEL_10:
  v10 = 0;
  v11 = 0;
  v42 = v47;
  if ( (_QWORD)v47 )
  {
    do
    {
      v14 = v10 + v46;
      if ( (_QWORD)v53 )
      {
        v15 = *(_QWORD *)(v52 + 144 * v53 - 144) >> 3;
        v16 = v15 + get_tinfo_size();
        if ( (unsigned int)(*(_DWORD *)(v14 + 40) - v16) >= *((_DWORD *)a1 + 186) )
        {
          v43 = *(_DWORD *)(v14 + 40) - v16;
          *(_OWORD *)v57 = (unsigned int)(8 * v16);
          *(_QWORD *)&v57[16] = 0;
          v59 = 0;
          v62 = 1;
          v63 = -1;
          v64 = 0;
          v65 = 0;
          v58 = 0;
          v60 = 0;
          v61[0] = 0;
          sub_D6A0((__int64 *)&v57[16]);
          if ( (unsigned __int8)sub_EA50((__int64)v61, v43) )
            sub_195B0(&v52, (__int64)v57);
          clear_tinfo_t();
          if ( v59 )
          {
            *(_QWORD *)&v60 = 0;
            qfree();
          }
          if ( *(_QWORD *)&v57[16] )
          {
            *(_QWORD *)&v58 = 0;
            qfree();
          }
        }
      }
      v62 = 1;
      v63 = -1;
      *(_QWORD *)&v57[16] = 0;
      v59 = 0;
      v64 = 0;
      v65 = 0;
      v58 = 0;
      v60 = 0;
      v61[0] = 0;
      *(_OWORD *)v57 = (unsigned int)(8 * *(_DWORD *)(v14 + 40));
      copy_tinfo_t();
      if ( (_BYTE *)v14 != &v57[16] )
      {
        v12 = *(_QWORD *)(v14 + 8);
        if ( !v12 || (v13 = v12 - 1, v12 == 1) )
        {
          *(_QWORD *)&v58 = 0;
LABEL_16:
          sub_D6A0((__int64 *)&v57[16]);
          goto LABEL_17;
        }
        v23 = *(const void **)v14;
        v24 = *(void **)&v57[16];
        if ( *((_QWORD *)&v58 + 1) < v12 )
        {
          v37 = *(const void **)v14;
          v38 = v12 - 1;
          v39 = *(_QWORD *)(v14 + 8);
          *(_QWORD *)&v57[16] = qvector_reserve();
          v23 = v37;
          v24 = *(void **)&v57[16];
          v13 = v38;
          v12 = v39;
        }
        *(_QWORD *)&v58 = v12;
        v40 = v12;
        memmove(v24, v23, v13);
        *(_BYTE *)(*(_QWORD *)&v57[16] + v40 - 1) = 0;
      }
      if ( (unsigned __int64)v58 <= 1 )
        goto LABEL_16;
LABEL_17:
      if ( LOBYTE(v61[0]) || (unsigned __int8)sub_EA50((__int64)v61, *(_DWORD *)(v14 + 48)) )
        sub_195B0(&v52, (__int64)v57);
      clear_tinfo_t();
      if ( v59 )
      {
        *(_QWORD *)&v60 = 0;
        qfree();
      }
      if ( *(_QWORD *)&v57[16] )
      {
        *(_QWORD *)&v58 = 0;
        qfree();
      }
      ++v11;
      v10 += 56;
    }
    while ( v11 != v42 );
  }
  v48 = 0;
  if ( !(_QWORD)v53 && v45 && (unsigned __int8)sub_EA50((__int64)&v48, v45) )
  {
    v34 = v53;
    v35 = v52;
    if ( *((_QWORD *)&v53 + 1) < (unsigned __int64)(v53 + 1) )
    {
      v52 = qvector_reserve();
      v35 = v52;
      v34 = v53;
    }
    v36 = v35 + 144 * v34;
    *(_OWORD *)v36 = 0;
    *(_QWORD *)(v36 + 16) = 0;
    *(_QWORD *)(v36 + 40) = 0;
    *(_QWORD *)(v36 + 112) = 1;
    *(_DWORD *)(v36 + 120) = -1;
    *(_QWORD *)(v36 + 128) = 0;
    *(_BYTE *)(v36 + 136) = 0;
    *(_OWORD *)(v36 + 24) = 0;
    *(_OWORD *)(v36 + 48) = 0;
    *(_OWORD *)(v36 + 64) = 0;
    *(_QWORD *)&v53 = v53 + 1;
    sub_D6A0((__int64 *)(v36 + 16));
    copy_tinfo_t();
  }
  v50 = 0;
  tinfo = create_tinfo();
  if ( *(_BYTE *)(a1[1] + 2216) )
  {
    memset(v57, 0, sizeof(v57));
    print_tinfo();
    sub_EC40();
    if ( *(_QWORD *)v57 )
    {
      *(_QWORD *)&v57[8] = 0;
      qfree();
    }
    if ( !tinfo )
      goto LABEL_80;
    goto LABEL_78;
  }
  if ( tinfo )
  {
LABEL_78:
    if ( !(unsigned int)save_tinfo() )
    {
      ++a4[4].m128i_i64[0];
      goto LABEL_59;
    }
LABEL_80:
    if ( *(_BYTE *)(a1[1] + 2216) )
      sub_EC40();
  }
LABEL_59:
  clear_tinfo_t();
  clear_tinfo_t();
  v26 = v46;
  if ( v46 )
  {
    v27 = v47;
    if ( (_QWORD)v47 )
    {
      v28 = 0;
      v29 = 0;
      do
      {
        clear_tinfo_t();
        if ( *(_QWORD *)(v26 + v28) )
        {
          *(_QWORD *)(v26 + v28 + 8) = 0;
          qfree();
        }
        v26 = v46;
        v28 += 56;
        ++v29;
      }
      while ( v27 != v29 );
    }
    *(_QWORD *)&v47 = 0;
    qfree();
  }
  v30 = v52;
  if ( v52 )
  {
    v31 = v53;
    if ( (_QWORD)v53 )
    {
      v32 = 0;
      do
      {
        v33 = (_QWORD *)(v30 + 144 * v32);
        clear_tinfo_t();
        if ( v33[5] )
        {
          v33[6] = 0;
          qfree();
        }
        if ( v33[2] )
        {
          v33[3] = 0;
          qfree();
        }
        v30 = v52;
        ++v32;
      }
      while ( v31 != v32 );
    }
    *(_QWORD *)&v53 = 0;
    qfree();
  }
  return v66 - __readfsqword(0x28u);
}
