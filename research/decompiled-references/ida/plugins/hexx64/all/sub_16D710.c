__int64 __fastcall sub_16D710(__int64 a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  unsigned int v5; // ebp
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rbx
  __int64 v16; // rbp
  int v17; // r8d
  int v18; // r9d
  unsigned __int64 *v19; // rdi
  char v20; // al
  _QWORD *v21; // r15
  __int64 v22; // r13
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-128h]
  __int64 v28; // [rsp+0h] [rbp-128h]
  __int64 v30[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v31[4]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v32[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v33[4]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v34[2]; // [rsp+90h] [rbp-98h] BYREF
  unsigned __int64 *v35; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-80h]
  __int64 v37[2]; // [rsp+C0h] [rbp-68h] BYREF
  unsigned __int64 *v38; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+E8h] [rbp-40h]

  v5 = 0;
  v40 = __readfsqword(0x28u);
  if ( (**(_DWORD **)(a1 + 64) & 0x1000) == 0 )
    return v5;
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  sub_124680((__int64)v30, a1, *(_QWORD *)(a1 + 56), 1, *(double *)a4.m128i_i64, a5);
  sub_127A20((__int64)v32, a1, *(_QWORD *)(a1 + 56), 1, v9, v10, *(double *)a4.m128i_i64, a5);
  v15 = *(_QWORD *)(a2 + 48);
  v16 = *(_QWORD *)(a3 + 48);
  if ( v15 )
  {
    while ( *(char *)(v15 + 4) >= 0 )
    {
      if ( !v16
        || *(char *)(v16 + 4) < 0
        || sub_1201A0((_BYTE *)v15, v27)
        || !sub_125B90((unsigned __int8 *)v15, v27, (unsigned int *)v16, 4u, *(double *)a4.m128i_i64) )
      {
        goto LABEL_7;
      }
      sub_124680((__int64)v34, a1, v15, 1, *(double *)a4.m128i_i64, a5);
      sub_127A20((__int64)v37, a1, v15, 1, v17, v18, *(double *)a4.m128i_i64, a5);
      if ( (unsigned __int8)sub_64780(v34, v32)
        || (unsigned __int8)sub_318470(&v35, (__int64)v33)
        || (unsigned __int8)sub_64780(v37, v32)
        || (unsigned __int8)sub_318470(&v38, (__int64)v33)
        || (unsigned __int8)sub_64780(v37, v30) )
      {
        v19 = v38;
LABEL_19:
        if ( v19 )
        {
          v39 = 0;
          qfree((__int64)v19);
        }
        qfree(v37[0]);
        if ( v35 )
        {
          v36 = 0;
          qfree((__int64)v35);
        }
        qfree(v34[0]);
        goto LABEL_7;
      }
      v20 = sub_318470(&v38, (__int64)v31);
      v19 = v38;
      if ( v20 )
        goto LABEL_19;
      v15 = *(_QWORD *)(v15 + 8);
      v16 = *(_QWORD *)(v16 + 8);
      if ( v38 )
      {
        v39 = 0;
        qfree((__int64)v38);
      }
      qfree(v37[0]);
      if ( v35 )
      {
        v36 = 0;
        qfree((__int64)v35);
      }
      qfree(v34[0]);
      if ( !v15 )
        break;
    }
  }
  if ( v16 && *(char *)(v16 + 4) >= 0 )
  {
LABEL_7:
    if ( *(_QWORD *)(a2 + 48) != v15 )
    {
      v5 = sub_168F10(a2, v15, v11, v12, v13, v14, a4, a5);
      if ( (_BYTE)v5 )
      {
        v21 = *(_QWORD **)(a2 + 48);
        v28 = *(_QWORD *)(a2 + 64);
        while ( (_QWORD *)v15 != v21 )
        {
          v22 = sub_A33C0(a2, (__int64)v21);
          sub_A3160(a1, v21, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL), *(double *)a4.m128i_i64);
          sub_A3480(a3, *(_BYTE **)(a3 + 48));
          v21 = (_QWORD *)v22;
        }
        v23 = *(_DWORD *)(a1 + 24);
        BYTE1(v23) &= ~2u;
        LOBYTE(v23) = v23 | 0x80;
        *(_DWORD *)(a1 + 24) = v23;
        v24 = *(_DWORD *)(a2 + 24);
        BYTE1(v24) &= ~2u;
        LOBYTE(v24) = v24 | 0x80;
        *(_DWORD *)(a2 + 24) = v24;
        v25 = *(_DWORD *)(a3 + 24);
        BYTE1(v25) &= ~2u;
        LOBYTE(v25) = v25 | 0x80;
        *(_DWORD *)(a3 + 24) = v25;
        *(_DWORD *)v28 |= 0x400u;
        v26 = *(_QWORD *)(v28 + 784);
        if ( v26 )
          *(_DWORD *)(v26 + 48) = 63;
        sub_66FA0(*(_QWORD *)(a1 + 64), 1);
        goto LABEL_10;
      }
    }
  }
  v5 = 0;
LABEL_10:
  if ( v33[0] )
  {
    v33[1] = 0;
    qfree(v33[0]);
  }
  qfree(v32[0]);
  if ( v31[0] )
  {
    v31[1] = 0;
    qfree(v31[0]);
  }
  qfree(v30[0]);
  return v5;
}

