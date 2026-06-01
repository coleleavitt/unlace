__int64 __fastcall sub_16C1A0(const __m128i *a1, __int64 a2, const __m128i *a3, __m128i a4, __m128 a5)
{
  int *v6; // rax
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // r13
  char v10; // r14
  __int64 v11; // rax
  __int64 v13; // rax
  int *v14; // rcx
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // r9
  unsigned __int8 *v24; // rax
  __int64 v25; // rax
  char v26; // al
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // r8
  char v30; // al
  __int64 v31; // rax
  __int64 i; // rcx
  __int32 v33; // eax
  int v34; // eax
  int v35; // r14d
  __int64 v36; // r13
  __int32 v37; // eax
  char v38; // al
  _DWORD *v39; // rdx
  unsigned __int8 *v40; // rdx
  __int64 v41; // rcx
  _DWORD *v42; // rdx
  _DWORD *v43; // rax
  _DWORD *v44; // rax
  __int64 v45; // [rsp+8h] [rbp-F8h]
  __int64 v46; // [rsp+10h] [rbp-F0h]
  __int64 v47; // [rsp+18h] [rbp-E8h]
  __int64 v48; // [rsp+20h] [rbp-E0h]
  __int64 v49; // [rsp+20h] [rbp-E0h]
  __int64 v50; // [rsp+28h] [rbp-D8h]
  char v51; // [rsp+28h] [rbp-D8h]
  __int64 v52; // [rsp+30h] [rbp-D0h]
  __int64 v53; // [rsp+38h] [rbp-C8h]
  __int64 v54; // [rsp+38h] [rbp-C8h]
  unsigned __int64 *v55; // [rsp+40h] [rbp-C0h]
  __int64 v56; // [rsp+48h] [rbp-B8h]
  __int64 v57; // [rsp+50h] [rbp-B0h]
  __int64 v58; // [rsp+50h] [rbp-B0h]
  int v59; // [rsp+50h] [rbp-B0h]
  char v60; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v61; // [rsp+58h] [rbp-A8h]
  __int64 v62; // [rsp+60h] [rbp-A0h] BYREF
  int *v63; // [rsp+68h] [rbp-98h] BYREF
  __int64 v64; // [rsp+70h] [rbp-90h] BYREF
  __int64 v65; // [rsp+78h] [rbp-88h] BYREF
  __int64 v66; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int8 *v67; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v68[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 *v69[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v70; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v71; // [rsp+C8h] [rbp-38h]

  v71 = __readfsqword(0x28u);
  if ( a1[3].m128i_i64[1] != a2 )
  {
    if ( !under_debugger )
      sub_383060(0xC47Du, *(double *)a4.m128i_i64);
    BUG();
  }
  v6 = (int *)sub_1229A0(a3[3].m128i_i64[0]);
  v7 = (__int64)v6;
  if ( !v6 )
    return 0;
  v8 = *v6;
  if ( v8 == 33 )
  {
    if ( *(_BYTE *)(v7 + 32) != 4 || **(_DWORD **)(v7 + 40) != 12 )
      return 0;
    v10 = sub_11FD80((char *)(v7 + 48), (__int64 *)v69, 0);
    if ( v10 && !v69[0] )
    {
      v9 = *(_QWORD *)(v7 + 40);
      goto LABEL_6;
    }
    v8 = *(_DWORD *)v7;
  }
  if ( v8 != 12 )
    return 0;
  v9 = v7;
  v10 = 0;
LABEL_6:
  v11 = sub_11C8A0(v9, &v62);
  if ( !v11 )
    return 0;
  if ( *(_BYTE *)v62 != 4 )
    return 0;
  if ( **(_DWORD **)(v62 + 8) != 19 )
    return 0;
  if ( sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL), *(_DWORD *)(v11 + 4), 0) != 1 )
    return 0;
  v13 = sub_11C8A0(*(_QWORD *)(v62 + 8), &v63);
  if ( !v13 || *(_BYTE *)v63 != 4 )
    return 0;
  v14 = *((int **)v63 + 1);
  v15 = *v14;
  if ( *v14 == 9 )
  {
    v27 = *((_BYTE *)v14 + 32) == 4;
    v63 = v14 + 8;
    if ( !v27 )
      return 0;
    v15 = **((_DWORD **)v14 + 5);
  }
  if ( v15 != 13 )
    return 0;
  v56 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 16LL), *(_DWORD *)(v13 + 4), 0);
  v16 = sub_11C8A0(*((_QWORD *)v63 + 1), &v64);
  if ( !v16 || sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL), *(_DWORD *)(v16 + 4), 0) != 1 )
    return 0;
  v55 = *(unsigned __int64 **)(a1[30].m128i_i64[0] + 112);
  v65 = 0;
  if ( !v10 )
  {
    v52 = v7 + 64;
    if ( sub_1255D0((unsigned __int8 *)(v7 + 64), (__int64)v55, v64, 1, *(double *)a4.m128i_i64) )
    {
      v66 = a2;
      v57 = sub_129440((__int64)a1, v52, (__int64)&v66, 0, *(double *)a4.m128i_i64, a5);
      if ( v57 )
      {
        v47 = 0;
        goto LABEL_26;
      }
      return 0;
    }
  }
  v69[0] = (unsigned __int64 *)a2;
  v28 = sub_129440((__int64)a1, v64, (__int64)v69, 0, *(double *)a4.m128i_i64, a5);
  v29 = v28;
  if ( !v28 )
    return 0;
  if ( *(_DWORD *)v28 != 20 )
    return 0;
  if ( *(_BYTE *)(v28 + 64) )
  {
    v58 = v28;
    v30 = sub_1255D0((unsigned __int8 *)(v28 + 64), (__int64)v55, v64, 1, *(double *)a4.m128i_i64);
    v29 = v58;
    if ( !v30 )
      return 0;
  }
  v31 = sub_11C8A0(v29, &v65);
  if ( !v31 )
    return 0;
  v47 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v31 + 8) + 16LL), *(_DWORD *)(v64 + 4), 0);
  v66 = a2;
  v52 = v7 + 64;
  v57 = sub_129440((__int64)a1, v7 + 64, (__int64)&v66, 0, *(double *)a4.m128i_i64, a5);
  if ( !v57 )
    return 0;
  if ( v10 )
  {
    if ( *(_DWORD *)v57 == 33
      && *(_BYTE *)(v57 + 32) == 4
      && **(_DWORD **)(v57 + 40) == 20
      && sub_A2350((char *)(v57 + 48), 0, 0) )
    {
      v57 = *(_QWORD *)(v57 + 40);
      v17 = sub_11C8A0(v57, &v67);
      goto LABEL_28;
    }
    return 0;
  }
LABEL_26:
  if ( *(_DWORD *)v57 != 20 )
    return 0;
  v17 = sub_11C8A0(v57, &v67);
LABEL_28:
  if ( !v17 )
    return 0;
  v53 = v17;
  v18 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL), *(_DWORD *)(v17 + 4), 0);
  v19 = 0;
  v20 = v18;
  v21 = 8 * *(_DWORD *)(v53 + 4) - 1;
  if ( (unsigned __int64)v21 <= 0x3F )
    v19 = 1LL << v21;
  v50 = v19;
  v54 = v18;
  v22 = v18 & ~v19;
  v48 = v20 & ~v19;
  v46 = v22 + 1;
  if ( (v22 & (v22 + 1)) != 0 || v48 != sub_32ABC0(~v56, *(_DWORD *)(v9 + 68), 0) )
    return 0;
  v68[1] = 0;
  v68[0] = 0xFFFFFFFF00000000LL;
  if ( (v54 & v50) != 0 )
  {
    if ( v66 == v57 )
    {
      v51 = sub_125B60((unsigned __int8 *)(a2 + 32), v57 + 64, 0, *(double *)a4.m128i_i64);
      if ( v51 )
      {
LABEL_39:
        sub_125180((unsigned __int8 *)v68, v67);
        v25 = *(_QWORD *)(v66 + 8);
        goto LABEL_40;
      }
      v23 = a2 + 32;
    }
    else
    {
      v23 = a2 + 32;
    }
    v24 = v67;
    if ( *v67 == 4 )
    {
      v42 = *((_DWORD **)v67 + 1);
      if ( *v42 == 8 )
        v24 = (unsigned __int8 *)(v42 + 8);
    }
    if ( *(_BYTE *)(a2 + 32) == 4 )
    {
      v39 = *(_DWORD **)(a2 + 40);
      if ( *v39 == 8 )
        v23 = (__int64)(v39 + 8);
    }
    v51 = 0;
    if ( (unsigned __int8)sub_12EA80((__int64)v55, a1, v66, (__int64)v24, a2, v23, a4, a5, 0) )
      goto LABEL_39;
  }
  else
  {
    v40 = v67;
    v41 = a2 + 32;
    if ( *v67 == 4 )
    {
      v44 = *((_DWORD **)v67 + 1);
      if ( *v44 == 8 )
        v40 = (unsigned __int8 *)(v44 + 8);
    }
    if ( *(_BYTE *)(a2 + 32) == 4 )
    {
      v43 = *(_DWORD **)(a2 + 40);
      if ( *v43 == 8 )
        v41 = (__int64)(v43 + 8);
    }
    if ( (unsigned __int8)sub_152EE0(
                            (__int64)v55,
                            (__int64)v68,
                            (__int64)v40,
                            v41,
                            *(_QWORD *)(v9 + 24),
                            a3,
                            a4,
                            a5,
                            v7) )
    {
      v51 = 0;
      v25 = v66;
LABEL_40:
      v45 = v25;
      memset(v69, 0, sizeof(v69));
      v70 = 0;
      sub_123EA0((__int64)a1, (__int64 *)v69, (__int64)v68, 1, 0xFFFF0000, 0.0);
      if ( sub_A9AA0((__int64)a1, v69, v45, a2, 1u)
        || v65 && (sub_1255D0((unsigned __int8 *)v68, (__int64)v55, v65, 1, 0.0) != 1 || v48 != v47) )
      {
LABEL_41:
        v26 = 0;
      }
      else
      {
        for ( i = *(_QWORD *)(v7 + 8); i && *(_DWORD *)i != 55; i = *(_QWORD *)(v49 + 8) )
        {
          if ( v10 )
            goto LABEL_41;
          if ( (unsigned int)(*(_DWORD *)i - 29) > 0xC )
            goto LABEL_41;
          v49 = i;
          if ( !sub_125B60((unsigned __int8 *)(i + 32), v52, 0, 0.0) || !sub_A2350((char *)(v49 + 48), 0, 0) )
            goto LABEL_41;
        }
        if ( v51 )
        {
          sub_11D5A0(v57);
          v33 = a1[1].m128i_i32[2];
          BYTE1(v33) &= ~2u;
          LOBYTE(v33) = v33 | 0x80;
          a1[1].m128i_i32[2] = v33;
        }
        *(_DWORD *)v9 = 18;
        sub_11CA10((char *)(v9 + 32), (char *)v68);
        v34 = *(_DWORD *)(v9 + 36);
        v35 = *(_DWORD *)(v9 + 68);
        if ( v34 < v35 )
        {
          sub_1207E0((char *)(v9 + 32), v55, 8, *(_QWORD *)(v9 + 24), v35, (__m128i)0LL);
          v34 = v35;
        }
        v59 = v34;
        sub_120A10(v9 + 48, v55, v46, v34, -1, 0);
        if ( v59 > v35 )
        {
          *(_DWORD *)(v9 + 68) = v59;
          sub_12B6F0(v9, v55, 10, v35, 1, (__m128i)0LL);
        }
        v36 = sub_167E70(a1[4].m128i_i64[0], *(_DWORD *)(a2 + 72), 0.0);
        sub_11D5A0(a2);
        v37 = a1[1].m128i_i32[2];
        BYTE1(v37) &= ~2u;
        LOBYTE(v37) = v37 | 0x80;
        a1[1].m128i_i32[2] = v37;
        sub_112550((__int64)a1, (__int64)a3, v36);
        sub_A33C0((__int64)a3, v7);
        sub_A3160((__int64)a1, (_QWORD *)v7, a1[3].m128i_i64[1], 0.0);
        sub_A2520((__int64)a1, "SMOD2");
        v26 = 1;
      }
      v60 = v26;
      sub_93B40((__int64 *)v69);
      v38 = v60;
      goto LABEL_78;
    }
  }
  v38 = 0;
LABEL_78:
  v61 = v38;
  sub_11CDA0((__int64)v68);
  return v61;
}

