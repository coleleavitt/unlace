unsigned __int64 __fastcall sub_3F2010(__int64 a1, unsigned __int8 a2, int a3, double a4)
{
  __int64 v5; // rdi
  int v7; // eax
  __int64 v8; // rdx
  int v9; // r14d
  int v10; // ecx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rbx
  unsigned int v17; // ebp
  bool v18; // cf
  __int64 v19; // r8
  __int64 v20; // rsi
  int v21; // eax
  int v23; // eax
  __int64 v24; // [rsp+20h] [rbp-98h] BYREF
  int v25; // [rsp+28h] [rbp-90h]
  _WORD v26[2]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v27; // [rsp+34h] [rbp-84h]
  _QWORD v28[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v30; // [rsp+60h] [rbp-58h] BYREF
  int v31; // [rsp+68h] [rbp-50h]
  unsigned __int64 v32; // [rsp+78h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 832);
  v32 = __readfsqword(0x28u);
  sub_3E99E0(v5);
  v24 = 0x400000801LL;
  v25 = a3;
  if ( a2 == 0xFF )
  {
    v23 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 468LL);
    v30 = 0x400000001LL;
    v31 = v23;
    sub_1D2850(a1, 4, (unsigned __int8 *)&v24, nullptr, (unsigned __int8 *)&v30);
    sub_119360((__int64)&v30);
  }
  else
  {
    v7 = sub_32E0A0(a2);
    v8 = *(_QWORD *)(a1 + 832);
    v9 = v7;
    v10 = HIDWORD(v24);
    v11 = *(_QWORD *)(v8 + 4464);
    if ( !v11 )
      sub_3E6800(a4);
    v12 = _mm_cvtsi32_si128(HIDWORD(v24));
    v13 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v8 + 4456) + 4 * v11 - 4));
    v26[0] = 2049;
    *(_QWORD *)(v8 + 4464) = v11 - 1;
    v14 = *(_QWORD *)(a1 + 832);
    v26[1] = 0;
    v15 = *(_QWORD *)(a1 + 40);
    v28[0] = 0xFFFFFFFF00000000LL;
    v28[1] = 0;
    v27 = _mm_unpacklo_epi32(v12, v13).m128i_u64[0];
    sub_11CFD0((__int64)v28, v14, 1, v10, v15, 0);
    v16 = 31;
    v17 = 0x80000000;
    do
    {
      while ( (v17 & v9) == 0 )
      {
        v17 >>= 1;
        v18 = v16-- == 0;
        if ( v18 )
          goto LABEL_7;
      }
      v19 = *(_QWORD *)(a1 + 40);
      v20 = *(_QWORD *)(a1 + 832);
      v29[1] = 0;
      v29[0] = 0xFFFFFFFF00000000LL;
      sub_11CFD0((__int64)v29, v20, v16, 1, v19, 0);
      sub_1D2850(a1, 23, (unsigned __int8 *)&v24, (unsigned __int8 *)v29, (unsigned __int8 *)v26);
      sub_1D2850(a1, 20, (unsigned __int8 *)v26, (unsigned __int8 *)v28, (unsigned __int8 *)v26);
      v21 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL) + 31 - v16;
      v30 = 0x100000001LL;
      v31 = v21;
      sub_1D2850(a1, 10, (unsigned __int8 *)v26, nullptr, (unsigned __int8 *)&v30);
      v17 >>= 1;
      sub_119360((__int64)&v30);
      sub_119360((__int64)v29);
      v18 = v16-- == 0;
    }
    while ( !v18 );
LABEL_7:
    sub_119360((__int64)v28);
    sub_119360((__int64)v26);
  }
  sub_119360((__int64)&v24);
  return v32 - __readfsqword(0x28u);
}

