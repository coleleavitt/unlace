__int64 __fastcall sub_3D9A00(_QWORD *a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  unsigned int v6; // eax
  __int64 v8; // rbx
  __int64 v9; // rdx
  const char *v10; // rdi
  __int64 **v11; // rbx
  __int64 v12; // r15
  const char **v14; // rax
  __int64 *v15; // r13
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  char *v22; // r15
  bool v23; // al
  __int64 v24; // rdi
  char v25; // al
  int v26; // eax
  const char *v27; // rsi
  __m128i v28; // xmm0
  _DWORD *v29; // rbx
  _DWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // [rsp+0h] [rbp-160h]
  size_t n; // [rsp+8h] [rbp-158h]
  size_t na; // [rsp+8h] [rbp-158h]
  _QWORD *nb; // [rsp+8h] [rbp-158h]
  char v38; // [rsp+1Fh] [rbp-141h] BYREF
  int v39; // [rsp+20h] [rbp-140h] BYREF
  int v40; // [rsp+24h] [rbp-13Ch] BYREF
  unsigned __int64 v41; // [rsp+28h] [rbp-138h] BYREF
  char *v42; // [rsp+30h] [rbp-130h] BYREF
  __int128 v43; // [rsp+38h] [rbp-128h]
  unsigned __int64 v44; // [rsp+50h] [rbp-110h] BYREF
  __int128 v45; // [rsp+58h] [rbp-108h]
  __m128i v46; // [rsp+70h] [rbp-F0h] BYREF
  _DWORD v47[7]; // [rsp+90h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+ACh] [rbp-B4h]
  __int128 v49; // [rsp+B8h] [rbp-A8h]
  __int128 v50; // [rsp+C8h] [rbp-98h]
  _QWORD v51[3]; // [rsp+E0h] [rbp-80h] BYREF
  __int128 v52; // [rsp+F8h] [rbp-68h]
  __m128i v53; // [rsp+108h] [rbp-58h] BYREF
  _DWORD *v54; // [rsp+118h] [rbp-48h]
  __int64 v55; // [rsp+120h] [rbp-40h]
  unsigned __int64 v56; // [rsp+128h] [rbp-38h]

  v6 = *(_DWORD *)a2;
  v56 = __readfsqword(0x28u);
  if ( v6 > 0x2F )
  {
    v14 = *(const char ***)(a2 + 8);
    v11 = (__int64 **)(v14 + 1);
    *(_QWORD *)(a2 + 8) = v14 + 1;
    v10 = *v14;
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 16);
    v9 = v6 + 8;
    *(_DWORD *)a2 = v9;
    v10 = *(const char **)(v8 + v6);
    if ( (unsigned int)v9 <= 0x2F )
    {
      v11 = (__int64 **)(v9 + v8);
      *(_DWORD *)a2 = v6 + 16;
      goto LABEL_4;
    }
    v11 = *(__int64 ***)(a2 + 8);
  }
  *(_QWORD *)(a2 + 8) = v11 + 1;
LABEL_4:
  v12 = 0;
  if ( strncmp(v10, "Microcode-", 0xAu) )
    return v12;
  v15 = *v11;
  v16 = (*v11)[1];
  if ( !v16 )
    goto LABEL_15;
  n = 0;
  v17 = *v15;
  while ( !*(_QWORD *)(v17 + 8) || strcmp(*(const char **)v17, "view_index") )
  {
    ++n;
    v17 += 40;
    if ( v16 == n )
      goto LABEL_15;
  }
  if ( *(_DWORD *)(v17 + 24) == 1 )
    v34 = *(_QWORD *)(v17 + 32);
  else
LABEL_15:
    LODWORD(v34) = -1;
  v42 = nullptr;
  v43 = 0;
  v45 = 0;
  v18 = v15[1];
  v44 = 0;
  if ( !v18 )
    return 0;
  na = 0;
  v19 = *v15;
  while ( !*(_QWORD *)(v19 + 8) || strcmp(*(const char **)v19, "location") )
  {
    ++na;
    v19 += 40;
    if ( v18 == na )
      goto LABEL_26;
  }
  if ( *(_DWORD *)(v19 + 24) != 2 )
    return 0;
  v20 = *(_QWORD *)(v19 + 32);
  if ( (char **)v20 == &v42 )
  {
LABEL_26:
    v12 = 0;
    goto LABEL_24;
  }
  v21 = *(_QWORD *)(v20 + 8);
  v12 = 0;
  if ( v21 <= 1 )
    goto LABEL_24;
  v22 = *(char **)v20;
  v42 = (char *)qvector_reserve();
  *(_QWORD *)&v43 = v21;
  memmove(v42, v22, v21 - 1);
  v42[v21 - 1] = 0;
  if ( (unsigned __int64)v43 <= 1 || (v43 & 1) == 0 )
  {
    v24 = v44;
    v12 = 0;
    goto LABEL_32;
  }
  v23 = sub_3C9F70((__int64 *)&v44, (__int64 *)&v42);
  v24 = v44;
  v12 = 0;
  if ( v23 )
  {
    *(_QWORD *)v47 = off_4B58B0;
    v41 = v44;
    *(_QWORD *)&v47[3] = 3;
    *(_QWORD *)&v47[5] = 0;
    v48 = 0x4900000000LL;
    v49 = -1;
    v50 = -1;
    v25 = sub_3C7F30((__int64)v47, &v41, v44 + v45);
    v24 = v44;
    if ( !v25 )
    {
      v12 = 0;
      goto LABEL_32;
    }
    if ( v41 == v44 + (_QWORD)v45 )
    {
      v26 = v48 + 1;
      if ( (int)v48 + 1 < (unsigned int)dword_4BA944 )
        v26 = dword_4BA944;
      dword_4BA944 = v26;
      nb = sub_3CEC80(a1, 0, v34, v48);
      v51[0] = 0;
      v51[1] = -1;
      v51[2] = 0;
      v54 = nullptr;
      v55 = 3;
      v52 = 0;
      v53 = 0;
      if ( (unsigned __int8)sub_3D99B0((__int64)nb, (__int64)v51, v47, 0.0, a4, a5, a6) )
      {
        v28 = _mm_loadu_si128(&v53);
        v53 = 0;
        v46 = v28;
        if ( (unsigned __int8)sub_3CE190((__int64)nb, &v46) )
        {
          if ( v46.m128i_i64[1] )
            sub_3CDDE0((volatile signed __int32 *)v46.m128i_i64[1]);
          v29 = v54;
          v30 = (_DWORD *)nb[10];
          nb[10] = v54;
          v54 = v30;
          v31 = sub_3CAD10(v15, "is_synchronized", 5);
          if ( v31 )
          {
            if ( *(_DWORD *)v31 != 5 )
            {
              if ( !under_debugger )
                sub_37B760(0x501u, *(double *)v28.m128i_i64);
              BUG();
            }
            if ( *(_BYTE *)(v31 + 8) )
              nb[11] = v29;
          }
          v27 = "x_cursor_in_view";
          v32 = sub_3CAD10(v15, "x_cursor_in_view", 1);
          if ( v32 )
          {
            if ( *(_DWORD *)v32 != 1 )
              sub_3C77A0(*(double *)v28.m128i_i64);
            *((_DWORD *)nb + 10) = *(_QWORD *)(v32 + 8);
            memset(&v46, 0, 24);
            sub_3D4350((__int64)nb, v46.m128i_i64, &v39, &v38, &v40, 0.0, 0.0, a5, a6, 0, v29);
            v33 = nb[8];
            if ( v33 && (unsigned int)(*(_DWORD *)(v33 + 60) - 1) >= 2 )
              v33 = 0;
            v27 = (const char *)nb[10];
            if ( !(unsigned __int8)sub_3CD290((__int64)nb, (__int64)v27, v33, *((_DWORD *)nb + 10), &v46, 0.0) )
              *((_DWORD *)nb + 10) = HIDWORD(v55);
            sub_1A8CD0(v46.m128i_i64);
          }
          v12 = *nb;
          goto LABEL_41;
        }
        if ( v46.m128i_i64[1] )
          sub_3CDDE0((volatile signed __int32 *)v46.m128i_i64[1]);
      }
      v27 = (const char *)nb;
      sub_3CE9E0(a1);
      v12 = 0;
LABEL_41:
      sub_3CF5C0(v51, (__int64)v27);
      v24 = v44;
    }
  }
LABEL_32:
  if ( v24 )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
  }
LABEL_24:
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree();
  }
  return v12;
}

