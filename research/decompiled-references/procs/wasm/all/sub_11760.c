__int64 __fastcall sub_11760(__int64 *a1, const __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64 *, char); // rax
  __int64 v15; // r12
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(__int64 *, char); // r8
  __int64 v23; // rbp
  unsigned __int64 v24; // r12
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 *v27; // rsi
  void (__fastcall *v28)(__int64 *, __int64, __int64, __int64, __int64 (__fastcall *)(__int64 *, char)); // rax
  __int64 v29; // rbp
  unsigned __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rax
  void *v34; // rsi
  _QWORD *v35; // rax
  unsigned __int64 v36; // rsi
  _QWORD *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  void *v41; // rsi
  __int64 v42; // rdi
  _QWORD *v43; // rax
  unsigned __int64 v44; // rdi
  _QWORD *v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r13
  unsigned __int64 v49; // rax
  unsigned int *v50; // rax
  __int16 v51; // dx
  __int64 v52; // rdx
  __int64 v53; // rdx
  void *v54; // rsi
  __int64 v55; // rbp
  unsigned __int64 v56; // r12
  __int64 v57; // r14
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  int v64[2]; // [rsp+8h] [rbp-80h] BYREF
  __m256i v65; // [rsp+10h] [rbp-78h] BYREF
  __int64 v66; // [rsp+30h] [rbp-58h]
  char v67[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v68; // [rsp+48h] [rbp-40h]

  v4 = a2->m128i_u8[1];
  v5 = a1[77];
  v68 = __readfsqword(0x28u);
  switch ( (char)v4 )
  {
    case 4:
      (*(void (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, "offset=", 32);
      goto LABEL_11;
    case 5:
      goto LABEL_3;
    case 8:
      if ( (a2->m128i_i8[8] & 7) != 0 )
      {
        if ( !under_debugger )
          interr(10486, a2, v4, a4);
        BUG();
      }
      if ( a2->m128i_i8[0] || (*((_BYTE *)a1 + 258) & 1) == 0 || (unsigned __int16)(*((_WORD *)a1 + 124) - 30) > 0x16u )
      {
LABEL_11:
        v13 = *a1;
        goto LABEL_12;
      }
      v14 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v14 == sub_105C0 )
      {
        v15 = a1[4];
        if ( v15 )
        {
          v16 = v15 + 1;
          v17 = a1[4];
          --v15;
        }
        else
        {
          v17 = 1;
          v16 = 2;
        }
        v18 = a1[3];
        if ( a1[5] < v16 )
        {
          v59 = qvector_reserve(a1 + 3, v18, v16, 1);
          a1[3] = v59;
          v18 = v59;
        }
        a1[4] = v16;
        *(_BYTE *)(v18 + v15) = 91;
        *(_BYTE *)(a1[3] + v17) = 0;
      }
      else
      {
        v14(a1, 91);
      }
      (*(void (__fastcall **)(__int64 *, const __m128i *, _QWORD))(*a1 + 24))(a1, a2, 0);
      v19 = *((unsigned __int16 *)a1 + 124);
      v20 = *a1;
      v21 = (unsigned int)(v19 - 44);
      v22 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( (unsigned __int16)(v19 - 44) <= 8u )
      {
        if ( !a1[49] )
          goto LABEL_33;
        if ( v22 == sub_105C0 )
        {
          v23 = a1[4];
          if ( v23 )
          {
            v24 = v23 + 1;
            v25 = a1[4];
            --v23;
          }
          else
          {
            v25 = 1;
            v24 = 2;
          }
          v26 = a1[3];
          if ( a1[5] < v24 )
          {
            v62 = qvector_reserve(a1 + 3, v26, v24, 1);
            a1[3] = v62;
            v26 = v62;
          }
          a1[4] = v24;
          *(_BYTE *)(v26 + v23) = 43;
          *(_BYTE *)(a1[3] + v25) = 0;
        }
        else
        {
          v22(a1, 43);
        }
        v27 = a1 + 48;
        goto LABEL_32;
      }
      if ( (unsigned __int16)(v19 - 30) <= 0xDu && a1[44] )
      {
        if ( v22 == sub_105C0 )
        {
          v55 = a1[4];
          if ( v55 )
          {
            v56 = v55 + 1;
            v57 = a1[4];
            --v55;
          }
          else
          {
            v57 = 1;
            v56 = 2;
          }
          v58 = a1[3];
          if ( a1[5] < v56 )
          {
            v63 = qvector_reserve(a1 + 3, v58, v56, 1);
            a1[3] = v63;
            v58 = v63;
          }
          a1[4] = v56;
          *(_BYTE *)(v58 + v55) = 43;
          *(_BYTE *)(a1[3] + v57) = 0;
        }
        else
        {
          v22(a1, 43);
        }
        v27 = a1 + 43;
LABEL_32:
        (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD))(*a1 + 24))(a1, v27, 0);
        v20 = *a1;
      }
LABEL_33:
      v28 = *(void (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64 (__fastcall *)(__int64 *, char)))(v20 + 96);
      if ( (char *)v28 == (char *)sub_105C0 )
      {
        v29 = a1[4];
        if ( v29 )
        {
          v30 = v29 + 1;
          v31 = a1[4];
          --v29;
        }
        else
        {
          v31 = 1;
          v30 = 2;
        }
        v32 = a1[3];
        if ( a1[5] < v30 )
        {
          v60 = qvector_reserve(a1 + 3, v32, v30, 1);
          a1[3] = v60;
          v32 = v60;
        }
        a1[4] = v30;
        *(_BYTE *)(v32 + v29) = 93;
        *(_BYTE *)(a1[3] + v31) = 0;
      }
      else
      {
        v28(a1, 93, v20, v21, v22);
      }
      return 1;
    case 12:
      v33 = a2->m128i_i64[1];
      v64[1] = -1;
      v64[0] = v33;
      if ( (_DWORD)v33 == -64 )
        return 1;
      if ( (int)v33 >= 0 )
      {
        sub_9C70((__int64)"out 0x%llx invalid type: 0x%u\n", a1[30], v33);
        return 0;
      }
      (*(void (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, "(-> ", 32);
      sub_10B60((__int64)&v65, v64);
      v34 = &unk_1DA78;
      if ( v65.m256i_i64[1] )
        v34 = (void *)v65.m256i_i64[0];
      (*(void (__fastcall **)(__int64 *, void *, __int64))(*a1 + 56))(a1, v34, 32);
      if ( v65.m256i_i64[0] )
      {
        v65.m256i_i64[1] = 0;
        qfree(v65.m256i_i64[0]);
      }
      (*(void (__fastcall **)(__int64 *, char *, __int64))(*a1 + 56))(a1, ")", 32);
      return 1;
    case 13:
      (*(void (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, "align=", 32);
LABEL_3:
      v8 = a2[1].m128i_i64[1];
      if ( v8 == 10 )
      {
        v49 = a2->m128i_u64[1];
        if ( v49 >= *(_QWORD *)(v5 + 216) )
          return 1;
        v50 = (unsigned int *)(*(_QWORD *)(v5 + 208) + 16 * v49);
        if ( !v50 )
          return 1;
        v11 = *v50;
LABEL_74:
        (*(void (__fastcall **)(__int64 *, const __m128i *, __int64, __int64))(*a1 + 120))(a1, a2, v11, -1);
        return 1;
      }
      if ( v8 != 11 )
      {
        if ( v8 == 9 )
        {
          v9 = a2->m128i_u64[1];
          if ( v9 >= *(_QWORD *)(v5 + 240) )
            return 1;
          v10 = *(_QWORD *)(v5 + 232) + 96 * v9;
          if ( !v10 )
            return 1;
          v11 = *(_QWORD *)(v10 + 8);
          goto LABEL_74;
        }
        v13 = *a1;
        if ( (*((_BYTE *)a1 + 258) & 1) != 0 && !a2->m128i_i8[0] )
        {
          v51 = *((_WORD *)a1 + 124);
          if ( (unsigned __int16)(v51 - 44) <= 8u )
          {
            v61 = a2[2].m128i_i64[0];
            *(__m128i *)v65.m256i_i8 = _mm_loadu_si128(a2);
            v66 = v61;
            v53 = a1[49];
            *(__m128i *)&v65.m256i_u64[2] = _mm_loadu_si128(a2 + 1);
            goto LABEL_80;
          }
          if ( (unsigned __int16)(v51 - 30) <= 0xDu )
          {
            v52 = a2[2].m128i_i64[0];
            *(__m128i *)v65.m256i_i8 = _mm_loadu_si128(a2);
            v66 = v52;
            v53 = a1[44];
            *(__m128i *)&v65.m256i_u64[2] = _mm_loadu_si128(a2 + 1);
LABEL_80:
            v65.m256i_i64[1] += v53;
            (*(void (__fastcall **)(__int64 *, __m256i *, _QWORD))(v13 + 24))(a1, &v65, 0);
            return 1;
          }
        }
LABEL_12:
        (*(void (__fastcall **)(__int64 *, const __m128i *, _QWORD))(v13 + 24))(a1, a2, 0);
        return 1;
      }
      v40 = a2->m128i_u64[1];
      if ( v40 < *(_QWORD *)(v5 + 192) && *(_QWORD *)(v5 + 184) + 48 * v40 )
      {
        sub_13C80(&v65, v5 + 136, 0, 0, a2->m128i_i64[1]);
        v41 = &unk_1DA78;
        if ( v65.m256i_i64[1] )
          v41 = (void *)v65.m256i_i64[0];
        (*(void (__fastcall **)(__int64 *, void *, __int64))(*a1 + 56))(a1, v41, 32);
        v42 = v65.m256i_i64[0];
        if ( !v65.m256i_i64[0] )
          return 1;
      }
      else
      {
        memset(&v65, 0, 24);
        sub_CCA0(v65.m256i_i64, (__int64)"%s%lld", "$sig", v40);
        v54 = &unk_1DA78;
        if ( v65.m256i_i64[1] )
          v54 = (void *)v65.m256i_i64[0];
        (*(void (__fastcall **)(__int64 *, void *, __int64))(*a1 + 56))(a1, v54, 32);
        v42 = v65.m256i_i64[0];
        if ( !v65.m256i_i64[0] )
          return 1;
      }
      v65.m256i_i64[1] = 0;
      qfree(v42);
      return 1;
    case 14:
      v35 = *(_QWORD **)(v5 + 552);
      v36 = a1[30];
      if ( !v35 )
        goto LABEL_53;
      v37 = (_QWORD *)(v5 + 544);
      do
      {
        while ( 1 )
        {
          v38 = v35[2];
          v39 = v35[3];
          if ( v35[4] < v36 )
            break;
          v37 = v35;
          v35 = (_QWORD *)v35[2];
          if ( !v38 )
            goto LABEL_51;
        }
        v35 = (_QWORD *)v35[3];
      }
      while ( v39 );
LABEL_51:
      if ( v37 == (_QWORD *)(v5 + 544) )
        goto LABEL_53;
      if ( v36 < v37[4] )
        goto LABEL_53;
      v43 = *(_QWORD **)(v5 + 408);
      v44 = v37[5];
      v45 = (_QWORD *)(v5 + 400);
      if ( !v43 )
        goto LABEL_53;
      do
      {
        while ( 1 )
        {
          v46 = v43[2];
          v47 = v43[3];
          if ( v43[4] < v44 )
            break;
          v45 = v43;
          v43 = (_QWORD *)v43[2];
          if ( !v46 )
            goto LABEL_65;
        }
        v43 = (_QWORD *)v43[3];
      }
      while ( v47 );
LABEL_65:
      if ( v45 == (_QWORD *)(v5 + 400)
        || v44 < v45[4]
        || (v48 = v45[5], (unsigned __int64)(v48 - 1) > 0xFFFFFFFFFFFFFFFDLL) )
      {
LABEL_53:
        sub_9C70((__int64)"couldn't show br operand at 0x%llx\n", v36);
      }
      else
      {
        if ( (*(_BYTE *)(v5 + 120) & 2) != 0 )
        {
          qsnprintf(v67, 8, "%u ", a2->m128i_i32[2]);
          (*(void (__fastcall **)(__int64 *, char *, __int64))(*a1 + 56))(a1, v67, 32);
        }
        (*(void (__fastcall **)(__int64 *, const __m128i *, __int64, __int64))(*a1 + 120))(a1, a2, v48, -1);
      }
      return 1;
    default:
      sub_9C70((__int64)"out 0x%llx: bad optype %d\n", a1[30], v4);
      return 1;
  }
}
