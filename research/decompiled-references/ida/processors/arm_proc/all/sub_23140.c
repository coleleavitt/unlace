__int64 __fastcall sub_23140(__int64 a1, unsigned int a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rbx
  __int64 (__fastcall **v11)(__int64, __int64, __int64); // rax
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 (*v15)(); // rax
  __int64 dtype_size; // rax
  __int64 v17; // r9
  __int64 (__fastcall **v18)(__int64, __int64, __int64); // rdx
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  __int64 v21; // rax
  unsigned int v22; // edi
  __int64 (*v23)(); // rax
  int v24; // eax
  __int64 result; // rax
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // eax
  __int64 v30; // rax
  int v31; // esi
  int v32; // eax
  int v33; // edi
  char *v34; // rdi
  __int64 (__fastcall *v35)(__int64, __int64, __int64); // rax
  __int64 v36; // rcx
  int v37; // eax
  size_t v38; // r13
  void *v39; // r14
  __m128i v40; // xmm0
  __int64 (__fastcall *v41)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  __int64 v42; // rax
  __int64 (__fastcall *v43)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  __int64 v44; // rax
  size_t v45; // r13
  void *v46; // rax
  __int64 v47; // rcx
  __m128i v48; // [rsp+0h] [rbp-68h] BYREF
  __m128i v49; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v50; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v51; // [rsp+28h] [rbp-40h]

  v10 = (int)a2;
  v11 = *(__int64 (__fastcall ***)(__int64, __int64, __int64))a6;
  v51 = __readfsqword(0x28u);
  *(_BYTE *)a4 = v11[5](a6, a1, a2);
  switch ( *(_BYTE *)(a1 + 40LL * (int)a2 + 41) )
  {
    case 1:
      v33 = *(unsigned __int16 *)(a1 + 40LL * (int)a2 + 46);
      if ( (unsigned __int16)(v33 - 61) > 0x1Fu
        && (unsigned __int16)(*(_WORD *)(a1 + 40LL * (int)a2 + 46) - 163) > 0x1Fu )
      {
        v13 = sub_22FB0(a3, v33, a5, a6);
        v14 = *(_QWORD *)(a4 + 8);
        goto LABEL_3;
      }
      v34 = sub_22F20(v33);
      if ( !v34 )
        goto LABEL_46;
      v35 = **(__int64 (__fastcall ***)(__int64, __int64, __int64))a6;
      if ( v35 == sub_21CD0 )
        v36 = (*(__int64 (__fastcall **)(char *, __int64))(a6 + 8))(v34, a5);
      else
        v36 = v35(a6, (__int64)v34, a5);
      *(_DWORD *)(a4 + 48) = (v36 - a5) >> 5;
      v37 = *(_DWORD *)(a4 + 16);
      if ( a4 + 16 != v36 )
      {
        if ( *(int *)v36 < -1 )
        {
          if ( v37 >= -1 && *(_QWORD *)(a4 + 24) )
          {
            *(_QWORD *)(a4 + 32) = 0;
            v48.m128i_i64[0] = v36;
            qfree();
            v36 = v48.m128i_i64[0];
          }
          *(_QWORD *)(a4 + 24) = *(_QWORD *)(v36 + 8);
        }
        else if ( v37 < -1 )
        {
          *(_QWORD *)(a4 + 24) = 0;
          *(_OWORD *)(a4 + 32) = 0;
          v45 = *(_QWORD *)(v36 + 16);
          if ( v45 )
          {
            v48.m128i_i64[0] = v36;
            v46 = (void *)qalloc_or_throw();
            v47 = v48.m128i_i64[0];
            *(_QWORD *)(a4 + 40) = v45;
            *(_QWORD *)(a4 + 24) = v46;
            memcpy(v46, *(const void **)(v47 + 8), v45);
            *(_QWORD *)(a4 + 32) = v45;
            v36 = v48.m128i_i64[0];
          }
        }
        else
        {
          v38 = *(_QWORD *)(v36 + 16);
          v39 = nullptr;
          v40 = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v38);
          if ( v38 )
          {
            v49 = v40;
            v48.m128i_i64[0] = v36;
            v39 = (void *)qalloc_or_throw();
            memcpy(v39, *(const void **)(v48.m128i_i64[0] + 8), v38);
            v40 = _mm_load_si128(&v49);
            v36 = v48.m128i_i64[0];
          }
          if ( *(_QWORD *)(a4 + 24) )
          {
            *(_QWORD *)(a4 + 32) = 0;
            v49.m128i_i64[0] = v36;
            v48 = v40;
            qfree();
            v36 = v49.m128i_i64[0];
            v40 = _mm_load_si128(&v48);
          }
          *(_QWORD *)(a4 + 24) = v39;
          *(__m128i *)(a4 + 32) = v40;
        }
        v37 = *(_DWORD *)v36;
        *(_DWORD *)(a4 + 16) = *(_DWORD *)v36;
      }
      if ( v37 < 0 )
        goto LABEL_46;
      v22 = *(unsigned __int8 *)(a1 + 40LL * (int)a2 + 45);
      v23 = *(__int64 (**)())(*(_QWORD *)a6 + 32LL);
      if ( v23 == sub_21F20 )
        goto LABEL_12;
      goto LABEL_37;
    case 2:
    case 7:
      v13 = 0;
      v14 = *(_QWORD *)(a1 + 40LL * (int)a2 + 56);
      *(_QWORD *)(a4 + 8) = v14;
      goto LABEL_3;
    case 3:
      v49.m128i_i64[0] = a1 + 8 * (5LL * (int)a2 + 5);
      v27 = *(unsigned __int16 *)(a1 + 40LL * (int)a2 + 46);
      v48.m128i_i64[0] = a1 + 40 * v10;
      v14 = sub_22FB0(a3, v27, a5, a6);
      v13 = 0;
      *(_QWORD *)(a4 + 8) = v14;
      if ( *(char *)(a1 + 28) >= 0 )
      {
        v28 = *(unsigned __int8 *)(a1 + 40 * v10 + 72);
        v48.m128i_i64[0] = 0;
        v29 = sub_22FB0(a3, v28, a5, a6);
        LODWORD(v30) = sub_23050(*(_DWORD *)(a1 + 28), v29, a3, v49.m128i_i64[0], a5, a6);
        v13 = 0;
        v30 = (unsigned int)v30;
        if ( (*(_BYTE *)(a1 + 28) & 0x10) != 0 )
          v30 = -(__int64)(unsigned int)v30;
        v14 = *(_QWORD *)(a4 + 8) + v30;
        *(_QWORD *)(a4 + 8) = v14;
      }
      goto LABEL_3;
    case 4:
      v26 = *(unsigned __int16 *)(a1 + 40LL * (int)a2 + 46);
      v48.m128i_i64[0] = a1 + 40 * v10;
      v14 = sub_22FB0(a3, v26, a5, a6);
      v13 = 0;
      *(_QWORD *)(a4 + 8) = v14;
      if ( *(char *)(a1 + 28) >= 0 )
      {
        v14 += *(_QWORD *)(v48.m128i_i64[0] + 56);
        *(_QWORD *)(a4 + 8) = v14;
      }
      goto LABEL_3;
    case 5:
      v13 = *(_QWORD *)(a1 + 40LL * (int)a2 + 48);
      v14 = *(_QWORD *)(a4 + 8);
      goto LABEL_3;
    case 8:
      v31 = *(unsigned __int16 *)(a1 + 40LL * (int)a2 + 46);
      v48.m128i_i64[0] = a1 + 8 * (5 * v10 + 5);
      v32 = sub_22FB0(a3, v31, a5, a6);
      v13 = (unsigned int)sub_23050(*(_DWORD *)(a1 + 28), v32, a3, v48.m128i_i64[0], a5, a6);
      v14 = *(_QWORD *)(a4 + 8);
LABEL_3:
      if ( v14 != -1 )
      {
        v15 = *(__int64 (**)())(*(_QWORD *)a6 + 32LL);
        if ( v15 == sub_21F20 )
          dtype_size = get_dtype_size();
        else
          dtype_size = ((__int64 (__fastcall *)(__int64, _QWORD))v15)(a6, *(unsigned __int8 *)(a1 + 40 * v10 + 45));
        v18 = *(__int64 (__fastcall ***)(__int64, __int64, __int64))a6;
        v19 = *(_QWORD *)(a4 + 8);
        if ( dtype_size == 1 )
        {
          v43 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))v18[1];
          if ( v43 == sub_21CE0 )
          {
            v44 = callui(
                    1110,
                    v19,
                    &v50,
                    1,
                    &callui,
                    v17,
                    v48.m128i_i64[0],
                    v48.m128i_i64[1],
                    v49.m128i_i64[0],
                    v49.m128i_i64[1]);
            v13 = 255;
            if ( v44 == 1 )
              v13 = (unsigned __int8)v50;
          }
          else
          {
            v13 = ((unsigned __int8 (__fastcall *)(__int64, __int64))v43)(a6, v19);
          }
        }
        else if ( dtype_size == 2 )
        {
          v41 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))v18[2];
          if ( v41 == sub_21D40 )
          {
            v42 = callui(
                    1110,
                    v19,
                    &v50,
                    2,
                    &callui,
                    v17,
                    v48.m128i_i64[0],
                    v48.m128i_i64[1],
                    v49.m128i_i64[0],
                    v49.m128i_i64[1]);
            v13 = 0xFFFF;
            if ( v42 == 2 )
              v13 = (unsigned __int16)v50;
          }
          else
          {
            v13 = ((unsigned __int16 (__fastcall *)(__int64, __int64))v41)(a6, v19);
          }
        }
        else
        {
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))v18[3];
          if ( v20 == sub_21DA0 )
          {
            v21 = callui(
                    1110,
                    v19,
                    &v50,
                    4,
                    &callui,
                    v17,
                    v48.m128i_i64[0],
                    v48.m128i_i64[1],
                    v49.m128i_i64[0],
                    v49.m128i_i64[1]);
            v13 = 0xFFFFFFFFLL;
            if ( v21 == 4 )
              v13 = v50;
          }
          else
          {
            v13 = ((unsigned int (__fastcall *)(__int64, __int64))v20)(a6, v19);
          }
        }
      }
      *(_QWORD *)(a4 + 24) = v13;
      v22 = *(unsigned __int8 *)(a1 + 40 * v10 + 45);
      v23 = *(__int64 (**)())(*(_QWORD *)a6 + 32LL);
      if ( v23 == sub_21F20 )
LABEL_12:
        v24 = get_dtype_size();
      else
LABEL_37:
        v24 = ((__int64 (__fastcall *)(__int64, _QWORD))v23)(a6, v22);
      *(_DWORD *)(a4 + 52) = v24;
      result = 1;
      break;
    default:
LABEL_46:
      result = 0;
      break;
  }
  return result;
}

