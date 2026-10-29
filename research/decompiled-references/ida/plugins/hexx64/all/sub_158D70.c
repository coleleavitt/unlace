__int64 __fastcall sub_158D70(__int128 a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // r15d
  _DWORD *v9; // r15
  unsigned __int8 *v10; // r13
  unsigned __int8 *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 *v18; // [rsp+10h] [rbp-80h]
  __int64 v19; // [rsp+20h] [rbp-70h] BYREF
  __int64 v20; // [rsp+28h] [rbp-68h] BYREF
  unsigned __int8 v21[4]; // [rsp+30h] [rbp-60h] BYREF
  int v22; // [rsp+34h] [rbp-5Ch]
  unsigned __int8 v23[24]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  v5 = sub_11C8E0(a2, &v19, 12);
  if ( !v5 )
    return 0;
  v6 = sub_11C8E0(v5, &v20, 9);
  if ( !v6 )
    return 0;
  if ( *(_BYTE *)(v6 + 32) != 4 )
    return 0;
  v9 = *(_DWORD **)(v6 + 40);
  if ( *v9 != 25 )
    return 0;
  v10 = (unsigned __int8 *)(v9 + 8);
  if ( !(unsigned __int8)sub_130BC0(
                           (const __m128i *)a1,
                           *((__int64 *)&a1 + 1),
                           (__int64)(v9 + 8),
                           *((__int64 *)&a1 + 1),
                           v19,
                           0,
                           (__m128i)a3,
                           a4)
    || (v11 = (unsigned __int8 *)(v9 + 12),
        !(unsigned __int8)sub_130BC0(
                            (const __m128i *)a1,
                            *((__int64 *)&a1 + 1),
                            (__int64)(v9 + 12),
                            *((__int64 *)&a1 + 1),
                            v20,
                            0,
                            (__m128i)a3,
                            a4)) )
  {
    if ( !(unsigned __int8)sub_130BC0(
                             (const __m128i *)a1,
                             *((__int64 *)&a1 + 1),
                             (__int64)(v9 + 8),
                             *((__int64 *)&a1 + 1),
                             v20,
                             0,
                             (__m128i)a3,
                             a4) )
      return 0;
    v11 = (unsigned __int8 *)(v9 + 12);
    if ( !(unsigned __int8)sub_130BC0(
                             (const __m128i *)a1,
                             *((__int64 *)&a1 + 1),
                             (__int64)(v9 + 12),
                             *((__int64 *)&a1 + 1),
                             v19,
                             0,
                             (__m128i)a3,
                             a4) )
      return 0;
    v12 = v20;
    v20 = v19;
    v19 = v12;
  }
  v18 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( (unsigned __int8)sub_157240(a1, (__int64)(v9 + 8), v19, a3) )
  {
    v7 = sub_157240(a1, (__int64)v11, v20, a3);
    if ( (_BYTE)v7 )
    {
      sub_123A40((__int64)v21, v10, v13, v14);
      sub_123A40((__int64)v23, v11, v15, v16);
      sub_B1520(a1, (__int64)v21, *((_DWORD **)&a1 + 1), v21, *((__int64 *)&a1 + 1), *(double *)a3.m128_u64, v19, 0);
      sub_B1520(a1, (__int64)v23, *((_DWORD **)&a1 + 1), v23, *((__int64 *)&a1 + 1), *(double *)a3.m128_u64, v20, 0);
      sub_11CA10((char *)(a2 + 32), (char *)v21);
      sub_11CA10((char *)(a2 + 48), (char *)v23);
      sub_12B6F0(a2, v18, 11, -1, 1, (__m128i)a3);
      v17 = 2 * v22;
      *(_DWORD *)(*(_QWORD *)(a2 + 40) + 68LL) = 2 * v22;
      *(_DWORD *)(a2 + 36) = v17;
      sub_11CDA0((__int64)v23);
      sub_11CDA0((__int64)v21);
      return v7;
    }
  }
  return 0;
}

