__int64 __fastcall sub_5E7A0(__int64 a1, _QWORD *a2, double a3, double a4, double a5, double a6)
{
  unsigned __int64 v6; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __m128i v12; // xmm0
  _QWORD **v14; // rdi
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64); // rax
  _QWORD **v17; // rdi
  __int64 v18; // rax
  _QWORD **v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rsi
  unsigned int v22; // eax
  _QWORD **v23; // rdi
  unsigned int v24; // r13d
  __int64 v25; // rsi
  unsigned int v26; // eax
  _QWORD **v27; // rdi
  unsigned int v28; // r12d
  __int64 v29; // rsi
  unsigned int v30; // eax
  _QWORD *v31; // rdi
  __int64 (*v32)(void); // rax
  _QWORD *v33; // rdi
  _QWORD *v34; // rdi
  _QWORD **v35; // rdi
  unsigned int v36; // ebp
  _QWORD **v37; // rdi
  __int128 v38; // rax
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  unsigned int v41; // [rsp+8h] [rbp-B0h]
  __int32 v42; // [rsp+Ch] [rbp-ACh]
  __int128 v43; // [rsp+20h] [rbp-98h] BYREF
  char v44; // [rsp+30h] [rbp-88h]
  __m128i v45; // [rsp+40h] [rbp-78h] BYREF
  __m128i v46; // [rsp+50h] [rbp-68h] BYREF
  __int128 v47; // [rsp+60h] [rbp-58h]
  unsigned __int64 v48; // [rsp+78h] [rbp-40h]

  v6 = a2[1];
  v48 = __readfsqword(0x28u);
  if ( v6 >= 0xFFFFFFFFFFFFFFE4LL )
  {
    sub_19A90((__int64)&v45, (__int64)"[%a,%a): bad range", a3, a4);
    v11 = v45.m128i_i64[0];
    v12 = _mm_loadu_si128((const __m128i *)&v45.m128i_u64[1]);
    goto LABEL_6;
  }
  sub_74B30(&v43, *a2 + 16LL, v6);
  if ( !v44 )
  {
    sub_19A90((__int64)&v45, (__int64)"[%a,%a): no associated segment", a3, a4);
    v11 = v45.m128i_i64[0];
    v12 = _mm_loadu_si128((const __m128i *)&v45.m128i_u64[1]);
    goto LABEL_6;
  }
  if ( v6 + 27 >= *((_QWORD *)&v43 + 1) || v6 + 27 < (unsigned __int64)v43 )
  {
    sub_19A90((__int64)&v45, (__int64)"[%a,%a): does not fit in segment [%a,%a)", a3, a4, a5, a6);
    v11 = v45.m128i_i64[0];
    v12 = _mm_loadu_si128((const __m128i *)&v45.m128i_u64[1]);
LABEL_6:
    *(_QWORD *)a1 = v11;
    *(_BYTE *)(a1 + 48) = 1;
    *(__m128i *)(a1 + 8) = v12;
    return a1;
  }
  v14 = (_QWORD **)*a2;
  v15 = a2[1];
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v16 = (__int64 (__fastcall *)(__int64))(*v14)[2];
  if ( v16 == sub_15A20
    && (v14 = (_QWORD **)v14[1], v16 = (__int64 (__fastcall *)(__int64))(*v14)[2], v16 == sub_15A20)
    && (v14 = (_QWORD **)v14[1], v16 = (__int64 (__fastcall *)(__int64))(*v14)[2], v16 == sub_15A20)
    && (v14 = (_QWORD **)v14[1], v16 = (__int64 (__fastcall *)(__int64))(*v14)[2], v16 == sub_15A20) )
  {
    v42 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, _QWORD))(*v14[1] + 16LL))(
            v14[1],
            v15,
            v9,
            v10,
            v43);
  }
  else
  {
    v42 = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64, __int64, _QWORD))v16)(v14, v15, v9, v10, v43);
  }
  v17 = (_QWORD **)*a2;
  a2[1] += 4LL;
  v18 = sub_734C0(v17);
  v19 = (_QWORD **)*a2;
  v20 = v18;
  v21 = a2[1] + 4LL;
  a2[1] = v21;
  v22 = sub_736F0(v19, v21);
  v23 = (_QWORD **)*a2;
  v24 = v22;
  v25 = a2[1] + 4LL;
  a2[1] = v25;
  v26 = sub_736F0(v23, v25);
  v27 = (_QWORD **)*a2;
  v28 = v26;
  v29 = a2[1] + 4LL;
  a2[1] = v29;
  v30 = sub_736F0(v27, v29);
  v31 = (_QWORD *)*a2;
  v41 = v30;
  a2[1] += 4LL;
  v32 = *(__int64 (**)(void))(*v31 + 16LL);
  if ( (char *)v32 == (char *)sub_15A20
    && (v33 = (_QWORD *)v31[1], v32 = *(__int64 (**)(void))(*v33 + 16LL), (char *)v32 == (char *)sub_15A20)
    && (v34 = (_QWORD *)v33[1], v32 = *(__int64 (**)(void))(*v34 + 16LL), (char *)v32 == (char *)sub_15A20)
    && (v35 = (_QWORD **)v34[1], v32 = (__int64 (*)(void))(*v35)[2], (char *)v32 == (char *)sub_15A20) )
  {
    v36 = (*(__int64 (__fastcall **)(_QWORD *))(*v35[1] + 16LL))(v35[1]);
  }
  else
  {
    v36 = v32();
  }
  v37 = (_QWORD **)*a2;
  a2[1] += 4LL;
  *(_QWORD *)&v38 = sub_73540(v37);
  v45.m128i_i64[1] = v20;
  a2[1] += 4LL;
  v45.m128i_i32[0] = v42;
  v39 = _mm_load_si128(&v45);
  v46.m128i_i64[0] = __PAIR64__(v28, v24);
  v46.m128i_i64[1] = __PAIR64__(v36, v41);
  *(__m128i *)a1 = v39;
  v40 = _mm_load_si128(&v46);
  v43 = v38;
  v47 = v38;
  *(_OWORD *)(a1 + 32) = v38;
  *(_BYTE *)(a1 + 48) = 0;
  *(__m128i *)(a1 + 16) = v40;
  return a1;
}
