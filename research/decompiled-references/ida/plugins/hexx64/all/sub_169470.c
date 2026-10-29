__int64 __fastcall sub_169470(const __m128i *a1, __m128i a2, __m128 a3)
{
  __int64 v4; // r13
  __int64 v6; // rbp
  int v7; // eax
  int v8; // r12d
  __int64 v9; // r13
  __int64 v10; // r12
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-80h]
  char v26[8]; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v27; // [rsp+18h] [rbp-70h]
  unsigned __int64 *v28[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( a1[4].m128i_i32[3] != 4 )
    return 0;
  v4 = a1[3].m128i_i64[1];
  if ( *(_BYTE *)(v4 + 64) != 7 )
    return 0;
  v6 = a1->m128i_i64[1];
  v7 = sub_168210(a1, v6, a2, a3);
  v8 = v7;
  if ( !v7 )
  {
    v18 = a1[4].m128i_i64[0];
    v19 = *(unsigned int *)(v4 + 72);
    if ( (unsigned int)v19 >= *(_DWORD *)(v18 + 64) )
      sub_167AF0(*(double *)a2.m128i_i64);
    v6 = *(_QWORD *)(*(_QWORD *)(v18 + 528) + 8 * v19);
    v20 = sub_168210(a1, v6, a2, a3);
    switch ( v20 )
    {
      case 3:
        v9 = 1;
        goto LABEL_7;
      case 4:
        v9 = 0;
        goto LABEL_7;
      case 1:
        v8 = 2;
        break;
      default:
        v8 = 1;
        if ( v20 != 2 )
          return 0;
        break;
    }
LABEL_12:
    v15 = *(_QWORD *)(v6 + 56);
    sub_124680((__int64)v28, v6, v15, 1, *(double *)a2.m128i_i64, a3);
    if ( !sub_A9AA0(v6, v28, *(_QWORD *)(v6 + 48), v15, 1u) )
    {
      sub_123A40((__int64)v26, (unsigned __int8 *)(v15 + 64), v16, v17);
      sub_11D5A0(v15);
      v21 = *(_DWORD *)(v6 + 24);
      v22 = *(_QWORD *)(v6 + 8);
      BYTE1(v21) &= ~2u;
      LOBYTE(v21) = v21 | 0x80;
      *(_DWORD *)(v6 + 24) = v21;
      sub_13B2C0(v22);
      v23 = a1[4].m128i_i64[0];
      if ( v27 >= *(_DWORD *)(v23 + 64) )
        sub_167AF0(*(double *)a2.m128i_i64);
      v24 = *(_QWORD *)(*(_QWORD *)(v23 + 528) + 8LL * v27);
      if ( v8 == 2 )
      {
        *(_DWORD *)v15 = 55;
        v25 = v24;
        sub_11CA10((char *)(v15 + 32), v26);
        sub_112550(v6, v25, *(_QWORD *)(v6 + 8));
      }
      else
      {
        sub_112550(v6, *(_QWORD *)(v6 + 8), v24);
      }
      sub_66FA0(a1[4].m128i_i64[0], 1);
      sub_11CDA0((__int64)v26);
      if ( v29 )
      {
        v30 = 0;
        qfree(v29);
      }
      qfree((__int64)v28[0]);
      return 1;
    }
    if ( v29 )
    {
      v30 = 0;
      qfree(v29);
    }
    qfree((__int64)v28[0]);
    return 0;
  }
  if ( (unsigned int)(v7 - 1) <= 1 )
    goto LABEL_12;
  v9 = v7 - 3;
LABEL_7:
  v10 = sub_1229A0(*(_QWORD *)(v6 + 48));
  *(_DWORD *)(v10 + 4) &= ~0x10u;
  v11 = *(_DWORD *)(v10 + 68);
  *(_DWORD *)v10 = 4;
  sub_120A10(v10 + 32, *(unsigned __int64 **)(*(_QWORD *)(v6 + 480) + 112LL), v9, v11, *(_QWORD *)(v10 + 24), 0);
  sub_11CDA0(v10 + 48);
  v12 = *(_DWORD *)(v6 + 24);
  BYTE1(v12) &= ~2u;
  LOBYTE(v12) = v12 | 0x80;
  *(_DWORD *)(v6 + 24) = v12;
  v13 = a1[4].m128i_i64[0];
  v14 = *(_QWORD *)(v13 + 784);
  if ( v14 )
  {
    *(_DWORD *)(v14 + 48) = 63;
    v13 = a1[4].m128i_i64[0];
  }
  sub_66FA0(v13, 1);
  return 1;
}

