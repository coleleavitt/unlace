__int64 __fastcall sub_9CB20(__int128 a1)
{
  __int64 v1; // r14
  const __m128i *v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // rax
  unsigned int v6; // r15d
  __int128 v8; // rdi
  _DWORD *v9; // rax
  _DWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r12
  char v18; // r10
  bool v19; // al
  __int128 v20; // rdi
  char v21; // al
  char v22; // r10
  char *v23; // rdi
  char v24; // r10
  __int32 v25; // eax
  __int128 v26; // rdi
  __int128 v27; // rdi
  char v28; // al
  char v29; // [rsp+8h] [rbp-100h]
  char v30; // [rsp+18h] [rbp-F0h]
  char v31; // [rsp+18h] [rbp-F0h]
  __int64 v32; // [rsp+20h] [rbp-E8h]
  char v33; // [rsp+20h] [rbp-E8h]
  __int64 v34; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v35; // [rsp+40h] [rbp-C8h]
  _DWORD *v36; // [rsp+50h] [rbp-B8h]
  __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  int v38; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+68h] [rbp-A0h]
  __int64 v40; // [rsp+78h] [rbp-90h]
  _QWORD v41[2]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v42[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v43[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v44[11]; // [rsp+B0h] [rbp-58h]

  v1 = 0;
  v2 = (const __m128i *)a1;
  v44[3] = __readfsqword(0x28u);
  v3 = *((_QWORD *)&a1 + 1);
  v35 = a1;
  v36 = nullptr;
  v44[0] = *((_QWORD *)&a1 + 1) + 32LL;
  v44[1] = *((_QWORD *)&a1 + 1) + 48LL;
  v4 = *((_QWORD *)&a1 + 1);
  while ( 1 )
  {
    *((_QWORD *)&a1 + 1) = v44[v1];
    v37 = v4;
    v5 = (_DWORD *)sub_129440(a1, (__int64)&v37, 0);
    if ( v5 )
    {
      if ( *v5 == 9 )
      {
        *(_QWORD *)&v8 = v35;
        *((_QWORD *)&v8 + 1) = v5 + 8;
        v9 = (_DWORD *)sub_129440(v8, (__int64)&v37, 0);
        v36 = v9;
        v10 = v9;
        if ( v9 )
        {
          v11 = *v9;
          if ( v11 == 25 )
            goto LABEL_15;
          if ( v11 == 35 && *((_BYTE *)v10 + 32) == 4 )
          {
            v12 = *((_QWORD *)v10 + 5);
            if ( *(_DWORD *)v12 == 12
              && (sub_125B60((unsigned __int8 *)(v12 + 32), (__int64)(v10 + 12), 0)
               || sub_125B60((unsigned __int8 *)(v12 + 48), (__int64)(v36 + 12), 0)) )
            {
              break;
            }
          }
        }
      }
    }
    if ( v1 )
      return 0;
    v4 = *((_QWORD *)&v35 + 1);
    *(_QWORD *)&a1 = v35;
    v1 = 1;
  }
  v36 = (_DWORD *)v12;
  v10 = (_DWORD *)v12;
LABEL_15:
  v13 = v2[30].m128i_i64[0];
  v14 = v44[v1 ^ 1];
  v34 = v3;
  v15 = *(_QWORD *)(v13 + 112);
  v16 = sub_94260(v2, &v34, v37, v10);
  v17 = v16;
  if ( !v16 )
    return 0;
  v41[0] = 0xFFFFFFFF00000000LL;
  v41[1] = 0;
  v42[0] = 0xFFFFFFFF00000000LL;
  v42[1] = 0;
  v43[0] = 0xFFFFFFFF00000000LL;
  v43[1] = 0;
  v39 = 0;
  sub_1253A0((__int64)&v38, v16);
  v18 = sub_93760(v15, &v38);
  if ( !v18 )
    goto LABEL_17;
  if ( HIDWORD(v41[0]) != *(_DWORD *)(v3 + 36) )
    goto LABEL_17;
  if ( SHIDWORD(v41[0]) >= *(_DWORD *)(v15 + 88) )
  {
    if ( HIDWORD(v41[0]) != *(_DWORD *)(v15 + 88) )
      goto LABEL_17;
    v29 = v18;
    v19 = sub_11CBB0(v15, 0xCu);
    v18 = v29;
    if ( !v19 )
      goto LABEL_17;
  }
  *((_QWORD *)&v20 + 1) = v34;
  *(_QWORD *)&v20 = v2;
  v30 = v18;
  v32 = v34;
  v21 = sub_132E20(v20, (__int64)v41, v3, v14, 0);
  v22 = v30;
  v23 = (char *)v42;
  if ( !v21 )
  {
    *((_QWORD *)&v27 + 1) = v32;
    *(_QWORD *)&v27 = v2;
    v28 = sub_132E20(v27, (__int64)v42, v3, v14, 0);
    v22 = v30;
    if ( !v28 )
      goto LABEL_17;
    v23 = (char *)v41;
  }
  v31 = v22;
  if ( *v23 )
  {
    sub_1207E0(v23, v15, 9, v40, 2 * HIDWORD(v43[0]));
    if ( LOBYTE(v43[0]) )
    {
      sub_1571F0((__int64)v2, *(_QWORD *)(v32 + 8), (__int64)v43, *(_QWORD *)(v3 + 8), v3 + 64, 5);
      v24 = v31;
    }
    else
    {
      sub_125180((__int64)v43, (unsigned __int8 *)(v32 + 64));
      v24 = 0;
    }
    v33 = v24;
    v6 = sub_94EA0(v2, v17, v3, (__int64)&v38, 0);
    if ( (_BYTE)v6 )
    {
      sub_12AB50((unsigned __int8 *)v43, v15, SHIDWORD(v43[0]), 2);
      sub_93C10((__int64)v2, v3, (__int64)&v38, 0.0);
      sub_11D890(v3, (__int64)&v38);
      if ( v33 )
        sub_11D5A0(v17);
      v25 = v2[1].m128i_i32[2];
      BYTE1(v25) &= ~2u;
      LOBYTE(v25) = v25 | 0x80;
      v2[1].m128i_i32[2] = v25;
      sub_11D5D0(v3, *(_QWORD *)(v2[30].m128i_i64[0] + 112));
      *((_QWORD *)&v26 + 1) = v3;
      *(_QWORD *)&v26 = v2;
      sub_992D0(v26, 0.0);
      goto LABEL_18;
    }
  }
LABEL_17:
  v6 = 0;
LABEL_18:
  sub_11CDA0((__int64)v43);
  sub_11CDA0((__int64)v42);
  sub_11CDA0((__int64)v41);
  return v6;
}

