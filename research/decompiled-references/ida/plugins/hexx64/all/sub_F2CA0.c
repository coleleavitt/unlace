unsigned __int64 __fastcall sub_F2CA0(__int64 a1, __int64 a2, __m128i *a3, __int64 a4, double a5, __m128 a6)
{
  __int64 *v7; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __m128i v17; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v7 = (__int64 *)(a1 + 152);
  v18 = __readfsqword(0x28u);
  sub_3180C0((__int64 *)(a1 + 152), a1 + 112, a3, a4);
  v9 = *(_QWORD *)(a2 + 64);
  v10 = *(int *)(v9 + 120);
  if ( v10 > 0 )
  {
    if ( (*(_BYTE *)(a2 + 26) & 4) != 0 )
      v11 = *(_QWORD *)(a2 + 520);
    else
      v11 = *(_QWORD *)(a2 + 328);
    v12 = *(int *)(a1 + 12);
    v13 = (int)v12 + (int)v10;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 480) + 24LL) + 24LL) == 8 )
      v13 = v12 + v10;
    if ( v13 > v11 )
    {
      v15 = *(_QWORD *)(v9 + 1496);
      v16 = *(_QWORD *)(v9 + 1440);
      v17.m128i_i64[1] = v13 - v11;
      v17.m128i_i64[0] = (v11 + v16) & *(_QWORD *)(*(_QWORD *)(v15 + 24) + 16LL);
      sub_316BB0(v7, &v17, a5, a6);
    }
  }
  return v18 - __readfsqword(0x28u);
}

