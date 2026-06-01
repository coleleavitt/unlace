__int64 __fastcall sub_153210(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6)
{
  __int64 v6; // r15
  __int64 v8; // rbx
  bool v9; // zf
  __int64 v10; // r14
  __int64 v11; // r13
  unsigned int v12; // eax
  int *v13; // r8
  int v14; // eax
  __int64 v15; // r15
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // r8
  __int64 v21; // r15
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r13
  unsigned int v30; // eax
  int *v31; // r8
  __int64 v32; // rax
  unsigned __int8 *v33; // rsi
  _QWORD *v34; // rdx
  unsigned int *v35; // r14
  char v36; // al
  int v37; // edx
  __int64 v38; // r8
  __int64 v39; // r15
  unsigned int v40; // eax
  int v41; // eax
  __int64 v42; // rax
  unsigned int v43; // eax
  unsigned int v44; // eax
  char v45; // al
  int v46; // eax
  const char *v47; // rdx
  __int64 v48; // r12
  int v49; // eax
  _DWORD *v50; // rsi
  _DWORD *v51; // rsi
  _DWORD *v52; // rsi
  _DWORD *v53; // rsi
  _DWORD *v54; // rsi
  __int64 v55; // [rsp-10h] [rbp-E0h]
  __int64 v56; // [rsp+8h] [rbp-C8h]
  __int64 v57; // [rsp+10h] [rbp-C0h]
  __int64 v58; // [rsp+18h] [rbp-B8h]
  __int64 v59; // [rsp+20h] [rbp-B0h]
  unsigned __int64 *v60; // [rsp+20h] [rbp-B0h]
  __int64 v61; // [rsp+20h] [rbp-B0h]
  __int64 v62; // [rsp+20h] [rbp-B0h]
  __int64 v63; // [rsp+20h] [rbp-B0h]
  __int64 v64; // [rsp+28h] [rbp-A8h]
  unsigned __int8 v65; // [rsp+28h] [rbp-A8h]
  __int64 v66; // [rsp+38h] [rbp-98h] BYREF
  unsigned int *v67[2]; // [rsp+40h] [rbp-90h] BYREF
  __m128i si128; // [rsp+50h] [rbp-80h] BYREF
  __int64 v69; // [rsp+60h] [rbp-70h]
  __int128 v70; // [rsp+68h] [rbp-68h]
  int v71; // [rsp+78h] [rbp-58h]
  __int64 v72; // [rsp+80h] [rbp-50h]
  int v73; // [rsp+88h] [rbp-48h]
  unsigned __int64 v74; // [rsp+98h] [rbp-38h]

  v6 = a4 + 32;
  v8 = a1;
  v64 = a3;
  v9 = *(_BYTE *)(a4 + 32) == 4;
  v74 = __readfsqword(0x28u);
  v10 = a4;
  v58 = a4 + 32;
  if ( !v9 )
    goto LABEL_20;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v6 + 8);
    v12 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 != 19 )
      break;
    v20 = v11 + 48;
    if ( *(_BYTE *)(v11 + 48) != 4 )
      goto LABEL_15;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v20 + 8);
      v22 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 != 19 )
        break;
      v24 = v21 + 48;
      if ( *(_BYTE *)(v21 + 48) != 4 )
        goto LABEL_44;
      while ( 1 )
      {
        v25 = *(_QWORD *)(v24 + 8);
        v26 = *(_DWORD *)v25;
        if ( *(_DWORD *)v25 == 19 )
        {
          v63 = *(_QWORD *)(v24 + 8);
          v45 = sub_150240(a1, (_BYTE *)(v25 + 48), *(double *)a5.m128i_i64);
          v25 = v63;
          if ( !v45 )
            return 0;
          goto LABEL_113;
        }
        if ( v26 > 0x13 )
        {
          if ( v26 == 22 )
            goto LABEL_102;
LABEL_44:
          v27 = *(_DWORD *)(a1 + 64);
          goto LABEL_45;
        }
        if ( v26 != 9 )
          break;
LABEL_113:
        v24 = v25 + 32;
        if ( *(_BYTE *)(v25 + 32) != 4 )
          goto LABEL_44;
      }
      if ( v26 != 14 )
        goto LABEL_44;
LABEL_102:
      v62 = v24;
      v44 = sub_1227B0(*(int **)(v24 + 8), &v66, v67, 1);
      v24 = v62;
      a3 = v44;
      v27 = *(_DWORD *)(a1 + 64);
      if ( (_BYTE)a3 )
      {
        a3 = (unsigned int)v66;
        if ( (v66 & 7) == 0 )
        {
          a3 = (unsigned int)v66 >> 3;
          if ( (unsigned int)a3 < v27 )
          {
            a4 = (unsigned int)(v27 - a3 - 1);
            if ( !*(_QWORD *)(a1 + 8 * a4) )
            {
              a3 = (__int64)v67[0];
              if ( *(_BYTE *)v67[0] == 4 )
              {
                v54 = *((_DWORD **)v67[0] + 1);
                if ( *v54 == 9 )
                  a3 = (__int64)(v54 + 8);
              }
              if ( *(_DWORD *)(a3 + 4) == 1 )
              {
                *(_QWORD *)(a1 + 8 * a4) = a3;
                goto LABEL_48;
              }
            }
          }
        }
      }
LABEL_45:
      if ( v27 <= 0 )
        goto LABEL_133;
      v28 = v27 - 1;
      if ( *(_QWORD *)(a1 + 8 * v28) )
        return 0;
      *(_QWORD *)(a1 + 8 * v28) = v24;
LABEL_48:
      v20 = v21 + 32;
      if ( *(_BYTE *)(v21 + 32) != 4 )
      {
LABEL_15:
        v16 = *(_DWORD *)(a1 + 64);
        goto LABEL_16;
      }
    }
    if ( v22 > 0x13 )
    {
      if ( v22 != 22 )
        goto LABEL_15;
    }
    else
    {
      if ( v22 == 9 )
        goto LABEL_48;
      if ( v22 != 14 )
        goto LABEL_15;
    }
    v59 = v20;
    v23 = sub_1227B0(*(int **)(v20 + 8), &v66, v67, 1);
    v20 = v59;
    a3 = v23;
    v16 = *(_DWORD *)(a1 + 64);
    if ( !(_BYTE)a3 )
      goto LABEL_16;
    a3 = (unsigned int)v66;
    if ( (v66 & 7) != 0 )
      goto LABEL_16;
    a3 = (unsigned int)v66 >> 3;
    if ( (unsigned int)a3 >= v16 )
      goto LABEL_16;
    a4 = (unsigned int)(v16 - a3);
    a3 = (unsigned int)(a4 - 1);
    if ( *(_QWORD *)(a1 + 8 * a3) )
      goto LABEL_16;
    a4 = (__int64)v67[0];
    if ( *(_BYTE *)v67[0] == 4 )
    {
      v52 = *((_DWORD **)v67[0] + 1);
      if ( *v52 == 9 )
        a4 = (__int64)(v52 + 8);
    }
    if ( *(_DWORD *)(a4 + 4) != 1 )
    {
LABEL_16:
      if ( v16 <= 0 )
      {
        if ( under_debugger )
          goto LABEL_138;
        goto LABEL_132;
      }
      v17 = v16 - 1;
      if ( *(_QWORD *)(a1 + 8 * v17) )
        return 0;
      *(_QWORD *)(a1 + 8 * v17) = v20;
    }
    else
    {
      *(_QWORD *)(a1 + 8 * a3) = a4;
    }
LABEL_19:
    v6 = v11 + 32;
    if ( *(_BYTE *)(v11 + 32) != 4 )
    {
LABEL_20:
      v14 = *(_DWORD *)(a1 + 64);
      goto LABEL_21;
    }
  }
  if ( v12 > 0x13 )
  {
    v13 = *(int **)(v6 + 8);
    if ( v12 != 22 )
      goto LABEL_20;
  }
  else
  {
    if ( v12 == 9 )
      goto LABEL_19;
    v13 = *(int **)(v6 + 8);
    if ( v12 != 14 )
      goto LABEL_20;
  }
  a3 = (unsigned int)sub_1227B0(v13, &v66, v67, 1);
  v14 = *(_DWORD *)(a1 + 64);
  if ( !(_BYTE)a3 )
    goto LABEL_21;
  a3 = (unsigned int)v66;
  if ( (v66 & 7) != 0 )
    goto LABEL_21;
  a3 = (unsigned int)v66 >> 3;
  if ( (unsigned int)a3 >= v14 )
    goto LABEL_21;
  a4 = (unsigned int)(v14 - a3);
  a3 = (unsigned int)(a4 - 1);
  if ( *(_QWORD *)(a1 + 8 * a3) )
    goto LABEL_21;
  a4 = (__int64)v67[0];
  if ( *(_BYTE *)v67[0] == 4 )
  {
    v50 = *((_DWORD **)v67[0] + 1);
    if ( *v50 == 9 )
      a4 = (__int64)(v50 + 8);
  }
  if ( *(_DWORD *)(a4 + 4) != 1 )
  {
LABEL_21:
    if ( v14 <= 0 )
    {
      if ( under_debugger )
        goto LABEL_138;
      goto LABEL_132;
    }
    v18 = v14 - 1;
    if ( *(_QWORD *)(a1 + 8 * v18) )
      return 0;
    *(_QWORD *)(a1 + 8 * v18) = v6;
    v57 = v10 + 48;
    if ( *(_BYTE *)(v10 + 48) != 4 )
      return 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8 * a3) = a4;
    v57 = v10 + 48;
    v15 = v10 + 48;
    if ( *(_BYTE *)(v10 + 48) != 4 )
      goto LABEL_57;
  }
  v15 = v57;
LABEL_52:
  v29 = *(_QWORD *)(v15 + 8);
  v30 = *(_DWORD *)v29;
  if ( *(_DWORD *)v29 == 19 )
  {
    v38 = v29 + 48;
    if ( *(_BYTE *)(v29 + 48) != 4 )
      goto LABEL_87;
    while ( 1 )
    {
      v39 = *(_QWORD *)(v38 + 8);
      v40 = *(_DWORD *)v39;
      if ( *(_DWORD *)v39 == 19 )
      {
        if ( !(unsigned __int8)sub_150240(a1, (_BYTE *)(v39 + 48), *(double *)a5.m128i_i64) )
          return 0;
      }
      else
      {
        if ( v40 > 0x13 )
        {
          if ( v40 == 22 )
            goto LABEL_94;
LABEL_87:
          v41 = *(_DWORD *)(a1 + 64);
LABEL_88:
          if ( v41 > 0 )
          {
            v42 = v41 - 1;
            if ( !*(_QWORD *)(a1 + 8 * v42) )
            {
              *(_QWORD *)(a1 + 8 * v42) = v38;
              goto LABEL_91;
            }
            return 0;
          }
          if ( under_debugger )
LABEL_138:
            BUG();
LABEL_132:
          sub_383060(0xCD45u, *(double *)a5.m128i_i64);
        }
        if ( v40 != 9 )
        {
          if ( v40 != 14 )
            goto LABEL_87;
LABEL_94:
          v61 = v38;
          v43 = sub_1227B0(*(int **)(v38 + 8), &v66, v67, 1);
          v38 = v61;
          a3 = v43;
          v41 = *(_DWORD *)(a1 + 64);
          if ( !(_BYTE)a3 )
            goto LABEL_88;
          a3 = (unsigned int)v66;
          if ( (v66 & 7) != 0 )
            goto LABEL_88;
          a3 = (unsigned int)v66 >> 3;
          if ( (unsigned int)a3 >= v41 )
            goto LABEL_88;
          a4 = (unsigned int)(v41 - a3 - 1);
          if ( *(_QWORD *)(a1 + 8 * a4) )
            goto LABEL_88;
          a3 = (__int64)v67[0];
          if ( *(_BYTE *)v67[0] == 4 )
          {
            v53 = *((_DWORD **)v67[0] + 1);
            if ( *v53 == 9 )
              a3 = (__int64)(v53 + 8);
          }
          if ( *(_DWORD *)(a3 + 4) != 1 )
            goto LABEL_88;
          *(_QWORD *)(a1 + 8 * a4) = a3;
LABEL_91:
          v15 = v29 + 32;
          if ( *(_BYTE *)(v29 + 32) != 4 )
          {
LABEL_56:
            v14 = *(_DWORD *)(a1 + 64);
            goto LABEL_57;
          }
          goto LABEL_52;
        }
      }
      v38 = v39 + 32;
      if ( *(_BYTE *)(v39 + 32) != 4 )
        goto LABEL_87;
    }
  }
  if ( v30 > 0x13 )
  {
    v31 = *(int **)(v15 + 8);
    if ( v30 != 22 )
      goto LABEL_56;
  }
  else
  {
    if ( v30 == 9 )
      goto LABEL_91;
    v31 = *(int **)(v15 + 8);
    if ( v30 != 14 )
      goto LABEL_56;
  }
  a3 = (unsigned int)sub_1227B0(v31, &v66, v67, 1);
  v14 = *(_DWORD *)(a1 + 64);
  if ( !(_BYTE)a3 )
    goto LABEL_57;
  a3 = (unsigned int)v66;
  if ( (v66 & 7) != 0 )
    goto LABEL_57;
  a3 = (unsigned int)v66 >> 3;
  if ( (unsigned int)a3 >= v14 )
    goto LABEL_57;
  a4 = (unsigned int)(v14 - a3);
  a3 = (unsigned int)(a4 - 1);
  if ( *(_QWORD *)(a1 + 8 * a3) )
    goto LABEL_57;
  a4 = (__int64)v67[0];
  if ( *(_BYTE *)v67[0] == 4 )
  {
    v51 = *((_DWORD **)v67[0] + 1);
    if ( *v51 == 9 )
      a4 = (__int64)(v51 + 8);
  }
  if ( *(_DWORD *)(a4 + 4) != 1 )
  {
LABEL_57:
    if ( v14 > 0 )
    {
      v32 = v14 - 1;
      if ( *(_QWORD *)(a1 + 8 * v32) )
        return 0;
      *(_QWORD *)(a1 + 8 * v32) = v15;
      v14 = *(_DWORD *)(a1 + 64);
      goto LABEL_60;
    }
LABEL_133:
    if ( under_debugger )
      goto LABEL_138;
    goto LABEL_132;
  }
  *(_QWORD *)(a1 + 8 * a3) = a4;
LABEL_60:
  v33 = *(unsigned __int8 **)a1;
  if ( v14 > 0 )
  {
    v34 = (_QWORD *)a1;
    a4 = a1 + 8LL * v14;
    while ( *v34 )
    {
      if ( ++v34 == (_QWORD *)a4 )
      {
        a3 = a2[30].m128i_i64[0];
        v60 = *(unsigned __int64 **)(a3 + 112);
        if ( v14 == 1 )
          goto LABEL_70;
        v56 = v10;
        v35 = (_DWORD *)&byte_1;
        while ( 1 )
        {
          v36 = sub_12FF70(
                  (__int64)v60,
                  (__int64 *)v67,
                  a2,
                  v64,
                  (__int64)v33,
                  v64,
                  a5,
                  a6,
                  *(_QWORD *)(a1 + 8LL * (_QWORD)v35));
          a4 = v55;
          if ( !v36 || v67[0] != v35 )
            return 0;
          v35 = (unsigned int *)((char *)v35 + 1);
          if ( *(_DWORD *)(a1 + 64) <= (int)v35 )
          {
            v10 = v56;
            v8 = a1;
            goto LABEL_70;
          }
        }
      }
    }
    return 0;
  }
  v60 = *(unsigned __int64 **)(a2[30].m128i_i64[0] + 112);
LABEL_70:
  sub_123A40((__int64)v67, v33, a3, a4);
  v37 = *(_DWORD *)(v8 + 64);
  v69 = 0;
  v71 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v72 = 0;
  v73 = 0;
  v70 = 0;
  v65 = sub_12AB50(v67, v60, v37, 1, (__m128i)0LL);
  if ( v65 )
  {
    sub_32C430(&v66, (__int64)v60, *(_DWORD *)(v8 + 64), 2);
    copy_tinfo_t();
    clear_tinfo_t();
    v46 = *(_DWORD *)(v8 + 64);
    v47 = "_byteswap_ushort";
    if ( v46 != 2 )
    {
      v47 = "_byteswap_uint64";
      if ( v46 == 4 )
        v47 = "_byteswap_ulong";
    }
    v48 = sub_335B10(
            a2[4].m128i_i64[0],
            *(_QWORD *)(v10 + 24),
            (__int64)v47,
            (__int64)&si128.m128i_i64[1],
            1,
            (__int64)v67,
            1);
    *(_DWORD *)(*(_QWORD *)(v48 + 72) + 284LL) = 12;
    *(_DWORD *)(*(_QWORD *)(v48 + 72) + 280LL) |= 0x10u;
    sub_11CDA0(v57);
    sub_11CDA0(v58);
    *(_BYTE *)(v10 + 32) = 4;
    *(_QWORD *)(v10 + 40) = v48;
    v49 = *(_DWORD *)(v8 + 64);
    *(_DWORD *)v10 = 4;
    *(_DWORD *)(v10 + 36) = v49;
  }
  cleanup_argloc();
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69);
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)v67);
  return v65;
}

