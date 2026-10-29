unsigned __int64 __fastcall sub_226AE0(_QWORD *a1, __m128 a2, __m128 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // r13
  void (__fastcall *v14)(_QWORD); // rax
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 v27; // rdi
  _QWORD v29[3]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+18h] [rbp-C0h]
  __int64 v31; // [rsp+20h] [rbp-B8h]
  __int64 v32; // [rsp+30h] [rbp-A8h]
  __int64 v33; // [rsp+40h] [rbp-98h]
  __int64 v34; // [rsp+48h] [rbp-90h]
  __int64 v35; // [rsp+60h] [rbp-78h]
  __int64 v36; // [rsp+68h] [rbp-70h]
  char v37; // [rsp+98h] [rbp-40h]
  unsigned __int64 v38; // [rsp+A8h] [rbp-30h]

  v38 = __readfsqword(0x28u);
  sub_21CD00((__int64)v29, (__int64)a1);
  v8 = sub_110340(a1[98], 0, v4, v5, v6, v7, *(double *)a2.m128_u64, a3);
  v9 = v8;
  if ( !v8 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, *(double *)a2.m128_u64);
    BUG();
  }
  ++*(_DWORD *)(v8 + 24);
  v10 = a1[188];
  sub_104E40((_QWORD *)v8, v10, v29, 36);
  sub_226890((__int64)v29, v10, a2, a3);
  sub_104E10(v9, *(double *)a2.m128_u64);
  if ( v37 )
  {
    v13 = (_QWORD *)a1[98];
    if ( v13 )
    {
      v14 = *(void (__fastcall **)(_QWORD))(*v13 + 8LL);
      if ( (char *)v14 == (char *)sub_66F30 )
      {
        v15 = v13 + 27;
        *v13 = off_4EC750;
        do
        {
          v16 = (__int64)v15;
          v15 -= 4;
          sub_66C80(v16, *(double *)a2.m128_u64);
        }
        while ( v15 != v13 + 3 );
        v17 = v13[1];
        *v13 = &unk_4EC808;
        if ( v17 )
        {
          v13[2] = 0;
          qfree(v17);
        }
        j__qfree((__int64)v13);
      }
      else
      {
        v14(a1[98]);
      }
    }
    a1[98] = 0;
    sub_670E0(a1, v10, v11, v12);
  }
  v29[0] = &off_4DF770;
  clear_tinfo_t();
  cleanup_argloc();
  v18 = v35;
  if ( v35 )
  {
    v19 = v36;
    if ( v36 )
    {
      v20 = 0;
      do
      {
        v21 = (__int64 *)(v18 + 32 * v20);
        v22 = *v21;
        if ( *v21 )
        {
          v21[1] = 0;
          qfree(v22);
          v18 = v35;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    v36 = 0;
    qfree(v18);
  }
  if ( v33 )
  {
    v34 = 0;
    qfree(v33);
  }
  qfree(v32);
  v23 = v30;
  if ( v30 )
  {
    v24 = v31;
    if ( v31 )
    {
      v25 = 0;
      v26 = 0;
      do
      {
        v27 = *(_QWORD *)(v23 + v25);
        if ( v27 )
        {
          *(_QWORD *)(v23 + v25 + 8) = 0;
          qfree(v27);
          v23 = v30;
        }
        ++v26;
        v25 += 56;
      }
      while ( v24 != v26 );
    }
    v31 = 0;
    qfree(v23);
  }
  return v38 - __readfsqword(0x28u);
}

