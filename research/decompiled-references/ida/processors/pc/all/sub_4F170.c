__int64 __fastcall sub_4F170(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        char a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        unsigned __int64 a9,
        __int16 a10,
        int a11,
        char a12,
        int a13,
        int a14,
        int a15,
        int a16,
        const __m128i a17,
        __int128 a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        __m128i a50,
        __m128i a51,
        __int64 a52)
{
  unsigned __int64 v52; // r12
  __int64 func; // rax
  __int64 v54; // r13
  __m128 v55; // xmm0
  int v56; // ecx
  int v57; // r8d
  int v58; // r9d
  int v59; // r14d
  char v60; // r14
  __m128i v61; // xmm0
  unsigned int v62; // ebx
  __int64 v64; // rbx
  __int64 v65; // rax
  unsigned __int64 *v66; // rcx
  unsigned __int64 *v68; // [rsp+50h] [rbp-150h] BYREF
  unsigned int v69; // [rsp+58h] [rbp-148h]
  char v70; // [rsp+5Fh] [rbp-141h]
  unsigned __int64 v71; // [rsp+68h] [rbp-138h]
  __int64 v72; // [rsp+70h] [rbp-130h] BYREF
  unsigned __int64 v73; // [rsp+78h] [rbp-128h]
  __int16 v74; // [rsp+80h] [rbp-120h]
  _DWORD v75[8]; // [rsp+90h] [rbp-110h] BYREF
  unsigned __int64 v76; // [rsp+B0h] [rbp-F0h] BYREF
  __m128 v77; // [rsp+B8h] [rbp-E8h]
  char v78; // [rsp+C8h] [rbp-D8h]
  int v79; // [rsp+CCh] [rbp-D4h]
  __int128 v80; // [rsp+D0h] [rbp-D0h]
  unsigned __int64 v81; // [rsp+E0h] [rbp-C0h]
  __int64 v82; // [rsp+E8h] [rbp-B8h]
  int v83; // [rsp+F0h] [rbp-B0h]
  int v84; // [rsp+100h] [rbp-A0h] BYREF
  void *v85; // [rsp+108h] [rbp-98h]
  int *v86; // [rsp+110h] [rbp-90h]
  int *v87; // [rsp+118h] [rbp-88h]
  __int64 v88; // [rsp+120h] [rbp-80h]
  int v89; // [rsp+130h] [rbp-70h] BYREF
  void *v90; // [rsp+138h] [rbp-68h]
  int *v91; // [rsp+140h] [rbp-60h]
  int *v92; // [rsp+148h] [rbp-58h]
  __int64 v93; // [rsp+150h] [rbp-50h]
  unsigned __int64 v94; // [rsp+168h] [rbp-38h]

  v70 = a4;
  v94 = __readfsqword(0x28u);
  if ( a50.m128i_i8[1] == 5 )
  {
    v66 = a3;
    *a2 = a50.m128i_i64[1] & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    if ( !a3 )
      return 1;
LABEL_56:
    *v66 = a9;
    return 1;
  }
  if ( a50.m128i_i8[1] == 2 && !(_BYTE)a52 )
  {
    *a2 = a51.m128i_i64[0] & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    v66 = a3;
    if ( !a3 )
      return 1;
    goto LABEL_56;
  }
  func = get_func();
  v69 = -1;
  v54 = func;
  if ( func )
    v69 = (*(_QWORD *)(func + 16) & 0x10LL) == 0 ? -1 : 5;
  v78 = 0;
  v68 = &v76;
  v76 = a9;
  v86 = &v84;
  v55 = _mm_loadh_ps((const double *)&v68);
  v87 = &v84;
  v77 = v55;
  v79 = 0;
  v81 = a9;
  v82 = -1;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v91 = &v89;
  v92 = &v89;
  v93 = 0;
  v80 = 0;
  *(_QWORD *)&v80 = get_func();
  if ( !(_QWORD)v80 )
  {
    *((_QWORD *)&v80 + 1) = getseg();
    if ( !*((_QWORD *)&v80 + 1) )
    {
      if ( under_debugger )
        BUG();
      interr();
LABEL_63:
      if ( a17.m128i_i8[1] == 4 )
      {
        if ( (unsigned __int8)get_refinfo() && (unsigned __int8)calc_reference_data() && v71 != -1 )
        {
          *a2 = v71;
          if ( !a3 )
            goto LABEL_38;
          goto LABEL_37;
        }
      }
      else if ( a17.m128i_i8[1] == 2 && !(_BYTE)a19 )
      {
        *a2 = a18 & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        sub_6E1F0(a2);
LABEL_48:
        if ( !a3 )
          goto LABEL_38;
LABEL_37:
        *a3 = v52;
        goto LABEL_38;
      }
LABEL_54:
      v62 = 0;
      goto LABEL_39;
    }
  }
  v52 = -1;
  if ( v54 )
    goto LABEL_8;
LABEL_10:
  while ( 2 )
  {
    v73 = 0;
    while ( 1 )
    {
      v59 = sub_4E900((__int64)v68);
      if ( !v59 || (int)decode_insn() <= 0 )
        goto LABEL_54;
      if ( v59 == 21 )
      {
        v60 = 1;
      }
      else
      {
        v70 = 1;
        v60 = 0;
      }
      if ( (unsigned __int8)sub_4D570((__int64)&a12, (__int64)&a50) )
        break;
LABEL_23:
      if ( a50.m128i_i8[1] != 1 )
      {
        if ( v70 == 1 || v52 != -1 )
          goto LABEL_27;
LABEL_26:
        v70 = 0;
        v52 = -1;
        goto LABEL_27;
      }
      v75[0] = a50.m128i_u16[3];
      if ( (unsigned int)sub_72130(a1, &a7, v75, 1) != -1 )
      {
        if ( !(unsigned __int8)sub_49B00(a1, a9, a50.m128i_u16[3], a2) )
          goto LABEL_54;
        if ( a9 == v52 )
        {
          if ( a3 )
            goto LABEL_36;
        }
        else if ( a3 )
        {
          goto LABEL_34;
        }
        goto LABEL_38;
      }
      if ( v52 != -1 || v70 == 1 )
        goto LABEL_27;
      if ( a50.m128i_i8[1] != 1 )
        goto LABEL_26;
      v70 = sub_669E0(a1, &a7, a50.m128i_u16[3]);
      v52 = -1;
LABEL_27:
      if ( !v60 || a9 < v73 )
      {
        if ( !v54 || a50.m128i_i8[1] != 1 )
          goto LABEL_10;
LABEL_31:
        if ( !(unsigned __int8)sub_6B650(a1, &v72, a9, v54, 0) )
          goto LABEL_10;
        if ( v74 == a50.m128i_u16[3] )
        {
          *a2 = v72 & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
          if ( !a3 )
            goto LABEL_38;
LABEL_34:
          if ( v52 == -1 || v70 == 1 )
          {
LABEL_36:
            v52 = -1;
            goto LABEL_37;
          }
          goto LABEL_37;
        }
      }
    }
    if ( v52 == -1 )
      v52 = a9;
    if ( !(unsigned __int8)sub_6B2B0(&a7, 1) )
    {
      if ( a10 == 92 )
        goto LABEL_63;
      goto LABEL_23;
    }
    if ( a17.m128i_i8[1] != 5 )
    {
      a50 = _mm_loadu_si128(&a17);
      v61 = _mm_loadu_si128((const __m128i *)&a18);
      LODWORD(a52) = a19;
      a51 = v61;
      if ( !v54 )
        continue;
LABEL_8:
      if ( (unsigned __int8)sub_25F10((__int64)&a7, (__int64)&a50, v69)
        && (unsigned __int8)sub_4F900(
                              a1,
                              v54,
                              (_DWORD)a2,
                              v56,
                              v57,
                              v58,
                              _mm_loadu_si128(&a50),
                              _mm_loadu_si128(&a51),
                              a52) )
      {
        goto LABEL_48;
      }
      if ( a50.m128i_i8[1] != 1 )
        continue;
      goto LABEL_31;
    }
    break;
  }
  v64 = a17.m128i_i64[1] & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v65 = getseg();
  if ( !v65 || (*(_BYTE *)(v65 + 44) & 0x40) != 0 )
    goto LABEL_54;
  *a2 = v64;
  if ( a3 )
    goto LABEL_37;
LABEL_38:
  v62 = 1;
LABEL_39:
  sub_47E60(v90);
  sub_48030(v85);
  return v62;
}
