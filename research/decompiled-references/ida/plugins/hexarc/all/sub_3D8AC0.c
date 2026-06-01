__int64 __fastcall sub_3D8AC0(
        double a1,
        double a2,
        double a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rcx
  __int64 (__fastcall **v12)(); // r12
  int v13; // eax
  int v14; // eax
  __m128 v15; // xmm0
  _QWORD *func; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 (__fastcall **v20)(); // [rsp+0h] [rbp-78h] BYREF
  __int64 v21; // [rsp+8h] [rbp-70h]
  __int128 v22; // [rsp+10h] [rbp-68h]
  int v23; // [rsp+20h] [rbp-58h]
  __int128 v24; // [rsp+28h] [rbp-50h]
  __m128 v25; // [rsp+38h] [rbp-40h]
  unsigned __int64 v26; // [rsp+48h] [rbp-30h]

  v10 = *(_QWORD *)(a7 + 64);
  v26 = __readfsqword(0x28u);
  if ( v10 != -1 )
  {
    ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall ***)(), __int64, __int64, __int64))callui)(
      16,
      5,
      &v20,
      v10,
      a9,
      a10);
    v12 = v20;
    if ( v20 != (__int64 (__fastcall **)())-1LL )
    {
      LODWORD(v22) = 0;
      v20 = off_4B58B0;
      v13 = *(_DWORD *)(a6 + 12);
      v24 = -1;
      HIDWORD(v22) = v13;
      v14 = *(_DWORD *)(a6 + 56);
      v15 = _mm_loadh_ps((const double *)(a7 + 64));
      *(_QWORD *)((char *)&v22 + 4) = 0;
      v23 = 73;
      HIDWORD(v21) = v14;
      v25 = v15;
      func = (_QWORD *)get_func();
      if ( func )
        *(_QWORD *)&v24 = *func;
      if ( !(unsigned __int8)sub_3D8580(a6, &v20, 4u, *(_DWORD *)(a6 + 56), *(double *)v15.m128_u64, a2, a3, a4) )
        callui(115, v12, 0xFFFFFFFFLL, 1, v17, v18, v20, v21, v22, *((_QWORD *)&v22 + 1));
    }
  }
  return 0;
}

