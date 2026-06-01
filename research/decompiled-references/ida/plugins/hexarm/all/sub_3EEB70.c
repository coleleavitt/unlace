__int64 __fastcall sub_3EEB70(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v5; // r14
  int v6; // eax
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rbx
  const char *v11; // r13
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r13
  __int128 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __m128i v22; // xmm0
  char v23; // al
  int v24; // eax
  char v25; // al
  const char *v26; // rbp
  _QWORD *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // [rsp+8h] [rbp-E0h]
  __int64 v33; // [rsp+8h] [rbp-E0h]
  __int64 v34; // [rsp+8h] [rbp-E0h]
  __int64 v35; // [rsp+10h] [rbp-D8h]
  char v36; // [rsp+10h] [rbp-D8h]
  __int64 v37; // [rsp+18h] [rbp-D0h]
  __int64 v38; // [rsp+18h] [rbp-D0h]
  __m128i v39; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+38h] [rbp-B0h] BYREF
  char v41[16]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int8 v42[16]; // [rsp+50h] [rbp-98h] BYREF
  __m128i si128; // [rsp+60h] [rbp-88h]
  __int64 v44; // [rsp+70h] [rbp-78h]
  __m128i v45; // [rsp+78h] [rbp-70h] BYREF
  int v46; // [rsp+88h] [rbp-60h]
  __int64 v47; // [rsp+90h] [rbp-58h]
  int v48; // [rsp+98h] [rbp-50h]
  unsigned __int64 v49; // [rsp+A8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 32);
  v49 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 64) + 1496LL);
  if ( !(unsigned __int8)sub_11FFA0(v3, nullptr) )
    goto LABEL_2;
  v10 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 112) + 80LL) == 8 && *(_BYTE *)(v5 + 144) )
  {
    v24 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4LL);
    if ( v24 )
    {
      v11 = *(const char **)(v10 + 40);
      if ( v24 != 13 || strncmp(*(const char **)(v10 + 40), "__readx18", 9u) )
        goto LABEL_14;
      if ( (unsigned __int8)getinf_flag() )
      {
        v23 = sub_3ECF30(v5, (__int64)"_KPCR", v10, (__int64)off_4E5FA0, 2, a2);
        goto LABEL_42;
      }
    }
    else
    {
      v25 = getinf_flag();
      v26 = *(const char **)(v10 + 40);
      if ( v25 && !strcmp(*(const char **)(v10 + 40), "__readcr8") )
      {
        qfree();
        *(_QWORD *)(v10 + 40) = qstrdup();
        v27 = (_QWORD *)j__qalloc_or_throw();
        v28 = *(_QWORD *)(v10 + 24);
        v29 = (__int64)v27;
        v27[4] = 0xFFFFFFFF00000000LL;
        v27[5] = 0;
        v27[6] = 0xFFFFFFFF00000000LL;
        v27[7] = 0;
        v27[8] = 0xFFFFFFFF00000000LL;
        v27[9] = 0;
        sub_330C90((__int64)v27, v28);
        sub_11D2D0(v29, v10);
        *(_DWORD *)v10 = 9;
        *(_BYTE *)(v10 + 32) = 4;
        *(_QWORD *)(v10 + 40) = v29;
        *(_DWORD *)(v10 + 36) = 1;
        *(_DWORD *)(v10 + 68) = *(_DWORD *)(v29 + 68);
        *(_DWORD *)(v29 + 68) = 1;
        *(_QWORD *)v42 = 34;
        copy_tinfo_t();
        clear_tinfo_t();
        goto LABEL_43;
      }
      if ( strncmp(v26, "__readgs", 8u) )
      {
LABEL_60:
        v10 = *(_QWORD *)(a1 + 32);
        v11 = *(const char **)(v10 + 40);
        goto LABEL_14;
      }
      if ( (unsigned __int8)getinf_flag() )
      {
        v23 = sub_3ECF30(v5, (__int64)"_KPCR", v10, (__int64)&off_4E5FE0, 4, a2);
        goto LABEL_42;
      }
    }
    v23 = sub_3ECF30(v5, (__int64)"_TEB", v10, (__int64)off_4E5F60, 2, a2);
LABEL_42:
    if ( v23 )
      goto LABEL_43;
    goto LABEL_60;
  }
  v11 = *(const char **)(v10 + 40);
  if ( !strncmp(v11, "__readfs", 8u) )
  {
    if ( (unsigned __int8)getinf_flag() )
      v23 = sub_3ECF30(v5, (__int64)"_KPCR", v10, (__int64)&off_4E60A0, 4, a2);
    else
      v23 = sub_3ECF30(v5, (__int64)"_TEB", v10, (__int64)off_4E6060, 2, a2);
    goto LABEL_42;
  }
LABEL_14:
  v12 = *(_QWORD *)(a1 + 16);
  v40 = *(_QWORD *)(a1 + 24);
  if ( !strcmp(v11, "ptrauth_sign_unauthenticated") )
  {
    v13 = *(_QWORD *)(v10 + 72);
    if ( *(_QWORD *)(v13 + 32) != 3 )
    {
      if ( !under_debugger )
        sub_3835A0(0xCAF5u, a2);
      BUG();
    }
    v14 = *(_QWORD *)(v13 + 24);
    if ( *(_BYTE *)(v14 + 160) == 10 )
    {
      *((_QWORD *)&v15 + 1) = *(_QWORD *)(v14 + 168);
      if ( **((_BYTE **)&v15 + 1) == 1 )
      {
        *(_QWORD *)&v15 = v12;
        v32 = *(_QWORD *)(v10 + 72);
        v16 = sub_128E80(v15, (__int64)&v40, 1);
        if ( v16 )
        {
          if ( v16 == v40 )
          {
            v35 = v32;
            v33 = v16;
            if ( sub_1255A0((unsigned __int8 *)(v16 + 64), *(_QWORD *)(v14 + 168), 0) )
            {
              v17 = v33;
              v36 = **(_BYTE **)(v35 + 24);
              v18 = *(_DWORD *)v33;
              if ( *(_DWORD *)v33 == 2 )
              {
                sub_123480((__int64)v42, (unsigned __int8 *)(v33 + 48));
                v46 = 0;
                v47 = 0;
                si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
                v44 = 0;
                v48 = 0;
                v45 = 0;
                sub_124BC0(v14 + 160, v42);
                *(_QWORD *)(v14 + 176) = si128.m128i_i64[0];
                copy_tinfo_t();
                v30 = v44;
                v44 = 0;
                v31 = _mm_loadu_si128(&v45);
                v45 = 0;
                if ( *(_QWORD *)(v14 + 192) )
                {
                  v38 = v30;
                  *(_QWORD *)(v14 + 200) = 0;
                  v39 = v31;
                  qfree();
                  v31 = _mm_load_si128(&v39);
                  v30 = v38;
                }
                *(_QWORD *)(v14 + 192) = v30;
                *(__m128i *)(v14 + 200) = v31;
                copy_argloc();
                *(_DWORD *)(v14 + 232) = v48;
                cleanup_argloc();
                if ( v44 )
                {
                  v45.m128i_i64[0] = 0;
                  qfree();
                }
                goto LABEL_33;
              }
              if ( v18 == 4
                || v18 == 20
                && (unsigned __int8)sub_11F7C0((char *)(v33 + 48), v42, 1u)
                && (v17 = v33, *(_QWORD *)v42 == 0xFFFFFFFFFFFFLL) )
              {
                v19 = *(unsigned __int8 *)(v17 + 32);
                if ( (unsigned __int8)v19 <= 0xAu )
                {
                  v20 = 1124;
                  if ( _bittest64(&v20, v19) )
                  {
                    if ( (v19 & 0xF7) != 2 )
                    {
                      sub_123480((__int64)v42, (unsigned __int8 *)(v17 + 32));
                      si128.m128i_i64[0] = -1;
                      v34 = *(_QWORD *)(v14 + 168);
                      sub_123480((__int64)v41, v42);
                      sub_124BC0(v34, (unsigned __int8 *)v41);
                      sub_11C7E0((__int64)v41);
                      *(_QWORD *)(v34 + 16) = si128.m128i_i64[0];
                      sub_11C7E0((__int64)v42);
                      *(_DWORD *)(*(_QWORD *)(v14 + 168) + 4LL) = -1;
                      goto LABEL_34;
                    }
                    sub_123480((__int64)v42, (unsigned __int8 *)(v17 + 32));
                    v44 = 0;
                    v46 = 0;
                    si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
                    v47 = 0;
                    v48 = 0;
                    v45 = 0;
                    sub_124BC0(v14 + 160, v42);
                    *(_QWORD *)(v14 + 176) = si128.m128i_i64[0];
                    copy_tinfo_t();
                    v21 = v44;
                    v44 = 0;
                    v22 = _mm_loadu_si128(&v45);
                    v45 = 0;
                    if ( *(_QWORD *)(v14 + 192) )
                    {
                      v37 = v21;
                      *(_QWORD *)(v14 + 200) = 0;
                      v39 = v22;
                      qfree();
                      v22 = _mm_load_si128(&v39);
                      v21 = v37;
                    }
                    *(_QWORD *)(v14 + 192) = v21;
                    *(__m128i *)(v14 + 200) = v22;
                    copy_argloc();
                    *(_DWORD *)(v14 + 232) = v48;
                    cleanup_argloc();
                    if ( v44 )
                    {
                      v45.m128i_i64[0] = 0;
                      qfree();
                    }
LABEL_33:
                    clear_tinfo_t();
                    sub_11C7E0((__int64)v42);
LABEL_34:
                    sub_32C5A0(
                      v42,
                      *(_QWORD *)(*(_QWORD *)(v12 + 480) + 112LL),
                      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 64) + 1504LL) + 80LL));
                    copy_tinfo_t();
                    clear_tinfo_t();
                    if ( (v36 & 0xF7) == 2 && (*(_BYTE *)(v14 + 160) & 0xF7) == 2 )
                      sub_11CEE0(v10 + 32);
                    goto LABEL_43;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_2:
  v6 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == 12 )
  {
    if ( *(_BYTE *)(v3 + 32) != 4 )
      return 0;
    if ( (unsigned __int8)sub_11FFA0(*(_QWORD *)(v3 + 40), "KeGetPcr")
      && (unsigned __int8)sub_11F7C0((char *)(v3 + 48), v42, 0)
      && *(_QWORD *)v42 == 2432
      && (unsigned __int8)sub_3EA5C0(*(_QWORD *)(v3 + 40), (__int64)"KeGetCurrentPrcb", (__int64)"struct _KPRCB *;", 1) )
    {
      *(_DWORD *)v3 = 4;
      sub_11C7E0(v3 + 48);
      ++*(_DWORD *)(a1 + 40);
      return 0;
    }
    v6 = *(_DWORD *)v3;
  }
  if ( v6 == 23
    && *(_BYTE *)(v3 + 32) == 4
    && (unsigned __int8)sub_11FFA0(*(_QWORD *)(v3 + 40), "__clz")
    && (unsigned __int8)sub_152070(v3, v41) )
  {
    v8 = 1 << v41[0];
    if ( (unsigned __int64)*(int *)v41 >= 0x20 )
      v8 = 0;
    if ( 8 * *(_DWORD *)(v3 + 36) == v8 )
    {
      v9 = *(_QWORD *)(v3 + 40);
      sub_11C450((char *)(v9 + 32), *(char **)(*(_QWORD *)(v9 + 72) + 24LL));
      sub_120450(v9 + 48, *(_QWORD *)(v5 + 112), 0, *(_DWORD *)(v9 + 36), *(_QWORD *)(v9 + 24), 0);
      sub_11C7E0(v9 + 64);
      *(_DWORD *)v9 = 33;
      *(_DWORD *)(v9 + 68) = 1;
      *(_DWORD *)(v3 + 36) = 1;
      *(_DWORD *)v3 = 9;
      sub_11C7E0(v3 + 48);
LABEL_43:
      ++*(_DWORD *)(a1 + 40);
    }
  }
  return 0;
}

