__int64 __fastcall sub_3DBB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // [rsp+0h] [rbp-88h] BYREF
  __int64 v23; // [rsp+10h] [rbp-78h]
  __int64 v24; // [rsp+20h] [rbp-68h] BYREF
  __m128i v25; // [rsp+28h] [rbp-60h] BYREF
  char v26; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v6 = *(_QWORD **)(a2 + 176);
  v27 = __readfsqword(0x28u);
  v8 = *v6;
  v22.m128i_i64[0] = sub_8D5F0(*v6, a3, a3, a4, a5, a6);
  v22.m128i_i64[1] = sub_8D5F0(v8, a3 + 4, v9, v10, v11, v12);
  v23 = sub_8D5F0(v8, a3 + 8, v13, v14, v15, v16);
  sub_3D8B0((__int64)&v24, a2, a3, (__int64)&v22);
  if ( v26 )
  {
    v20 = v24;
    v21 = _mm_loadu_si128(&v25);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v20;
    *(__m128i *)(a1 + 8) = v21;
  }
  else
  {
    v17 = v23;
    v18 = _mm_load_si128(&v22);
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 16) = v17;
    *(__m128i *)a1 = v18;
  }
  return a1;
}

