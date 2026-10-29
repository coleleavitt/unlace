__int64 __fastcall sub_60020(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __m128i v16; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v6 = *(_QWORD *)(a2 + 16);
  v17 = __readfsqword(0x28u);
  v8 = (**(__int64 (__fastcall ***)(__int64, __int64))(v6 + 8))(v6 + 8, a3);
  if ( (v8 & 0x400) != 0 )
  {
    if ( (~BYTE1(v8) & 6) == 0 )
    {
      *(_BYTE *)a1 = 1;
      *(_BYTE *)(a1 + 24) = 0;
      return a1;
    }
    goto LABEL_7;
  }
  v9 = (**(__int64 (__fastcall ***)(__int64, __int64, __int64))(*(_QWORD *)(a2 + 16) + 16LL))(
         *(_QWORD *)(a2 + 16) + 16LL,
         a3,
         a3 - 15);
  if ( v9 != -1 )
  {
    v11 = (**(__int64 (__fastcall ***)(__int64, __int64))(*(_QWORD *)(a2 + 16) + 8LL))(*(_QWORD *)(a2 + 16) + 8LL, v9);
    if ( (v11 & 0x600) == 0x400 && (v11 & 0xF0000000) == 0xB0000000LL )
    {
LABEL_7:
      *(_BYTE *)a1 = 0;
      *(_BYTE *)(a1 + 24) = 0;
      return a1;
    }
  }
  sub_64B50(
    (unsigned int)&v15,
    *(_QWORD *)(a2 + 32),
    (unsigned int)"validate_state_head_ea: IPtoStateMap entry <%a,%d>: not a head, not an align directive",
    a3,
    a4,
    v10);
  v12 = v15;
  v13 = _mm_loadu_si128(&v16);
  *(_BYTE *)(a1 + 24) = 1;
  *(_QWORD *)a1 = v12;
  *(__m128i *)(a1 + 8) = v13;
  return a1;
}
