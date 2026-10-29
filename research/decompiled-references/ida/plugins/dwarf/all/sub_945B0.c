bool __fastcall sub_945B0(__int64 *a1, __m128i *a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rdi
  int v7; // eax
  bool result; // al
  unsigned __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = *a1;
  v10[1] = __readfsqword(0x28u);
  v9 = 0;
  v5 = *(_QWORD *)(v3 + 16);
  v6 = *(_QWORD *)(v3 + 24);
  v10[0] = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *, _QWORD *))(*(_QWORD *)(v5 + 88) + 88LL))(
         v6,
         (unsigned __int16)a3,
         &v9,
         v10);
  if ( v7 )
  {
    if ( v7 == 1 )
      sub_943B0((_BYTE *)(v5 + 330), (__int64)"Error retrieving attribute %hu for DIE\n", a3);
    return 0;
  }
  else
  {
    result = v9 != 0;
    *a2 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v5);
  }
  return result;
}

