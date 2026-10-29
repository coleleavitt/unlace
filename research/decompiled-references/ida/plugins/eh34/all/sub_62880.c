_QWORD *__fastcall sub_62880(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r15
  __int64 *v6; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  int v9; // ebp
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // edx
  __int64 v14; // rbx
  __int64 v15; // r12
  __int64 *v16; // rbp
  void (__fastcall *hexdsp)(__int64, __int64 **, __int64, __int64 *); // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r12
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  bool v33; // cf
  __int64 v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v40; // [rsp+10h] [rbp-68h]
  __int64 *v41; // [rsp+20h] [rbp-58h] BYREF
  __int64 v42; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v43[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a1;
  v6 = a2;
  v43[1] = __readfsqword(0x28u);
  *((_DWORD *)a1 + 2) = 0;
  a1[2] = 0;
  a1[3] = a1 + 1;
  a1[4] = a1 + 1;
  a1[5] = 0;
  v7 = *(int *)(a3 + 64);
  v42 = 0;
  v8 = a2[25];
  if ( v7 < v8 )
    goto LABEL_20;
  v9 = v7;
  if ( v8 < v7 )
  {
    v22 = a2[24];
    v23 = a2[26];
    a1 = a2 + 24;
    if ( (unsigned __int64)&v42 < v22 || (a2 = (__int64 *)(v22 + 8 * v23), &v42 >= a2) )
    {
      if ( v23 >= v7 )
        goto LABEL_17;
      v28 = qvector_reserve(a1, 0, v7, 8);
      v29 = v6[25];
      a2 = (__int64 *)v6[26];
      v6[26] = v23;
      a1 = (_QWORD *)v6[24];
      v30 = v29 - 1;
      if ( v30 >= 0 )
      {
        v31 = v28;
        do
        {
          v32 = *a1;
          v31 += 8;
          ++a1;
          *(_QWORD *)(v31 - 8) = v32;
          v33 = v30-- == 0;
        }
        while ( !v33 );
        a1 = (_QWORD *)v6[24];
      }
      qfree(a1);
      v8 = v6[25];
      v6[24] = v28;
      v22 = v28;
      v6[26] = (__int64)a2;
      if ( v8 < v7 )
      {
LABEL_17:
        v24 = v42;
        while ( 1 )
        {
          *(_QWORD *)(v22 + 8 * v8++) = v24;
          if ( v7 == v8 )
            break;
          v22 = v6[24];
        }
      }
    }
    else
    {
      v43[0] = 0;
      if ( v23 >= v7 )
        goto LABEL_24;
      v34 = qvector_reserve(a1, 0, v7, 8);
      v35 = v6[25];
      a2 = (__int64 *)v6[26];
      v6[26] = v23;
      a1 = (_QWORD *)v6[24];
      v36 = v35 - 1;
      if ( v36 >= 0 )
      {
        v37 = v34;
        do
        {
          v38 = *a1;
          v37 += 8;
          ++a1;
          *(_QWORD *)(v37 - 8) = v38;
          v33 = v36-- == 0;
        }
        while ( !v33 );
        a1 = (_QWORD *)v6[24];
      }
      qfree(a1);
      v8 = v6[25];
      v6[24] = v34;
      v22 = v34;
      v6[26] = (__int64)a2;
      if ( v8 < v7 )
      {
LABEL_24:
        v27 = v43[0];
        while ( 1 )
        {
          *(_QWORD *)(v22 + 8 * v8++) = v27;
          if ( v7 == v8 )
            break;
          v22 = v6[24];
        }
      }
    }
LABEL_20:
    v10 = a4;
    v6[25] = v7;
    v9 = *(_DWORD *)(a3 + 64);
    if ( !*(_BYTE *)(a4 + 433) )
      goto LABEL_4;
    goto LABEL_21;
  }
  v10 = a4;
  if ( !*(_BYTE *)(a4 + 433) )
  {
LABEL_4:
    v11 = v9;
    v12 = 1;
    v13 = 1;
    goto LABEL_5;
  }
LABEL_21:
  a1 = (_QWORD *)v10;
  v25 = sub_26300(v10);
  v26 = v6[24];
  v12 = 2;
  *(_DWORD *)(v26 + 8) = v25;
  v13 = 2;
  *(_BYTE *)(v26 + 12) = 1;
  v11 = *(_DWORD *)(a3 + 64);
LABEL_5:
  if ( v12 >= v11 )
    sub_5F190(a1);
  v14 = 8LL * v13;
  v15 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + v14);
  if ( v13 < v9 )
  {
    v40 = 8 * (v13 + (unsigned __int64)(unsigned int)(v9 - v13));
    do
    {
      v16 = *(__int64 **)(v15 + 32);
      hexdsp = (void (__fastcall *)(__int64, __int64 **, __int64, __int64 *))get_hexdsp(a1, (const char *)a2);
      hexdsp(418, &v41, a3, v16);
      a2 = v41;
      if ( v41 == (__int64 *)-1LL || v16 == v41 )
        a2 = v16;
      a1 = (_QWORD *)a4;
      v18 = sub_265C0(a4, (unsigned __int64)a2);
      v20 = v6[24];
      v43[0] = v18;
      *(_QWORD *)(v20 + v14) = v18;
      if ( BYTE4(v18) )
      {
        a2 = v43;
        a1 = v4;
        sub_FDC0(v4, (int *)v43, HIDWORD(v18), v20, v19);
      }
      v14 += 8;
      v15 = *(_QWORD *)(v15 + 8);
    }
    while ( v14 != v40 );
  }
  return v4;
}

