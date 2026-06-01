const char *__fastcall sub_D170(_BYTE *a1, __int64 *a2, _BYTE *a3)
{
  __int64 v5; // rax
  const char *v6; // rax
  const char *v7; // r14
  size_t v8; // rax
  __int64 v9; // r8
  size_t v10; // r9
  size_t v11; // r10
  __int64 v12; // rsi
  size_t v13; // rdx
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 (*v22)(); // rax
  char v23; // al
  __int64 ph; // rbx
  int v25; // eax
  size_t v26; // [rsp+0h] [rbp-978h]
  unsigned __int64 v27; // [rsp+0h] [rbp-978h]
  __int64 v28; // [rsp+8h] [rbp-970h]
  __int64 v29; // [rsp+8h] [rbp-970h]
  size_t v30; // [rsp+10h] [rbp-968h]
  size_t v31; // [rsp+18h] [rbp-960h]
  __int64 v32; // [rsp+20h] [rbp-958h]
  __int64 v33; // [rsp+28h] [rbp-950h] BYREF
  __int64 v34; // [rsp+30h] [rbp-948h]
  __int64 v35; // [rsp+38h] [rbp-940h]
  __int64 v36; // [rsp+40h] [rbp-938h]
  __int64 v37; // [rsp+48h] [rbp-930h]
  __int64 v38; // [rsp+50h] [rbp-928h]
  __int128 v39; // [rsp+58h] [rbp-920h]
  __m128 v40; // [rsp+70h] [rbp-908h]
  __int128 v41; // [rsp+80h] [rbp-8F8h]
  __int64 v42; // [rsp+90h] [rbp-8E8h]
  __int64 v43; // [rsp+98h] [rbp-8E0h]
  __int64 v44; // [rsp+A0h] [rbp-8D8h]
  __int128 v45; // [rsp+A8h] [rbp-8D0h]
  __int128 v46; // [rsp+B8h] [rbp-8C0h]
  __int128 v47; // [rsp+C8h] [rbp-8B0h]
  __int128 v48; // [rsp+D8h] [rbp-8A0h]
  __int128 v49; // [rsp+E8h] [rbp-890h]
  __int128 v50; // [rsp+F8h] [rbp-880h]
  __int128 v51; // [rsp+108h] [rbp-870h]
  __int128 v52; // [rsp+118h] [rbp-860h]
  unsigned __int64 v53; // [rsp+128h] [rbp-850h]
  _BYTE v54[1024]; // [rsp+130h] [rbp-848h] BYREF
  int v55; // [rsp+530h] [rbp-448h] BYREF
  __int16 v56; // [rsp+534h] [rbp-444h]
  char v57; // [rsp+92Fh] [rbp-49h]
  unsigned __int64 v58; // [rsp+938h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( *a3 == 59 )
    return "syntax error";
  v54[1023] = 0;
  v57 = 0;
  if ( (unsigned int)qsscanf() != 4 )
    return "syntax error";
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v39 = 0;
  v5 = qvector_reserve();
  v38 = v5;
  *(_QWORD *)&v39 = 27;
  *(__m128i *)v5 = _mm_load_si128((const __m128i *)&xmmword_F9A0);
  *(__m128i *)(v5 + 10) = _mm_load_si128((const __m128i *)&xmmword_F9B0);
  *(_BYTE *)(v38 + 26) = 0;
  v6 = (const char *)(*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = strlen(v6);
    v9 = v39;
    v10 = v8;
    v11 = v8;
    if ( (_QWORD)v39 )
    {
      v9 = v39 - 1;
      v11 = v8 + v39 - 1;
    }
    v12 = v38;
    v13 = v11 + 1;
    if ( *((_QWORD *)&v39 + 1) < v11 + 1 )
    {
      v31 = v8;
      v30 = v11;
      v28 = v9;
      v26 = v11 + 1;
      v38 = qvector_reserve();
      v10 = v31;
      v12 = v38;
      v11 = v30;
      v9 = v28;
      v13 = v26;
    }
    *(_QWORD *)&v39 = v13;
    *(_BYTE *)(v12 + v11) = 0;
    memmove((void *)(v9 + v38), v7, v10);
  }
  v14 = v39;
  if ( (_QWORD)v39 )
  {
    v16 = v39 + 3;
    v15 = v39 + 4;
    v14 = v39 - 1;
  }
  else
  {
    v15 = 5;
    v16 = 4;
  }
  v17 = v38;
  if ( *((_QWORD *)&v39 + 1) < v15 )
  {
    v29 = v16;
    v27 = v15;
    v38 = qvector_reserve();
    v16 = v29;
    v17 = v38;
    v15 = v27;
  }
  *(_QWORD *)&v39 = v15;
  *(_BYTE *)(v17 + v16) = 0;
  *(_DWORD *)(v38 + v14) = 1970939197;
  qsscanf();
  v18 = v33 - v32;
  if ( stristr() )
  {
    v19 = v36;
    v20 = v37;
    v21 = v18 + v34;
    v34 += v18;
  }
  else
  {
    (*(void (__fastcall **)(_BYTE *, const char *))(*(_QWORD *)a1 + 16LL))(a1, "RAM");
    if ( stristr() )
    {
      v21 = v34;
      v37 += v18;
      v19 = v36;
      v20 = v37;
    }
    else if ( stristr() )
    {
      v21 = v34;
      v36 += v18;
      v20 = v37;
      v19 = v36;
    }
    else
    {
      if ( stristr() )
        v35 += v18;
      v21 = v34;
      v19 = v36;
      v20 = v37;
    }
  }
  if ( v20 | v35 | v19 | v21 )
    sub_D0B0(a2);
  else
    a2[1] = 0;
  if ( (a1[80] & 2) != 0 )
  {
    if ( get_first_seg() )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64, __int64, _BYTE *, int *))(*(_QWORD *)a1 + 64LL))(
              a1,
              v32,
              v33,
              v54,
              &v55) )
      {
        v22 = *(__int64 (**)())(*(_QWORD *)a1 + 72LL);
        if ( v22 == sub_B000
          || !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64, _BYTE *, int *))v22)(a1, v32, v33, v54, &v55) )
        {
          v42 = 0;
          v40 = 0;
          v41 = 0;
          v43 = 0;
          v44 = 0;
          v53 = 0xFFFFFFFF00000000LL;
          v45 = -1;
          v46 = -1;
          v47 = -1;
          v48 = -1;
          v49 = -1;
          v50 = -1;
          v51 = -1;
          v52 = -1;
          v44 = setup_selector();
          LOBYTE(v43) = 1;
          v40 = _mm_loadh_ps((const double *)&v33);
          if ( v55 != 1128354899 || (v23 = 5, v56 != 75) )
            v23 = 2;
          BYTE1(v43) = v23;
          ph = get_ph();
          if ( (unsigned __int8)getinf_flag() && (*(_DWORD *)(ph + 8) & 0x10000000) != 0 )
          {
            BYTE3(v43) = 2;
          }
          else
          {
            v25 = *(_DWORD *)(ph + 8) & 4;
            BYTE3(v43) = (*(_BYTE *)(ph + 8) & 4) != 0;
            if ( !v25 && v40.m128_u64[1] - v40.m128_u64[0] > 0xFFFF )
              BYTE3(v43) = 1;
          }
          is_loaded();
          add_segm_ex();
        }
      }
    }
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  return nullptr;
}

