__int64 __fastcall sub_3B040(struct _Unwind_Exception *a1, double a2, __m128 a3, __m128 a4, __m128 a5)
{
  __int64 *v5; // rax
  struct _Unwind_Exception *v6; // rbx
  __int64 v7; // r15
  int v9; // ebp
  volatile signed __int32 *v10; // rax
  __m128 v11; // xmm0
  volatile signed __int32 *v12; // r14
  __m128 v13; // xmm1
  __int64 v14; // rcx
  __int64 v15; // r8
  volatile signed __int32 *v16; // rdi
  __m128i v17; // xmm0
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r11
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __m128 v26; // [rsp+20h] [rbp-78h] BYREF
  __m128i v27; // [rsp+30h] [rbp-68h] BYREF
  __m128i v28; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a1[3].exception_cleanup != (_Unwind_Exception_Cleanup_Fn)&byte_4 )
    return 0;
  v5 = *(__int64 **)(&a1[1].private_2 + 1);
  v6 = a1;
  v7 = *v5;
  if ( !*v5 )
    return 0;
  v9 = *((_DWORD *)v5 + 2);
  v10 = (volatile signed __int32 *)operator new(0x20u);
  v11 = (__m128)_mm_loadu_si128((const __m128i *)&a1[2].private_1);
  v12 = v10;
  v13 = _mm_movehl_ps(a3, v11);
  *((_QWORD *)v10 + 3) = v7;
  *((_QWORD *)v10 + 1) = 0x100000001LL;
  *(_QWORD *)v10 = off_4DA48;
  *((_QWORD *)v10 + 2) = off_4D960;
  v27.m128i_i64[0] = (__int64)(v10 + 4);
  v27.m128i_i64[1] = (__int64)v10;
  v26 = v11;
  if ( v13.m128_u64[0] )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v13.m128_u64[0] + 8), 1u);
    else
      ++*(_DWORD *)(v13.m128_u64[0] + 8);
  }
  sub_38330(&v28, (const __m128i *)&v26, &v27, *(double *)v11.m128_u64, v13, a4);
  v16 = *(volatile signed __int32 **)(&a1[2].private_2 + 1);
  v17 = _mm_load_si128(&v28);
  *(__m128i *)&v6[2].private_1 = v17;
  if ( v16 )
    sub_1C430(v16);
  if ( v13.m128_u64[0] )
    sub_1C430((volatile signed __int32 *)v13.m128_u64[0]);
  if ( v12 )
    sub_1C430(v12);
  v18 = 0;
  v19 = 0;
  v20 = (unsigned int)(v9 - 1);
  if ( *(_QWORD *)&v6[2].exception_class )
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)(&v6[1].private_2 + 1) + 16 * v19;
      v22 = *(unsigned int *)(v21 + 8);
      if ( v9 != (_DWORD)v22 )
        break;
      v23 = *(_QWORD *)v21 - v7;
      if ( (unsigned int)v20 <= 1 || v9 == 4 )
      {
        v15 = -1LL << (8 * (unsigned __int8)v22);
        v23 &= ~v15;
      }
      else if ( v9 != 8 )
      {
        v6 = (struct _Unwind_Exception *)sub_31CC0();
LABEL_24:
        if ( v13.m128_u64[0] )
          sub_1C430((volatile signed __int32 *)v13.m128_u64[0]);
        if ( v12 )
          sub_1C430(v12);
        _Unwind_Resume(v6);
      }
      v14 = (unsigned int)v22;
      v18 = (unsigned int)(v18 + 1);
      *(_QWORD *)v21 = v23;
      *(_DWORD *)(v21 + 8) = v22;
      v19 = (int)v18;
      if ( (unsigned __int64)(int)v18 >= *(_QWORD *)&v6[2].exception_class )
        goto LABEL_21;
    }
    sub_31CA0(0xFFFFFFFF00000000LL, v18, v22, v14, v15, v20);
    goto LABEL_24;
  }
LABEL_21:
  sub_32600((__int64 *)&v6[1], (unsigned __int64 *)(&v6[1].private_2 + 1));
  sub_35940(v6, (__m128i *)(&v6[1].private_2 + 1), v24, v25);
  return sub_3AFC0(v6, (__int64)(&v6[1].private_2 + 1), *(double *)v17.m128i_i64, v13, a4, a5);
}
