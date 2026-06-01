__int64 __fastcall sub_23A40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v8; // rdi
  const __m128i *v9; // roff
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __int64 (__fastcall **v13)(); // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+8h] [rbp-50h]
  __m128i v15; // [rsp+10h] [rbp-48h]
  const __m128i *v16; // [rsp+20h] [rbp-38h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 104);
  v17 = __readfsqword(0x28u);
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 8) + 2216LL) )
    sub_EC40();
  sub_23680(*(_QWORD *)(a1 + 112), a2, 0);
  if ( a3 != 2 )
    sub_1E940(*(__int64 **)(a1 + 104), a2, a4, *(const __m128i **)(a1 + 112));
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 104) + 424LL))(
          *(_QWORD *)(a1 + 104),
          a2) )
  {
    create_data();
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 104) + 152LL))(
      *(_QWORD *)(a1 + 104),
      a2,
      a4,
      a3);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 104) + 160LL))(*(_QWORD *)(a1 + 104), a2, a4);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 104) + 176LL))(
      *(_QWORD *)(a1 + 104),
      a2,
      0,
      *(_QWORD *)(a1 + 112));
    v8 = *(_QWORD *)(a1 + 104);
    v9 = *(const __m128i **)(a1 + 112);
    v10 = _mm_loadl_epi64(v9);
    v13 = &off_3C2B0;
    v16 = v9;
    v14 = 7;
    v15 = _mm_unpacklo_epi64(v10, (__m128i)v8);
    (*(void (__fastcall **)(unsigned __int64, __int64 (__fastcall ***)(), __int64))(*(_QWORD *)v8 + 48LL))(v8, &v13, a2);
    v11 = *(_QWORD *)(a1 + 104);
    v14 = 1;
    v13 = &off_3C0F0;
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(), __int64))(*(_QWORD *)v11 + 72LL))(v11, &v13, a2);
  }
  return 0;
}
