__int64 __fastcall sub_18A2C0(const __m128i *a1, __int64 a2, __m128i a3, __m128 a4)
{
  __int64 v5; // rdi
  int v6; // r15d
  __int64 i; // rax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbx
  int v11; // eax
  unsigned __int64 *v12; // rdi
  unsigned int v13; // r15d
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int32 v26; // eax
  __int64 v27; // [rsp-10h] [rbp-160h]
  __int64 v28; // [rsp+10h] [rbp-140h]
  unsigned __int8 *v29; // [rsp+10h] [rbp-140h]
  unsigned __int8 *v30; // [rsp+18h] [rbp-138h]
  __int64 v31; // [rsp+20h] [rbp-130h]
  unsigned __int8 *v32; // [rsp+28h] [rbp-128h]
  __int64 v33; // [rsp+30h] [rbp-120h]
  unsigned __int64 *v34; // [rsp+48h] [rbp-108h]
  _QWORD v35[2]; // [rsp+70h] [rbp-E0h] BYREF
  _QWORD v36[2]; // [rsp+80h] [rbp-D0h] BYREF
  _QWORD v37[2]; // [rsp+90h] [rbp-C0h] BYREF
  _QWORD v38[2]; // [rsp+A0h] [rbp-B0h] BYREF
  _QWORD v39[2]; // [rsp+B0h] [rbp-A0h] BYREF
  __int64 v40[2]; // [rsp+C0h] [rbp-90h] BYREF
  __int64 v41[4]; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-60h] BYREF
  int v43; // [rsp+F8h] [rbp-58h]
  unsigned __int64 *v44; // [rsp+100h] [rbp-50h] BYREF
  __int64 v45; // [rsp+108h] [rbp-48h]
  unsigned __int64 v46; // [rsp+118h] [rbp-38h]

  v5 = a1[4].m128i_i64[0];
  v46 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 1344) + 8LL) )
  {
    v16 = *(_QWORD *)(a2 + 24);
    v43 = 0;
    v13 = 0;
    v42 = v16;
    if ( (sub_137670(v5, (__int64)&v42) & 7) != 0 )
      return v13;
    v5 = a1[4].m128i_i64[0];
  }
  v6 = 0;
  v34 = *(unsigned __int64 **)(v5 + 1504);
  sub_124680((__int64)v40, (__int64)a1, a2, 1, *(double *)a3.m128i_i64, a4);
  if ( *(_BYTE *)(a2 + 64) == 8 )
    v6 = *(_DWORD *)(*(_QWORD *)(a2 + 72) + 284LL);
  for ( i = sub_1229D0(*(_QWORD *)(a2 + 16)); ; i = sub_1229D0(*(_QWORD *)(v10 + 16)) )
  {
    v10 = i;
    if ( !i )
      goto LABEL_14;
    v11 = 0;
    if ( *(_BYTE *)(v10 + 64) == 8 )
      v11 = *(_DWORD *)(*(_QWORD *)(v10 + 72) + 284LL);
    if ( v6 == v11 )
      break;
    sub_127A20((__int64)&v42, (__int64)a1, v10, 1, v8, v9, *(double *)a3.m128i_i64, a4);
    if ( (unsigned __int8)sub_64780(&v42, v40) )
    {
      v12 = v44;
LABEL_11:
      if ( v12 )
      {
        v45 = 0;
        qfree((__int64)v12);
      }
      qfree(v42);
LABEL_14:
      v13 = 0;
      goto LABEL_15;
    }
    v15 = sub_318470(&v44, (__int64)v41);
    v12 = v44;
    if ( v15 )
      goto LABEL_11;
    if ( v44 )
    {
      v45 = 0;
      qfree((__int64)v44);
    }
    qfree(v42);
  }
  v17 = a1[4].m128i_i64[0];
  if ( *(_QWORD *)(*(_QWORD *)(v17 + 1344) + 8LL) )
  {
    v22 = *(_QWORD *)(v10 + 24);
    v43 = 0;
    v42 = v22;
    if ( (sub_137670(v17, (__int64)&v42) & 7) != 0 )
      goto LABEL_14;
  }
  v35[1] = 0;
  v35[0] = 0xFFFFFFFF00000000LL;
  v36[0] = 0xFFFFFFFF00000000LL;
  v37[0] = 0xFFFFFFFF00000000LL;
  v38[0] = 0xFFFFFFFF00000000LL;
  v18 = *(_QWORD *)(a2 + 72);
  v36[1] = 0;
  v33 = v18;
  v19 = *(_QWORD *)(v18 + 24);
  v37[1] = 0;
  v38[1] = 0;
  v32 = (unsigned __int8 *)(v19 + 160);
  if ( !sub_183840((_BYTE *)(v19 + 160)) )
    goto LABEL_28;
  v28 = *(_QWORD *)(v10 + 72);
  v30 = (unsigned __int8 *)(*(_QWORD *)(v28 + 24) + 160LL);
  v31 = *(_QWORD *)(v28 + 24);
  sub_125180((unsigned __int8 *)v35, *(unsigned __int8 **)(v33 + 24));
  sub_123A40((__int64)v39, v30, v20, v21);
  sub_183B80(&v42, (__int64)v34, *(_QWORD *)(v10 + 24), v31, (__int64)v39, 1, a3, 1);
  sub_125180((unsigned __int8 *)v36, (unsigned __int8 *)&v42);
  sub_11CDA0((__int64)&v42);
  sub_11CDA0((__int64)v39);
  if ( !(unsigned __int8)sub_12EA80((__int64)v34, a1, v10, (__int64)v35, v10, (__int64)v36, a3, a4, 0) )
    goto LABEL_28;
  v29 = (unsigned __int8 *)(*(_QWORD *)(v28 + 24) + 80LL);
  sub_125180((unsigned __int8 *)v37, (unsigned __int8 *)(*(_QWORD *)(v33 + 24) + 80LL));
  if ( v6 == 5 )
  {
    sub_123A40((__int64)v39, v30, v23, v24);
    sub_183B80(&v42, (__int64)v34, *(_QWORD *)(v10 + 24), (__int64)v29, (__int64)v39, 1, a3, 1);
    sub_125180((unsigned __int8 *)v38, (unsigned __int8 *)&v42);
    sub_11CDA0((__int64)&v42);
    sub_11CDA0((__int64)v39);
  }
  else
  {
    sub_123A40((__int64)&v42, v29, v23, v24);
    sub_125180((unsigned __int8 *)v38, (unsigned __int8 *)&v42);
    sub_11CDA0((__int64)&v42);
  }
  v13 = sub_12EA80((__int64)v34, a1, v10, (__int64)v37, v10, (__int64)v38, a3, a4, 0);
  if ( (_BYTE)v13 )
  {
    sub_123A40((__int64)&v42, v32, v25, v27);
    sub_183B80(v39, (__int64)v34, *(_QWORD *)(v10 + 24), (__int64)v30, (__int64)&v42, 1, a3, 0);
    sub_11CDA0((__int64)&v42);
    if ( !LOBYTE(v39[0]) )
    {
      if ( !under_debugger )
        sub_383060(0xC8F9u, *(double *)a3.m128i_i64);
      BUG();
    }
    sub_11CA10((char *)v30, (char *)v39);
    sub_11D5A0(a2);
    v26 = a1[1].m128i_i32[2];
    BYTE1(v26) &= ~2u;
    LOBYTE(v26) = v26 | 0x80;
    a1[1].m128i_i32[2] = v26;
    sub_189DE0(v34, (__int64)a1, v10, *(_QWORD *)(v31 + 168), a3, a4);
    sub_11CDA0((__int64)v39);
  }
  else
  {
LABEL_28:
    v13 = 0;
  }
  sub_11CDA0((__int64)v38);
  sub_11CDA0((__int64)v37);
  sub_11CDA0((__int64)v36);
  sub_11CDA0((__int64)v35);
LABEL_15:
  if ( v41[0] )
  {
    v41[1] = 0;
    qfree(v41[0]);
  }
  qfree(v40[0]);
  return v13;
}

