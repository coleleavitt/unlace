__int64 __fastcall sub_385270(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r14
  __m128i v10; // xmm0
  __int64 *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 *v14; // rdi
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  __m128i v18; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v7 = *(_QWORD *)(a1 + 192);
  v19 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(v7 + 8 * a5);
  sub_2604A0((__int64)&v17, *(_QWORD **)(a1 + 184), v8, 0, a6);
  v9 = v17;
  v10 = _mm_loadu_si128(&v18);
  v17 = 0;
  v11 = *a2;
  v18 = 0;
  v12 = *v11;
  if ( *v11 )
  {
    v11[1] = 0;
    v16 = v10;
    qfree(v12);
    v10 = _mm_load_si128(&v16);
  }
  *v11 = v9;
  v13 = v17;
  *(__m128i *)(v11 + 1) = v10;
  if ( v13 )
  {
    v18.m128i_i64[0] = 0;
    qfree(v13);
  }
  v14 = *a2;
  if ( (unsigned __int64)(*a2)[1] > 1 )
  {
    tag_remove();
    v14 = *a2;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 184LL))(a1, v14, v8);
}

