unsigned __int64 __fastcall sub_620D0(
        double a1,
        double a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        _QWORD *a6,
        const char *a7)
{
  __int64 v7; // rbp
  __int64 v8; // rax
  const char *v9; // rcx
  __int64 *v10; // rdi
  const char *v11; // rsi
  const char *v12; // rcx
  _QWORD *v13; // rax
  int v14; // eax
  __int64 v15; // rbx
  _DWORD *v16; // r12
  void (__fastcall *v17)(__int64, _DWORD *); // rax
  __int64 v18; // rdi
  unsigned __int64 v20; // r8
  __int64 *v21; // r9
  __int64 *v22; // rax
  const char *v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // r15
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  __int64 v29; // rax
  const char *v30; // rbx
  void (__fastcall *v31)(__int64, const char *, __int64); // rax
  void (__fastcall *v32)(__int64, __int64, const char *, __int64); // rax
  const char *v33; // rsi
  __int64 v34; // r12
  void (__fastcall *v35)(__int64, __int64, __int64, _QWORD); // rax
  unsigned __int64 v36; // rax
  const char *v37; // rbx
  void (__fastcall *v38)(__int64, const char *); // rax
  int v39; // eax
  void (__fastcall *v40)(__int64, _DWORD *, __int64); // rax
  void (__fastcall *hexdsp)(__int64, const char *); // rax
  int v42; // eax
  __int64 v43; // [rsp+8h] [rbp-B0h]
  __int64 v45; // [rsp+18h] [rbp-A0h]
  __int64 v47; // [rsp+28h] [rbp-90h]
  __int64 v49; // [rsp+40h] [rbp-78h] BYREF
  __int128 v50; // [rsp+48h] [rbp-70h]
  __int64 v51; // [rsp+60h] [rbp-58h] BYREF
  __int128 v52; // [rsp+68h] [rbp-50h]
  unsigned __int64 v53; // [rsp+78h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v7 = *a5;
  v45 = *a5 + 56 * a5[1];
  if ( *a5 != v45 )
  {
    while ( 1 )
    {
      v49 = 0;
      v51 = 0;
      v50 = 0;
      v52 = 0;
      v8 = *(_QWORD *)(v7 + 16);
      if ( v8 )
      {
        sub_FB10(&v49, (__int64)"%a[%d]->", 0.0, *(_QWORD *)(v8 + 32));
        v9 = s1;
        if ( (_QWORD)v50 )
          LODWORD(v9) = v49;
      }
      else
      {
        v9 = s1;
      }
      v10 = &v51;
      v11 = "%a: %s%a[%d]:";
      sub_FB10(&v51, (__int64)"%a: %s%a[%d]:", 0.0, *(const char **)(a4 + 40), a2, (_DWORD)v9);
      if ( *(_DWORD *)(v7 + 36) == 1 )
      {
        v11 = a7;
        if ( !a7 )
          goto LABEL_17;
        v36 = *(int *)(v7 + 48);
        if ( *((_QWORD *)a7 + 1) < v36 )
          goto LABEL_17;
        v12 = *(const char **)(*(_QWORD *)a7 + 8 * v36);
      }
      else
      {
        v12 = *(const char **)(v7 + 40);
      }
      if ( a6[3] )
      {
        v20 = a6[1];
        v21 = *(__int64 **)(*a6 + 8 * ((unsigned __int64)v12 % v20));
        if ( !v21 )
          goto LABEL_17;
        v22 = (__int64 *)*v21;
        v11 = *(const char **)(*v21 + 8);
        if ( v11 != v12 )
        {
          while ( 1 )
          {
            v10 = (__int64 *)*v22;
            if ( !*v22 )
              break;
            v11 = (const char *)v10[1];
            v21 = v22;
            if ( (unsigned __int64)v12 % v20 != (unsigned __int64)v11 % v20 )
              break;
            v22 = (__int64 *)*v22;
            if ( v11 == v12 )
              goto LABEL_29;
          }
LABEL_17:
          if ( v51 )
          {
            *(_QWORD *)&v52 = 0;
            qfree(v51);
          }
          v18 = v49;
          if ( !v49 )
            goto LABEL_21;
          goto LABEL_20;
        }
LABEL_29:
        if ( !v21 )
          goto LABEL_17;
        v13 = (_QWORD *)*v21;
        if ( !*v21 )
          goto LABEL_17;
      }
      else
      {
        v13 = (_QWORD *)a6[2];
        if ( !v13 )
          goto LABEL_17;
        while ( (const char *)v13[1] != v12 )
        {
          v13 = (_QWORD *)*v13;
          if ( !v13 )
            goto LABEL_17;
        }
      }
      v47 = *(_QWORD *)(v13[2] + 32LL);
      v14 = *(_DWORD *)(v7 + 32);
      if ( !v14 )
        break;
      v43 = *(_QWORD *)(v7 + 16);
      if ( v14 != 2 )
      {
        v15 = *(_QWORD *)(v7 + 8);
LABEL_14:
        v16 = *(_DWORD **)(v15 + 56);
        if ( !v16 )
          goto LABEL_40;
        goto LABEL_15;
      }
      v23 = *(const char **)(*(_QWORD *)(v7 + 16) + 56LL);
      v24 = *(_QWORD *)(v7 + 16);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v7 + 16);
        if ( *(_DWORD *)v23 == 55 )
        {
          hexdsp = (void (__fastcall *)(__int64, const char *))get_hexdsp(v10, v11);
          v11 = v23;
          v10 = &qword_150 + 7;
          hexdsp(343, v23);
          v42 = *(_DWORD *)(v43 + 24);
          BYTE1(v42) &= ~2u;
          LOBYTE(v42) = v42 | 0x80;
          *(_DWORD *)(v43 + 24) = v42;
          v24 = *(_QWORD *)(v7 + 16);
        }
      }
      v25 = *(_QWORD *)(v7 + 8);
      v26 = *(_QWORD *)(v25 + 48);
      if ( v26 )
      {
        do
        {
          v27 = *(_QWORD *)(v24 + 56);
          v28 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v10, v11);
          v29 = v28(129, 80);
          *(_QWORD *)(v29 + 32) = 0xFFFFFFFF00000000LL;
          v30 = (const char *)v29;
          *(_QWORD *)(v29 + 40) = 0;
          *(_QWORD *)(v29 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v29 + 56) = 0;
          *(_QWORD *)(v29 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v29 + 72) = 0;
          *(_OWORD *)(v29 + 8) = 0;
          v31 = (void (__fastcall *)(__int64, const char *, __int64))get_hexdsp(129, (const char *)&qword_50);
          v31(334, v30, v26);
          v32 = (void (__fastcall *)(__int64, __int64, const char *, __int64))get_hexdsp(334, v30);
          v11 = (const char *)v24;
          v10 = (_QWORD *)(off_168 + 4);
          v32(364, v24, v30, v27);
          v26 = *(_QWORD *)(v26 + 8);
          v24 = *(_QWORD *)(v7 + 16);
        }
        while ( v26 );
        v25 = *(_QWORD *)(v7 + 8);
      }
      v15 = v43;
      *(_DWORD *)(v24 + 24) |= *(_DWORD *)(v25 + 24);
      v16 = *(_DWORD **)(v43 + 56);
      if ( !v16 )
      {
LABEL_40:
        v33 = *(const char **)(*(_QWORD *)(v7 + 24) + 24LL);
        v34 = sub_6DB50(v47, v33);
        v35 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))get_hexdsp(v47, v33);
        v35(364, v15, v34, 0);
        goto LABEL_45;
      }
LABEL_15:
      if ( *v16 != 55 )
      {
        v17 = (void (__fastcall *)(__int64, _DWORD *))get_hexdsp(v10, v11);
        v17(338, v16);
        goto LABEL_17;
      }
      v37 = *(const char **)(v7 + 24);
      v38 = (void (__fastcall *)(__int64, const char *))get_hexdsp(v10, v11);
      v38(343, v37);
      v39 = *(_DWORD *)(v43 + 24);
      BYTE1(v39) &= ~2u;
      LOBYTE(v39) = v39 | 0x80;
      *(_DWORD *)(v43 + 24) = v39;
      v40 = (void (__fastcall *)(__int64, _DWORD *, __int64))get_hexdsp(343, v37);
      v40(287, v16 + 8, v47);
LABEL_45:
      if ( v51 )
      {
        *(_QWORD *)&v52 = 0;
        qfree(v51);
      }
      v18 = v49;
      if ( !v49 )
        goto LABEL_21;
LABEL_20:
      *(_QWORD *)&v50 = 0;
      qfree(v18);
LABEL_21:
      v7 += 56;
      if ( v45 == v7 )
        return v53 - __readfsqword(0x28u);
    }
    v43 = *(_QWORD *)(v7 + 8);
    v15 = v43;
    goto LABEL_14;
  }
  return v53 - __readfsqword(0x28u);
}

