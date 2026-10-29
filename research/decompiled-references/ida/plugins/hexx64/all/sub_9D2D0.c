__int64 __fastcall sub_9D2D0(const __m128i *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  char v15; // r14
  __int32 v16; // eax
  __int128 v17; // rdi
  __int64 v18; // rax
  const __m128i *v19; // [rsp+0h] [rbp-158h]
  int v20; // [rsp+8h] [rbp-150h]
  int v21; // [rsp+10h] [rbp-148h]
  int v22; // [rsp+10h] [rbp-148h]
  unsigned int *v23; // [rsp+18h] [rbp-140h]
  __int64 v24; // [rsp+18h] [rbp-140h]
  __int64 v25; // [rsp+20h] [rbp-138h]
  __int64 v26; // [rsp+28h] [rbp-130h]
  __int64 v27[2]; // [rsp+30h] [rbp-128h] BYREF
  __int64 v28[4]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v29; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-F0h]
  unsigned __int64 *v31; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v32; // [rsp+78h] [rbp-E0h]
  __int64 v33; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+98h] [rbp-C0h]
  __int64 *v35; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-B0h]
  int v37[8]; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v38[2]; // [rsp+E0h] [rbp-78h] BYREF
  _QWORD v39[2]; // [rsp+F0h] [rbp-68h] BYREF
  _QWORD v40[11]; // [rsp+100h] [rbp-58h] BYREF

  v40[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) != 4 )
    return 0;
  v2 = 0;
  v23 = *(unsigned int **)(a2 + 40);
  if ( *v23 == 13 )
  {
    v21 = *(_DWORD *)(a2 + 36) - *(_DWORD *)(a2 + 68);
    sub_124680((__int64)v27, (__int64)a1, (__int64)v23, 1u);
    v38[1] = 0;
    v38[0] = 0xFFFFFFFF00000000LL;
    v39[0] = 0xFFFFFFFF00000000LL;
    v40[0] = 0xFFFFFFFF00000000LL;
    v39[1] = 0;
    v40[1] = 0;
    sub_330970((__int64)v37, -1);
    v6 = *(_QWORD *)(a2 + 16);
    v29 = 0;
    v30 = 0;
    v31 = nullptr;
    v32 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        sub_127A20((__int64)&v33, (__int64)a1, v6, 1, v4, v5);
        if ( (unsigned __int8)sub_64780(&v33, v27)
          || (unsigned __int8)sub_318470((unsigned __int64 **)&v35, (__int64)v28) )
        {
          break;
        }
        if ( *(_DWORD *)v6 == 13 && *(_DWORD *)(v6 + 68) == v21 )
        {
          sub_1253A0((__int64)v37, v6);
          if ( (unsigned __int8)sub_132040(a1, v6, v37, a2, v23) )
          {
            if ( v35 )
            {
              *(_QWORD *)&v36 = 0;
              qfree((__int64)v35);
            }
            v7 = a2;
            qfree(v33);
            v26 = v6;
            goto LABEL_36;
          }
        }
        sub_64280(&v29, &v33, 0.0);
        sub_316CB0((__int64 *)&v31, &v35, v8, v9);
        if ( v35 )
        {
          *(_QWORD *)&v36 = 0;
          qfree((__int64)v35);
        }
        qfree(v33);
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v6 )
          goto LABEL_10;
      }
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree((__int64)v35);
      }
      qfree(v33);
LABEL_10:
      v30 = 0;
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree((__int64)v31);
        v31 = nullptr;
        *((_QWORD *)&v32 + 1) = 0;
      }
    }
    v7 = *(_QWORD *)(a2 + 8);
    if ( !v7 )
      goto LABEL_19;
    while ( 1 )
    {
      if ( *(_DWORD *)v7 == 13 && *(_DWORD *)(v7 + 68) == v21 )
      {
        sub_1253A0((__int64)v37, v7);
        if ( (unsigned __int8)sub_132040(a1, v7, v37, a2, v23) )
          break;
      }
      sub_127A20((__int64)&v33, (__int64)a1, v7, 1, v4, v5);
      if ( (unsigned __int8)sub_64780(&v33, v27) || (unsigned __int8)sub_318470((unsigned __int64 **)&v35, (__int64)v28) )
      {
        if ( v35 )
        {
          *(_QWORD *)&v36 = 0;
          qfree((__int64)v35);
        }
        qfree(v33);
        goto LABEL_19;
      }
      sub_64280(&v29, &v33, 0.0);
      sub_316CB0((__int64 *)&v31, &v35, v12, v13);
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree((__int64)v35);
      }
      qfree(v33);
      v7 = *(_QWORD *)(v7 + 8);
      if ( !v7 )
        goto LABEL_19;
    }
    if ( !a2 )
      goto LABEL_19;
    v26 = v7;
    v6 = a2;
LABEL_36:
    if ( (*(_BYTE *)(v6 + 6) & 0x20) != 0 || (*(_BYTE *)(v7 + 6) & 0x20) != 0 )
    {
LABEL_19:
      v2 = 0;
LABEL_20:
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree((__int64)v31);
      }
      qfree(v29);
      sub_11CDA0((__int64)v40);
      sub_11CDA0((__int64)v39);
      sub_11CDA0((__int64)v38);
      if ( v28[0] )
      {
        v28[1] = 0;
        qfree(v28[0]);
      }
      qfree(v27[0]);
      return v2;
    }
    v33 = 0;
    v36 = 0;
    v34 = 0;
    v35 = nullptr;
    sub_127FE0((__int64)a1, (__int64)&v33, v7 + 64, 0, v4, v5, (int)a1, (int)v27, v21, (int)v23, (__int64)v37);
    if ( (unsigned __int8)sub_64780(&v29, &v33) || (unsigned __int8)sub_318470(&v31, (__int64)&v35) )
    {
      v34 = 0;
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree((__int64)v35);
        v35 = nullptr;
        *((_QWORD *)&v36 + 1) = 0;
      }
      sub_127FE0((__int64)v19, (__int64)&v33, v6 + 64, 0, v10, v11, (int)v19, v20, v22, v24, v25);
      if ( (unsigned __int8)sub_64780(&v29, &v33) || (unsigned __int8)sub_318470(&v31, (__int64)&v35) )
        goto LABEL_42;
      v18 = v6;
      v6 = v7;
      v7 = v18;
    }
    sub_125180((__int64)v38, (unsigned __int8 *)(v24 + 32));
    sub_125180((__int64)v39, (unsigned __int8 *)(v24 + 48));
    sub_1571F0((__int64)v19, v26, (__int64)v40, a2, a2 + 64, 1);
    v14 = sub_944B0(v19, v7, v6, v25, 0);
    v15 = v14;
    if ( v14 )
    {
      sub_1253A0(v6, v25);
      if ( (v15 & 2) != 0 )
        sub_11D5A0(v7);
      v16 = v19[1].m128i_i32[2];
      BYTE1(v16) &= ~2u;
      LOBYTE(v16) = v16 | 0x80;
      v19[1].m128i_i32[2] = v16;
      sub_11D5D0(v6, *(_QWORD *)(v19[30].m128i_i64[0] + 112));
      *((_QWORD *)&v17 + 1) = v6;
      *(_QWORD *)&v17 = v19;
      sub_992D0(v17, 0.0);
      v2 = 1;
      goto LABEL_43;
    }
LABEL_42:
    v2 = 0;
LABEL_43:
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree((__int64)v35);
    }
    qfree(v33);
    goto LABEL_20;
  }
  return v2;
}

