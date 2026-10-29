unsigned __int64 __fastcall sub_3FA230(__int64 a1, __int64 a2, int a3, double a4, __m128 a5, __m128 a6)
{
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int32 v14; // edx
  unsigned __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+8h] [rbp-50h]
  _DWORD v18[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v16 = 0xFFFFFFFF00000000LL;
  v7 = *(_QWORD *)(a1 + 800);
  v17 = 0;
  v8 = *(_QWORD *)(v7 + 8);
  if ( (unsigned __int8)getinf() )
    LODWORD(v11) = (unsigned __int8)getinf();
  else
    v11 = *(_QWORD *)(v8 + 120);
  if ( (unsigned int)a2 > 0x14 )
  {
    if ( !under_debugger )
      sub_383060(0xC554u, a4);
    BUG();
  }
  LOBYTE(v16) = 13;
  v12 = j__qalloc_or_throw(20, a2, v9, v10);
  v13 = _mm_loadu_si128((__m128i *)((char *)xmmword_42E1E0 + 20 * (int)a2));
  *(__m128i *)v12 = v13;
  v14 = xmmword_42E1E0[1].m128i_i32[5 * (int)a2];
  v18[2] = a3;
  *(_DWORD *)(v12 + 16) = v14;
  v18[0] = 1;
  v17 = v12;
  HIDWORD(v16) = v11;
  v18[1] = v11;
  sub_1D6450(a1, 67, (unsigned __int8 *)&v16, nullptr, (unsigned __int8 *)v18, v13, a5, a6);
  sub_11CDA0((__int64)v18);
  sub_11CDA0((__int64)&v16);
  return v19 - __readfsqword(0x28u);
}

