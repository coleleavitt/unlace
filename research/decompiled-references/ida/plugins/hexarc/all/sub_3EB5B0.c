__int64 __fastcall sub_3EB5B0(
        __int64 a1,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        __int64 a5,
        unsigned __int8 a6,
        double a7)
{
  unsigned int *v10; // rax
  unsigned int v13; // eax
  __m128i v14; // xmm0
  char v15; // r9
  unsigned __int8 v16[16]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v17[11]; // [rsp+20h] [rbp-58h] BYREF

  v10 = *(unsigned int **)(a1 + 192);
  v17[3] = __readfsqword(0x28u);
  if ( *(unsigned int **)(a1 + 200) != v10 && sub_327800(*v10, 0) )
  {
    v13 = sub_131A80(*(_QWORD **)(a1 + 16), *(int *)(a5 + 4), 1);
    if ( v13 == -1 )
    {
      if ( !under_debugger )
        sub_37B760(0xCE3Du, a7);
      BUG();
    }
    v14 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 4));
    v15 = 1;
    *(_DWORD *)v16 = 1;
    *(_QWORD *)&v16[4] = _mm_unpacklo_epi32(v14, _mm_cvtsi32_si128(v13)).m128i_u64[0];
    if ( !a6 )
      v15 = a2 > 62;
    v17[0] = 0xFFFFFFFF00000000LL;
    v17[1] = 0;
    sub_3EB500((__int64 *)a1, 4, v16, (unsigned __int8 *)v17, (unsigned __int8 *)a5, v15);
    sub_1166E0((__int64)v17);
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL);
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, _QWORD))(*(_QWORD *)a1 + 64LL))(
      a1,
      (unsigned int)a2,
      a3,
      a4,
      v16,
      a6);
    sub_1166E0((__int64)v16);
  }
  else
  {
    sub_3EB500((__int64 *)a1, a2, a3, a4, (unsigned __int8 *)a5, a6);
  }
  return *(_QWORD *)(a1 + 200);
}

