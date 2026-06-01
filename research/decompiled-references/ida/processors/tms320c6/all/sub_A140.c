__int64 __fastcall sub_A140(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // r15
  int v6; // ecx
  bool v7; // al
  __int64 flags; // rax
  __int64 v9; // rbx
  int v11; // ebp
  unsigned __int64 v12; // rax
  int v13; // r14d
  unsigned __int64 v14; // rbx
  __int32 v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i v20; // xmm1
  int v21; // eax
  __m128i v22; // xmm3
  char *v23; // rax
  __int16 v24; // r12
  int v25; // edx
  unsigned __int64 not_tail; // r13
  __int64 v27; // rbx
  __int64 v28; // rax
  __m128i v29; // xmm4
  _QWORD *v30; // rax
  unsigned __int64 v31; // r15
  __int16 v32; // r14
  int v33; // eax
  __int64 v34; // r9
  __int64 v35; // r8
  _WORD *v36; // rcx
  _WORD *v37; // rdx
  __m128i v38; // kr00_16
  bool v39; // dl
  __int64 v40; // rdx
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  unsigned __int64 v43; // rbx
  __int64 v44; // rdx
  __m128i v45; // [rsp+0h] [rbp-3B8h] BYREF
  __m128i v46; // [rsp+10h] [rbp-3A8h] BYREF
  int v47; // [rsp+28h] [rbp-390h]
  int v48; // [rsp+2Ch] [rbp-38Ch]
  int v49; // [rsp+30h] [rbp-388h]
  int v50; // [rsp+34h] [rbp-384h]
  int v51; // [rsp+38h] [rbp-380h]
  int v52; // [rsp+3Ch] [rbp-37Ch]
  __m128i *v53; // [rsp+40h] [rbp-378h]
  __m128i *v54; // [rsp+48h] [rbp-370h]
  _QWORD *v55; // [rsp+50h] [rbp-368h]
  __int64 v56; // [rsp+58h] [rbp-360h]
  _BYTE *v57; // [rsp+60h] [rbp-358h]
  _QWORD *v58; // [rsp+68h] [rbp-350h]
  int v59; // [rsp+70h] [rbp-348h] BYREF
  unsigned __int64 v60; // [rsp+78h] [rbp-340h]
  __m128i v61; // [rsp+80h] [rbp-338h] BYREF
  __int32 v62; // [rsp+90h] [rbp-328h]
  int v63; // [rsp+94h] [rbp-324h]
  __m128i v64; // [rsp+A0h] [rbp-318h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-308h]
  __int64 v66; // [rsp+B8h] [rbp-300h]
  __int64 v67; // [rsp+C0h] [rbp-2F8h]
  char v68; // [rsp+C8h] [rbp-2F0h] BYREF
  char v69; // [rsp+208h] [rbp-1B0h] BYREF
  __m128i v70; // [rsp+210h] [rbp-1A8h]
  __int64 v71; // [rsp+220h] [rbp-198h]
  __int64 v72; // [rsp+228h] [rbp-190h]
  __int64 v73; // [rsp+230h] [rbp-188h]
  _BYTE v74[2]; // [rsp+238h] [rbp-180h] BYREF
  __int64 v75; // [rsp+248h] [rbp-170h]
  _QWORD v76[8]; // [rsp+378h] [rbp-40h] BYREF

  v2 = (_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v76[0] = __readfsqword(0x28u);
  v5 = a2;
  v6 = *(_DWORD *)(v3 + 104);
  if ( v6 <= v4 && *(_DWORD *)(v3 + 108) > v4 )
  {
    v25 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v6) + 8);
    v52 = v25 & 0x100;
    v7 = (v25 & 1) == 0;
    v51 = v25 & 0x200;
    v48 = v25 & 0x400;
    v47 = v25 & 4;
    v49 = v25 & 0x10;
    v50 = v25 & 8;
  }
  else
  {
    v49 = 0;
    v7 = 1;
    v50 = 0;
    v47 = 0;
    v48 = 0;
    v51 = 0;
    v52 = 0;
  }
  *(_BYTE *)(a1 + 152) = v7;
  if ( (unsigned __int8)segtype() == 1 )
  {
    *(_BYTE *)(a1 + 152) = 0;
    goto LABEL_6;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 && *(_WORD *)(a2 + 24) != 310 )
  {
    v11 = 0;
    v12 = sub_9E80(*(_QWORD *)(a2 + 16));
    v55 = (_QWORD *)a1;
    v13 = *(unsigned __int16 *)(a2 + 26);
    v56 = a2;
    v14 = v12;
    v15 = *(_DWORD *)(a2 + 16) + v13;
    v63 = 35;
    v45 = (__m128i)-1LL;
    v46 = (__m128i)-1LL;
    while ( 1 )
    {
LABEL_23:
      if ( (get_flags_ex() & 0x1000) != 0 )
        goto LABEL_30;
      v20 = _mm_load_si128(&v45);
      v62 = v15;
      v53 = &v61;
      v61 = v20;
      v21 = sub_9A80(
              v14,
              &v61,
              v16,
              v17,
              v18,
              v19,
              v45.m128i_i64[0],
              v45.m128i_i64[1],
              v46.m128i_i64[0],
              v46.m128i_i64[1]);
      v15 = v62;
      v11 += v21;
      v45 = _mm_load_si128(&v61);
      if ( v11 > 5 )
        goto LABEL_30;
      v22 = _mm_load_si128(&v46);
      v65 = -1;
      v23 = &v68;
      v66 = 0;
      v67 = 0;
      v64 = v22;
      do
      {
        *(_WORD *)v23 = 0;
        v23 += 40;
        *((_WORD *)v23 - 19) = 0;
        *((_WORD *)v23 - 18) = 0;
        *((_DWORD *)v23 - 2) = 0;
        *((_WORD *)v23 - 17) = 0;
        *((_OWORD *)v23 - 2) = 0;
        *((_QWORD *)v23 - 2) = 0;
      }
      while ( &v69 != v23 );
      v54 = &v64;
      if ( (int)decode_insn() <= 0 )
        goto LABEL_30;
      v24 = v66;
      if ( (_WORD)v66 == 94 )
        break;
      not_tail = prev_not_tail();
      if ( not_tail == -1 )
        goto LABEL_30;
      v27 = -1;
      while ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
      {
        if ( !sub_9D40(not_tail) )
          goto LABEL_40;
        v27 = not_tail;
        v28 = prev_not_tail();
        if ( v28 == -1 )
          goto LABEL_39;
        not_tail = v28;
      }
      not_tail = v27;
LABEL_39:
      if ( not_tail == -1 )
        goto LABEL_30;
LABEL_40:
      v14 = sub_9E80(not_tail);
      if ( v11 == 5 )
        goto LABEL_41;
    }
    if ( v11 != 5 )
      goto LABEL_30;
LABEL_41:
    v29 = _mm_load_si128(&v46);
    v71 = -1;
    v72 = 0;
    v30 = v74;
    v73 = 0;
    v70 = v29;
    do
    {
      *(_WORD *)v30 = 0;
      v30 += 5;
      *((_WORD *)v30 - 19) = 0;
      *((_WORD *)v30 - 18) = 0;
      *((_DWORD *)v30 - 2) = 0;
      *((_WORD *)v30 - 17) = 0;
      *((_OWORD *)v30 - 2) = 0;
      *(v30 - 2) = 0;
    }
    while ( v76 != v30 );
    v57 = v74;
    v31 = v14;
    v58 = v76;
    while ( 1 )
    {
      if ( (int)decode_insn() <= 0 )
        goto LABEL_50;
      if ( !BYTE4(v72) && ((_WORD)v72 == 10 || (_WORD)v72 == 91 || (unsigned __int16)(v72 - 94) <= 1u) )
        break;
      if ( (v72 & 0x10000000000LL) == 0 )
        goto LABEL_50;
      v31 += WORD1(v72);
    }
    if ( v71 == -1 )
    {
LABEL_50:
      if ( v24 != 94 )
        goto LABEL_23;
LABEL_30:
      v2 = v55;
      v5 = v56;
      goto LABEL_6;
    }
    v46.m128i_i64[0] = (__int64)v57;
    v32 = v24;
    v5 = v56;
    v2 = v55;
    v45.m128i_i64[0] = v71;
    v55 = v58;
    v33 = decode_insn();
    v35 = v45.m128i_i64[0];
    v36 = (_WORD *)v46.m128i_i64[0];
    v37 = v55;
    if ( v33 > 0 && ((_WORD)v66 != 94 || v32 == 94) )
    {
      v71 = -1;
      v72 = 0;
      v73 = 0;
      v70 = (__m128i)-1LL;
      do
      {
        *v36 = 0;
        v36 += 20;
        *(v36 - 19) = 0;
        *(v36 - 18) = 0;
        *((_DWORD *)v36 - 2) = 0;
        *(v36 - 17) = 0;
        *((_OWORD *)v36 - 2) = 0;
        *((_QWORD *)v36 - 2) = 0;
      }
      while ( v37 != v36 );
      sub_9A80(v14, v53, v37, v36, v35, v34, v45.m128i_i64[0], v45.m128i_i64[1], v35, v46.m128i_i64[1]);
      v38 = v61;
      v45.m128i_i32[0] = v62;
      if ( (int)decode_insn() > 0 )
      {
        v39 = v38.m128i_i64[0] != -1 && v38.m128i_i64[1] != -1;
        if ( v74[1] == 7 )
        {
          v41 = *(_QWORD *)(v2[4] + 16LL);
          v42 = v75 + 16 * v70.m128i_i64[0];
          if ( v42 != v41 )
          {
            if ( v42 == -1 )
              v41 = -1;
            else
              v41 &= v42;
          }
          if ( v39 )
          {
            v43 = sub_9E80(v41);
            insn_add_cref();
            if ( !(unsigned __int8)func_does_return() )
              *((_BYTE *)v2 + 152) = 0;
            v44 = *(_QWORD *)(v5 + 16);
            v59 = 0;
            v60 = v43;
            sub_D280(&v59, v2, v44, 0.0);
            goto LABEL_63;
          }
          v59 = 1;
          v60 = v41;
        }
        else
        {
          if ( v39 )
          {
            v40 = *(_QWORD *)(v5 + 16);
            v59 = 2;
            sub_D280(&v59, v2, v40, 0.0);
LABEL_63:
            if ( (get_flags_ex() & 0xF00000) != 0x500000 )
              op_offset();
            if ( (get_flags_ex() & 0xF00000) != 0x500000 )
              op_offset();
            goto LABEL_6;
          }
          v59 = 3;
        }
        *((_BYTE *)v2 + 152) = 0;
        sub_D280(&v59, v2, *(_QWORD *)(v5 + 16), 0.0);
      }
    }
  }
LABEL_6:
  flags = get_flags_ex();
  v9 = flags;
  if ( v52 )
    sub_9F60(v5, v5 + 40, flags, 1);
  if ( v51 )
    sub_9F60(v5, v5 + 80, v9, 1);
  if ( v48 )
    sub_9F60(v5, v5 + 120, v9, 1);
  if ( v47 )
    sub_9F60(v5, v5 + 40, v9, 0);
  if ( v50 )
    sub_9F60(v5, v5 + 80, v9, 0);
  if ( v49 )
    sub_9F60(v5, v5 + 120, v9, 0);
  if ( *((_BYTE *)v2 + 152) )
    add_cref();
  return 1;
}

