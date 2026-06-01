__int64 __fastcall sub_75BD0(
        __int64 a1,
        __int64 (__fastcall **a2)(_QWORD, int *, _QWORD *, __int64),
        __int64 (__fastcall **a3)(_QWORD, int *, _QWORD *, __int64),
        unsigned int a4)
{
  __int64 v6; // r14
  unsigned int v8; // esi
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 *v12; // rbx
  __m128i *v13; // rsi
  __m128i si128; // xmm0
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-70h] BYREF
  __int64 (__fastcall **v18[4])(_QWORD, int *, _QWORD *, __int64); // [rsp+10h] [rbp-68h] BYREF
  unsigned int v19; // [rsp+30h] [rbp-48h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 144) + 120LL * a4;
  if ( *(_WORD *)(v6 + 82) == 0xFFFF || !*(_DWORD *)(v6 + 92) )
  {
    return 1;
  }
  else
  {
    (*(void (__fastcall **)(__int64 *))(**(_QWORD **)(a1 + 608) + 24LL))(&v17);
    if ( v17
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 40LL))(
           v17,
           (unsigned int)(*(_DWORD *)(v6 + 84) + *(_DWORD *)(v6 + 88))) )
    {
      v8 = *(_DWORD *)(v6 + 92);
      v19 = a4;
      v9 = *(_QWORD *)(a1 + 600);
      v18[1] = a2;
      v18[0] = (__int64 (__fastcall **)(_QWORD, int *, _QWORD *, __int64))&off_B2290;
      v18[2] = (__int64 (__fastcall **)(_QWORD, int *, _QWORD *, __int64))a1;
      v18[3] = a3;
      v10 = sub_55CF0(&v17, v8, v18, v9);
    }
    else
    {
      v12 = *(__int64 **)(a1 + 600);
      v13 = (__m128i *)*v12;
      if ( (unsigned __int64)v12[2] <= 0x24 )
      {
        v16 = qvector_reserve(v12, v13, 37, 1);
        *v12 = v16;
        v13 = (__m128i *)v16;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_94250);
      v12[1] = 37;
      v13[2].m128i_i32[0] = 173229390;
      *v13 = si128;
      v13[1] = _mm_load_si128((const __m128i *)&xmmword_94260);
      v15 = *v12;
      v10 = 0;
      *(_BYTE *)(v15 + 36) = 0;
    }
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  }
  return v10;
}

