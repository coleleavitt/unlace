__int64 __fastcall sub_1CD70(__int64 *a1, int a2, _BYTE *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r13d
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE *v9; // r14
  __int64 v10; // r12
  unsigned int v11; // ebp
  void *v12; // rax
  const char *v13; // rdx
  int v14; // r8d
  __int64 v15; // r8
  __int64 v16; // r9
  bool v18; // zf
  const char *v19; // rax
  char *v20; // r15
  __int64 v21; // rax
  __int64 v22; // r8
  __m128i v23; // xmm0
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // r15
  __int64 v38; // rbp
  __int64 v39; // r13
  __int64 v40; // r12
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r10
  __int128 v46; // xmm0
  void *v47; // rax
  _QWORD *v48; // rcx
  __int64 v49; // r11
  __int64 v50; // [rsp+0h] [rbp-32DA8h]
  __int64 v51; // [rsp+8h] [rbp-32DA0h]
  unsigned int *v52; // [rsp+10h] [rbp-32D98h]
  __int64 v53; // [rsp+18h] [rbp-32D90h]
  char v54; // [rsp+23h] [rbp-32D85h]
  unsigned __int8 v55; // [rsp+24h] [rbp-32D84h]
  __int64 v56; // [rsp+28h] [rbp-32D80h]
  int n; // [rsp+30h] [rbp-32D78h]
  size_t na; // [rsp+30h] [rbp-32D78h]
  size_t nb; // [rsp+30h] [rbp-32D78h]
  __int64 v60; // [rsp+38h] [rbp-32D70h]
  _QWORD *v61; // [rsp+38h] [rbp-32D70h]
  __int64 v62; // [rsp+48h] [rbp-32D60h]
  __int64 v63; // [rsp+50h] [rbp-32D58h]
  __int64 v64; // [rsp+58h] [rbp-32D50h]
  __int64 v65; // [rsp+60h] [rbp-32D48h] BYREF
  __int128 v66; // [rsp+68h] [rbp-32D40h]
  __m128i v67; // [rsp+80h] [rbp-32D28h] BYREF
  __int64 v68; // [rsp+90h] [rbp-32D18h]
  __int128 v69; // [rsp+98h] [rbp-32D10h]
  __m128i v70; // [rsp+B0h] [rbp-32CF8h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-32CE8h]
  __m128i v72; // [rsp+C8h] [rbp-32CE0h] BYREF
  unsigned int v73; // [rsp+E0h] [rbp-32CC8h] BYREF
  unsigned int v74; // [rsp+E4h] [rbp-32CC4h]
  char v75; // [rsp+F8h] [rbp-32CB0h] BYREF
  unsigned __int64 v76; // [rsp+32D68h] [rbp-40h]

  v6 = a2;
  v7 = (__int64)a1;
  v8 = *a1;
  v76 = __readfsqword(0x28u);
  v9 = a3;
  v54 = *(_DWORD *)(v8 + 276) == 8;
  if ( a2 > 1000 )
  {
    sub_180E0((__int64)"Reading trace, please wait...");
    LOBYTE(v53) = 1;
  }
  else
  {
    if ( a2 <= 0 )
    {
      if ( a3 )
        *a3 = 0;
      v11 = 1;
      sub_18640((__int64)a1, (__int64)"READ_TRACE: read=%d total=%d ok=%d\n", 0, a2, 1);
      return v11;
    }
    LOBYTE(v53) = 0;
  }
  HIDWORD(v51) = 0;
  v52 = &v73;
  while ( 1 )
  {
    v10 = callui(27, &callui, a3, a4, a5, a6, v50, v51, v52, v53);
    if ( (_BYTE)v10 )
      break;
    v11 = sub_18B00(v7, 0xBu, 0, 0);
    if ( !(_BYTE)v11 )
      goto LABEL_14;
    *(_BYTE *)(v7 + 1289) = 0;
    v12 = (void *)sub_26190(*(_QWORD *)(v7 + 24), v52, &unk_32C88, 0xFFFFFFFFLL);
    if ( v12 <= &unk_32C87 )
    {
      if ( (unsigned int)sub_260B0(*(_QWORD *)(v7 + 24)) == 62 )
      {
        *(_WORD *)(v7 + 1288) = 257;
      }
      else
      {
        v18 = *(_BYTE *)(v7 + 1289) == 0;
        *(_BYTE *)(v7 + 1288) = 1;
        if ( v18 && !*(_BYTE *)(v7 + 81) )
        {
          v19 = (const char *)sub_260C0(*(_QWORD *)(v7 + 24));
          sub_BDA0((__int64)"Network error: %s\n", v19);
        }
      }
      goto LABEL_14;
    }
    if ( v12 != &unk_32C88 )
      goto LABEL_14;
    v13 = "?";
    if ( v73 <= 0x1D )
      v13 = off_38B20[v73];
    sub_18640(v7, (__int64)"RECV %s\n", v13);
    a3 = (_BYTE *)v74;
    if ( v74 > 0x3E8 )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    if ( v73 )
    {
      if ( v73 != 1 && !*(_BYTE *)(v7 + 1289) )
        sub_BDA0((__int64)"Error retrieving the whole trace from PIN.\n");
      goto LABEL_14;
    }
    if ( v74 )
    {
      LODWORD(v50) = 0;
      v20 = &v75;
      v65 = 0;
      v66 = 0;
      do
      {
        v21 = *((_QWORD *)v20 - 2);
        v68 = 0;
        v67.m128i_i64[1] = v21;
        LODWORD(v21) = *((_DWORD *)v20 - 2);
        v69 = 0;
        v67.m128i_i32[1] = v21;
        v67.m128i_i32[0] = *((_DWORD *)v20 - 1);
        sub_19F70(v7, (unsigned __int64 *)&v67, (__int64)v20, v54);
        v23 = _mm_load_si128(&v67);
        v24 = v69;
        v71 = 0;
        v72 = 0;
        v70 = v23;
        if ( (_QWORD)v69 )
        {
          na = v69;
          v43 = qalloc_or_throw();
          v24 = na;
          v44 = v43;
          v45 = 0;
          v46 = 0;
          v71 = v43;
          v72.m128i_i64[1] = na;
          while ( 1 )
          {
            v48 = (_QWORD *)(40 * v45 + v44);
            v49 = v68 + 40 * v45;
            v48[3] = 0;
            *(_DWORD *)v48 = -2;
            *(_OWORD *)(v48 + 1) = v46;
            if ( v48 != (_QWORD *)v49 )
            {
              if ( *(int *)v49 >= -1 )
              {
                v48[1] = 0;
                *((_OWORD *)v48 + 1) = 0;
                if ( *(_QWORD *)(v49 + 16) )
                {
                  v64 = v45;
                  v63 = v49;
                  v61 = v48;
                  v62 = v24;
                  nb = *(_QWORD *)(v49 + 16);
                  v47 = (void *)qalloc_or_throw();
                  v61[3] = nb;
                  v61[1] = v47;
                  memcpy(v47, *(const void **)(v63 + 8), nb);
                  v48 = v61;
                  v46 = 0;
                  v49 = v63;
                  v24 = v62;
                  v61[2] = nb;
                  v45 = v64;
                }
              }
              else
              {
                v48[1] = *(_QWORD *)(v49 + 8);
              }
              *(_DWORD *)v48 = *(_DWORD *)v49;
            }
            ++v45;
            *((_DWORD *)v48 + 8) = *(_DWORD *)(v49 + 32);
            if ( v24 == v45 )
              break;
            v44 = v71;
          }
          v72.m128i_i64[0] = v24;
        }
        v25 = v66;
        v26 = v65;
        if ( *((_QWORD *)&v66 + 1) < (unsigned __int64)(v66 + 1) )
        {
          v65 = qvector_reserve();
          v25 = v66;
          v26 = v65;
        }
        v27 = v26 + 40 * v25;
        *(__m128i *)v27 = _mm_load_si128(&v70);
        v28 = v71;
        v29 = _mm_loadu_si128(&v72);
        *(_QWORD *)&v66 = v66 + 1;
        *(_QWORD *)(v27 + 16) = v71;
        v30 = v68;
        *(__m128i *)(v27 + 24) = v29;
        if ( v30 )
        {
          v31 = v69;
          if ( (_QWORD)v69 )
          {
            v32 = v30;
            v60 = v7;
            v33 = 0;
            do
            {
              v34 = v32 + 40 * v33;
              if ( *(int *)v34 >= -1 && *(_QWORD *)(v34 + 8) )
              {
                *(_QWORD *)(v34 + 16) = 0;
                qfree();
                v32 = v68;
              }
              ++v33;
            }
            while ( v31 != v33 );
            v11 = (unsigned __int8)v11;
            v7 = v60;
          }
          *(_QWORD *)&v69 = 0;
          qfree();
        }
        LODWORD(v50) = v50 + 1;
        v20 += 208;
      }
      while ( (unsigned int)v50 < v74 );
      v50 = callui(1161, &v65, v28, &callui, v22, v24, v50, v51, v52, v53);
      HIDWORD(v51) += v74;
      if ( (_BYTE)v53 )
        sub_181B0((__int64)"Reading trace, total of %d out of %d elements in trace.", HIDWORD(v51), v6);
      else
        sub_180E0((__int64)"Reading trace, total of %d out of %d elements in trace.", HIDWORD(v51), v6);
      v35 = v65;
      if ( v65 )
      {
        if ( (_QWORD)v66 )
        {
          v53 = v10;
          v55 = v11;
          n = v6;
          v56 = v7;
          v36 = 0;
          v37 = v66;
          do
          {
            v38 = v35 + 40 * v36;
            if ( *(_QWORD *)(v38 + 16) )
            {
              v39 = *(_QWORD *)(v38 + 24);
              if ( v39 )
              {
                v40 = 0;
                v41 = *(_QWORD *)(v38 + 16);
                do
                {
                  v42 = v41 + 40 * v40;
                  if ( *(int *)v42 >= -1 && *(_QWORD *)(v42 + 8) )
                  {
                    *(_QWORD *)(v42 + 16) = 0;
                    qfree();
                    v41 = *(_QWORD *)(v38 + 16);
                  }
                  ++v40;
                }
                while ( v39 != v40 );
              }
              *(_QWORD *)(v38 + 24) = 0;
              qfree();
              v35 = v65;
            }
            ++v36;
          }
          while ( v37 != v36 );
          LODWORD(v10) = v53;
          v11 = v55;
          v7 = v56;
          v6 = n;
        }
        *(_QWORD *)&v66 = 0;
        qfree();
      }
      if ( !(_BYTE)v50 )
      {
        LOBYTE(v53) = v11;
LABEL_14:
        v11 = v10;
        v14 = 0;
        goto LABEL_15;
      }
      LOBYTE(v53) = v50;
    }
    if ( v6 <= SHIDWORD(v51) )
    {
      v14 = 1;
      goto LABEL_15;
    }
  }
  sub_BDA0((__int64)"Operation cancelled\n");
  v14 = (unsigned __int8)sub_18B00(v7, 0xCu, 0, 0);
  v11 = v14;
LABEL_15:
  if ( v9 )
    *v9 = v10;
  sub_18640(v7, (__int64)"READ_TRACE: read=%d total=%d ok=%d\n", HIDWORD(v51), v6, v14);
  if ( (_BYTE)v53 )
    callui(24, 10, 0, &callui, v15, v16, v50, v51, v52, v53);
  return v11;
}

