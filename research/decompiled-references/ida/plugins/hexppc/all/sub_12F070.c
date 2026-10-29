__int64 __fastcall sub_12F070(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v9; // rax
  unsigned __int8 *v11; // r14
  __int64 v12; // rax
  __int64 v14; // rsi
  _DWORD *v15; // rdx
  __int16 v16; // si
  __int16 v17; // cx
  int v18; // edx
  __int64 v19; // rax
  _DWORD *v20; // rdx
  __int64 v21; // rax
  unsigned __int8 *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r12
  int v27; // [rsp+4h] [rbp-64h]
  __int64 v28; // [rsp+8h] [rbp-60h]
  __int64 v29; // [rsp+10h] [rbp-58h] BYREF
  __int64 v30; // [rsp+18h] [rbp-50h]
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v9 = a1[30].m128i_i64[0];
  v31 = __readfsqword(0x28u);
  v28 = *(_QWORD *)(v9 + 112);
  sub_11DD70(a1, a2, a3);
  sub_11DB80((__int64)a1, (_BYTE *)a4, (_BYTE *)a5);
  v27 = a6 + *(_DWORD *)(a3 + 4);
  switch ( *(_DWORD *)a5 )
  {
    case 4:
      if ( *(_DWORD *)(a5 + 36) == a6 && (unsigned __int8)sub_12F3E0((_DWORD)a1, a2, a3, a4, (int)a5 + 32, 0) )
        return 1;
      goto LABEL_3;
    case 8:
    case 9:
      if ( *(_DWORD *)(a5 + 68) != v27 )
        goto LABEL_3;
      v14 = sub_3356F0();
      if ( !sub_121B90((unsigned __int8 *)a3, v14, a5 + 32, 0)
        && (*(_BYTE *)a3 != 4 || !sub_122150(*(unsigned __int8 **)(a3 + 8), v28, (unsigned int *)a5, 1u)) )
      {
        goto LABEL_3;
      }
      sub_11CDA0((char *)a3, v28, *(_DWORD *)a5, *(_QWORD *)(a4 + 24), v27);
      return 1;
    case 0xA:
      if ( *(_BYTE *)a3 != 4 )
        goto LABEL_3;
      v20 = *(_DWORD **)(a3 + 8);
      if ( *v20 != 22 || !(unsigned __int8)sub_12CD60(a1, a2, (__int64)v20, a4, (int *)a5) )
        goto LABEL_3;
      v21 = 0;
      if ( *(_DWORD *)a5 == 10 && *(_BYTE *)(a5 + 32) == 4 )
        v21 = *(_QWORD *)(a5 + 40);
      v22 = (unsigned __int8 *)(v21 + 32);
      v23 = *(_QWORD *)(a3 + 8);
      v24 = v23 + 32;
      if ( v22 != (unsigned __int8 *)(v23 + 32) )
      {
        sub_119360(v23 + 32);
        sub_120000(v24, v22);
        v23 = *(_QWORD *)(a3 + 8);
      }
      *(_DWORD *)(v23 + 68) = *(_DWORD *)(v23 + 36);
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 68LL);
      return 1;
    case 0xB:
      if ( *(_BYTE *)(a5 + 32) != 4 )
        goto LABEL_3;
      v15 = *(_DWORD **)(a5 + 40);
      if ( !v15
        || (unsigned int)(*v15 - 8) > 1
        || *(_DWORD *)(a5 + 36) != v27
        || !(unsigned __int8)sub_12B040(v28, a1, a2, a3, a4, (__int64)(v15 + 8), 0) )
      {
        goto LABEL_3;
      }
      if ( a3 )
      {
        v30 = 0;
        sub_120000((__int64)&v29, (unsigned __int8 *)(a5 + 32));
        v16 = *(_WORD *)a3;
        v17 = *(_WORD *)(a3 + 2);
        v18 = *(_DWORD *)(a3 + 4);
        *(_QWORD *)a3 = v29;
        v19 = *(_QWORD *)(a3 + 8);
        LOWORD(v29) = v16;
        *(_QWORD *)(a3 + 8) = v30;
        WORD1(v29) = v17;
        HIDWORD(v29) = v18;
        v30 = v19;
        sub_119360((__int64)&v29);
      }
      return 1;
    case 0x18:
      if ( *(_BYTE *)a3 != 4 || !(unsigned __int8)sub_12C8E0(a1, a2, *(_QWORD *)(a3 + 8), a4, (_DWORD *)a5) )
        goto LABEL_3;
      v25 = *(_QWORD *)(a3 + 8);
      v26 = *(_QWORD *)(v25 + 40);
      *(_QWORD *)(v25 + 40) = 0;
      sub_119E50(v26, *(_QWORD *)(a3 + 8));
      if ( v26 )
      {
        sub_119360(v26 + 64);
        sub_119360(v26 + 48);
        sub_119360(v26 + 32);
        j__qfree();
      }
      **(_DWORD **)(a3 + 8) = *(_DWORD *)a5;
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 68LL);
      return 1;
    default:
LABEL_3:
      v11 = (unsigned __int8 *)sub_309540(a5);
      if ( !v11 )
        return 0;
      v12 = sub_3356F0();
      if ( !sub_121B90(v11, v12, a3, 0) || *(_DWORD *)(a5 + 68) != a6 )
        return 0;
      sub_11CDA0((char *)a3, v28, 8, *(_QWORD *)(a4 + 24), v27);
      return 1;
  }
}

