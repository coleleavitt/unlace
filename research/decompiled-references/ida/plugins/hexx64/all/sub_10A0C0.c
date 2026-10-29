__int64 __fastcall sub_10A0C0(__int64 a1, int a2, __m128i *a3, unsigned __int64 a4, char a5, __int64 *a6, double a7)
{
  int v7; // eax
  int v8; // eax
  bool v9; // zf
  __int64 v11; // r13
  __int64 v12; // rax
  int v13; // r15d
  int v14; // ecx
  int v15; // r14d
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rbx
  unsigned __int64 v21; // rbx
  __int64 v22; // rsi
  char v23; // al
  __int64 *v24; // rdx
  __int64 *v25; // rdi
  __int64 *v26; // r9
  __int64 *v27; // r8
  char v28; // dl
  __int64 *v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r10
  const char *v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // ebx
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r14
  int v37; // r11d
  __int64 *v38; // r9
  __int64 *v39; // r8
  char v40; // si
  __int64 *v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  char v44; // bl
  _QWORD *v45; // rax
  char v46; // al
  __int64 v47; // rdx
  _QWORD *v48; // rbx
  int v51; // [rsp+8h] [rbp-F8h]
  int v52; // [rsp+Ch] [rbp-F4h]
  __m128i *v56; // [rsp+30h] [rbp-D0h]
  __int64 v58[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v59; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v60; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  char v62; // [rsp+70h] [rbp-90h]
  unsigned __int64 v63; // [rsp+78h] [rbp-88h]
  char v64; // [rsp+80h] [rbp-80h]
  __int64 *v65; // [rsp+90h] [rbp-70h] BYREF
  __int128 v66; // [rsp+98h] [rbp-68h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  char v68; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v69; // [rsp+B8h] [rbp-48h]
  char v70; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v71; // [rsp+C8h] [rbp-38h]

  v71 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(a1 + 52) + 1;
  *(_DWORD *)(a1 + 52) = v7;
  if ( v7 > 9999 )
    return (unsigned int)-19;
  v8 = *(_DWORD *)(a1 + 48);
  v9 = *(_QWORD *)(a4 + 8) == 0;
  v58[0] = 0;
  v58[1] = 0;
  *(_DWORD *)(a4 + 44) = v8;
  if ( v9 )
  {
LABEL_62:
    sub_64280(a6, v58, a7);
    v34 = 0;
    --*(_DWORD *)(a1 + 52);
    goto LABEL_60;
  }
  v52 = 0;
  v11 = *(_QWORD *)(a4 + 24);
  v12 = 0;
  v13 = *(unsigned __int8 *)(a4 + 32);
  v14 = *(_DWORD *)(a4 + 40);
LABEL_4:
  v15 = v13;
  v16 = *(int *)(*(_QWORD *)a4 + 4 * v12);
  v17 = *(_QWORD **)(a1 + 40);
  if ( !a5 )
    v17 = *(_QWORD **)(a1 + 32);
  v51 = v16;
  v18 = *v17 + 24 * v16;
  v19 = v11;
  v56 = (__m128i *)v18;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)v13 >= (unsigned __int8)v15
        && ((unsigned __int8)v15 < (unsigned __int8)v13 || v11 >= v19 + v14) )
      {
        v12 = ++v52;
        if ( (unsigned __int64)v52 >= *(_QWORD *)(a4 + 8) )
          goto LABEL_62;
        v13 = v15;
        v11 = v19;
        goto LABEL_4;
      }
      a7 = 0.0;
      v67 = v11;
      v65 = nullptr;
      v69 = 0xFFFFFFFF00000001LL;
      v68 = v13;
      v70 = 1;
      v66 = 0;
      v20 = sub_1041A0((unsigned __int64 *)v56, (__int64)&v65);
      if ( v20 == (_QWORD *)v56->m128i_i64[0] || (v21 = (unsigned __int64)(v20 + 3)) == 0 )
      {
        v44 = *(_BYTE *)(a4 + 48);
        v64 = 1;
        v61 = v11;
        v59 = 0;
        v62 = v13;
        v63 = 0xFFFFFFFF00000001LL;
        v60 = 0;
        v59 = qvector_reserve((__int64)&v59, 0, 1, 4);
        *(_DWORD *)(v59 + 4 * v60) = a2;
        v65 = &v59;
        v64 |= v44 & 4 | 8;
        *(_QWORD *)&v60 = v60 + 1;
        sub_1075D0(v56, (__int64)&v59, (__int64 *)&v65);
        v67 = v11;
        v65 = nullptr;
        v68 = v13;
        v69 = 0xFFFFFFFF00000001LL;
        v70 = 1;
        v66 = 0;
        v45 = sub_1041A0((unsigned __int64 *)v56, (__int64)&v65);
        if ( v45 == (_QWORD *)v56->m128i_i64[0] || (v21 = (unsigned __int64)(v45 + 3), v45 == (_QWORD *)-24LL) )
        {
          if ( !under_debugger )
            sub_383060(0xC3F5u, 0.0);
LABEL_72:
          BUG();
        }
        if ( v59 )
        {
          *(_QWORD *)&v60 = 0;
          qfree(v59);
        }
        v15 = *(unsigned __int8 *)(a4 + 32);
      }
      v22 = *(int *)(v21 + 40);
      v11 += v22;
      if ( *(_DWORD *)(v21 + 44) != *(_DWORD *)(a1 + 48) )
        break;
      v14 = *(_DWORD *)(a4 + 40);
      v19 = *(_QWORD *)(a4 + 24);
    }
    v23 = *(_BYTE *)(v21 + 32);
    if ( (_BYTE)v15 != v23 )
      break;
    v35 = *(_QWORD *)(a4 + 24);
    v36 = *(_QWORD *)(v21 + 24);
    v37 = *(_DWORD *)(a4 + 40);
    if ( v35 == v36 && (_DWORD)v22 == v37 )
      goto LABEL_29;
    v38 = *(__int64 **)(a1 + 40);
    v39 = *(__int64 **)(a1 + 32);
    v25 = v38;
    v24 = v39;
    if ( !v37 || v36 < v35 || v35 + v37 - 1 < v36 + v22 - 1 )
      goto LABEL_17;
    v40 = 3;
    if ( a5 )
    {
      v39 = *(__int64 **)(a1 + 40);
      v40 = 1;
      v38 = *(__int64 **)(a1 + 32);
    }
    v41 = *(__int64 **)(a1 + 24);
    v42 = *(_QWORD *)(a1 + 16);
    if ( v23 == 1 )
    {
      v35 = (int)v35;
    }
    else if ( v23 != 5 )
    {
      sub_101D30(0.0);
    }
    v65 = (__int64 *)v35;
    LOBYTE(v66) = v23;
    DWORD1(v66) = v37;
    v43 = sub_108C40(v56, v21, (__int64)&v65, v42, v39, v38, 0.0, v40, v41, v58);
    if ( v43 )
    {
      *(_BYTE *)(a1 + 58) = 1;
      if ( v43 == 2 || sub_64930(v58, a2) )
        goto LABEL_59;
      v46 = *(_BYTE *)(a4 + 32);
      v47 = *(_QWORD *)(a4 + 24);
      v65 = nullptr;
      v70 = 1;
      v68 = v46;
      v67 = v47;
      v69 = 0xFFFFFFFF00000001LL;
      v66 = 0;
      v48 = sub_1041A0((unsigned __int64 *)v56, (__int64)&v65);
      if ( v48 == (_QWORD *)v56->m128i_i64[0] || (v21 = (unsigned __int64)(v48 + 3)) == 0 )
      {
        if ( !under_debugger )
          sub_383060(0xCA33u, 0.0);
        goto LABEL_72;
      }
      ++*(_DWORD *)(a1 + 48);
      *(_BYTE *)(a1 + 56) = 1;
      goto LABEL_27;
    }
    if ( (*(_BYTE *)(a4 + 48) & 4) == 0 )
    {
      if ( !under_debugger )
        sub_383060(0xCA32u, 0.0);
      goto LABEL_72;
    }
LABEL_24:
    v32 = s1;
    v33 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v33 + 8) )
      v32 = *(const char **)v33;
    sub_3311F0(*(_QWORD **)(a1 + 16), 0xFFFFFFFFFFFFFFFFLL, 0x14u, v32);
    *(_BYTE *)(a1 + 57) = 1;
LABEL_27:
    v34 = sub_10A0C0(a1, v51, v56, v21, a5 ^ 1u, v58);
    if ( v34 )
      goto LABEL_60;
    *(_BYTE *)(a1 + 58) = 1;
LABEL_29:
    if ( sub_64930(v58, a2) )
      goto LABEL_59;
    v14 = *(_DWORD *)(a4 + 40);
    v19 = *(_QWORD *)(a4 + 24);
    v15 = *(unsigned __int8 *)(a4 + 32);
  }
  v24 = *(__int64 **)(a1 + 32);
  v25 = *(__int64 **)(a1 + 40);
LABEL_17:
  v26 = v24;
  v27 = v25;
  v28 = 1;
  if ( a5 )
  {
    v27 = v26;
    v28 = 3;
    v26 = v25;
  }
  v29 = *(__int64 **)(a1 + 24);
  v30 = *(_QWORD *)(a1 + 16);
  if ( v23 == 1 )
  {
    v31 = *(int *)(v21 + 24);
  }
  else
  {
    if ( v23 != 5 )
      sub_101D30(0.0);
    v31 = *(_QWORD *)(v21 + 24);
  }
  DWORD1(v66) = *(_DWORD *)(v21 + 40);
  v65 = (__int64 *)v31;
  LOBYTE(v66) = v23;
  if ( !(unsigned int)sub_108C40(a3, a4, (__int64)&v65, v30, v27, v26, 0.0, v28, v29, v58) )
  {
    if ( (*(_BYTE *)(v21 + 48) & 4) == 0 )
    {
      if ( !under_debugger )
        sub_383060(0xCA34u, 0.0);
      goto LABEL_72;
    }
    goto LABEL_24;
  }
  *(_BYTE *)(a1 + 58) = 1;
  *(_BYTE *)(a1 + 56) = 1;
LABEL_59:
  v34 = -36;
LABEL_60:
  qfree(v58[0]);
  return v34;
}

