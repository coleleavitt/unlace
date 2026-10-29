__int64 __fastcall sub_246B40(__int64 a1, __int64 a2, _QWORD *a3, double a4)
{
  __int64 v5; // rsi
  unsigned int v7; // ebx
  int tinfo_size; // r14d
  __int64 v10; // r13
  signed int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  char v16; // r15
  int v17; // eax
  char v18; // al
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // r14
  __int64 v22; // rdi
  char v23; // al
  __int64 v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __m128i *v28; // rax
  unsigned int v29; // eax
  int v30; // eax
  __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  int tinfo_property; // [rsp+8h] [rbp-F8h]
  __int64 v36; // [rsp+10h] [rbp-F0h]
  __int64 v37; // [rsp+10h] [rbp-F0h]
  int v38; // [rsp+18h] [rbp-E8h]
  const __m128i *v40; // [rsp+28h] [rbp-D8h]
  __int64 v41; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v44; // [rsp+48h] [rbp-B8h]
  __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h]
  __int128 v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int128 v52; // [rsp+A8h] [rbp-58h]
  char v53; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v54; // [rsp+C8h] [rbp-38h]

  v5 = *(_QWORD *)(a2 + 112);
  v54 = __readfsqword(0x28u);
  sub_2441C0(a1, v5, 0, a4);
  if ( *(_BYTE *)a3 )
  {
    tinfo_size = get_tinfo_size();
    if ( (*a3 & 0xE) != 0
      || (*a3 & 0x30) == 0
      || (get_tinfo_property() & 0x3F) == 0x2D && tinfo_size != get_tinfo_size() )
    {
      v41 = 0;
      copy_tinfo_t();
      if ( (get_tinfo_property() & 0xF) == 0xA && !(unsigned __int8)del_tinfo_attr() )
        del_tinfo_attr();
      v10 = get_tinfo_property() & 0xF;
      if ( ((_BYTE)v10 == 9) != ((get_tinfo_property() & 0xF) == 9) )
      {
        if ( (_BYTE)v10 != 9
          && *(_DWORD *)(a1 + 8) == 61
          && !(unsigned __int8)is_enum()
          && !(unsigned __int8)is_char()
          && !(unsigned __int8)is_stroff() )
        {
          if ( *(_DWORD *)(a1 + 8) != 61 )
            sub_23E360(a4);
          v42 = sub_255A30(*(__int64 **)(a1 + 24));
          v45 = 0xFFFFFFFF00000000LL;
          *(_QWORD *)&v46 = 0;
          if ( (unsigned __int8)sub_11D360((__int64)&v45, *(_QWORD *)(a2 + 112), &v42, -(__int64)tinfo_size, a4) )
          {
            v24 = *(_QWORD *)(a2 + 112);
            sub_32C150(&v43, v24, SHIDWORD(v45));
            v25 = *(_QWORD *)a1;
            v40 = (const __m128i *)v46;
            sub_255630(a1);
            *(_QWORD *)a1 = v25;
            *(_DWORD *)(a1 + 8) = 62;
            v28 = (__m128i *)j__qalloc_or_throw(20, v24, v26, v27);
            *v28 = _mm_loadu_si128(v40);
            v28[1].m128i_i32[0] = v40[1].m128i_i32[0];
            *(_QWORD *)(a1 + 24) = v28;
            copy_tinfo_t();
            v7 = 0;
            clear_tinfo_t();
            sub_11CDA0((__int64)&v45);
            goto LABEL_14;
          }
          sub_11CDA0((__int64)&v45);
        }
        sub_248280(a2, a1, &v41);
        goto LABEL_13;
      }
      v11 = *(unsigned __int8 *)(a2 + 130);
      v38 = get_tinfo_size();
      v14 = *(_DWORD *)(a1 + 8);
      if ( v14 == 61 )
      {
        v36 = *(_QWORD *)(a1 + 24);
        v18 = is_enum();
        v12 = v36;
        if ( !v18 )
        {
          v23 = is_char();
          v12 = v36;
          if ( !v23 )
          {
            v12 = (unsigned int)is_stroff();
            v14 = *(_DWORD *)(a1 + 8);
            if ( (_BYTE)v12 )
              goto LABEL_19;
            if ( v14 != 61 )
              sub_23E360(a4);
            v37 = sub_255A30(*(__int64 **)(a1 + 24));
            tinfo_property = get_tinfo_property();
            if ( v38 <= 8 )
            {
              v29 = v38;
              if ( v11 >= v38 )
                v29 = v11;
              sub_240CD0(a1, a2, v37, v29, tinfo_property, nullptr, a4);
              if ( tinfo_property == (unsigned int)get_tinfo_property() )
              {
                v7 = 0;
                goto LABEL_14;
              }
            }
            if ( !v37 && (get_tinfo_property() & 0x3F) != 0x2D )
              goto LABEL_32;
            if ( (get_tinfo_property() & 0xF) == 0xA )
            {
              if ( (v37 & *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL)) == v37 && (unsigned __int8)is_mapped() )
              {
                v30 = get_tinfo_property();
                v45 = 0;
                v31 = sub_247D90(a2, -1, a1, v37, &v45, v30, 0);
                clear_tinfo_t();
                v34 = sub_247510(*(_QWORD *)(a2 + 112), v31, v32, v33);
                if ( a1 != v34 )
                  sub_23EB80((_QWORD *)a1, v34);
                sub_246B40(a1, a2, &v41);
                goto LABEL_13;
              }
              copy_tinfo_t();
              if ( *(_DWORD *)(*(_QWORD *)(a2 + 112) + 84LL) == 8 )
              {
                v13 = (unsigned int)(8 * v11 - 1);
                if ( (unsigned __int64)(int)v13 > 0x3F || ((-1LL << (8 * (unsigned __int8)v11 - 1)) & v37) == 0 )
                {
                  v45 = 23;
                  copy_tinfo_t();
                  clear_tinfo_t();
                }
              }
            }
            else if ( (get_tinfo_property() & 0x3F) == 0x2D
                   && (unsigned __int8)sub_240760(*(_QWORD *)(a1 + 24) + 8LL, &v41, nullptr, v37) )
            {
              goto LABEL_30;
            }
          }
        }
        v14 = *(_DWORD *)(a1 + 8);
      }
LABEL_19:
      if ( v14 == 48 && ((v41 & 0xE) != 0 || (v41 & 0x30) == 0) )
      {
        v15 = *(_QWORD *)(a1 + 48);
        if ( !(_BYTE)v15 || (v15 & 0xE) == 0 && (v15 & 0x30) != 0 )
          goto LABEL_39;
        v45 = 0;
        v45 = get_tinfo_property();
        v16 = get_tinfo_property();
        clear_tinfo_t();
        if ( (v16 & 0x3F) == 0x30 )
          goto LABEL_26;
      }
      if ( !(unsigned __int8)sub_32A510(a2) )
      {
LABEL_26:
        if ( *(_DWORD *)(a1 + 8) != 48 )
        {
          if ( tinfo_size == v38 )
          {
LABEL_28:
            if ( *(_DWORD *)(a1 + 8) == 57 )
            {
              v19 = *(_QWORD *)(a1 + 24);
              if ( *(_DWORD *)(v19 + 8) == 68 && sub_2427E0(*(_BYTE **)(v19 + 24)) )
              {
                v20 = get_tinfo_property();
                if ( (v20 & 0x3E) != 0 && (v20 & 0xFu) <= 8 )
                {
                  qfree(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL));
                  sub_246AC0((__int64)&v43);
                  v21 = *(_QWORD *)(a1 + 24);
                  v22 = v43;
                  if ( (unsigned __int64)v44 < *((_QWORD *)&v44 + 1) )
                  {
                    if ( v43 )
                    {
                      if ( (_QWORD)v44 )
                      {
                        v22 = qrealloc();
                        if ( !v22 )
                          v22 = v43;
                      }
                    }
                  }
                  v43 = 0;
                  v44 = 0;
                  *(_QWORD *)(v21 + 24) = v22;
                  v45 = 0;
                  v47 = 0;
                  v48 = 0;
                  v49 = 0;
                  v51 = 0;
                  v53 = 16;
                  v46 = 0;
                  v50 = 0;
                  v52 = 0;
                  if ( !(unsigned __int8)get_tinfo_details() )
                  {
                    if ( !under_debugger )
                      sub_383060(0xCAE7u, 0.0);
                    BUG();
                  }
                  copy_tinfo_t();
                  create_tinfo();
                  sub_D0070(&v45);
                  if ( v43 )
                  {
                    *(_QWORD *)&v44 = 0;
                    qfree(v43);
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
        if ( tinfo_size == v38 )
        {
          if ( (_BYTE)v10 == 9 )
          {
            if ( tinfo_size == v38 )
              goto LABEL_30;
            goto LABEL_29;
          }
          if ( (getinf() & 0xF) != 2 && (get_tinfo_property() & 0xF) == 9 )
          {
            tinfo_size = get_tinfo_property();
            v17 = get_tinfo_property();
          }
          else
          {
            v17 = v38;
          }
          if ( tinfo_size == v17 )
            goto LABEL_30;
          goto LABEL_28;
        }
LABEL_29:
        sub_244D80((__int64 *)a1, (__int64)&v41, v12, v13);
LABEL_30:
        copy_tinfo_t();
LABEL_13:
        v7 = 1;
LABEL_14:
        clear_tinfo_t();
        return v7;
      }
LABEL_32:
      v7 = 0;
      goto LABEL_14;
    }
  }
  return 0;
}

