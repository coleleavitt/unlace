__int64 __fastcall sub_1EA80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128i si128,
        __m128i a8)
{
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // edx
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // rbx
  unsigned __int64 v25; // r12
  _QWORD *v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // r8
  char v32; // cl
  __int64 v33; // rax
  __int64 v34; // rax
  bool v35; // dl
  __int64 v36; // rbx
  unsigned int v37; // esi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 range; // rax
  __int64 v42; // rbx
  int v43; // edi
  const char *v44; // rax
  int v45; // edi
  unsigned int *v46; // rbx
  unsigned __int8 v47; // dl
  unsigned __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  _QWORD *v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rax
  __int16 v56; // dx
  __int64 v57; // rax
  unsigned int v58; // edx
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int16 custom_fixup; // ax
  __int64 fixup_value; // rax
  bool v65; // dl
  __int64 v66; // rbx
  char v67; // al
  __int64 v68; // rbx
  __int64 v69; // rax
  bool v70; // dl
  __int64 v71; // rdi
  __int64 v72; // rax
  __m128i v73; // xmm2
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int64 *v77; // rcx
  __int64 v78; // rsi
  unsigned __int64 v79; // rax
  __m128i v80; // xmm3
  int v81; // edx
  __int64 v82; // rax
  __int64 v83; // rax
  char v84; // [rsp+0h] [rbp-8F8h]
  int v85; // [rsp+4h] [rbp-8F4h]
  unsigned int v87; // [rsp+10h] [rbp-8E8h]
  unsigned __int64 v88; // [rsp+10h] [rbp-8E8h]
  _QWORD *v89; // [rsp+18h] [rbp-8E0h]
  unsigned __int64 v90; // [rsp+20h] [rbp-8D8h]
  bool v91; // [rsp+20h] [rbp-8D8h]
  bool v92; // [rsp+20h] [rbp-8D8h]
  __int64 v93; // [rsp+20h] [rbp-8D8h]
  bool v94; // [rsp+20h] [rbp-8D8h]
  __int64 v95; // [rsp+20h] [rbp-8D8h]
  unsigned int v96; // [rsp+28h] [rbp-8D0h]
  char v97; // [rsp+2Ch] [rbp-8CCh]
  __int64 v98; // [rsp+30h] [rbp-8C8h]
  __int64 v99; // [rsp+30h] [rbp-8C8h]
  __m128i v100; // [rsp+40h] [rbp-8B8h] BYREF
  __int64 v101; // [rsp+50h] [rbp-8A8h]
  unsigned __int64 v102; // [rsp+58h] [rbp-8A0h]
  _QWORD *v103; // [rsp+60h] [rbp-898h]
  __int64 v104; // [rsp+68h] [rbp-890h]
  __int64 v105; // [rsp+70h] [rbp-888h]
  unsigned int v106; // [rsp+78h] [rbp-880h]
  bool v107; // [rsp+7Fh] [rbp-879h]
  __int16 v108; // [rsp+80h] [rbp-878h]
  int v109; // [rsp+84h] [rbp-874h]
  __m128i v110; // [rsp+88h] [rbp-870h]
  __int64 v111; // [rsp+98h] [rbp-860h]
  __int64 v112; // [rsp+A0h] [rbp-858h]
  char v113; // [rsp+B0h] [rbp-848h]
  char v114[1032]; // [rsp+4B0h] [rbp-448h] BYREF
  unsigned __int64 v115; // [rsp+8B8h] [rbp-40h]

  v11 = a4[1];
  v103 = (_QWORD *)a5;
  v104 = a6;
  v115 = __readfsqword(0x28u);
  v12 = *(_DWORD *)(a2 + 332);
  v96 = v11;
  v107 = 0;
  v85 = v12;
  v106 = *(_DWORD *)(a5 + 8);
  if ( (*(_BYTE *)(a2 + 364) & 0x50) == 0 )
    v107 = (*(_BYTE *)(a1 + 13689) & 8) == 0;
  v13 = 0;
  if ( !(_DWORD)v11 )
    return v115 - __readfsqword(0x28u);
  v89 = a4;
  while ( 1 )
  {
    v14 = *(_QWORD *)(*v89 + 8LL * v13);
    v15 = (int)v14;
    if ( v85 != 16777223 )
      break;
    v16 = 0;
LABEL_10:
    v17 = *(_QWORD *)(a1 + 8);
    v18 = v13 + 1;
    v113 = 0;
    v19 = *(_QWORD *)(v17 + 16) & (a3 + v15);
    v20 = *(_QWORD *)(a2 + 240);
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) != v20 && v20 != -1 )
    {
      if ( !*(_QWORD *)(a2 + 184) )
        goto LABEL_7;
      v88 = v16;
      range = rangeset_t_find_range();
      v16 = v88;
      if ( !range )
        goto LABEL_7;
    }
    v21 = HIBYTE(v14);
    v97 = HIBYTE(v14) & 1;
    v87 = (v14 >> 57) & 3;
    v22 = (v14 >> 57) & 3;
    v90 = v14 >> 60;
    v23 = v14 >> 60;
    v24 = HIDWORD(v14) & 0xFFFFFF;
    v25 = v23;
    if ( (v21 & 8) != 0 )
    {
      if ( (unsigned int)v24 >= v106
        || (v102 = v21, v101 = v16, v26 = (_QWORD *)v103[3], v100.m128i_i8[0] = v22, !v26)
        || (v27 = v26[2]) == 0
        || (v28 = *(unsigned int *)(*v103 + 16 * v24), v105 = 16 * v24, v28 >= v27 - 1)
        || !(*(__int64 (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26) )
      {
LABEL_34:
        if ( !byte_66C4A )
        {
          sub_112F0(
            (__int64)"%a: illegal symbol ref (this error will be reported only once)\n",
            *(double *)si128.m128i_i64);
          byte_66C4A = 1;
        }
        goto LABEL_7;
      }
      qstrncpy();
      v29 = netnode_altval();
      v30 = v100.m128i_u8[0];
      v31 = v101;
      v32 = v102;
      v98 = v29;
      v33 = *(_QWORD *)(a2 + 240);
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) != v33 && v33 != -1 )
      {
        if ( !*(_QWORD *)(a2 + 184) )
          goto LABEL_7;
        v34 = rangeset_t_find_range();
        v30 = v100.m128i_u8[0];
        v31 = v101;
        v32 = v102;
        if ( !v34 )
          goto LABEL_7;
      }
      if ( v85 == 16777223 )
      {
        if ( (unsigned __int8)v90 <= 2u || (_DWORD)v25 == 6 )
        {
          v36 = sub_195E0(v19, v87);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) != 8 )
            goto LABEL_84;
        }
        else
        {
          if ( (unsigned int)(v25 - 7) <= 1 )
          {
            v36 = sub_195E0(v19, v87);
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) != 8 )
              v36 = (int)v36;
            goto LABEL_123;
          }
          if ( (unsigned int)(v25 - 3) > 1 )
          {
            v37 = v25;
            if ( (_DWORD)v25 != 5 )
              goto LABEL_31;
LABEL_89:
            if ( v18 >= v96
              || (v46 = (unsigned int *)(*v89 + 8LL * v18), v47 = *((_BYTE *)v46 + 7), v47 > 0xFu)
              || (v48 = *(_QWORD *)(a1 + 8), v19 != (*(_QWORD *)(v48 + 16) & (a3 + *v46)))
              || (_BYTE)v30 != ((v47 >> 1) & 3)
              || (v49 = v32 & 1, (v47 & 1) != (_BYTE)v49)
              || (v50 = *((_BYTE *)v46 + 7) & 8, (*((_BYTE *)v46 + 7) & 8) == 0) )
            {
              sub_196C0((__int64)"Unmatched SUBTRACTOR relocation type for %a");
              goto LABEL_7;
            }
            v51 = v46[1] & 0xFFFFFF;
            if ( (unsigned int)v51 >= v106
              || (v48 = (unsigned __int64)v103, (v52 = (_QWORD *)v103[3]) == nullptr)
              || (v50 = v52[2]) == 0
              || (v48 = *(unsigned int *)(*v103 + 16 * v51), v48 >= v50 - 1)
              || (v48 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, __int64, __int64, __int64))(*v52 + 16LL))(
                          v52,
                          v48,
                          v50,
                          v49,
                          v31)) == 0 )
            {
              sub_1A260((__int64)"illegal symbol ref", v48, v50, v49, v31, v30, v84);
            }
            qstrncpy();
            v53 = netnode_altval();
            v54 = *(_QWORD *)(a2 + 240);
            if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) != v54
              && v54 != -1
              && (!*(_QWORD *)(a2 + 184) || !rangeset_t_find_range()) )
            {
              goto LABEL_7;
            }
            v55 = sub_195E0(v19, v87);
            si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
            v112 = v55;
            v109 = 3;
            v56 = word_56BB8[v87];
            v111 = 0;
            v108 = v56;
            v100 = si128;
            v110 = si128;
            if ( !v107 )
            {
              v111 = v53;
              goto LABEL_106;
            }
            sub_19660(v19, v87);
            v111 = v53;
            if ( (v109 & 1) != 0 )
            {
LABEL_106:
              v53 += v110.m128i_i64[0];
            }
            else if ( v110.m128i_i64[1] != -1 )
            {
              v53 = 16 * sel2para() + v111;
            }
            v57 = getseg();
            v58 = v109 & 0xFFFFFFFE;
            if ( v57 )
            {
              v59 = *(_QWORD *)(v57 + 48);
              v109 &= ~1u;
              v60 = 0;
              v110.m128i_i64[0] = 0;
              v110.m128i_i64[1] = v59;
              if ( v59 == -1 )
              {
LABEL_111:
                v109 = v58 | 1;
                v110.m128i_i64[0] = v98;
                v111 = v53 + v60 - v98;
                set_fixup();
                if ( v85 != 16777223 )
                {
                  v62 = 1155;
                  if ( _bittest64(&v62, v25) )
                    goto LABEL_113;
                  v37 = 5;
                  ++v18;
LABEL_49:
                  if ( v37 - 4 <= 1 || (_DWORD)v25 == 6 )
                    goto LABEL_7;
                  goto LABEL_74;
                }
                if ( (_DWORD)v25 == 1 )
                {
LABEL_113:
                  ++v18;
                  goto LABEL_7;
                }
                v37 = 5;
                ++v18;
                goto LABEL_31;
              }
              v61 = sel2para();
              v58 = v109;
              v53 -= 16 * v61;
              v111 = v53;
              if ( (v109 & 1) != 0 )
              {
                v60 = v110.m128i_i64[0];
                goto LABEL_111;
              }
            }
            else
            {
              v73 = _mm_load_si128(&v100);
              v109 &= ~1u;
              v111 = v53;
              v110 = v73;
            }
            v60 = 0;
            if ( v110.m128i_i64[1] != -1 )
            {
              v74 = sel2para();
              v53 = v111;
              v58 = v109;
              v60 = 16 * v74;
            }
            goto LABEL_111;
          }
          v36 = sub_195E0(v19, v87);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) == 8 )
          {
LABEL_123:
            if ( ((_DWORD)v25 != 7 || v36 == -2) && ((_DWORD)v25 != 8 || v36 == -4) )
            {
              sub_1DF00(a1, a2, v19, v98, v87, v97 & 1, 1, v36);
              if ( (_DWORD)v25 == 2 )
              {
                if ( (unsigned __int8)segtype() == 1 && (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
                {
                  del_items();
                  put_byte();
                  create_insn();
                }
                goto LABEL_7;
              }
LABEL_27:
              if ( (v90 & 0xD) == 0 )
                goto LABEL_7;
              if ( (_DWORD)v25 == 1 )
                goto LABEL_7;
              if ( (_DWORD)v25 == 6 )
                goto LABEL_7;
              v37 = v25;
              if ( (unsigned int)(v25 - 7) <= 1 )
                goto LABEL_7;
              goto LABEL_31;
            }
            goto LABEL_87;
          }
LABEL_84:
          v36 = (int)v36;
        }
        if ( (_DWORD)v25 != 6 || v36 == -1 )
          goto LABEL_123;
LABEL_87:
        v45 = *(_DWORD *)(a2 + 332);
        v100.m128i_i64[0] = (__int64)v114;
        sub_1E8E0(v45, v25, 0, v114);
        sub_196C0((__int64)"AUTOHIDE SESSION\nUnexpected delta (%a) for relocation %s, %a->%a");
LABEL_25:
        sub_1DF00(a1, a2, v19, v98, v87, v97 & 1, 1, v36);
        goto LABEL_26;
      }
      v35 = (_DWORD)v25 == 0 || (_DWORD)v25 == 7;
      if ( v35 )
      {
        v36 = sub_195E0(v19, v87);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) != 8 )
          v36 = (int)v36;
        goto LABEL_25;
      }
      if ( (_DWORD)v25 == 1 )
        goto LABEL_89;
      if ( (unsigned __int8)v90 > 6u )
        goto LABEL_46;
      switch ( v90 )
      {
        case 0uLL:
        case 1uLL:
          goto LABEL_46;
        case 2uLL:
          v37 = 2;
          if ( v87 != 2 )
            goto LABEL_74;
          custom_fixup = word_66BF0;
          if ( word_66BF0 == (__int16)0x8000 )
          {
            v95 = v31;
            custom_fixup = find_custom_fixup();
            v31 = v95;
            word_66BF0 = custom_fixup;
          }
          if ( custom_fixup )
            goto LABEL_140;
          goto LABEL_7;
        case 3uLL:
        case 5uLL:
          custom_fixup = word_66BF4;
          if ( word_66BF4 == (__int16)0x8000 )
          {
            v93 = v31;
            custom_fixup = find_custom_fixup();
            v31 = v93;
            word_66BF4 = custom_fixup;
          }
          if ( !custom_fixup )
            break;
LABEL_140:
          v35 = 1;
          goto LABEL_141;
        case 4uLL:
        case 6uLL:
          custom_fixup = word_66BF2;
          if ( word_66BF2 == (__int16)0x8000 )
          {
            v100.m128i_i64[0] = v31;
            custom_fixup = find_custom_fixup();
            v35 = (_DWORD)v25 == 0 || (_DWORD)v25 == 7;
            v31 = v100.m128i_i64[0];
            word_66BF2 = custom_fixup;
            if ( !custom_fixup )
            {
LABEL_136:
              v37 = v25;
              goto LABEL_49;
            }
          }
          else if ( !word_66BF2 )
          {
            goto LABEL_136;
          }
LABEL_141:
          a8 = _mm_load_si128((const __m128i *)&xmmword_57480);
          v101 = v31;
          v91 = v35;
          v108 = custom_fixup;
          v109 = 2;
          v111 = 0;
          v112 = 0;
          v100 = a8;
          v110 = a8;
          fixup_value = get_fixup_value();
          v65 = v91;
          v66 = fixup_value;
          if ( !v101 )
            goto LABEL_144;
          if ( fixup_value )
            goto LABEL_73;
          v66 = v101;
LABEL_144:
          v67 = *(_BYTE *)(*v103 + v105 + 4) & 0xE;
          if ( v67 == 12 )
            goto LABEL_174;
          if ( v67 != 14 )
          {
            if ( v67 )
            {
              v98 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v98 + v66);
              goto LABEL_148;
            }
LABEL_174:
            v112 = v66;
            goto LABEL_148;
          }
          v76 = getseg();
          v65 = v91;
          v77 = (unsigned __int64 *)v76;
          if ( !v76 )
            goto LABEL_174;
          v78 = *(_QWORD *)(a1 + 8);
          v79 = *(_QWORD *)(v78 + 16) & (v66 + v98);
          if ( v79 < *v77 || v79 >= v77[1] )
            goto LABEL_174;
          v98 = *(_QWORD *)(v78 + 16) & (v66 + v98);
LABEL_148:
          v111 = v98;
          if ( (v109 & 1) != 0 )
          {
            v68 = v110.m128i_i64[0] + v98;
          }
          else
          {
            v68 = v98;
            if ( v110.m128i_i64[1] != -1 )
            {
              v94 = v65;
              v75 = sel2para();
              v65 = v94;
              v68 = 16 * v75 + v111;
            }
          }
          v92 = v65;
          v69 = getseg();
          v70 = v92;
          if ( v69 )
          {
            v71 = *(_QWORD *)(v69 + 48);
            v109 &= ~1u;
            v110.m128i_i64[0] = 0;
            v110.m128i_i64[1] = v71;
            if ( v71 != -1 )
            {
              v72 = sel2para();
              v70 = v92;
              v68 -= 16 * v72;
            }
          }
          else
          {
            v80 = _mm_load_si128(&v100);
            v109 &= ~1u;
            v110 = v80;
          }
          v111 = v68;
          if ( v70 )
          {
            v81 = v109;
            if ( (v109 & 1) != 0 )
            {
              v82 = v110.m128i_i64[0];
            }
            else
            {
              v82 = 0;
              if ( v110.m128i_i64[1] != -1 )
              {
                v83 = sel2para();
                v68 = v111;
                v81 = v109;
                v82 = 16 * v83;
              }
            }
            v110.m128i_i64[0] = v19;
            v109 = v81 | 1;
            v111 = v68 + v82 - v19;
          }
          set_fixup();
          if ( v107 )
            patch_fixup_value();
          break;
      }
LABEL_48:
      v37 = v25;
      if ( (unsigned int)(v25 - 2) > 1 )
        goto LABEL_49;
LABEL_7:
      v13 = v18;
      if ( v18 >= v96 )
        return v115 - __readfsqword(0x28u);
    }
    else
    {
      if ( (unsigned int)v24 >= (unsigned __int64)(*(_QWORD *)(a2 + 264) + 1LL) )
        goto LABEL_34;
      if ( (_DWORD)v24 )
      {
        qsnprintf();
        v99 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & *(_QWORD *)(*(_QWORD *)(a2 + 256) + 80LL * ((int)v24 - 1) + 32);
      }
      else
      {
        qstrncpy();
        v99 = -1;
      }
      v39 = *(_QWORD *)(a2 + 240);
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) != v39
        && v39 != -1
        && (!*(_QWORD *)(a2 + 184) || !rangeset_t_find_range()) )
      {
        goto LABEL_7;
      }
      if ( v85 != 16777223 )
      {
        if ( (_DWORD)v25 && (_DWORD)v25 != 7 )
          goto LABEL_46;
        v42 = sub_195E0(v19, v87);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) != 8 )
          v42 = (int)v42;
LABEL_70:
        if ( *(_DWORD *)(a2 + 340) != 1 )
          v42 = 0;
        sub_1DF00(a1, a2, v19, v99, v87, v97 & 1, 0, v42);
LABEL_26:
        if ( v85 == 16777223 )
          goto LABEL_27;
LABEL_46:
        if ( (unsigned __int8)v90 <= 0xAu )
        {
          v40 = 1155;
          if ( _bittest64(&v40, v25) )
            goto LABEL_7;
          goto LABEL_48;
        }
LABEL_73:
        v37 = v25;
LABEL_74:
        sub_1E8E0(*(_DWORD *)(a2 + 332), v37, 0, v114);
        v44 = (const char *)sub_195E0(v19, v87);
        sub_112F0(
          (__int64)"%8s %d %c %0*a %0*llX %s baseea=%a\n",
          v114,
          v87,
          v97 == 0 ? 46 : 82,
          8,
          *(double *)si128.m128i_i64,
          v19,
          8,
          v44,
          *(double *)a8.m128i_i64);
        sub_196C0((__int64)"Unhandled relocation type %s %a->%a");
        goto LABEL_7;
      }
      if ( (unsigned __int8)v90 <= 2u || (_DWORD)v25 == 6 || (((_BYTE)v90 - 3) & 0xFA) == 0 )
      {
        v42 = sub_195E0(v19, v87);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) != 8 )
          v42 = (int)v42;
        if ( (_DWORD)v25 == 6 && v42 != -1 || (_DWORD)v25 == 7 && v42 != -2 || (_DWORD)v25 == 8 && v42 != -4 )
        {
          v43 = *(_DWORD *)(a2 + 332);
          v100.m128i_i64[0] = (__int64)v114;
          sub_1E8E0(v43, v25, 0, v114);
          sub_196C0((__int64)"AUTOHIDE SESSION\nUnexpected delta (%a) for relocation %s, %a->%a");
        }
        goto LABEL_70;
      }
      v37 = v25;
      if ( (unsigned int)(v25 - 7) <= 1 )
        goto LABEL_7;
LABEL_31:
      if ( (((_BYTE)v90 + 13) & 0xFu) > 2 )
        goto LABEL_74;
      v13 = v18;
      if ( v18 >= v96 )
        return v115 - __readfsqword(0x28u);
    }
  }
  v16 = 0;
  if ( (HIBYTE(v14) & 0xF0) != 0xA0 )
    goto LABEL_10;
  if ( (HIBYTE(v14) & 0xF) == 4 && ++v13 < v96 )
  {
    v16 = HIDWORD(v14) & 0xFFFFFF;
    if ( (HIDWORD(v14) & 0xFFFFFFu) > 0x7FFFFF )
      v16 = HIDWORD(v14) & 0xFFFFFF | 0xFFFFFFFFFF000000LL;
    v14 = *(_QWORD *)(*v89 + 8LL * v13);
    v15 = (int)v14;
    goto LABEL_10;
  }
  return sub_196C0((__int64)"Illegal ADDEND relocation at %a");
}

