__int64 __fastcall sub_770F0(
        char *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 (__fastcall *a5)(const char *, __int64),
        __int64 a6,
        __int64 a7)
{
  char v8; // dl
  unsigned int v9; // r10d
  bool v13; // zf
  char v14; // cl
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  int v17; // edx
  int v18; // eax
  __int64 v19; // rsi
  unsigned int v20; // ecx
  int v21; // edx
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rdx
  const char *v26; // rax
  __int64 v27; // r9
  char *v28; // r13
  const void *v29; // rsi
  __int64 v30; // r12
  int v31; // eax
  size_t v32; // r14
  void *v33; // r15
  __m128i v34; // xmm0
  int v35; // esi
  const char *v36; // rax
  char v37; // cl
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  int dtype_size; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int16 v43; // ax
  unsigned __int16 v44; // dx
  void *v45; // rax
  __int64 v46; // r14
  int v47; // r13d
  __int64 v48; // rcx
  char v49; // r12
  __int64 v50; // rdx
  size_t v51; // r14
  void *v52; // rax
  __m128i v53; // [rsp+0h] [rbp-88h] BYREF
  __int64 v54; // [rsp+10h] [rbp-78h]
  __int64 v55; // [rsp+18h] [rbp-70h]
  unsigned __int64 v56; // [rsp+20h] [rbp-68h] BYREF
  __int64 v57; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v58[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v59; // [rsp+48h] [rbp-40h]

  v8 = *(_BYTE *)(a3 + 1);
  v59 = __readfsqword(0x28u);
  v56 = 0;
  v9 = a4;
  switch ( v8 )
  {
    case 1:
      v24 = *(unsigned __int16 *)(a3 + 6);
      if ( (unsigned __int16)v24 <= 0x34u )
      {
        if ( (unsigned __int16)v24 > 0x2Cu )
        {
LABEL_21:
          v53.m128i_i64[0] = a6;
          v26 = sub_767F0(a1, v24);
          v27 = v53.m128i_i64[0];
          v28 = (char *)v26;
          goto LABEL_22;
        }
      }
      else if ( (unsigned __int16)(*(_WORD *)(a3 + 6) - 56) <= 0x3Cu )
      {
        v25 = 0x1FFFE1FFFEFFFFFFLL;
        if ( _bittest64(&v25, (unsigned int)*(unsigned __int16 *)(a3 + 6) - 56) )
          goto LABEL_21;
      }
      v16 = -1;
      v39 = sub_76B80(a1, v24, *(_BYTE *)(a3 + 5), a5, a6);
      v56 = v39;
      goto LABEL_38;
    case 2:
      v16 = *(_QWORD *)(a3 + 16);
      if ( *(_BYTE *)(a3 + 32) )
      {
        v37 = *(_BYTE *)(a3 + 33);
        HIDWORD(v55) = v9;
        v54 = a6;
        v53.m128i_i64[0] = (__int64)a1;
        v38 = sub_76D60(a1, a2, 2, v37, a5, a6);
        v9 = HIDWORD(v55);
        a6 = v54;
        v16 += v38;
      }
      goto LABEL_7;
    case 3:
    case 4:
      v13 = *(_BYTE *)(a3 + 32) == 0;
      HIDWORD(v55) = a4;
      if ( v13 )
      {
        v44 = *(_WORD *)(a3 + 6);
        v54 = a6;
        v53.m128i_i64[0] = (__int64)a1;
        v15 = sub_76C40(a1, a2, v44, a5, a6);
        v9 = HIDWORD(v55);
        a6 = v54;
      }
      else
      {
        v14 = *(_BYTE *)(a3 + 33);
        v54 = a6;
        v53.m128i_i64[0] = (__int64)a1;
        v15 = sub_76D60(a1, a2, v8, v14, a5, a6);
        a6 = v54;
        v9 = HIDWORD(v55);
      }
      v16 = v15;
      if ( *(_BYTE *)(a3 + 1) == 4 )
        v16 = *(_QWORD *)(a3 + 16) + v15;
LABEL_7:
      if ( v16 == -1 )
        goto LABEL_41;
      v17 = *(_DWORD *)(a2 + 28);
      v18 = v17 & 0x1018;
      if ( v18 == 4096 || v18 == 8 )
      {
        v19 = *(unsigned __int16 *)(a3 + 26);
        v16 = (unsigned __int16)v16;
        if ( (_WORD)v19 == 0xFFFF )
        {
LABEL_14:
          v20 = *(unsigned __int16 *)(a3 + 24);
          v21 = -1;
          goto LABEL_15;
        }
      }
      else
      {
        if ( (v17 & 0x1008) == 0 || v18 == 4104 )
          v16 = (unsigned int)v16;
        v19 = *(unsigned __int16 *)(a3 + 26);
        if ( (_WORD)v19 == 0xFFFF )
          goto LABEL_14;
      }
      v53.m128i_i32[0] = v9;
      v43 = sub_76B80(a1, v19, 1, a5, a6);
      v21 = *(unsigned __int16 *)(a3 + 26);
      v9 = v53.m128i_i32[0];
      v20 = v43;
LABEL_15:
      if ( !(unsigned __int8)sub_77030(a2, v9, v21, v20, &v57, a6) )
        return 0;
      v23 = v16 + v57;
      v16 = v23;
      if ( v23 != -1 )
      {
        switch ( *(_BYTE *)(a3 + 5) )
        {
          case 0:
            v41 = callui(1110, v23, &v56, 1, &callui, v22, v53.m128i_i64[0], v53.m128i_i64[1], v54, v55);
            v42 = 255;
            if ( !v41 )
              break;
            goto LABEL_59;
          case 1:
            v48 = 2;
            v49 = 2;
            goto LABEL_57;
          case 2:
            v48 = 4;
            v49 = 4;
            goto LABEL_57;
          case 3:
            v46 = 4;
            v47 = 4;
            goto LABEL_52;
          case 4:
            v46 = 8;
            v47 = 8;
            goto LABEL_52;
          case 5:
          case 0xF:
            v46 = 10;
            v47 = 10;
LABEL_52:
            if ( get_bytes() != v46 )
              break;
            *(_QWORD *)(a7 + 24) = 0;
            *(_OWORD *)(a7 + 32) = 0;
            sub_69700((__int64 *)(a7 + 24), v58, v47);
            *(_DWORD *)(a7 + 16) = -1;
            goto LABEL_39;
          case 7:
            v50 = callui(1110, v23, &v56, 8, &callui, v22, v53.m128i_i64[0], v53.m128i_i64[1], v54, v55);
            v42 = -1;
            if ( !v50 )
              break;
            goto LABEL_59;
          case 8:
            if ( get_bytes() != 16 )
              break;
            *(_QWORD *)(a7 + 24) = 0;
            *(_OWORD *)(a7 + 32) = 0;
            sub_69700((__int64 *)(a7 + 24), v58, 0x10u);
            *(_DWORD *)(a7 + 16) = 0;
            *(_DWORD *)(a7 + 48) = sub_71F30("XMM0", (__int64)v58);
            goto LABEL_39;
          case 0xB:
            v48 = 6;
            v49 = 6;
LABEL_57:
            if ( !callui(1110, v23, &v56, v48, &callui, v22, v53.m128i_i64[0], v53.m128i_i64[1], v54, v55) )
              break;
            v42 = (1LL << (8 * v49)) - 1;
LABEL_59:
            v39 = v56 & v42;
            v56 = v39;
            goto LABEL_38;
          default:
            break;
        }
      }
LABEL_41:
      v39 = v56;
LABEL_38:
      *(_QWORD *)(a7 + 24) = v39;
LABEL_39:
      dtype_size = get_dtype_size();
      *(_QWORD *)(a7 + 8) = v16;
      *(_DWORD *)(a7 + 52) = dtype_size;
      return 1;
    case 5:
      v39 = *(_QWORD *)(a3 + 8);
      v16 = -1;
      v56 = v39;
      goto LABEL_38;
    case 11:
      v35 = *(unsigned __int16 *)(a3 + 6);
      v53.m128i_i64[0] = a6;
      v36 = sub_767F0(a1, (unsigned int)(v35 + 45));
      v27 = v53.m128i_i64[0];
      v28 = (char *)v36;
LABEL_22:
      if ( !v28 )
        return 0;
      v29 = (const void *)v27;
      v30 = a5(v28, v27);
      v31 = *(_DWORD *)(a7 + 16);
      if ( v30 != a7 + 16 )
      {
        if ( *(int *)v30 < -1 )
        {
          if ( v31 >= -1 && *(_QWORD *)(a7 + 24) )
          {
            *(_QWORD *)(a7 + 32) = 0;
            qfree();
          }
          *(_QWORD *)(a7 + 24) = *(_QWORD *)(v30 + 8);
        }
        else if ( v31 < -1 )
        {
          *(_QWORD *)(a7 + 24) = 0;
          *(_OWORD *)(a7 + 32) = 0;
          v51 = *(_QWORD *)(v30 + 16);
          if ( v51 )
          {
            v52 = (void *)qalloc_or_throw();
            *(_QWORD *)(a7 + 40) = v51;
            *(_QWORD *)(a7 + 24) = v52;
            v29 = *(const void **)(v30 + 8);
            memcpy(v52, v29, v51);
            *(_QWORD *)(a7 + 32) = v51;
          }
        }
        else
        {
          v32 = *(_QWORD *)(v30 + 16);
          v33 = 0;
          v34 = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
          if ( v32 )
          {
            v53 = v34;
            v45 = (void *)qalloc_or_throw();
            v29 = *(const void **)(v30 + 8);
            v33 = v45;
            memcpy(v45, v29, v32);
            v34 = _mm_load_si128(&v53);
          }
          if ( *(_QWORD *)(a7 + 24) )
          {
            *(_QWORD *)(a7 + 32) = 0;
            v53 = v34;
            qfree();
            v34 = _mm_load_si128(&v53);
          }
          *(_QWORD *)(a7 + 24) = v33;
          *(__m128i *)(a7 + 32) = v34;
        }
        v31 = *(_DWORD *)v30;
        *(_DWORD *)(a7 + 16) = *(_DWORD *)v30;
      }
      if ( v31 == -2 )
        return 0;
      v16 = -1;
      *(_DWORD *)(a7 + 48) = sub_71F30(v28, (__int64)v29);
      goto LABEL_39;
    default:
      return 0;
  }
}
