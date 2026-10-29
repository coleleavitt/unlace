__int64 __fastcall sub_3FC800(__int64 a1, int a2, __m128i a3, __m128 a4, __m128 a5)
{
  unsigned __int16 v6; // ax
  unsigned int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // r8
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v18[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v19[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-50h]
  char v22; // [rsp+40h] [rbp-48h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  sub_3FC6F0(a1, *(double *)a3.m128i_i64, *(double *)a4.m128_u64, a5);
  v6 = *(_WORD *)(a1 + 48);
  if ( v6 <= 0x73u )
  {
    v7 = 44;
    if ( v6 <= 0x6Fu )
      goto LABEL_9;
  }
  else
  {
    if ( (unsigned __int16)(v6 - 116) > 3u )
      goto LABEL_9;
    v7 = 43;
  }
  if ( get_first_fcref_from() != -1 )
  {
    v8 = *(_QWORD *)(a1 + 832);
    v9 = *(_QWORD *)(a1 + 40);
    v18[0] = -4294967290LL;
    v10 = *(_DWORD *)(v8 + 84);
    v17[0] = 0x100000001LL;
    v17[1] = 1;
    v11 = 8 * v10;
    v12 = v9 + *(unsigned __int16 *)(a1 + 50);
    if ( (unsigned __int64)v11 <= 0x3F )
      v12 &= ~(-1LL << v11);
    v18[1] = v12;
    v19[1] = 0;
    v19[0] = 0xFFFFFFFF00000000LL;
    sub_120A10((__int64)v19, (unsigned __int64 *)v8, 0, 1, v9, 0);
    sub_1D6450(a1, v7, (unsigned __int8 *)v17, (unsigned __int8 *)v19, (unsigned __int8 *)v18, a3, a4, a5);
    *(_QWORD *)(a1 + 16) = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2, v13, *(double *)a3.m128i_i64);
    *(_BYTE *)(a1 + 896) = 1;
    v20 = a1;
    v21 = 0xFFFFFFFF00000000LL;
    v22 = 0;
    sub_3FA580((int *)&v20, 1, 0, a3, a4, a5);
    if ( !v22 && !(unsigned __int8)sub_3FACB0((__int64)&v20, a3, a4, a5) )
      sub_3EB430(*(double *)a3.m128i_i64);
    a2 = HIDWORD(v21);
    sub_11CDA0((__int64)v19);
    sub_11CDA0((__int64)v18);
    sub_11CDA0((__int64)v17);
  }
LABEL_9:
  v14 = *(_DWORD *)(a1 + 52);
  v15 = 7;
  if ( (v14 & 0x1018) != 0x1010 )
    v15 = (unsigned __int8)(((v14 & 0x1018) == 4104 || (v14 & 0x1008) == 0) + 1);
  sub_3FB720(
    a1,
    0x20u,
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 388LL),
    v15,
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL),
    a3,
    a4,
    a5);
  return sub_3FC4D0(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL), a2, a3, a4, a5);
}

