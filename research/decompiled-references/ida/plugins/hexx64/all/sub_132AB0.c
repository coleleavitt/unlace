__int64 __fastcall sub_132AB0(__int128 a1, __int64 a2, __int64 a3, unsigned int *a4, int a5, __m128i a6, __m128 a7)
{
  __int64 v10; // rax
  unsigned __int8 *v12; // r14
  __int64 v13; // rax
  __int64 v15; // rax
  _DWORD *v16; // rdx
  __int16 v17; // si
  __int16 v18; // cx
  int v19; // edx
  __int64 v20; // rax
  _DWORD *v21; // rdx
  __int64 v22; // rax
  unsigned __int8 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // [rsp-10h] [rbp-78h]
  __int64 v31; // [rsp-8h] [rbp-70h]
  int v32; // [rsp+4h] [rbp-64h]
  unsigned __int64 *v33; // [rsp+8h] [rbp-60h]
  __int64 v34; // [rsp+10h] [rbp-58h] BYREF
  __int64 v35; // [rsp+18h] [rbp-50h]
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v10 = *(_QWORD *)(a1 + 480);
  v36 = __readfsqword(0x28u);
  v33 = *(unsigned __int64 **)(v10 + 112);
  sub_1217B0((const __m128i *)a1, *((__int64 *)&a1 + 1), a2, *(double *)a6.m128i_i64);
  sub_1215C0(a1, (_BYTE *)a3, a4, *(double *)a6.m128i_i64);
  v32 = a5 + *(_DWORD *)(a2 + 4);
  switch ( *a4 )
  {
    case 4u:
      if ( a4[9] == a5 && (unsigned __int8)sub_132E20(a1, a2, a3, (__int64)(a4 + 8), 0) )
        return 1;
      goto LABEL_3;
    case 8u:
    case 9u:
      if ( a4[17] != v32 )
        goto LABEL_3;
      v15 = sub_339CA0();
      if ( !sub_1255D0((unsigned __int8 *)a2, v15, (__int64)(a4 + 8), 0, *(double *)a6.m128i_i64)
        && (*(_BYTE *)a2 != 4
         || !sub_125B90(*(unsigned __int8 **)(a2 + 8), (__int64)v33, a4, 1u, *(double *)a6.m128i_i64)) )
      {
        goto LABEL_3;
      }
      sub_1207E0((char *)a2, v33, *a4, *(_QWORD *)(a3 + 24), v32, a6);
      return 1;
    case 0xAu:
      if ( *(_BYTE *)a2 != 4 )
        goto LABEL_3;
      v21 = *(_DWORD **)(a2 + 8);
      if ( *v21 != 22
        || !(unsigned __int8)sub_1307A0((const __m128i *)a1, *((__int64 *)&a1 + 1), (__int64)v21, a3, (int *)a4, a6, a7) )
      {
        goto LABEL_3;
      }
      v22 = 0;
      if ( *a4 == 10 && *((_BYTE *)a4 + 32) == 4 )
        v22 = *((_QWORD *)a4 + 5);
      v23 = (unsigned __int8 *)(v22 + 32);
      v24 = *(_QWORD *)(a2 + 8);
      v25 = v24 + 32;
      if ( v23 != (unsigned __int8 *)(v24 + 32) )
      {
        sub_11CDA0(v24 + 32);
        sub_123A40(v25, v23, v26, v27);
        v24 = *(_QWORD *)(a2 + 8);
      }
      *(_DWORD *)(v24 + 68) = *(_DWORD *)(v24 + 36);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL);
      return 1;
    case 0xBu:
      if ( *((_BYTE *)a4 + 32) != 4 )
        goto LABEL_3;
      v16 = *((_DWORD **)a4 + 5);
      if ( !v16
        || (unsigned int)(*v16 - 8) > 1
        || a4[9] != v32
        || !(unsigned __int8)sub_12EA80(
                               (__int64)v33,
                               (const __m128i *)a1,
                               *((__int64 *)&a1 + 1),
                               a2,
                               a3,
                               (__int64)(v16 + 8),
                               a6,
                               a7,
                               0) )
      {
        goto LABEL_3;
      }
      if ( a2 )
      {
        v35 = 0;
        sub_123A40((__int64)&v34, (unsigned __int8 *)a4 + 32, v30, v31);
        v17 = *(_WORD *)a2;
        v18 = *(_WORD *)(a2 + 2);
        v19 = *(_DWORD *)(a2 + 4);
        *(_QWORD *)a2 = v34;
        v20 = *(_QWORD *)(a2 + 8);
        LOWORD(v34) = v17;
        *(_QWORD *)(a2 + 8) = v35;
        WORD1(v34) = v18;
        HIDWORD(v34) = v19;
        v35 = v20;
        sub_11CDA0((__int64)&v34);
      }
      return 1;
    case 0x18u:
      if ( *(_BYTE *)a2 != 4
        || !(unsigned __int8)sub_130320((const __m128i *)a1, *((__int64 *)&a1 + 1), *(_QWORD *)(a2 + 8), a3, a4, a6, a7) )
      {
        goto LABEL_3;
      }
      v28 = *(_QWORD *)(a2 + 8);
      v29 = *(_QWORD *)(v28 + 40);
      *(_QWORD *)(v28 + 40) = 0;
      sub_11D890(v29, *(_QWORD *)(a2 + 8));
      if ( v29 )
      {
        sub_11CDA0(v29 + 64);
        sub_11CDA0(v29 + 48);
        sub_11CDA0(v29 + 32);
        j__qfree(v29);
      }
      **(_DWORD **)(a2 + 8) = *a4;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL);
      return 1;
    default:
LABEL_3:
      v12 = (unsigned __int8 *)sub_30D1C0((__int64)a4);
      if ( !v12 )
        return 0;
      v13 = sub_339CA0();
      if ( !sub_1255D0(v12, v13, a2, 0, *(double *)a6.m128i_i64) || a4[17] != a5 )
        return 0;
      sub_1207E0((char *)a2, v33, 8, *(_QWORD *)(a3 + 24), v32, a6);
      return 1;
  }
}

