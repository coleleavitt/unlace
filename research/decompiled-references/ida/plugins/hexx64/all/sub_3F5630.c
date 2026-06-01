__int64 __fastcall sub_3F5630(__int64 a1, const __m128i *a2, __int64 a3, __m128i a4, __m128 a5)
{
  unsigned int v6; // r15d
  const char *v8; // r15
  __int64 v9; // rax
  const char *v10; // r15
  size_t v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rdx
  const char *v15; // r15
  __int64 v16; // rax
  int v17; // r13d
  __int64 v18; // rbx
  char v19; // al
  int v20; // eax
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // r9
  char v24; // al
  char v25; // al
  __int64 v26; // r9
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // [rsp+10h] [rbp-B8h]
  __int64 v30; // [rsp+10h] [rbp-B8h]
  unsigned __int8 *v31; // [rsp+18h] [rbp-B0h]
  __int64 v32; // [rsp+20h] [rbp-A8h]
  __int64 v33; // [rsp+28h] [rbp-A0h]
  __int64 v34; // [rsp+28h] [rbp-A0h]
  unsigned __int8 *v35; // [rsp+30h] [rbp-98h]
  __int64 v36; // [rsp+38h] [rbp-90h]
  __int64 v37; // [rsp+48h] [rbp-80h] BYREF
  unsigned int *v38[15]; // [rsp+50h] [rbp-78h] BYREF

  v38[7] = (unsigned int *)__readfsqword(0x28u);
  if ( *(_DWORD *)a3 != 10 )
    return 0;
  if ( *(_DWORD *)(a3 + 36) != 16 )
    return 0;
  if ( !(unsigned __int8)sub_120560(*(_QWORD *)(a3 + 40), nullptr) )
    return 0;
  v8 = *(const char **)(*(_QWORD *)(a3 + 40) + 40LL);
  v29 = *(_QWORD *)(a3 + 40);
  if ( strncmp(v8, "_mm_cmp", 7u) )
    return 0;
  v9 = a3;
  v10 = v8 + 7;
  v11 = 5;
  v12 = 0;
  v13 = v9;
  while ( strncmp(v10, off_4EA0A0[v12], v11) )
  {
    if ( ++v12 == 7 )
      return 0;
    v11 = strlen(off_4EA0A0[v12]);
  }
  v15 = &v10[v11];
  v16 = v13;
  v17 = v12;
  v18 = v16;
  if ( *v15 != 95 || v15[1] != 115 )
    return 0;
  v19 = v15[2];
  if ( v19 == 115 )
  {
    v20 = 4;
  }
  else
  {
    if ( v19 != 100 )
      return 0;
    v20 = 8;
  }
  if ( !v15[3] && *(_DWORD *)(v18 + 68) == v20 )
  {
    v31 = (unsigned __int8 *)(v18 + 64);
    sub_123A40((__int64)v38, (unsigned __int8 *)(v18 + 64), v14, a1);
    v6 = sub_12AB50(v38, *(unsigned __int64 **)(a1 + 16), 16, 1, a4);
    if ( !(_BYTE)v6 )
      goto LABEL_22;
    v37 = v18;
    v21 = sub_129440((__int64)a2, (__int64)v38, (__int64)&v37, 1, *(double *)a4.m128i_i64, a5);
    if ( !v21 || *(_DWORD *)v21 != 4 )
      goto LABEL_22;
    v36 = v21;
    v35 = (unsigned __int8 *)(v21 + 64);
    v33 = *(_QWORD *)(a2[4].m128i_i64[0] + 1504);
    v32 = *(_QWORD *)(v29 + 72);
    if ( sub_125B60((unsigned __int8 *)(v21 + 64), (__int64)v38, 0, *(double *)a4.m128i_i64) )
    {
      v24 = sub_1255D0((unsigned __int8 *)(v36 + 32), v33, *(_QWORD *)(v32 + 24), 1, *(double *)a4.m128i_i64);
      v23 = v36;
      if ( v24 )
        goto LABEL_29;
      v25 = sub_1255D0((unsigned __int8 *)(v36 + 32), v33, *(_QWORD *)(v32 + 24) + 80LL, 1, *(double *)a4.m128i_i64);
      v26 = v36;
      if ( !v25 )
        goto LABEL_22;
    }
    else
    {
      if ( *(_DWORD *)(v36 + 68) != 8
        || !(unsigned __int8)sub_12CF30(a2[4].m128i_i64[0], (__int64)v31, v35, 0, 0, v36, a4) )
      {
        goto LABEL_22;
      }
      v22 = sub_1301F0(a2, v36, v36 + 32, v18, *(_QWORD *)(v32 + 24), a4, a5);
      v23 = v36;
      if ( v22 )
      {
LABEL_29:
        v30 = v23;
        sub_125180(v31, (unsigned __int8 *)v38);
        *(_DWORD *)v18 = 4;
        sub_11D5A0(v30);
        goto LABEL_23;
      }
      v28 = sub_1301F0(a2, v36, v36 + 32, v18, *(_QWORD *)(v32 + 24) + 80LL, a4, a5);
      v26 = v36;
      if ( !v28 )
      {
LABEL_22:
        v6 = 0;
LABEL_23:
        sub_11CDA0((__int64)v38);
        return v6;
      }
    }
    v34 = v26;
    sub_11CA10(*(char **)(v32 + 24), (char *)(*(_QWORD *)(v32 + 24) + 80LL));
    if ( (unsigned int)sub_32EA00(v17 + 31) - 31 <= 6 )
    {
      qfree(*(_QWORD *)(v29 + 40));
      qsnprintf();
      v27 = qstrdup();
      v23 = v34;
      *(_QWORD *)(v29 + 40) = v27;
      goto LABEL_29;
    }
    goto LABEL_22;
  }
  return 0;
}

