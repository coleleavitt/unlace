unsigned __int64 __fastcall sub_3A290(
        _BYTE *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        unsigned __int8 a6)
{
  _QWORD *v6; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned int v15; // ebp
  unsigned int v16; // ebx
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rdi
  __int64 v21; // rax
  char *v22; // rax
  __int64 name_ea; // rax
  __int64 _64bit; // rdi
  char v25; // al
  __int64 range; // rax
  unsigned int v27; // eax
  char v29; // dl
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rsi
  char v33; // [rsp+0h] [rbp-598h]
  char *v34; // [rsp+8h] [rbp-590h]
  unsigned int v35; // [rsp+14h] [rbp-584h]
  unsigned __int64 v36; // [rsp+18h] [rbp-580h]
  int v37; // [rsp+20h] [rbp-578h]
  int v38; // [rsp+24h] [rbp-574h]
  unsigned __int64 v39; // [rsp+28h] [rbp-570h]
  char *n; // [rsp+30h] [rbp-568h]
  __int64 v41; // [rsp+40h] [rbp-558h]
  unsigned int v43; // [rsp+58h] [rbp-540h]
  char v44; // [rsp+5Dh] [rbp-53Bh]
  size_t v46; // [rsp+60h] [rbp-538h]
  char v47; // [rsp+60h] [rbp-538h]
  __int64 v48; // [rsp+60h] [rbp-538h]
  char v49; // [rsp+68h] [rbp-530h]
  __int64 v50; // [rsp+70h] [rbp-528h]
  __int64 v51; // [rsp+70h] [rbp-528h]
  _BYTE *v52; // [rsp+A0h] [rbp-4F8h]
  void *src; // [rsp+C0h] [rbp-4D8h] BYREF
  _BYTE v54[24]; // [rsp+C8h] [rbp-4D0h]
  __int64 v55; // [rsp+E0h] [rbp-4B8h]
  __int16 v56; // [rsp+E8h] [rbp-4B0h]
  __int128 v57; // [rsp+F0h] [rbp-4A8h]
  __int64 v58; // [rsp+100h] [rbp-498h]
  __int64 v59; // [rsp+108h] [rbp-490h]
  int v60; // [rsp+110h] [rbp-488h]
  __int64 v61; // [rsp+118h] [rbp-480h]
  int v62; // [rsp+120h] [rbp-478h]
  __int64 v63; // [rsp+128h] [rbp-470h]
  int v64; // [rsp+130h] [rbp-468h]
  __int64 v65; // [rsp+138h] [rbp-460h]
  int v66; // [rsp+140h] [rbp-458h]
  __int64 v67; // [rsp+148h] [rbp-450h]
  char v68; // [rsp+150h] [rbp-448h] BYREF
  int v69; // [rsp+151h] [rbp-447h]
  unsigned __int64 v70; // [rsp+558h] [rbp-40h]

  v6 = (_QWORD *)a3;
  v8 = a2;
  v70 = __readfsqword(0x28u);
  v43 = 4;
  if ( a1[13692] )
    v43 = 8;
  v9 = *(_QWORD *)(a2 + 256);
  v41 = v9 + 80LL * *(_QWORD *)(a2 + 264);
  while ( v41 != v9 )
  {
    while ( 1 )
    {
      v44 = callui(27, a2, a3);
      if ( v44 )
        sub_1A260((__int64)"Cancelled by user", a2, a3, v10, v11, v12, v33);
      v38 = *(unsigned __int8 *)(v9 + 64);
      if ( v38 == 8 )
        break;
      if ( (unsigned int)(v38 - 6) > 1 )
        goto LABEL_6;
      v39 = v43;
      v35 = v43;
LABEL_12:
      v13 = *(_QWORD *)(v9 + 40);
      a3 = v13 % v39;
      v36 = v13 / v39;
      v14 = *(unsigned int *)(v9 + 68);
      v37 = v14;
      if ( (_DWORD)v14 )
      {
        a3 = v6[1];
        if ( v14 >= a3 )
        {
          sub_112F0((__int64)"entries start past the end of the indirect symbol table (reserved1 field greater than the table size)\n");
        }
        else if ( a3 < v36 + v14 )
        {
          sub_112F0((__int64)"entries extends past the end of the indirect symbol table\n");
        }
      }
      if ( v13 >= v39 )
      {
        v15 = 0;
        v16 = 0;
        do
        {
          a3 = v37 + v16;
          if ( a3 >= v6[1] )
            break;
          v34 = (char *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) & (*(_QWORD *)(v9 + 32) + v15));
          v17 = *(_QWORD *)(v8 + 240);
          if ( *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL) == v17
            || v17 == -1
            || *(_QWORD *)(v8 + 184) && (range = rangeset_t_find_range(), a3 = v37 + v16, range) )
          {
            v18 = *(_DWORD *)(*v6 + 4 * a3);
            a3 = (v18 - 0x40000000) & 0xBFFFFFFF;
            if ( ((v18 - 0x40000000) & 0xBFFFFFFF) == 0 )
            {
              if ( v18 != 0x80000000 || v38 != 6 )
                goto LABEL_41;
              if ( a1[13692] )
              {
                get_qword();
                if ( (*(_BYTE *)(*(_QWORD *)a1 + 12LL) & 8) == 0 )
                  goto LABEL_51;
LABEL_57:
                segtype();
              }
              else
              {
                get_dword();
                if ( (*(_BYTE *)(*(_QWORD *)a1 + 12LL) & 8) != 0 )
                  goto LABEL_57;
              }
LABEL_51:
              if ( get_ea_name() > 0 )
              {
                *(_OWORD *)v54 = 0;
                src = nullptr;
                src = (void *)qvector_reserve();
                *(_QWORD *)v54 = 5;
                strcpy((char *)src, "_ptr");
                v52 = nullptr;
                if ( *(_QWORD *)v54 >= 2u )
                {
                  v51 = *(_QWORD *)v54 - 1LL;
                  v46 = *(_QWORD *)v54 - 1LL;
                  v52 = (_BYTE *)qvector_reserve();
                  v52[v51] = 0;
                  memcpy(v52, src, v46);
                }
                if ( src )
                {
                  *(_QWORD *)v54 = 0;
                  qfree();
                }
                set_name();
                sub_12040((__int64)v34, 0, 1);
                if ( v52 )
                  qfree();
              }
              goto LABEL_41;
            }
            if ( v18 == -1073741824 )
              goto LABEL_41;
            v19 = v18;
            if ( v18 < a4[1] )
            {
              v20 = (_QWORD *)a4[3];
              if ( v20 )
              {
                v21 = v20[2];
                if ( v21 )
                {
                  v50 = 16 * v19;
                  a3 = *a4;
                  if ( *(unsigned int *)(*a4 + 16 * v19) < (unsigned __int64)(v21 - 1) )
                  {
                    v22 = (char *)(*(__int64 (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
                    if ( v22 )
                    {
                      n = v22;
                      if ( !(unsigned __int8)sub_11500(v22) )
                      {
                        name_ea = get_name_ea();
                        if ( name_ea == -1 )
                          goto LABEL_39;
                        if ( v44 )
                        {
                          if ( !*(_DWORD *)(*(_QWORD *)a1 + 4LL) && (a1[13689] & 8) == 0 && v35 == 5 )
                          {
                            v68 = -23;
                            v69 = name_ea - (_DWORD)v34 - 5;
                            put_bytes();
                            if ( (unsigned __int8)get_byte() == 0xF4 )
                              put_byte();
                          }
                          if ( (unsigned __int8)segtype() == 2 )
                          {
                            qsnprintf();
                            n = &v68;
                          }
                          else
                          {
                            qsnprintf();
                            set_name();
                          }
                          v55 = 0;
                          src = v34;
                          *(_QWORD *)v54 = &v34[v39];
                          v56 = 0;
                          v58 = 0xFFFFFFFFLL;
                          v59 = 0;
                          v60 = 0;
                          v61 = 0;
                          v62 = 0;
                          v63 = 0;
                          v64 = 0;
                          v65 = 0;
                          v66 = 0;
                          v67 = 0;
                          *(__m128i *)&v54[8] = _mm_load_si128((const __m128i *)&xmmword_574D0);
                          v57 = 0;
                          add_func_ex();
LABEL_39:
                          v49 = v38 != 8;
LABEL_40:
                          set_name();
                          sub_12040((__int64)v34, (__int64)n, v49);
LABEL_41:
                          if ( (a6 & (v35 == v43)) != 0 )
                          {
                            if ( a1[13692] )
                            {
                              src = byte_9 + 3;
                              *(_QWORD *)&v54[16] = 0;
                              v55 = 0;
                              *(__m128i *)v54 = _mm_load_si128((const __m128i *)&xmmword_57480);
                              _64bit = get_64bit();
                            }
                            else
                            {
                              src = &byte_4;
                              *(_QWORD *)&v54[16] = 0;
                              v55 = 0;
                              *(__m128i *)v54 = _mm_load_si128((const __m128i *)&xmmword_57480);
                              _64bit = (unsigned int)get_dword();
                            }
                            *(_QWORD *)&v54[16] = _64bit;
                            v25 = segtype();
                            if ( v25 == 1 )
                            {
                              HIDWORD(src) |= 2u;
                            }
                            else if ( v25 == 2 )
                            {
                              if ( (*(_BYTE *)(*(_QWORD *)a1 + 12LL) & 8) != 0 )
                              {
                                v27 = v54[16] & 1;
                                *(_QWORD *)&v54[16] &= ~1uLL;
                                v55 = v27;
                              }
                              auto_mark_range();
                              auto_mark_range();
                            }
                            set_fixup();
                          }
                          goto LABEL_20;
                        }
                        if ( (*(_BYTE *)(v8 + 364) & 0x50) != 0 || (a1[13689] & 8) != 0 )
                        {
                          v49 = v38 != 8;
                        }
                        else
                        {
                          v47 = *(_BYTE *)(*a4 + v50 + 4);
                          if ( netnode_altval() )
                          {
                            v29 = a1[13692];
                            v49 = v38 != 8;
                            if ( a6 && v38 != 8 && (v30 = 4097, _bittest64(&v30, v47 & 0xE)) )
                            {
                              if ( v29 )
                                goto LABEL_88;
LABEL_94:
                              put_dword();
                            }
                            else if ( v29 )
                            {
                              add_qword();
                            }
                            else
                            {
                              add_dword();
                            }
                          }
                          else
                          {
                            *(_OWORD *)v54 = 0;
                            src = nullptr;
                            sub_35470((__int64 *)&src);
                            v31 = get_name_ea();
                            v32 = v31;
                            if ( src )
                            {
                              v48 = v31;
                              *(_QWORD *)v54 = 0;
                              qfree();
                              v32 = v48;
                            }
                            v49 = v38 != 8;
                            if ( v32 != -1 && a6 )
                            {
                              if ( !a1[13692] )
                                goto LABEL_94;
LABEL_88:
                              put_qword();
                            }
                          }
                        }
                        qsnprintf();
                        n = &v68;
                        goto LABEL_40;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_20:
          ++v16;
          a2 = v36;
          v15 += v35;
        }
        while ( v16 < v36 );
      }
LABEL_6:
      v9 += 80;
      if ( v41 == v9 )
        return v70 - __readfsqword(0x28u);
    }
    v35 = *(_DWORD *)(v9 + 72);
    if ( v35 )
    {
      v44 = v35 == 6 && ((*(_DWORD *)(v8 + 332) - 16777228) & 0xFEFFFFFF) == 0;
      if ( v44 )
      {
        v39 = 12;
        v35 = 12;
      }
      else
      {
        v44 = 1;
        v39 = v35;
      }
      goto LABEL_12;
    }
    a2 = v9 + 16;
    v9 += 80;
    sub_196C0((__int64)"Can't use indirect symbols for (%.16s,%.16s) (size of stubs in reserved2 field is zero)");
  }
  return v70 - __readfsqword(0x28u);
}

