bool __fastcall sub_7B580(_QWORD *a1, char **a2, __int64 a3)
{
  char *v3; // rbx
  bool result; // al
  _QWORD *v5; // rbp
  _QWORD *v6; // r14
  __int64 v7; // r13
  unsigned __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r14
  _DWORD *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned int v15; // r13d
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rdi
  void *v18; // rdi
  _QWORD *v19; // rax
  void *v20; // r12
  _QWORD *v21; // r14
  char *v22; // rbp
  void *v23; // rbx
  _QWORD *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // r13
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r15
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 v33; // r13
  int v34; // r12d
  __int64 v35; // r12
  __int64 v36; // r13
  __int64 v37; // rax
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // r13
  __int64 v40; // rbx
  void *v41; // rdi
  __int64 v42; // r12
  __int64 i; // r14
  __int64 v44; // rdx
  __int64 v45; // r13
  int v46; // r12d
  __int64 v47; // r13
  __int64 v48; // r15
  bool v49; // r12
  bool v50; // [rsp+4h] [rbp-164h]
  _QWORD *v51; // [rsp+18h] [rbp-150h]
  __int64 v52; // [rsp+18h] [rbp-150h]
  __int64 v53; // [rsp+18h] [rbp-150h]
  _QWORD *v54; // [rsp+18h] [rbp-150h]
  _QWORD *v55; // [rsp+18h] [rbp-150h]
  unsigned int v56; // [rsp+18h] [rbp-150h]
  __int64 v57; // [rsp+18h] [rbp-150h]
  unsigned int v58; // [rsp+20h] [rbp-148h]
  __int64 v59; // [rsp+20h] [rbp-148h]
  char *v60; // [rsp+28h] [rbp-140h]
  _QWORD *v61; // [rsp+30h] [rbp-138h]
  __int64 v62; // [rsp+38h] [rbp-130h]
  unsigned __int64 v63; // [rsp+40h] [rbp-128h]
  char *v64; // [rsp+48h] [rbp-120h]
  unsigned int v65; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v66; // [rsp+54h] [rbp-114h] BYREF
  char *v67; // [rsp+58h] [rbp-110h] BYREF
  __int64 v68; // [rsp+60h] [rbp-108h] BYREF
  __int128 v69; // [rsp+68h] [rbp-100h]
  __m128i v70[4]; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-A8h]
  __int64 v72; // [rsp+C8h] [rbp-A0h]
  void *v73[3]; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v74; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v75; // [rsp+F0h] [rbp-78h]
  __int64 v76; // [rsp+110h] [rbp-58h]
  __int64 v77; // [rsp+118h] [rbp-50h]
  unsigned __int64 v78; // [rsp+128h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  v67 = *a2;
  v3 = &v67[a3];
  if ( __CFADD__(a3, v67) )
    return 0;
  v5 = a1;
  v6 = a2;
  if ( !sub_6C650(v73, (unsigned __int64 *)&v67, (__int64)&v67[a3]) )
    return 0;
  v7 = LODWORD(v73[0]);
  v8 = a1[3];
  v9 = (int)v73[0];
  if ( v8 < LODWORD(v73[0]) )
  {
    v12 = a1[2];
    if ( a1[4] < (unsigned __int64)LODWORD(v73[0]) )
    {
      v37 = sub_1987B0(a1 + 2, v12, LODWORD(v73[0]), 4);
      v8 = a1[3];
      a1[2] = v37;
      v12 = v37;
    }
    memset((void *)(v12 + 4 * v8), 0, 4 * (v7 - v8));
    a1[3] = v7;
LABEL_8:
    v51 = v6;
    v10 = 0;
    while ( 1 )
    {
      v11 = (_DWORD *)(v10 + a1[2]);
      if ( !sub_6C650(v11, (unsigned __int64 *)&v67, (__int64)v3) )
        return 0;
      v10 += 4;
      --*v11;
      if ( 4 * v7 == v10 )
      {
        v6 = v51;
        goto LABEL_16;
      }
    }
  }
  if ( LODWORD(v73[0]) != v8 )
    a1[3] = LODWORD(v73[0]);
  if ( v9 )
    goto LABEL_8;
LABEL_16:
  if ( !sub_6C650(&v65, (unsigned __int64 *)&v67, (__int64)v3) )
    return 0;
  v13 = v65;
  v14 = a1[6];
  v15 = v65;
  if ( v65 != v14 )
  {
    memset(v70, 0, 24);
    if ( v65 < v14 )
    {
      v56 = v65;
      v38 = v65;
      v39 = v14;
      v59 = v65;
      v60 = v3;
      v61 = v6;
      do
      {
        v40 = v5[5] + 24 * v38;
        v41 = *(void **)v40;
        if ( *(_QWORD *)v40 )
        {
          v42 = *(_QWORD *)(v40 + 8);
          if ( v42 )
          {
            for ( i = 0; i != v42; ++i )
            {
              v44 = 5 * i;
              sub_2F820((__int64)v41 + 16 * v44 + 16);
              v41 = *(void **)v40;
            }
          }
          *(_QWORD *)(v40 + 8) = 0;
          j__free(v41);
        }
        ++v38;
      }
      while ( v38 < v39 );
      v13 = v59;
      v15 = v56;
      v3 = v60;
      v6 = v61;
      v5[6] = v59;
    }
    else
    {
      v16 = a1[5];
      v17 = a1 + 5;
      if ( (unsigned __int64)v70 < v16 || (unsigned __int64)v70 >= v16 + 24LL * v5[7] )
      {
        v57 = v65;
        sub_7B200(v17, v65, v70);
        v13 = v57;
      }
      else
      {
        memset(v73, 0, sizeof(v73));
        v52 = v65;
        sub_7B200(v17, v65, v73);
        v18 = v73[0];
        v13 = v52;
        if ( v73[0] )
        {
          if ( v73[1] )
          {
            v19 = v6;
            v20 = v73[1];
            v21 = v5;
            v22 = v3;
            v23 = nullptr;
            v24 = v19;
            do
            {
              v25 = 5LL * (_QWORD)v23;
              v23 = (char *)v23 + 1;
              sub_2F820((__int64)v18 + 16 * v25 + 16);
              v18 = v73[0];
            }
            while ( v20 != v23 );
            v13 = v52;
            v3 = v22;
            v5 = v21;
            v6 = v24;
          }
          v53 = v13;
          v73[1] = nullptr;
          j__free(v18);
          v13 = v53;
        }
      }
    }
  }
  if ( v15 )
  {
    v26 = 0;
    v62 = 24 * v13;
    while ( sub_6C650(&v66, (unsigned __int64 *)&v67, (__int64)v3) )
    {
      v27 = v66;
      v58 = v66;
      v54 = (_QWORD *)(v26 + v5[5]);
      if ( v66 != v54[1] )
      {
        v68 = 0;
        memset(v73, 0, sizeof(v73));
        v74 = 0;
        v69 = 0;
        v75 = 0;
        sub_66410(&v74, (__int64)&v68);
        v70[0] = _mm_load_si128((const __m128i *)&xmmword_1B6B10);
        sub_2F860((__int64)v70[1].m128i_i64, (__int64)v73);
        sub_2F820((__int64)v73);
        v71 = 0;
        v72 = 0;
        v28 = v54[1];
        if ( v27 < v28 )
        {
          v63 = v27;
          v64 = v3;
          v29 = v27;
          v30 = v54[1];
          do
          {
            v31 = 5 * v29++;
            sub_2F820(*v54 + 16 * v31 + 16);
          }
          while ( v29 < v30 );
          v27 = v63;
          v3 = v64;
          v54[1] = v63;
        }
        else if ( v28 < v27 )
        {
          if ( (unsigned __int64)v70 < *v54 || (unsigned __int64)v70 >= 80LL * v54[2] + *v54 )
          {
            sub_7B440(v54, v27, (__int64)v70);
          }
          else
          {
            *(__m128i *)v73 = _mm_load_si128(v70);
            sub_2F860((__int64)&v73[2], (__int64)v70[1].m128i_i64);
            v76 = v71;
            v77 = v72;
            sub_7B440(v54, v27, (__int64)v73);
            sub_2F820((__int64)&v73[2]);
          }
          sub_2F820((__int64)v70[1].m128i_i64);
LABEL_42:
          v55 = v6;
          v32 = 0;
          while ( sub_71C00(v32 + *(_QWORD *)(v5[5] + v26), (unsigned __int64 *)&v67, v3 - v67) )
          {
            v32 += 80;
            if ( 80 * v27 == v32 )
            {
              v6 = v55;
              goto LABEL_47;
            }
          }
          return 0;
        }
        sub_2F820((__int64)v70[1].m128i_i64);
      }
      if ( v58 )
        goto LABEL_42;
LABEL_47:
      v26 += 24;
      if ( v62 == v26 )
        goto LABEL_48;
    }
    return 0;
  }
LABEL_48:
  if ( !sub_6C650(v73, (unsigned __int64 *)&v67, (__int64)v3) )
    return 0;
  v33 = LODWORD(v73[0]);
  v34 = (int)v73[0];
  if ( LODWORD(v73[0]) != v5[9] )
    sub_67B80(v5 + 8, LODWORD(v73[0]));
  if ( v34 )
  {
    v35 = 0;
    v36 = 24 * v33;
    while ( (unsigned __int8)sub_6B1B0((__int64 *)(v35 + v5[8]), (const void **)&v67, (unsigned __int64)v3) )
    {
      v35 += 24;
      if ( v36 == v35 )
        goto LABEL_66;
    }
    return 0;
  }
LABEL_66:
  result = sub_6C650(v73, (unsigned __int64 *)&v67, (__int64)v3);
  if ( !result )
    return 0;
  v45 = LODWORD(v73[0]);
  v46 = (int)v73[0];
  if ( LODWORD(v73[0]) != v5[12] )
  {
    v50 = result;
    sub_67B80(v5 + 11, LODWORD(v73[0]));
    result = v50;
  }
  if ( v46 )
  {
    v47 = 24 * v45;
    v48 = 0;
    v49 = result;
    while ( (unsigned __int8)sub_6B1B0((__int64 *)(v48 + v5[11]), (const void **)&v67, (unsigned __int64)v3) )
    {
      v48 += 24;
      if ( v48 == v47 )
      {
        result = v49;
        goto LABEL_75;
      }
    }
    return 0;
  }
LABEL_75:
  *v6 = v67;
  return result;
}
