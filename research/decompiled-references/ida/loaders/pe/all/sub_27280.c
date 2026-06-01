__int64 __fastcall sub_27280(const __m128i *a1, __int64 a2)
{
  void *exception; // rbx
  char *v5; // rdx
  char v6; // al
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rax
  __int32 v24; // ecx
  int v25; // r8d
  int v26; // r9d
  int v27; // edx
  __m128i v28; // xmm0
  unsigned int v29; // eax
  char v30; // dl
  unsigned int v31; // eax
  int v32; // edx
  unsigned int v33; // eax
  int v34; // r12d
  __int64 v35; // r14
  _QWORD *v36; // rax
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  _BYTE *v41; // rax
  __int64 v42; // r15
  int v43; // r14d
  int v44; // eax
  unsigned int v45; // eax
  int v46; // r14d
  __int64 v47; // rax
  __int64 v48; // r12
  _DWORD *v49; // r15
  unsigned int v50; // eax
  int v51; // r14d
  __int64 v52; // r12
  __int64 v53; // rax
  void *v54; // r12
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // [rsp+0h] [rbp-D8h] BYREF
  int v58; // [rsp+8h] [rbp-D0h]
  __m128i v59; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+20h] [rbp-B8h]
  int v61; // [rsp+28h] [rbp-B0h]
  unsigned int v62; // [rsp+30h] [rbp-A8h] BYREF
  int v63; // [rsp+34h] [rbp-A4h]
  int v64; // [rsp+38h] [rbp-A0h]
  int v65; // [rsp+58h] [rbp-80h]
  int v66; // [rsp+68h] [rbp-70h]
  unsigned int v67; // [rsp+70h] [rbp-68h] BYREF
  int v68; // [rsp+78h] [rbp-60h]
  int v69; // [rsp+80h] [rbp-58h]
  int v70; // [rsp+88h] [rbp-50h]
  __int64 v71; // [rsp+90h] [rbp-48h]
  unsigned __int64 v72; // [rsp+98h] [rbp-40h]

  v72 = __readfsqword(0x28u);
  while ( 1 )
  {
LABEL_3:
    v5 = (char *)a1->m128i_i64[1];
    if ( a1[1].m128i_i64[0] < (unsigned __int64)(v5 + 1) )
    {
      exception = __cxa_allocate_exception(0x18u);
      sub_27040((__int64)exception);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'signature_read_exception_t, (void (*)(void *))sub_21520);
    }
    v6 = *v5;
    a1->m128i_i64[1] = (__int64)(v5 + 1);
    if ( (unsigned __int8)(v6 - 31) > 1u )
      break;
    sub_27180((__int64)a1);
  }
  a1->m128i_i64[1] = (__int64)v5;
  if ( *v5 == 16 )
  {
    *(_BYTE *)a2 = 1;
    ++a1->m128i_i64[1];
  }
  sub_27120((__int64)a1, &v62, 1);
  v11 = (unsigned __int8)v62;
  *(_QWORD *)(a2 + 4) = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned __int8)v62), 224).m128i_u64[0];
  switch ( v11 )
  {
    case 1LL:
    case 2LL:
    case 3LL:
    case 4LL:
    case 5LL:
    case 6LL:
    case 7LL:
    case 8LL:
    case 9LL:
    case 10LL:
    case 11LL:
    case 12LL:
    case 13LL:
    case 14LL:
    case 24LL:
    case 25LL:
    case 28LL:
      return 1;
    case 15LL:
      v53 = operator new(0x38u);
      *(_BYTE *)v53 = 0;
      *(_QWORD *)(v53 + 4) = 0;
      *(_QWORD *)(v53 + 32) = 0;
      *(_QWORD *)(v53 + 48) = 0;
      *(_OWORD *)(v53 + 16) = 0;
      *(_QWORD *)(a2 + 24) = v53;
      a2 = v53;
      goto LABEL_3;
    case 17LL:
    case 18LL:
      v14 = sub_27180((__int64)a1);
      v17 = v14 & 3;
      v18 = v14 >> 2;
      switch ( v17 )
      {
        case 1:
          v18 = (unsigned int)v18 | 0x1000000;
          break;
        case 2:
          v18 = (unsigned int)v18 | 0x1B000000;
          break;
        case 0:
          v18 = (unsigned int)v18 | 0x2000000;
          break;
      }
      *(_DWORD *)(a2 + 24) = v18;
      v19 = a1->m128i_i64[0];
      v57 = 0;
      v58 = 0;
      if ( sub_240D0(v19, v18, (__int64)&v57, v13, v15, v16) )
      {
        *(_DWORD *)(a2 + 8) = sub_27860(&v57);
        return 1;
      }
      v20 = *(_DWORD *)(a2 + 24);
      if ( (v20 & 0xFF000000) != 0x1B000000
        || !(unsigned __int8)sub_227B0(a1->m128i_i64[0], a1->m128i_i64[0] + 1152, (v20 & 0xFFFFFFu) - 1, (__int64)&v67) )
      {
        return 1;
      }
      v21 = a1->m128i_i64[0];
      v59.m128i_i32[0] = 0;
      v22 = sub_231F0(v21, v67, v59.m128i_i32, 3u);
      v62 = 0;
      v23 = sub_23020(v21, 3u, v22, &v62);
      if ( v23 )
      {
        v24 = v59.m128i_i32[0];
        v27 = v23 + v59.m128i_i32[0];
        if ( v62 < v59.m128i_i32[0] )
          return 0;
      }
      else
      {
        v27 = 0;
      }
      v28 = _mm_loadl_epi64(a1);
      LOBYTE(v62) = 0;
      v59 = _mm_unpacklo_epi64(v28, (__m128i)(unsigned __int64)v23);
      if ( !(unsigned __int8)sub_27280(
                               (unsigned int)&v59,
                               (unsigned int)&v62,
                               v27,
                               v24,
                               v25,
                               v26,
                               v57,
                               v58,
                               v59.m128i_i32[0],
                               v59.m128i_i32[2],
                               v27,
                               v61,
                               v62,
                               0,
                               0,
                               0,
                               0,
                               v65,
                               0,
                               v66,
                               v67,
                               v68,
                               v69,
                               v70,
                               v71) )
        goto LABEL_10;
      *(_DWORD *)(a2 + 8) = v64;
LABEL_23:
      sub_21A20((__int64)&v62);
      return 1;
    case 19LL:
    case 30LL:
      *(_DWORD *)(a2 + 24) = sub_27180((__int64)a1);
      return 1;
    case 20LL:
      LOBYTE(v62) = 0;
      if ( !(unsigned __int8)sub_27280(
                               (_DWORD)a1,
                               (unsigned int)&v62,
                               v7,
                               v8,
                               v9,
                               v10,
                               v57,
                               v58,
                               v59.m128i_i32[0],
                               v59.m128i_i32[2],
                               v60,
                               v61,
                               v62,
                               0,
                               0,
                               0,
                               0,
                               v65,
                               0,
                               v66,
                               v67,
                               v68,
                               v69,
                               v70,
                               v71) )
        goto LABEL_10;
      v44 = v63;
      *(_DWORD *)(a2 + 8) = v63;
      if ( v44 == 20 )
      {
        v54 = *(void **)(a2 + 16);
        if ( v54 )
        {
          sub_21A20(*(_QWORD *)(a2 + 16));
          operator delete(v54, 0x38u);
        }
        v55 = operator new(0x38u);
        *(_BYTE *)v55 = 0;
        v56 = v55;
        *(_QWORD *)(v55 + 4) = 0;
        *(_QWORD *)(v55 + 16) = 0;
        sub_21B80(v55, (__int64)&v62);
        *(_QWORD *)(a2 + 16) = v56;
      }
      *(_DWORD *)(a2 + 24) = sub_27180((__int64)a1);
      v45 = sub_27180((__int64)a1);
      *(_DWORD *)(a2 + 28) = v45;
      v46 = v45;
      if ( v45 )
      {
        v47 = operator new[](4LL * v45);
        *(_QWORD *)(a2 + 32) = v47;
        v48 = 0;
        while ( 1 )
        {
          v49 = (_DWORD *)(v47 + 4 * v48++);
          *v49 = sub_27180((__int64)a1);
          if ( v46 <= (int)v48 )
            break;
          v47 = *(_QWORD *)(a2 + 32);
        }
      }
      v50 = sub_27180((__int64)a1);
      *(_DWORD *)(a2 + 40) = v50;
      v51 = v50;
      if ( v50 )
      {
        *(_QWORD *)(a2 + 48) = operator new[](4LL * v50);
        v52 = 0;
        do
          *(_DWORD *)(*(_QWORD *)(a2 + 48) + 4 * v52++) = sub_27180((__int64)a1);
        while ( v51 > (int)v52 );
      }
      goto LABEL_23;
    case 21LL:
      sub_27120((__int64)a1, &v62, 1);
      *(_DWORD *)(a2 + 8) = (unsigned __int8)v62;
      v29 = sub_27180((__int64)a1);
      v30 = v29;
      v31 = v29 >> 2;
      v32 = v30 & 3;
      switch ( v32 )
      {
        case 1:
          v31 |= 0x1000000u;
          break;
        case 2:
          v31 |= 0x1B000000u;
          break;
        case 0:
          v31 |= 0x2000000u;
          break;
      }
      *(_DWORD *)(a2 + 24) = v31;
      v33 = sub_27180((__int64)a1);
      *(_DWORD *)(a2 + 28) = v33;
      v34 = v33;
      if ( !v33 )
        return 1;
      v35 = v33;
      v36 = (_QWORD *)operator new[](56LL * v33 + 8);
      v39 = v35 - 2;
      v40 = v36 + 1;
      *v36 = v35;
      v41 = v36 + 1;
      do
      {
        --v39;
        *v41 = 0;
        v41 += 56;
        *(_QWORD *)(v41 - 52) = 0;
        *((_QWORD *)v41 - 3) = 0;
        *((_QWORD *)v41 - 1) = 0;
        *(_OWORD *)(v41 - 40) = 0;
      }
      while ( v39 != -2 );
      *(_QWORD *)(a2 + 32) = v40;
      v42 = 0;
      v43 = 0;
      break;
    case 29LL:
      LOBYTE(v62) = 0;
      if ( !(unsigned __int8)sub_27280(
                               (_DWORD)a1,
                               (unsigned int)&v62,
                               v7,
                               v8,
                               v9,
                               v10,
                               v57,
                               v58,
                               v59.m128i_i32[0],
                               v59.m128i_i32[2],
                               v60,
                               v61,
                               v62,
                               0,
                               0,
                               0,
                               0,
                               v65,
                               0,
                               v66,
                               v67,
                               v68,
                               v69,
                               v70,
                               v71) )
        goto LABEL_10;
      *(_DWORD *)(a2 + 8) = v63;
      sub_21A20((__int64)&v62);
      return 1;
    default:
      return 0;
  }
  while ( 1 )
  {
    LOBYTE(v62) = 0;
    if ( !(unsigned __int8)sub_27280(
                             (_DWORD)a1,
                             (unsigned int)&v62,
                             v39,
                             (_DWORD)v40,
                             v37,
                             v38,
                             v57,
                             v58,
                             v59.m128i_i32[0],
                             v59.m128i_i32[2],
                             v60,
                             v61,
                             v62,
                             0,
                             0,
                             0,
                             0,
                             v65,
                             0,
                             v66,
                             v67,
                             v68,
                             v69,
                             v70,
                             v71) )
      break;
    sub_21B80(v42 + *(_QWORD *)(a2 + 32), (__int64)&v62);
    ++v43;
    v42 += 56;
    sub_21A20((__int64)&v62);
    if ( v34 <= v43 )
      return 1;
  }
LABEL_10:
  sub_21A20((__int64)&v62);
  return 0;
}
