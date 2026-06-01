__int64 __fastcall sub_4F650(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __m128i **v5; // rbp
  __int64 v6; // rax
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // r14d
  __int64 *v16; // r13
  __int64 v17; // rax
  unsigned int v18; // r15d
  __m128i v19; // xmm0
  __m128i *v20; // r14
  __int64 v21; // r10
  char v22; // al
  __int64 v23; // r10
  unsigned __int64 v24; // rax
  __int64 v25; // r10
  __int64 v26; // rcx
  __m128i v27; // rax
  void (__fastcall *v28)(__m128i *); // rcx
  void (__fastcall *v29)(__m128i *); // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rbx
  void *v32; // rdi
  __int64 v33; // rbx
  _QWORD *v34; // rbp
  __int64 v35; // rdi
  __int64 v36; // rdi
  unsigned __int64 i; // rdx
  __int64 m128i_i64; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  bool v42; // sf
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  const __m128i *v47; // r8
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __m128i v54; // xmm0
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // [rsp+10h] [rbp-3F8h]
  __int64 v58; // [rsp+10h] [rbp-3F8h]
  __int64 v59; // [rsp+10h] [rbp-3F8h]
  const __m128i *v60; // [rsp+10h] [rbp-3F8h]
  __int64 v61; // [rsp+18h] [rbp-3F0h]
  __int64 v62; // [rsp+20h] [rbp-3E8h]
  _QWORD *v63; // [rsp+20h] [rbp-3E8h]
  __m128i **v64; // [rsp+20h] [rbp-3E8h]
  __m128i *p_si128; // [rsp+28h] [rbp-3E0h]
  __int64 v66; // [rsp+28h] [rbp-3E0h]
  __int64 v67; // [rsp+28h] [rbp-3E0h]
  unsigned __int64 v68; // [rsp+30h] [rbp-3D8h]
  __int64 v69; // [rsp+30h] [rbp-3D8h]
  const __m128i *v70; // [rsp+30h] [rbp-3D8h]
  __int64 v71; // [rsp+30h] [rbp-3D8h]
  __int64 v72; // [rsp+38h] [rbp-3D0h]
  __int64 v73; // [rsp+38h] [rbp-3D0h]
  __int64 v74; // [rsp+40h] [rbp-3C8h]
  __int64 v75; // [rsp+40h] [rbp-3C8h]
  __int64 v76; // [rsp+48h] [rbp-3C0h]
  __int64 v77; // [rsp+48h] [rbp-3C0h]
  int v78; // [rsp+5Ch] [rbp-3ACh] BYREF
  __m128i si128; // [rsp+60h] [rbp-3A8h] BYREF
  __m128i v80; // [rsp+70h] [rbp-398h] BYREF
  __m128i v81; // [rsp+80h] [rbp-388h] BYREF
  __int64 v82; // [rsp+90h] [rbp-378h]
  __m128i v83[14]; // [rsp+A0h] [rbp-368h] BYREF
  __m128i v84[3]; // [rsp+180h] [rbp-288h] BYREF
  _QWORD v85[32]; // [rsp+1B0h] [rbp-258h] BYREF
  __int64 v86; // [rsp+2B0h] [rbp-158h]
  __int64 (__fastcall **v87)(); // [rsp+2C0h] [rbp-148h] BYREF
  __m128i v88; // [rsp+2C8h] [rbp-140h]
  __m128i v89; // [rsp+2D8h] [rbp-130h] BYREF
  __int64 v90; // [rsp+2E8h] [rbp-120h]
  __int64 v91; // [rsp+2F0h] [rbp-118h]
  unsigned __int64 v92; // [rsp+2F8h] [rbp-110h]
  unsigned __int64 v93; // [rsp+3C8h] [rbp-40h]

  v5 = (__m128i **)a1;
  v6 = a3->m128i_i64[1];
  v93 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(v6 + 144);
  v9 = sub_58480(v8, a3);
  if ( v9 )
  {
    v13 = *(_QWORD *)(v8 + 8);
    *(_DWORD *)a4 = 2;
    *(_DWORD *)(a4 + 16) = v9;
    *(_QWORD *)(a4 + 8) = v13;
    return 1;
  }
  v14 = sub_5C210(*a1, a3, v10, v11, v12);
  if ( (_BYTE)v14 )
  {
    *(_DWORD *)a4 = 3;
    *(__m128i *)(a4 + 8) = _mm_loadu_si128(a3);
    return 1;
  }
  v16 = a1 + 3;
  v17 = sub_56B90(a1 + 3, a3);
  if ( v17 )
  {
    *(_DWORD *)a4 = 1;
    *(_QWORD *)(a4 + 8) = v17;
    return 1;
  }
  sub_84A60(v83);
  v18 = sub_98E20(a3, v83);
  if ( !(_BYTE)v18 )
    goto LABEL_10;
  sub_4E7A0((__int64)&v81, (_QWORD *)*a1, a1, v83, 2);
  if ( !v81.m128i_i32[0] )
    goto LABEL_10;
  v19 = _mm_load_si128(&v81);
  *(_QWORD *)(a4 + 16) = v82;
  *(__m128i *)a4 = v19;
  if ( !a2 )
    goto LABEL_17;
  v20 = *(__m128i **)(sub_87DA0(a2) + 216);
  v21 = 0;
  if ( !v20 )
  {
    v22 = 0;
    goto LABEL_16;
  }
  LODWORD(v57) = v20[11].m128i_i32[3];
  if ( !v20->m128i_i32[2] )
  {
    v28 = *(void (__fastcall **)(__m128i *))v20->m128i_i64[0];
    if ( (char *)v28 != (char *)sub_15E30 )
      goto LABEL_50;
    v29 = *(void (__fastcall **)(__m128i *))(v20->m128i_i64[0] + 16);
    if ( (char *)v29 == (char *)sub_15D70 )
    {
      v30 = (_QWORD *)v20[8].m128i_i64[0];
      v20->m128i_i64[0] = (__int64)&off_C71D8;
      if ( v30 )
      {
        if ( v30[2] )
        {
          v63 = v30;
          v66 = a4;
          v31 = v30[2];
          do
          {
            sub_293E0(*(_QWORD **)(v31 + 24));
            v32 = (void *)v31;
            v31 = *(_QWORD *)(v31 + 16);
            operator delete(v32, 0x30u);
          }
          while ( v31 );
          v30 = v63;
          a4 = v66;
        }
        operator delete(v30, 0x30u);
      }
      if ( v20[9].m128i_i64[1] )
      {
        v64 = v5;
        v67 = a4;
        v33 = v20[9].m128i_i64[1];
        do
        {
          v34 = (_QWORD *)v33;
          sub_29E10(*(_QWORD **)(v33 + 24));
          v35 = *(_QWORD *)(v33 + 32);
          v33 = *(_QWORD *)(v33 + 16);
          if ( v35 )
          {
            v34[5] = 0;
            qfree(v35);
          }
          operator delete(v34, 0x48u);
        }
        while ( v33 );
        v5 = v64;
        a4 = v67;
      }
      v36 = v20[6].m128i_i64[0];
      if ( v36 )
      {
        v20[6].m128i_i64[1] = 0;
        qfree(v36);
      }
      operator delete(v20, 0xC0u);
      v21 = 0;
    }
    else
    {
      v29(v20);
      v21 = 0;
    }
  }
  while ( 1 )
  {
    v22 = v57 & 1;
LABEL_16:
    if ( !v22 )
      goto LABEL_17;
    v20 = v83;
    v57 = v21;
    if ( !(unsigned __int8)sub_84C30(v83) )
      goto LABEL_17;
    v62 = sub_9AC00(v83);
    if ( !v62 )
      goto LABEL_17;
    sub_84A60(v85);
    if ( (v84[0].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0 && v84[0].m128i_i64[0] != -1 )
      break;
    if ( under_debugger )
      goto LABEL_113;
    interr(30478);
LABEL_50:
    v61 = v21;
    v28(v20);
    v21 = v61;
  }
  v23 = v57;
  si128 = _mm_load_si128(v84);
  while ( 1 )
  {
    v58 = v23;
    if ( (si128.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || si128.m128i_i64[0] == -1 )
    {
      si128 = (__m128i)0x8000000000000000LL;
      goto LABEL_52;
    }
    sub_84A60(&v87);
    p_si128 = &si128;
    if ( !(unsigned __int8)sub_98E20(&si128, &v87) )
    {
      sub_1B750((__int64)&v87);
      si128 = (__m128i)0x8000000000000000LL;
      goto LABEL_52;
    }
    v24 = sub_97BF0(&v87);
    v25 = v58;
    if ( (unsigned __int16)(v24 - 15) > 0x33u )
      goto LABEL_109;
    v26 = 0x8004000810083LL;
    if ( !_bittest64(&v26, (unsigned int)(v24 - 15)) )
      goto LABEL_109;
    v80 = 0;
    if ( !(unsigned __int8)sub_945B0(&v87, &v80, 73) )
      break;
    v27.m128i_i64[0] = sub_951C0(&v87, &v80);
    si128 = v27;
    sub_84A10(&v80);
    sub_1B750((__int64)&v87);
    v23 = v58;
  }
  sub_84A10(&v80);
  v25 = v58;
LABEL_55:
  for ( i = 0x8000000000000000LL; ; i = si128.m128i_i64[0] )
  {
    v68 = i;
    v59 = v25;
    sub_1B750((__int64)&v87);
    si128.m128i_i64[0] = v68;
    si128.m128i_i64[1] = v59;
    if ( (v68 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
      goto LABEL_52;
    if ( v68 == -1 )
      goto LABEL_52;
    if ( !(unsigned __int8)sub_98E20(p_si128, v85) )
      goto LABEL_52;
    p_si128 = (__m128i *)sub_87DA0(v85);
    v60 = (const __m128i *)sub_87DA0(a2);
    if ( p_si128 == v60 )
      goto LABEL_52;
    if ( (v84[0].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0 && v84[0].m128i_i64[0] != -1 )
      break;
LABEL_107:
    if ( under_debugger )
      goto LABEL_113;
    v24 = interr(30478);
LABEL_109:
    if ( (unsigned __int16)v24 > 0x17u )
      goto LABEL_55;
    v56 = 8912900;
    if ( !_bittest64(&v56, v24) )
      goto LABEL_55;
    v25 = si128.m128i_i64[1];
  }
  m128i_i64 = (__int64)(*v5)[6].m128i_i64;
  p_si128 = *v5;
  v39 = (*v5)[6].m128i_i64[1];
  v40 = m128i_i64;
  while ( v39 )
  {
    v76 = v40;
    v74 = m128i_i64;
    v72 = v39;
    v41 = sub_849A0(v39 + 32, v84);
    m128i_i64 = v74;
    v42 = v41 < 0;
    v40 = v76;
    v43 = *(_QWORD *)(v72 + 24);
    if ( !v42 )
    {
      v40 = v72;
      v43 = *(_QWORD *)(v72 + 16);
    }
    v39 = v43;
  }
  if ( m128i_i64 != v40 )
  {
    v69 = v40;
    if ( (int)sub_849A0(v84, v40 + 32) >= 0 )
    {
      if ( (v60[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || v60[14].m128i_i64[0] == -1 )
      {
        if ( under_debugger )
          goto LABEL_113;
        interr(30478);
      }
      else
      {
        v44 = v69 + 56;
        v45 = *(_QWORD *)(v69 + 64);
        v46 = v69 + 56;
        v47 = v60 + 14;
        while ( v45 )
        {
          v77 = v44;
          v75 = v46;
          v73 = v45;
          v70 = v47;
          v48 = sub_849A0(v45 + 32, v47);
          v47 = v70;
          v42 = v48 < 0;
          v46 = v75;
          v44 = v77;
          v49 = *(_QWORD *)(v73 + 24);
          if ( !v42 )
          {
            v46 = v73;
            v49 = *(_QWORD *)(v73 + 16);
          }
          v45 = v49;
        }
        if ( v44 != v46 )
        {
          v71 = v46;
          if ( (int)sub_849A0(v47, v46 + 32) >= 0 )
          {
            v50 = *(_QWORD *)(v71 + 48);
            v80.m128i_i64[1] = *(_QWORD *)(v71 + 56);
            v80.m128i_i64[0] = v50;
            v51 = v50 & 0x7FFFFFFFFFFFFFFFLL;
            if ( v51 == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_52;
            if ( v51 )
              goto LABEL_80;
          }
        }
      }
    }
  }
  v52 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  v87 = nullptr;
  v80.m128i_i64[0] = -1;
  v80.m128i_i64[1] = v52;
  v78 = 0;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, int *, __int64 (__fastcall ***)()))(v86 + 112))(
          *(_QWORD *)(v85[0] + 24LL),
          60,
          &v78,
          &v87)
    && v78
    || (v87 = nullptr,
        v78 = 0,
        (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, __int64 (__fastcall ***)()))(v86 + 112))(
          *(_QWORD *)(v85[0] + 24LL),
          11,
          &v78,
          &v87))
    || !v78 )
  {
    v88.m128i_i32[0] = 0;
    v88.m128i_i64[1] = 0;
    v87 = off_C8010;
    if ( !(unsigned int)sub_A1190(v85, &v87, 0) )
    {
      v53 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
      v88.m128i_i32[0] = 0;
      v87 = off_C8048;
      v88.m128i_i64[1] = 0;
      v89.m128i_i64[0] = v62;
      v89.m128i_i64[1] = -1;
      v90 = v53;
      sub_A1190(v60, &v87, 1);
      v80 = _mm_load_si128((const __m128i *)&v89.m128i_u64[1]);
      goto LABEL_93;
    }
  }
  if ( sub_97AE0(v85) == -1 || !(unsigned __int8)sub_84C30(v83) )
    goto LABEL_93;
  v87 = &off_C8080;
  if ( (v84[0].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || v84[0].m128i_i64[0] == -1 )
  {
    if ( under_debugger )
      goto LABEL_113;
    interr(30478);
    goto LABEL_107;
  }
  v54 = _mm_load_si128(v84);
  v89 = (__m128i)0x8000000000000000LL;
  v88 = v54;
  LOWORD(v90) = sub_97BF0(v83);
  v91 = sub_9AC00(v83);
  v55 = sub_97AE0(v83);
  if ( v55 != -1 )
    v55 >>= 3;
  v92 = v55;
  if ( (unsigned int)sub_57150(v16, &v87) )
    v80 = _mm_loadu_si128(&v89);
LABEL_93:
  sub_42EA0(&p_si128[5].m128i_i64[1], (__int64)v83, v60, &v80);
  if ( (v80.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0
    && (v80.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0x7FFFFFFFFFFFFFFFLL )
  {
LABEL_80:
    if ( (v84[0].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0 && v84[0].m128i_i64[0] != -1 )
    {
      if ( (unsigned int)sub_849A0(&v80, v84) )
        sub_4F650(v5, 0, &v80, a4);
      goto LABEL_52;
    }
    if ( !under_debugger )
      interr(30478);
LABEL_113:
    BUG();
  }
LABEL_52:
  sub_1B750((__int64)v85);
LABEL_17:
  v14 = v18;
LABEL_10:
  sub_1B750((__int64)v83);
  return v14;
}
