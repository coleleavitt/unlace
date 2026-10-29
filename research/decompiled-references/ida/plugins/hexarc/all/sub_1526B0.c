__int64 __fastcall sub_1526B0(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // r15d
  _DWORD *v8; // r15
  unsigned __int8 *v9; // r13
  unsigned __int8 *v10; // r14
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // [rsp+10h] [rbp-80h]
  __int64 v14; // [rsp+20h] [rbp-70h] BYREF
  __int64 v15; // [rsp+28h] [rbp-68h] BYREF
  char v16[4]; // [rsp+30h] [rbp-60h] BYREF
  int v17; // [rsp+34h] [rbp-5Ch]
  char v18[24]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  v4 = sub_116220(a3, &v14, 12);
  if ( !v4 )
    return 0;
  v5 = sub_116220(v4, &v15, 9);
  if ( !v5 )
    return 0;
  if ( *(_BYTE *)(v5 + 32) != 4 )
    return 0;
  v8 = *(_DWORD **)(v5 + 40);
  if ( *v8 != 25 )
    return 0;
  v9 = (unsigned __int8 *)(v8 + 8);
  if ( !(unsigned __int8)sub_12A500(a1, a2, (__int64)(v8 + 8), a2, v14, 0)
    || (v10 = (unsigned __int8 *)(v8 + 12), !(unsigned __int8)sub_12A500(a1, a2, (__int64)(v8 + 12), a2, v15, 0)) )
  {
    if ( !(unsigned __int8)sub_12A500(a1, a2, (__int64)(v8 + 8), a2, v15, 0) )
      return 0;
    v10 = (unsigned __int8 *)(v8 + 12);
    if ( !(unsigned __int8)sub_12A500(a1, a2, (__int64)(v8 + 12), a2, v14, 0) )
      return 0;
    v11 = v15;
    v15 = v14;
    v14 = v11;
  }
  v13 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( (unsigned __int8)sub_150B80((__int64)a1, (__int64)(v8 + 8), v14) )
  {
    v6 = sub_150B80((__int64)a1, (__int64)v10, v15);
    if ( (_BYTE)v6 )
    {
      sub_11D380((__int64)v16, v9);
      sub_11D380((__int64)v18, v10);
      sub_AAE60((__int64)a1, a2, (__int64)v16, a2, (__int64)v16, a2, v14, 0);
      sub_AAE60((__int64)a1, a2, (__int64)v18, a2, (__int64)v18, a2, v15, 0);
      sub_116350((char *)(a3 + 32), v16);
      sub_116350((char *)(a3 + 48), v18);
      sub_125030(a3, v13, 11, -1, 1);
      v12 = 2 * v17;
      *(_DWORD *)(*(_QWORD *)(a3 + 40) + 68LL) = 2 * v17;
      *(_DWORD *)(a3 + 36) = v12;
      sub_1166E0((__int64)v18);
      sub_1166E0((__int64)v16);
      return v6;
    }
  }
  return 0;
}

