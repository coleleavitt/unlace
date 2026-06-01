__int64 __fastcall sub_241780(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx
  int tinfo_size; // r14d
  int v9; // r13d
  signed int v10; // r15d
  int v11; // eax
  __int64 v12; // rdi
  char v13; // r15
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // ecx
  __int64 v31; // r14
  __m128i *v32; // rax
  unsigned int v33; // eax
  int v34; // eax
  int v35; // r13d
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rsi
  unsigned int tinfo_property; // [rsp+8h] [rbp-F8h]
  __int64 v42; // [rsp+10h] [rbp-F0h]
  __int64 v43; // [rsp+10h] [rbp-F0h]
  int v44; // [rsp+18h] [rbp-E8h]
  const __m128i *v46; // [rsp+28h] [rbp-D8h]
  __int64 v47; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v50; // [rsp+48h] [rbp-B8h]
  __int64 v51; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v52; // [rsp+68h] [rbp-98h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  __int64 v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  __int128 v56; // [rsp+90h] [rbp-70h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int128 v58; // [rsp+A8h] [rbp-58h]
  char v59; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v60; // [rsp+C8h] [rbp-38h]

  v4 = *(_QWORD *)(a2 + 112);
  v60 = __readfsqword(0x28u);
  sub_23EE00(a1, v4, 0);
  if ( *(_BYTE *)a3 )
  {
    tinfo_size = get_tinfo_size();
    if ( (*a3 & 0xE) != 0
      || (*a3 & 0x30) == 0
      || (get_tinfo_property() & 0x3F) == 0x2D && tinfo_size != get_tinfo_size() )
    {
      v47 = 0;
      copy_tinfo_t();
      if ( (get_tinfo_property() & 0xF) == 0xA && !(unsigned __int8)del_tinfo_attr() )
        del_tinfo_attr();
      v9 = get_tinfo_property() & 0xF;
      if ( ((_BYTE)v9 == 9) != ((get_tinfo_property() & 0xF) == 9) )
      {
        if ( (_BYTE)v9 != 9 && *(_DWORD *)(a1 + 8) == 61 )
        {
          v14 = *(_QWORD *)(a1 + 24);
          if ( !(unsigned __int8)is_enum() && !(unsigned __int8)is_char() )
          {
            v15 = (unsigned int)*(char *)(v14 + 12);
            v16 = *(_QWORD *)(v14 + 40);
            if ( !(unsigned __int8)is_stroff() )
            {
              if ( *(_DWORD *)(a1 + 8) != 61 )
                sub_238FA0(v16, v15, v17);
              v48 = sub_250670(*(_QWORD *)(a1 + 24), a1 + 48, v17, v18, v19);
              v51 = 0xFFFFFFFF00000000LL;
              *(_QWORD *)&v52 = 0;
              if ( (unsigned __int8)sub_1187A0(
                                      (__int64)&v51,
                                      *(_QWORD *)(a2 + 112),
                                      (__int64)&v48,
                                      -(__int64)tinfo_size) )
              {
                sub_3266E0(&v49, *(_QWORD *)(a2 + 112), HIDWORD(v51));
                v31 = *(_QWORD *)a1;
                v46 = (const __m128i *)v52;
                sub_250270(a1);
                *(_QWORD *)a1 = v31;
                *(_DWORD *)(a1 + 8) = 62;
                v32 = (__m128i *)j__qalloc_or_throw();
                *v32 = _mm_loadu_si128(v46);
                v32[1].m128i_i32[0] = v46[1].m128i_i32[0];
                *(_QWORD *)(a1 + 24) = v32;
                copy_tinfo_t();
                v6 = 0;
                clear_tinfo_t();
                sub_1181E0((__int64)&v51);
                goto LABEL_14;
              }
              sub_1181E0((__int64)&v51);
            }
          }
        }
        sub_242EC0(a2, a1, &v47);
        goto LABEL_13;
      }
      v10 = *(unsigned __int8 *)(a2 + 130);
      v44 = get_tinfo_size();
      v11 = *(_DWORD *)(a1 + 8);
      if ( v11 == 61 )
      {
        v42 = *(_QWORD *)(a1 + 24);
        if ( !(unsigned __int8)is_enum() && !(unsigned __int8)is_char() )
        {
          v25 = (unsigned int)*(char *)(v42 + 12);
          v26 = *(_QWORD *)(v42 + 40);
          v27 = (unsigned int)is_stroff();
          v11 = *(_DWORD *)(a1 + 8);
          if ( (_BYTE)v27 )
            goto LABEL_19;
          if ( v11 != 61 )
            sub_238FA0(v26, v25, v27);
          v43 = sub_250670(*(_QWORD *)(a1 + 24), a1 + 48, v27, v28, v29);
          tinfo_property = get_tinfo_property();
          if ( v44 <= 8 )
          {
            v33 = v44;
            if ( v10 >= v44 )
              v33 = v10;
            sub_23B910(a1, a2, v43, v33, tinfo_property, nullptr);
            if ( tinfo_property == (unsigned int)get_tinfo_property() )
            {
              v6 = 0;
              goto LABEL_14;
            }
          }
          if ( !v43 && (get_tinfo_property() & 0x3F) != 0x2D )
            goto LABEL_32;
          if ( (get_tinfo_property() & 0xF) == 0xA )
          {
            if ( (v43 & *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL)) == v43 && (unsigned __int8)is_mapped() )
            {
              v34 = get_tinfo_property();
              v51 = 0;
              v35 = sub_2429D0(a2, -1, a1, v43, (unsigned int)&v51, v34, 0, v9);
              clear_tinfo_t();
              v40 = sub_242150(*(_QWORD *)(a2 + 112), v35, v36, v37, v38, v39);
              if ( a1 != v40 )
                sub_2397C0((_QWORD *)a1, v40);
              sub_241780(a1, a2, &v47);
              goto LABEL_13;
            }
            copy_tinfo_t();
            if ( *(_DWORD *)(*(_QWORD *)(a2 + 112) + 84LL) == 8 )
            {
              v30 = 8 * v10 - 1;
              if ( (unsigned __int64)v30 > 0x3F || ((-1LL << v30) & v43) == 0 )
              {
                v51 = 23;
                copy_tinfo_t();
                clear_tinfo_t();
              }
            }
          }
          else if ( (get_tinfo_property() & 0x3F) == 0x2D
                 && (unsigned __int8)sub_23B3A0(*(_QWORD *)(a1 + 24) + 8LL, &v47, nullptr, v43) )
          {
            goto LABEL_30;
          }
        }
        v11 = *(_DWORD *)(a1 + 8);
      }
LABEL_19:
      if ( v11 == 48 && ((v47 & 0xE) != 0 || (v47 & 0x30) == 0) )
      {
        v12 = *(_QWORD *)(a1 + 48);
        if ( !(_BYTE)v12 || (v12 & 0xE) == 0 && (v12 & 0x30) != 0 )
          goto LABEL_39;
        v51 = 0;
        v51 = get_tinfo_property();
        v13 = get_tinfo_property();
        clear_tinfo_t();
        if ( (v13 & 0x3F) == 0x30 )
          goto LABEL_26;
      }
      if ( !(unsigned __int8)sub_324BC0(a2, a1 + 48, &v47) )
      {
LABEL_26:
        if ( *(_DWORD *)(a1 + 8) != 48 )
        {
          if ( tinfo_size == v44 )
          {
LABEL_28:
            if ( *(_DWORD *)(a1 + 8) == 57 )
            {
              v21 = *(_QWORD *)(a1 + 24);
              if ( *(_DWORD *)(v21 + 8) == 68 && sub_23D420(*(_BYTE **)(v21 + 24)) )
              {
                v22 = get_tinfo_property();
                if ( (v22 & 0x3E) != 0 && (v22 & 0xFu) <= 8 )
                {
                  qfree();
                  sub_241700((__int64)&v49);
                  v23 = *(_QWORD *)(a1 + 24);
                  v24 = v49;
                  if ( (unsigned __int64)v50 < *((_QWORD *)&v50 + 1) )
                  {
                    if ( v49 )
                    {
                      if ( (_QWORD)v50 )
                      {
                        v24 = qrealloc();
                        if ( !v24 )
                          v24 = v49;
                      }
                    }
                  }
                  v49 = 0;
                  v50 = 0;
                  *(_QWORD *)(v23 + 24) = v24;
                  v51 = 0;
                  v53 = 0;
                  v54 = 0;
                  v55 = 0;
                  v57 = 0;
                  v59 = 16;
                  v52 = 0;
                  v56 = 0;
                  v58 = 0;
                  if ( !(unsigned __int8)get_tinfo_details() )
                  {
                    if ( !under_debugger )
                      sub_37CFE0(51943);
                    BUG();
                  }
                  copy_tinfo_t();
                  create_tinfo();
                  sub_CB4B0(&v51);
                  if ( v49 )
                  {
                    *(_QWORD *)&v50 = 0;
                    qfree();
                  }
                  goto LABEL_30;
                }
              }
            }
            goto LABEL_29;
          }
          goto LABEL_29;
        }
LABEL_39:
        if ( tinfo_size == v44 )
        {
          if ( (_BYTE)v9 == 9 )
          {
            if ( tinfo_size == v44 )
              goto LABEL_30;
            goto LABEL_29;
          }
          if ( (getinf() & 0xF) != 2 && (get_tinfo_property() & 0xF) == 9 )
          {
            tinfo_size = get_tinfo_property();
            v20 = get_tinfo_property();
          }
          else
          {
            v20 = v44;
          }
          if ( tinfo_size == v20 )
            goto LABEL_30;
          goto LABEL_28;
        }
LABEL_29:
        sub_23F9C0((__int64 *)a1);
LABEL_30:
        copy_tinfo_t();
LABEL_13:
        v6 = 1;
LABEL_14:
        clear_tinfo_t();
        return v6;
      }
LABEL_32:
      v6 = 0;
      goto LABEL_14;
    }
  }
  return 0;
}

