__int64 __fastcall sub_16C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  int v10; // esi
  __int64 v11; // rdx
  unsigned int v12; // eax
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // ecx
  void *v18; // rdi
  int v19; // eax
  char v20; // cl
  int v21; // edx
  __int64 v22; // rdx
  char dtype_by_size; // al
  void *v24; // rbx
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  const char *v27; // rsi
  size_t v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 not_tail; // rbx
  int v40; // ecx
  int v41; // eax
  struct _Unwind_Exception *v42; // rbx
  char v43; // [rsp+0h] [rbp-1A0h]
  __int64 v44; // [rsp+8h] [rbp-198h]
  void *v45; // [rsp+10h] [rbp-190h]
  __m128i v46; // [rsp+18h] [rbp-188h] BYREF
  unsigned __int64 *v47; // [rsp+28h] [rbp-178h]
  __int64 *v48; // [rsp+30h] [rbp-170h]
  __int64 *v49; // [rsp+38h] [rbp-168h]
  __int64 *v50; // [rsp+40h] [rbp-160h]
  __int64 *v51; // [rsp+48h] [rbp-158h]
  __m128i v52; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int16 v53; // [rsp+64h] [rbp-13Ch] BYREF
  __int16 v54; // [rsp+66h] [rbp-13Ah] BYREF
  __int64 v55; // [rsp+68h] [rbp-138h] BYREF
  __int64 v56; // [rsp+70h] [rbp-130h] BYREF
  __int64 v57; // [rsp+78h] [rbp-128h] BYREF
  __int64 v58; // [rsp+80h] [rbp-120h] BYREF
  __int64 v59; // [rsp+88h] [rbp-118h] BYREF
  unsigned __int64 v60; // [rsp+90h] [rbp-110h] BYREF
  __int64 v61; // [rsp+98h] [rbp-108h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-100h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-F8h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-F0h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-E8h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-E0h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-D8h]
  const char *v68; // [rsp+D0h] [rbp-D0h] BYREF
  __int128 v69; // [rsp+D8h] [rbp-C8h]
  __int64 v70; // [rsp+F0h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-A8h]
  __int128 v72; // [rsp+108h] [rbp-98h]
  __int64 v73; // [rsp+118h] [rbp-88h]
  __int64 v74; // [rsp+120h] [rbp-80h]
  __int64 v75; // [rsp+128h] [rbp-78h]
  __int64 v76; // [rsp+130h] [rbp-70h]
  __int64 v77; // [rsp+138h] [rbp-68h]
  __int64 v78; // [rsp+140h] [rbp-60h]
  __int64 v79; // [rsp+148h] [rbp-58h]
  void *src; // [rsp+150h] [rbp-50h]
  __m128i v81; // [rsp+158h] [rbp-48h]
  unsigned __int64 v82; // [rsp+168h] [rbp-38h]

  v82 = __readfsqword(0x28u);
  v46.m128i_i64[1] = (__int64)&v70;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &v70, &callui, a4, a5, a6);
  v6 = v70;
  v7 = getseg();
  if ( !v7 || (v8 = v7, (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0) )
  {
    sub_13A0((__int64)"AUTOHIDE NONE\nThe cursor must be on the table jump instruction");
    return 0;
  }
  v10 = v6;
  v76 = 0xFFFFFFFFLL;
  v72 = -1;
  v70 = 0x800000;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v77 = 0;
  v78 = 2;
  v79 = -1;
  src = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3CC0);
  v81 = 0;
  if ( get_switch_info() <= 0 )
  {
    si128.m128i_i64[0] = get_first_dref_from();
    v31 = si128.m128i_i64[0];
    v32 = 1 << (*(_BYTE *)(v8 + 43) + 4);
    v33 = (unsigned int)v70;
    v34 = (unsigned int)v70 & 0xFFFFFBFB;
    v35 = v32 / 8;
    LODWORD(v70) = v70 & 0xFFFFFBFB;
    if ( v32 / 8 == 4 )
    {
      LODWORD(v70) = v34 | 4;
    }
    else if ( v32 > 39 )
    {
      if ( v35 != 8 )
        goto LABEL_116;
      LODWORD(v70) = v33 | 0x404;
    }
    else if ( v35 == 1 )
    {
      BYTE1(v34) |= 4u;
      LODWORD(v70) = v34;
    }
    else if ( v35 != 2 )
    {
      goto LABEL_116;
    }
    if ( si128.m128i_i64[0] != -1 )
    {
      v36 = getseg();
      v37 = -1;
      if ( v36 )
        v37 = *(_QWORD *)(v36 + 8);
      v38 = (v37 - si128.m128i_i64[0]) / (unsigned __int64)v35;
      if ( (int)v38 > 0xFFFF )
        LOWORD(v38) = -1;
      WORD2(v70) = v38;
      trim_jtable();
    }
    not_tail = v6;
    do
    {
      *((_QWORD *)&v72 + 1) = not_tail;
      not_tail = prev_not_tail();
    }
    while ( (unsigned __int8)netnode_charval() == 3 );
  }
  v11 = 2;
  v55 = si128.m128i_i64[0];
  v56 = WORD2(v70);
  v57 = *((_QWORD *)&v72 + 1);
  v58 = v75;
  v12 = v70;
  v13 = v70 & 0x404;
  if ( (v70 & 0x404) != 0 )
  {
    if ( v13 == 4 )
    {
      v11 = 4;
    }
    else
    {
      v11 = 1;
      if ( v13 != 1024 )
        v11 = 8;
    }
  }
  v59 = v11;
  v69 = 0;
  v68 = nullptr;
  v60 = ((unsigned int)v70 >> 7) & 3;
  v61 = v72;
  if ( (_DWORD)v76 != -1 )
  {
    get_dtype_size();
    get_reg_name();
    v12 = v70;
  }
  v53 = 2 * ((v12 >> 13) & 1);
  if ( (v12 & 0x20000) != 0 )
    v53 |= 4u;
  if ( (v12 & 0x400000) != 0 )
    v53 |= 8u;
  v62 = 0;
  v54 = 0;
  v63 = -1;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  if ( (v12 & 1) != 0 )
  {
    v63 = si128.m128i_i64[1];
    v53 |= 1u;
    v64 = v56;
    v16 = 2;
    v17 = v12 & 0x802;
    if ( (v12 & 0x802) != 0 )
    {
      if ( v17 == 2 )
      {
        v16 = 4;
      }
      else
      {
        v16 = 1;
        if ( v17 != 2048 )
          v16 = 8;
      }
    }
    v65 = v16;
    if ( (v12 & 0x10000) != 0 )
    {
      v54 = 1;
      v66 = v74;
      v56 = (int)v73;
    }
    if ( (v12 & 0x40) != 0 )
      v54 |= 2u;
  }
  else
  {
    v62 = si128.m128i_i64[1];
  }
  v45 = nullptr;
  v44 = v79;
  v46.m128i_i64[0] = v81.m128i_i64[0];
  if ( v81.m128i_i64[0] )
  {
    v28 = 8 * v81.m128i_i64[0];
    v45 = (void *)qalloc_or_throw();
    memcpy(v45, src, v28);
  }
  v49 = &v58;
  v47 = &v60;
  v48 = &v59;
  v51 = &v56;
  v52.m128i_i64[0] = (__int64)&v55;
  v50 = &v57;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            if ( !(unsigned int)sub_15F0(
                                  (__int64)"HELP\n"
                                           "Please specify the jump table address, the number of its\n"
                                           "elements and their widths(1,2,4,8). The element shift amount and base value\n"
                                           "should be specified only if the table elements are not\n"
                                           "plain target addresses but must be converted using the following\n"
                                           "formula:\n"
                                           "\n"
                                           "        target = base +/- (table_element << shift)\n"
                                           "\n"
                                           "(only this formula is supported by the kernel; other cases must be\n"
                                           "handled by plugins and 'custom' switch idioms).\n"
                                           "\n"
                                           "If you specify BADADDR as the element base then the base of the\n"
                                           "switch segment will be used\n"
                                           "\n"
                                           "The start of the switch idiom is the address of the first instruction\n"
                                           "in the switch idiom.\n"
                                           "\n"
                                           "Subtraction is used instead of addition if \"Subtract table elements\"\n"
                                           "is selected.\n"
                                           "\n"
                                           "When table element is an instruction then you should select\n"
                                           "\"Table element is insn\".\n"
                                           "\n"
                                           "If you specify that a separate value table is present, an additional\n"
                                           "dialog box with its attributes will be displayed.\n"
                                           "ENDHELP\n"
                                           "Manual switch declaration - Main features\n"
                                           "\n"
                                           "<~A~ddress of jump table    :N::18::>\n"
                                           "<~N~umber of elements       :D::18::>\n"
                                           "<~S~ize of table element    :D::18::>\n"
                                           "<~E~lement shift amount     :D::18::>\n"
                                           "<Element ~b~ase value       :N::18::>\n"
                                           "\n"
                                           "<S~t~art of the switch idiom:N::18::>\n"
                                           "<~I~nput register of switch :q:511:18::>\n"
                                           "<~F~irst(lowest) input value:D::18::>(if value table is absent)\n"
                                           "<~D~efault jump address     :N::18::>\n"
                                           "\n"
                                           "<Se~p~arate value table is present:C>\n"
                                           "<Si~g~ned jump table elements     :C>\n"
                                           "<S~u~btract table elements        :C>\n"
                                           "<Tab~l~e element is insn          :C>>\n"
                                           "\n"
                                           "\n",
                                  v52.m128i_i64[0],
                                  v51,
                                  v48,
                                  v47,
                                  v49,
                                  v50,
                                  &v68,
                                  &v62,
                                  &v61,
                                  &v53) )
              goto LABEL_65;
          }
          while ( !(unsigned __int8)sub_1470(v55, v59, 0.0) );
          if ( v60 <= 3 )
            break;
          sub_13A0((__int64)"AUTOHIDE NONE\nInvalid shift value (allowed values are 0..3)");
        }
        if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
          break;
        sub_13A0((__int64)"AUTOHIDE NONE\nInvalid switch idiom start %a (must be an instruction", 0.0);
      }
      v67 = 0xFFFFFFFFLL;
      if ( (unsigned __int64)v69 <= 1 || (unsigned __int8)parse_reg_name() )
        break;
      v27 = &byte_3257;
      if ( (_QWORD)v69 )
        v27 = v68;
      sub_13A0((__int64)"AUTOHIDE NONE\nUnknown input register: %s", v27);
    }
    if ( v61 == -1 || (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
      break;
    sub_13A0((__int64)"AUTOHIDE NONE\nInvalid default jump %a (must be an instruction", 0.0);
  }
  if ( (v53 & 1) != 0 )
  {
    v52.m128i_i64[0] = (__int64)&v63;
    while ( (unsigned int)sub_15F0(
                            (__int64)"HELP\n"
                                     "Direct value table holds values of the switch 'case's.\n"
                                     "Each value maps to the corresponding target of the jump table\n"
                                     "Indirect value table holds indexes into jump table.\n"
                                     "\n"
                                     "Inversed value table maps the first element of the value table\n"
                                     "to the last element of the jump table.\n"
                                     "\n"
                                     "For direct table the size of the value table is equal\n"
                                     "to the size of the jump table.\n"
                                     "\n"
                                     "Example of switch idiom with indirect value table:\n"
                                     "\n"
                                     "  cmp     ecx, 0Fh\n"
                                     "  ja      short defjump\n"
                                     "  movzx   ecx, ds:indirect_value_table[ecx]\n"
                                     "  jmp     ds:jump_table[ecx*4]\n"
                                     "\n"
                                     " jump_table      dd offset target_1\n"
                                     "                 dd offset target_2\n"
                                     " indirect_value_table db      0,     0,     1,     0\n"
                                     "                 db      1,     1,     1,     0\n"
                                     "                 db      1,     1,     1,     1\n"
                                     "                 db      1,     1,     1,     0\n"
                                     "\n"
                                     "ENDHELP\n"
                                     "Manual switch declaration - Value table\n"
                                     "\n"
                                     "<~I~ndirect value table:C>\n"
                                     "<I~n~versed value table:C>>\n"
                                     "<~A~ddress of value table:N::18::>\n"
                                     "<N~u~mber of elements    :D::18::> (only for indirect table)\n"
                                     "<~S~ize of table element :D::18::>\n"
                                     "<~F~irst(lowest) input value:D::18::> (only for indirect table)\n"
                                     "\n"
                                     "\n",
                            &v54,
                            v52.m128i_i64[0],
                            &v64,
                            &v65,
                            &v66) )
    {
      if ( (v54 & 1) == 0 )
        v64 = v56;
      if ( (unsigned __int8)sub_1470(v63, v65, 0.0) )
        goto LABEL_42;
    }
    goto LABEL_65;
  }
LABEL_42:
  v18 = src;
  BYTE4(v76) = 0;
  v19 = 0x800000;
  LODWORD(v70) = 0x800000;
  WORD2(v70) = 0;
  LODWORD(v73) = 0;
  v74 = 0;
  v75 = 0;
  LODWORD(v76) = -1;
  v77 = 0;
  LODWORD(v78) = 2;
  v79 = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3CC0);
  v72 = -1;
  if ( src )
  {
    v81.m128i_i64[0] = 0;
    qfree();
    v19 = v70;
  }
  v20 = v53;
  v21 = v19;
  src = nullptr;
  v81 = 0;
  if ( (v53 & 2) != 0 )
  {
    BYTE1(v21) = BYTE1(v19) | 0x20;
    v19 = v21;
  }
  if ( (v53 & 4) != 0 )
    v19 |= 0x20000u;
  if ( (v53 & 8) != 0 )
    v19 |= 0x400000u;
  si128.m128i_i64[0] = v55;
  WORD2(v70) = v56;
  *((_QWORD *)&v72 + 1) = v57;
  if ( v58 != -1 )
  {
    v75 = v58;
    BYTE1(v19) |= 2u;
  }
  v10 = v59;
  v22 = v19 & 0xFFFFFBFB;
  LODWORD(v70) = v19 & 0xFFFFFBFB;
  if ( (_DWORD)v59 == 4 )
  {
    LODWORD(v22) = v22 | 4;
  }
  else if ( (int)v59 > 4 )
  {
    if ( (_DWORD)v59 != 8 )
      goto LABEL_113;
    LODWORD(v22) = v19 | 0x404;
  }
  else
  {
    if ( (_DWORD)v59 != 1 )
    {
      if ( (_DWORD)v59 == 2 )
        goto LABEL_56;
LABEL_113:
      sub_1380((__int64)v18, v59, v22, v53, v14, v15, v43);
LABEL_114:
      if ( under_debugger )
        BUG();
      v31 = 1298;
      interr();
LABEL_116:
      v42 = (struct _Unwind_Exception *)sub_1380(v31, v10, v34, v33, v29, v30, v43);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      if ( src )
      {
        v81.m128i_i64[0] = 0;
        qfree();
      }
      _Unwind_Resume(v42);
    }
    BYTE1(v22) |= 4u;
  }
LABEL_56:
  LODWORD(v70) = v22 & 0xFFFFFE7F | ((_WORD)v60 << 7) & 0x180;
  *(_QWORD *)&v72 = v61;
  if ( (_DWORD)v67 != -1 )
  {
    dtype_by_size = get_dtype_by_size();
    v20 = v53;
    BYTE4(v76) = dtype_by_size;
    LODWORD(v76) = v67;
  }
  if ( (v20 & 1) != 0 )
  {
    v40 = v70;
    si128.m128i_i64[1] = v63;
    v41 = v70 & 0xFFFFF7FD;
    v10 = v70 & 0xFFFFF7FC | 1;
    LODWORD(v70) = v10;
    if ( (_DWORD)v65 == 4 )
    {
      LODWORD(v70) = v41 | 3;
      goto LABEL_99;
    }
    if ( (int)v65 > 4 )
    {
      if ( (_DWORD)v65 == 8 )
      {
        LODWORD(v70) = v40 | 0x803;
        goto LABEL_99;
      }
    }
    else
    {
      if ( (_DWORD)v65 == 1 )
      {
        LODWORD(v70) = v41 | 0x801;
        goto LABEL_99;
      }
      if ( (_DWORD)v65 == 2 )
      {
LABEL_99:
        if ( (v54 & 1) != 0 )
        {
          LODWORD(v70) = v70 | 0x10000;
          LODWORD(v73) = v56;
          WORD2(v70) = v64;
          v74 = v66;
        }
        if ( (v54 & 2) != 0 )
          LODWORD(v70) = v70 | 0x40;
        goto LABEL_60;
      }
    }
    goto LABEL_114;
  }
  si128.m128i_i64[1] = v62;
LABEL_60:
  v24 = nullptr;
  v79 = v44;
  if ( v46.m128i_i64[0] )
  {
    v24 = (void *)qalloc_or_throw();
    memcpy(v24, v45, 8 * v46.m128i_i64[0]);
  }
  v25 = _mm_loadl_epi64(&v46);
  v26 = _mm_unpacklo_epi64(v25, v25);
  if ( src )
  {
    v52 = v26;
    v81.m128i_i64[0] = 0;
    qfree();
    v26 = _mm_load_si128(&v52);
  }
  src = v24;
  LODWORD(v70) = v70 | 0x10;
  v81 = v26;
  set_switch_info();
  create_switch_table();
  create_insn();
  sub_1520((__int64)"AUTOHIDE REGISTRY\nSwitch information has been stored", 0);
LABEL_65:
  if ( v45 )
    qfree();
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  if ( src )
  {
    v81.m128i_i64[0] = 0;
    qfree();
  }
  return 1;
}

