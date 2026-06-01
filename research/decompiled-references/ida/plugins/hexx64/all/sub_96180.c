__int64 __fastcall sub_96180(__int128 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  bool v5; // zf
  char v6; // al
  __int64 v7; // r13
  __int64 v9; // r12
  _DWORD *v10; // rdx
  __int64 v11; // r15
  int v12; // edx
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al
  __int64 v15; // rdx
  int v16; // r8d
  unsigned __int8 v17; // al
  _DWORD *v18; // rax
  int v19; // [rsp+0h] [rbp-C8h]
  int v20; // [rsp+8h] [rbp-C0h]
  __int64 v21; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v22; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v23; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v24; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v25; // [rsp+8h] [rbp-C0h]
  int v26; // [rsp+10h] [rbp-B8h]
  __int64 v27; // [rsp+10h] [rbp-B8h]
  int v28; // [rsp+18h] [rbp-B0h]
  unsigned __int8 v29; // [rsp+1Fh] [rbp-A9h]
  unsigned __int8 v30; // [rsp+1Fh] [rbp-A9h]
  __int64 v31[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v32[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v33; // [rsp+40h] [rbp-88h]
  __int64 v34; // [rsp+48h] [rbp-80h]
  __int64 v35; // [rsp+60h] [rbp-68h] BYREF
  __int64 v36; // [rsp+68h] [rbp-60h]
  __int64 v37; // [rsp+70h] [rbp-58h]
  __int128 v38; // [rsp+78h] [rbp-50h]
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v5 = *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) == 4;
  v6 = *(_BYTE *)(*((_QWORD *)&a1 + 1) + 48LL);
  v39 = __readfsqword(0x28u);
  v7 = *((_QWORD *)&a1 + 1);
  if ( !v5 || (v10 = *(_DWORD **)(*((_QWORD *)&a1 + 1) + 40LL), *v10 != 9) )
  {
    if ( v6 != 4 || **(_DWORD **)(*((_QWORD *)&a1 + 1) + 56LL) != 9 )
      return 0;
    goto LABEL_5;
  }
  if ( v6 == 4 )
  {
    v18 = *(_DWORD **)(*((_QWORD *)&a1 + 1) + 56LL);
    if ( *v18 == 9 && v18[9] > v10[9] )
    {
LABEL_5:
      v9 = *((_QWORD *)&a1 + 1) + 48LL;
      goto LABEL_9;
    }
  }
  v9 = *((_QWORD *)&a1 + 1) + 32LL;
LABEL_9:
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_127FE0(a1, (__int64)&v35, *((_QWORD *)&a1 + 1) + 64LL, 0, a4, a5, v19, v20, v26, v28, v31[0]);
  v11 = sub_A9AA0(a1, &v35, *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL), 0, 1u);
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  qfree(v35);
  if ( !v11 )
    return 0;
  if ( *(_DWORD *)v11 != 12 )
    return 0;
  v12 = *(_DWORD *)(v11 + 68);
  if ( v12 != *(_DWORD *)(*(_QWORD *)(v9 + 8) + 36LL) )
    return 0;
  if ( v12 != *(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL) / 2 )
    return 0;
  v21 = v11 + 64;
  if ( !(unsigned __int8)sub_1301F0(
                           (const __m128i *)a1,
                           *(_QWORD *)(v11 + 8),
                           v11 + 64,
                           *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL),
                           *((_QWORD *)&a1 + 1) + 64LL) )
    return 0;
  sub_124680((__int64)v32, a1, v11, 1u);
  if ( !sub_A9AA0(a1, v32, *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL), v11, 1u) )
  {
    v27 = v11 + 32;
    if ( sub_125B60((unsigned __int8 *)(v11 + 32), v21, 0) )
    {
      v27 = v11 + 48;
    }
    else if ( !sub_125B60((unsigned __int8 *)(v11 + 48), v21, 0) )
    {
      goto LABEL_17;
    }
    *((_QWORD *)&a1 + 1) = &v35;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    sub_123EA0(a1, v27, 1, 0xFFFF0000);
    if ( sub_A9AA0(a1, &v35, v7, *(_QWORD *)(v7 + 8), 1u)
      || (v29 = sub_157240(a1, *(_QWORD *)(v9 + 8) + 32LL, v27)) == 0 )
    {
      v14 = 0;
    }
    else
    {
      sub_123A40((__int64)v31, (unsigned __int8 *)(*(_QWORD *)(v9 + 8) + 32LL), v15, *(_QWORD *)(v9 + 8));
      v16 = *(_DWORD *)(v27 + 4);
      v17 = v29;
      if ( HIDWORD(v31[0]) != v16 )
      {
        sub_1207E0(
          (char *)v31,
          *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
          9,
          *(_QWORD *)(*(_QWORD *)(v9 + 8) + 24LL),
          v16);
        v17 = v29;
      }
      v30 = v17;
      sub_1571F0(a1, v7, (__int64)v31, v11, v27, 0);
      sub_11CA10((char *)v9, (char *)v31);
      sub_11D5A0(v11);
      sub_11CDA0((__int64)v31);
      v14 = v30;
    }
    if ( v37 )
    {
      v24 = v14;
      *(_QWORD *)&v38 = 0;
      qfree(v37);
      v14 = v24;
    }
    v25 = v14;
    qfree(v35);
    v13 = v25;
    goto LABEL_18;
  }
LABEL_17:
  v13 = 0;
LABEL_18:
  if ( v33 )
  {
    v22 = v13;
    v34 = 0;
    qfree(v33);
    v13 = v22;
  }
  v23 = v13;
  qfree(v32[0]);
  return v23;
}

