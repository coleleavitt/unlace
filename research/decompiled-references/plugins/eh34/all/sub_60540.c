__int64 __fastcall sub_60540(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v8; // rbx
  void (__fastcall *hexdsp)(__int64, _QWORD *, __int64, __int64); // rax
  const char *v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // rbx
  void (__fastcall *v14)(__int64, __int64, __int64); // rax
  void (__fastcall *v15)(__int64, __int64, __int64); // rax
  void (__fastcall *v16)(__int64, __int64, __int64, _QWORD); // rax
  const char *v17; // rsi
  __int64 *v18; // rdi
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // r14
  void (__fastcall *v23)(__int64, _QWORD *, __int64, __int64); // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  bool v33; // cf
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // [rsp+0h] [rbp-68h]
  unsigned __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+10h] [rbp-58h]
  _QWORD v45[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = a1[22];
  v45[1] = __readfsqword(0x28u);
  hexdsp = (void (__fastcall *)(__int64, _QWORD *, __int64, __int64))get_hexdsp(a1, (const char *)a2);
  hexdsp(417, v45, a2, v8);
  v11 = (const char *)*(unsigned int *)(a2 + 64);
  v44 = v45[0];
  v41 = sub_6DCB0(a2, v11);
  v12 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a2, v11);
  v13 = v12(129, 80);
  *(_QWORD *)(v13 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 56) = 0;
  *(_QWORD *)(v13 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 72) = 0;
  v14 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, (const char *)&qword_50);
  v14(333, v13, v44);
  *(_DWORD *)v13 = 56;
  v15 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(333, (const char *)v13);
  v15(287, v13 + 32, a3);
  v16 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))get_hexdsp(287, (const char *)(v13 + 32));
  v17 = (const char *)v41;
  v18 = (_QWORD *)(off_168 + 4);
  v16(364, v41, v13, 0);
  v19 = a1[26];
  v45[0] = *a4;
  v20 = a1[25];
  if ( v19 < v20 + 1 )
  {
    v43 = v19;
    v28 = qvector_reserve(a1 + 24, 0, v20 + 1, 8);
    v17 = (const char *)a1[26];
    v21 = v28;
    v29 = a1[25];
    v18 = (__int64 *)a1[24];
    a1[26] = v43;
    v30 = v29 - 1;
    if ( v30 >= 0 )
    {
      v31 = v21;
      do
      {
        v32 = *v18;
        v31 += 8;
        ++v18;
        *(_QWORD *)(v31 - 8) = v32;
        v33 = v30-- == 0;
      }
      while ( !v33 );
      v18 = (__int64 *)a1[24];
    }
    qfree(v18);
    a1[24] = v21;
    v20 = a1[25];
    a1[26] = v17;
  }
  else
  {
    v21 = a1[24];
  }
  *(_QWORD *)(v21 + 8 * v20) = v45[0];
  v22 = a1[22];
  ++a1[25];
  v23 = (void (__fastcall *)(__int64, _QWORD *, __int64, __int64))get_hexdsp(v18, v17);
  v23(417, v45, a2, v22);
  sub_6DD00(a2, *(unsigned int *)(a2 + 64), v45[0], v45[0]);
  v24 = a1[25];
  v25 = a1[26];
  v45[0] = *a5;
  if ( v25 < v24 + 1 )
  {
    v34 = qvector_reserve(a1 + 24, 0, v24 + 1, 8);
    v35 = a1[25];
    v36 = a1[26];
    a1[26] = v25;
    v37 = (__int64 *)a1[24];
    v26 = v34;
    v38 = v35 - 1;
    if ( v38 >= 0 )
    {
      v39 = v34;
      do
      {
        v40 = *v37;
        v39 += 8;
        ++v37;
        *(_QWORD *)(v39 - 8) = v40;
        v33 = v38-- == 0;
      }
      while ( !v33 );
      v37 = (__int64 *)a1[24];
    }
    qfree(v37);
    a1[24] = v26;
    v24 = a1[25];
    a1[26] = v36;
  }
  else
  {
    v26 = a1[24];
  }
  *(_QWORD *)(v26 + 8 * v24) = v45[0];
  ++a1[25];
  return v41;
}
