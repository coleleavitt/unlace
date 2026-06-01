__int64 __fastcall sub_28400(const __m128i *a1, __int64 a2)
{
  void *exception; // rbx
  int v5; // esi
  char *v6; // rax
  unsigned __int64 v7; // rcx
  char v8; // dl
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // r14
  unsigned int v24; // eax
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r9d
  __int32 v28; // edx
  __m128i v29; // xmm0
  __int32 v30; // ecx
  __int64 v31; // rax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // r14d
  __int64 v35; // rax
  __int64 v36; // r13
  _DWORD *v37; // r15
  unsigned int v38; // eax
  int v39; // r14d
  __int64 v40; // r13
  unsigned int v41; // eax
  char v42; // dl
  unsigned int v43; // eax
  int v44; // edx
  unsigned int v45; // eax
  int v46; // r13d
  __int64 v47; // r14
  _QWORD *v48; // rax
  int v49; // r8d
  int v50; // r9d
  __int64 v51; // rdx
  _QWORD *v52; // rcx
  _BYTE *v53; // rax
  __int64 v54; // r15
  int v55; // r14d
  void *v56; // r13
  __int64 v57; // rax
  __int64 v58; // r13
  __int64 v59; // [rsp+0h] [rbp-D8h] BYREF
  int v60; // [rsp+8h] [rbp-D0h]
  __m128i v61; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+20h] [rbp-B8h]
  int v63; // [rsp+28h] [rbp-B0h]
  unsigned int v64; // [rsp+30h] [rbp-A8h] BYREF
  int v65; // [rsp+34h] [rbp-A4h]
  int v66; // [rsp+38h] [rbp-A0h]
  int v67; // [rsp+58h] [rbp-80h]
  int v68; // [rsp+68h] [rbp-70h]
  unsigned int v69; // [rsp+70h] [rbp-68h] BYREF
  int v70; // [rsp+78h] [rbp-60h]
  int v71; // [rsp+80h] [rbp-58h]
  int v72; // [rsp+88h] [rbp-50h]
  __int64 v73; // [rsp+90h] [rbp-48h]
  unsigned __int64 v74; // [rsp+98h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  v5 = a1[1].m128i_i32[2];
  if ( v5 > 31 )
  {
LABEL_13:
    sub_A980((__int64)"AUTOHIDE REGISTRY\nMaximum type recursion depth exceeded (%d)", v5);
    return 0;
  }
  else
  {
    while ( 2 )
    {
      v6 = (char *)a1->m128i_i64[1];
      v7 = a1[1].m128i_u64[0];
      a1[1].m128i_i32[2] = v5 + 1;
      if ( (unsigned __int64)v6 < v7 )
      {
        while ( 1 )
        {
          if ( v7 < (unsigned __int64)(v6 + 1) )
          {
            exception = __cxa_allocate_exception(0x18u);
            sub_281C0((__int64)exception);
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'signature_read_exception_t,
              (void (*)(void *))sub_22560);
          }
          v8 = *v6;
          a1->m128i_i64[1] = (__int64)(v6 + 1);
          if ( (unsigned __int8)(v8 - 31) > 1u )
            break;
          sub_28300((__int64)a1);
          v6 = (char *)a1->m128i_i64[1];
          v7 = a1[1].m128i_u64[0];
          if ( (unsigned __int64)v6 >= v7 )
            goto LABEL_10;
        }
        a1->m128i_i64[1] = (__int64)v6;
        if ( (unsigned __int64)v6 < v7 && *v6 == 16 )
        {
          *(_BYTE *)a2 = 1;
          ++a1->m128i_i64[1];
        }
      }
LABEL_10:
      sub_282A0((__int64)a1, &v64, 1);
      v13 = (unsigned __int8)v64;
      *(_QWORD *)(a2 + 4) = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned __int8)v64), 224).m128i_u64[0];
      switch ( v13 )
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
          v31 = operator new(0x38u);
          *(_BYTE *)v31 = 0;
          *(_QWORD *)(v31 + 4) = 0;
          *(_QWORD *)(v31 + 32) = 0;
          *(_QWORD *)(v31 + 48) = 0;
          *(_OWORD *)(v31 + 16) = 0;
          *(_QWORD *)(a2 + 24) = v31;
          v5 = a1[1].m128i_i32[2];
          if ( v5 > 31 )
            goto LABEL_13;
          a2 = v31;
          continue;
        case 17LL:
        case 18LL:
          v16 = sub_28300((__int64)a1);
          v19 = v16 & 3;
          v20 = v16 >> 2;
          switch ( v19 )
          {
            case 1:
              v20 = (unsigned int)v20 | 0x1000000;
              break;
            case 2:
              v20 = (unsigned int)v20 | 0x1B000000;
              break;
            case 0:
              v20 = (unsigned int)v20 | 0x2000000;
              break;
          }
          *(_DWORD *)(a2 + 24) = v20;
          v21 = a1->m128i_i64[0];
          v59 = 0;
          v60 = 0;
          if ( sub_25250(v21, v20, (__int64)&v59, v15, v17, v18) )
          {
            *(_DWORD *)(a2 + 8) = sub_28A30(&v59);
            return 1;
          }
          v22 = *(_DWORD *)(a2 + 24);
          if ( (v22 & 0xFF000000) != 0x1B000000
            || !(unsigned __int8)sub_23850(
                                   a1->m128i_i64[0],
                                   a1->m128i_i64[0] + 1152,
                                   (v22 & 0xFFFFFFu) - 1,
                                   (__int64)&v69) )
          {
            return 1;
          }
          v23 = a1->m128i_i64[0];
          v61.m128i_i32[0] = 0;
          v24 = sub_24290(v23, v69, v61.m128i_i32, 3u);
          v64 = 0;
          v25 = sub_240C0(v23, 3u, v24, &v64);
          if ( !v25 )
            return 0;
          v28 = v61.m128i_i32[0];
          if ( v64 < v61.m128i_i32[0] || !v61.m128i_i32[0] )
            return 0;
          v29 = _mm_loadl_epi64(a1);
          v30 = a1[1].m128i_i32[2];
          LODWORD(v62) = v61.m128i_i32[0] + v25;
          v61 = _mm_unpacklo_epi64(v29, (__m128i)(unsigned __int64)v25);
          LOBYTE(v64) = 0;
          if ( !(unsigned __int8)sub_28400(
                                   (unsigned int)&v61,
                                   (unsigned int)&v64,
                                   v28,
                                   v30,
                                   v26,
                                   v27,
                                   v59,
                                   v60,
                                   v61.m128i_i32[0],
                                   v61.m128i_i32[2],
                                   v62,
                                   v30,
                                   v64,
                                   0,
                                   0,
                                   0,
                                   0,
                                   v67,
                                   0,
                                   v68,
                                   v69,
                                   v70,
                                   v71,
                                   v72,
                                   v73) )
            goto LABEL_53;
          *(_DWORD *)(a2 + 8) = v66;
LABEL_27:
          sub_22A90((__int64)&v64);
          return 1;
        case 19LL:
        case 30LL:
          *(_DWORD *)(a2 + 24) = sub_28300((__int64)a1);
          return 1;
        case 20LL:
          LOBYTE(v64) = 0;
          if ( !(unsigned __int8)sub_28400(
                                   (_DWORD)a1,
                                   (unsigned int)&v64,
                                   v9,
                                   v10,
                                   v11,
                                   v12,
                                   v59,
                                   v60,
                                   v61.m128i_i32[0],
                                   v61.m128i_i32[2],
                                   v62,
                                   v63,
                                   v64,
                                   0,
                                   0,
                                   0,
                                   0,
                                   v67,
                                   0,
                                   v68,
                                   v69,
                                   v70,
                                   v71,
                                   v72,
                                   v73) )
            goto LABEL_53;
          v32 = v65;
          *(_DWORD *)(a2 + 8) = v65;
          if ( v32 == 20 )
          {
            v56 = *(void **)(a2 + 16);
            if ( v56 )
            {
              sub_22A90(*(_QWORD *)(a2 + 16));
              operator delete(v56, 0x38u);
            }
            v57 = operator new(0x38u);
            *(_BYTE *)v57 = 0;
            v58 = v57;
            *(_QWORD *)(v57 + 4) = 0;
            *(_QWORD *)(v57 + 16) = 0;
            sub_22C00(v57, (__int64)&v64);
            *(_QWORD *)(a2 + 16) = v58;
          }
          *(_DWORD *)(a2 + 24) = sub_28300((__int64)a1);
          v33 = sub_28300((__int64)a1);
          *(_DWORD *)(a2 + 28) = v33;
          v34 = v33;
          if ( v33 )
          {
            v35 = operator new[](4LL * v33);
            *(_QWORD *)(a2 + 32) = v35;
            v36 = 0;
            while ( 1 )
            {
              v37 = (_DWORD *)(v35 + 4 * v36++);
              *v37 = sub_28300((__int64)a1);
              if ( v34 <= (int)v36 )
                break;
              v35 = *(_QWORD *)(a2 + 32);
            }
          }
          v38 = sub_28300((__int64)a1);
          *(_DWORD *)(a2 + 40) = v38;
          v39 = v38;
          if ( v38 )
          {
            *(_QWORD *)(a2 + 48) = operator new[](4LL * v38);
            v40 = 0;
            do
              *(_DWORD *)(*(_QWORD *)(a2 + 48) + 4 * v40++) = sub_28300((__int64)a1);
            while ( v39 > (int)v40 );
          }
          goto LABEL_27;
        case 21LL:
          sub_282A0((__int64)a1, &v64, 1);
          *(_DWORD *)(a2 + 8) = (unsigned __int8)v64;
          v41 = sub_28300((__int64)a1);
          v42 = v41;
          v43 = v41 >> 2;
          v44 = v42 & 3;
          switch ( v44 )
          {
            case 1:
              v43 |= 0x1000000u;
              break;
            case 2:
              v43 |= 0x1B000000u;
              break;
            case 0:
              v43 |= 0x2000000u;
              break;
          }
          *(_DWORD *)(a2 + 24) = v43;
          v45 = sub_28300((__int64)a1);
          *(_DWORD *)(a2 + 28) = v45;
          v46 = v45;
          if ( !v45 )
            return 1;
          v47 = v45;
          v48 = (_QWORD *)operator new[](56LL * v45 + 8);
          v51 = v47 - 2;
          v52 = v48 + 1;
          *v48 = v47;
          v53 = v48 + 1;
          do
          {
            --v51;
            *v53 = 0;
            v53 += 56;
            *(_QWORD *)(v53 - 52) = 0;
            *((_QWORD *)v53 - 3) = 0;
            *((_QWORD *)v53 - 1) = 0;
            *(_OWORD *)(v53 - 40) = 0;
          }
          while ( v51 != -2 );
          *(_QWORD *)(a2 + 32) = v52;
          v54 = 0;
          v55 = 0;
          break;
        case 29LL:
          LOBYTE(v64) = 0;
          if ( !(unsigned __int8)sub_28400(
                                   (_DWORD)a1,
                                   (unsigned int)&v64,
                                   v9,
                                   v10,
                                   v11,
                                   v12,
                                   v59,
                                   v60,
                                   v61.m128i_i32[0],
                                   v61.m128i_i32[2],
                                   v62,
                                   v63,
                                   v64,
                                   0,
                                   0,
                                   0,
                                   0,
                                   v67,
                                   0,
                                   v68,
                                   v69,
                                   v70,
                                   v71,
                                   v72,
                                   v73) )
            goto LABEL_53;
          *(_DWORD *)(a2 + 8) = v65;
          sub_22A90((__int64)&v64);
          return 1;
        default:
          return 0;
      }
      break;
    }
    while ( 1 )
    {
      LOBYTE(v64) = 0;
      if ( !(unsigned __int8)sub_28400(
                               (_DWORD)a1,
                               (unsigned int)&v64,
                               v51,
                               (_DWORD)v52,
                               v49,
                               v50,
                               v59,
                               v60,
                               v61.m128i_i32[0],
                               v61.m128i_i32[2],
                               v62,
                               v63,
                               v64,
                               0,
                               0,
                               0,
                               0,
                               v67,
                               0,
                               v68,
                               v69,
                               v70,
                               v71,
                               v72,
                               v73) )
        break;
      sub_22C00(v54 + *(_QWORD *)(a2 + 32), (__int64)&v64);
      ++v55;
      v54 += 56;
      sub_22A90((__int64)&v64);
      if ( v46 <= v55 )
        return 1;
    }
LABEL_53:
    sub_22A90((__int64)&v64);
    return 0;
  }
}

