__int64 __fastcall sub_1A3C40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // r12
  int tinfo_size; // eax
  int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 *v12; // rdx
  __int64 *i; // rax
  __int64 v14; // rdi
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // r15
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  char v30; // al
  char v31; // al
  __int64 *v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  char v48; // [rsp+8h] [rbp-168h]
  char v49; // [rsp+1Fh] [rbp-151h]
  __int64 v52; // [rsp+40h] [rbp-130h]
  __int64 *v53; // [rsp+48h] [rbp-128h]
  int v54; // [rsp+50h] [rbp-120h]
  __int64 v55; // [rsp+58h] [rbp-118h]
  __int128 v56; // [rsp+60h] [rbp-110h]
  __m128i v57; // [rsp+78h] [rbp-F8h] BYREF
  __m128i v58; // [rsp+88h] [rbp-E8h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-C8h] BYREF
  int v60; // [rsp+B0h] [rbp-C0h]
  __m128i v61; // [rsp+B8h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+C8h] [rbp-A8h]
  int v63; // [rsp+D0h] [rbp-A0h]
  __int64 (__fastcall **v64)(); // [rsp+D8h] [rbp-98h]
  __int64 v65; // [rsp+E0h] [rbp-90h]
  int v66; // [rsp+E8h] [rbp-88h]
  __int128 v67; // [rsp+F0h] [rbp-80h]
  __int64 v68; // [rsp+100h] [rbp-70h]
  __int64 v69; // [rsp+108h] [rbp-68h]
  __int128 v70; // [rsp+110h] [rbp-60h]
  __int64 v71; // [rsp+120h] [rbp-50h]
  unsigned __int64 v72; // [rsp+130h] [rbp-40h]

  v72 = __readfsqword(0x28u);
  v3 = *(__int64 **)(a1 + 8);
  v56 = 0;
  v55 = 0;
  if ( !v3 )
    return 0;
  if ( !*(_QWORD *)(a1 + 16) )
    return 0;
  v4 = (__int64 *)v3[1];
  if ( v3 == v4 )
    return 0;
  do
  {
    v53 = v4 + 3;
    if ( !*((_BYTE *)v4 + 96) )
    {
      v5 = *((int *)v4 + 10);
      v6 = v4[3];
      tinfo_size = get_tinfo_size();
      v8 = *(_QWORD *)(a1 + 72) - 1;
      if ( v8 >= 0 )
      {
        v9 = v6 + v5;
        v10 = *(_QWORD *)(a1 + 64) + 40LL * (unsigned int)v8;
        while ( 1 )
        {
          v11 = *(_QWORD *)v10;
          if ( v6 >= *(_QWORD *)v10 && v9 <= tinfo_size + v11 )
            break;
          --v8;
          v10 -= 40;
          if ( v8 == -1 )
            goto LABEL_10;
        }
        if ( v10 )
        {
          v21 = *v53;
          v22 = v4[4];
          v57 = 0u;
          v52 = v22;
          memset(&v58, 0, 24);
          v54 = v21;
          v23 = get_tinfo_size();
          sub_11F0E0(v57.m128i_i64, v11 + *(_QWORD *)(*(_QWORD *)(a3 + 64) + 1440LL), v23);
          v24 = *(_QWORD *)(a2 + 128);
          if ( (int)v24 <= 0 )
            goto LABEL_48;
          v25 = 0;
LABEL_33:
          while ( 1 )
          {
            v26 = *(_QWORD *)(a2 + 120) + (v25 << 7);
            if ( v11 == *(_QWORD *)(v26 + 72) )
            {
              v27 = *(_QWORD *)(v52 + 16);
              if ( v27 )
                break;
            }
            if ( (int)++v25 >= (int)v24 )
              goto LABEL_48;
          }
          v48 = 0;
          while ( 1 )
          {
            v28 = *(_QWORD **)(v26 + 96);
            v29 = &v28[*(_QWORD *)(v26 + 104)];
            if ( v28 != v29 )
            {
              while ( *v28 != v27 )
              {
                if ( v29 == ++v28 )
                  goto LABEL_41;
              }
              if ( v28 != v29 )
                break;
            }
LABEL_41:
            sub_120C40((__int64)&v59, a3, v27, 1u);
            v49 = sub_60CC0(&v59, v57.m128i_i64);
            v30 = sub_313F40(&v61, &v58);
            if ( v49 || v30 )
            {
              if ( v61.m128i_i64[0] )
              {
                v61.m128i_i64[1] = 0;
                qfree();
              }
              qfree();
              v24 = *(_QWORD *)(a2 + 128);
              goto LABEL_47;
            }
            if ( v61.m128i_i64[0] )
            {
              v61.m128i_i64[1] = 0;
              qfree();
            }
            qfree();
            v27 = *(_QWORD *)(v27 + 16);
            v31 = v48;
            v48 = 1;
            if ( (((unsigned __int8)v31 ^ 1) & (v27 != 0)) == 0 )
            {
              v24 = *(_QWORD *)(a2 + 128);
LABEL_47:
              if ( (int)++v25 < (int)v24 )
                goto LABEL_33;
LABEL_48:
              if ( v58.m128i_i64[0] )
              {
                v58.m128i_i64[1] = 0;
                qfree();
              }
              qfree();
              goto LABEL_10;
            }
          }
          if ( v58.m128i_i64[0] )
          {
            v58.m128i_i64[1] = 0;
            qfree();
          }
          qfree();
          if ( v26 )
          {
            if ( (*(_BYTE *)(v26 + 8) & 2) == 0 )
            {
              v57 = _mm_loadu_si128((const __m128i *)(v10 + 8));
              v58 = _mm_loadu_si128((const __m128i *)(v10 + 24));
              if ( (unsigned __int8)sub_196360(a1, (__int64)&v57, v54 - (int)v11, v4[6], *((_DWORD *)v4 + 10)) )
              {
                v35 = *(_QWORD *)(a1 + 48);
                v59 = 0;
                v60 = 0;
                v62 = -1;
                v63 = -1;
                v64 = off_4C8ED0;
                v65 = -1;
                v61 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4C8EF0, (__m128i)(unsigned __int64)off_4C8ED0);
                v67 = -1;
                v66 = -1;
                v68 = -1;
                v69 = 0;
                v71 = 0;
                v70 = 0;
                (*(void (__fastcall **)(__int64, __int64 *, __m128i *))(*(_QWORD *)v35 + 56LL))(v35, &v59, &v57);
                if ( v63 < *(_DWORD *)(v26 + 40) || v66 < *(_DWORD *)(v26 + 64) )
                {
                  if ( !v69 )
                    goto LABEL_10;
                }
                else
                {
                  *(_DWORD *)(v26 + 40) = v63;
                  v36 = *(_QWORD *)(v26 + 96);
                  *(_DWORD *)(v26 + 64) = v66;
                  v37 = v4[4];
                  v38 = *(_QWORD *)(v26 + 104);
                  if ( *(_QWORD *)(v26 + 112) < (unsigned __int64)(v38 + 1) )
                  {
                    v45 = qvector_reserve();
                    *(_QWORD *)(v26 + 96) = v45;
                    v36 = v45;
                    v38 = *(_QWORD *)(v26 + 104);
                  }
                  *(_QWORD *)(v36 + 8 * v38) = v37;
                  ++*(_QWORD *)(v26 + 104);
                  v39 = *(_QWORD *)(a1 + 24);
                  v40 = v4[4];
                  v41 = *(_QWORD *)(a1 + 32);
                  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v41 + 1) )
                  {
                    v46 = qvector_reserve();
                    *(_QWORD *)(a1 + 24) = v46;
                    v39 = v46;
                    v41 = *(_QWORD *)(a1 + 32);
                  }
                  *(_QWORD *)(v39 + 8 * v41) = v40;
                  v42 = v55;
                  ++*(_QWORD *)(a1 + 32);
                  v43 = *v53;
                  v44 = v56;
                  if ( *((_QWORD *)&v56 + 1) < (unsigned __int64)(v56 + 1) )
                  {
                    v55 = qvector_reserve();
                    v42 = v55;
                    v44 = v56;
                  }
                  *(_QWORD *)(v42 + 8 * v44) = v43;
                  *(_QWORD *)&v56 = v56 + 1;
                  if ( !v69 )
                    goto LABEL_10;
                }
                *(_QWORD *)&v70 = 0;
                qfree();
              }
            }
          }
        }
      }
    }
LABEL_10:
    if ( (*v4 & 2) == 0 )
    {
      v12 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v12 & 2) != 0 )
      {
        v32 = (__int64 *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
        v33 = *v32;
        if ( (*v32 & 2) == 0 )
        {
          while ( (__int64 *)v32[2] == v4 )
          {
            v4 = v32;
            v34 = v33 & 0xFFFFFFFFFFFFFFFCLL;
            v33 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v33 & 2) != 0 )
            {
              v4 = (__int64 *)v34;
              goto LABEL_15;
            }
            v32 = (__int64 *)v34;
          }
        }
        v4 = v32;
      }
      else
      {
        for ( i = (__int64 *)v12[1]; (*(_BYTE *)i & 2) == 0; i = (__int64 *)i[1] )
          v12 = i;
        v4 = v12;
      }
    }
LABEL_15:
    ;
  }
  while ( *(__int64 **)(a1 + 8) != v4 );
  v14 = v55;
  if ( !(_QWORD)v56 )
  {
    v15 = 0;
    goto LABEL_60;
  }
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    if ( v4 )
    {
      v17 = (__int64 *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v17 )
        break;
      if ( (*(_BYTE *)(*v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        v18 = *(_QWORD *)(v14 + 8 * v16);
        while ( v18 < v17[3] )
        {
          v17 = (__int64 *)v17[1];
LABEL_24:
          if ( (*(_BYTE *)v17 & 2) != 0 )
            goto LABEL_25;
        }
        if ( v18 > v17[3] )
        {
          v17 = (__int64 *)v17[2];
          goto LABEL_24;
        }
        if ( v17 != v4 )
          break;
      }
    }
LABEL_25:
    ++v15;
    v19 = v56;
    v16 = (int)v15;
    if ( (int)v15 >= (unsigned __int64)v56 )
      goto LABEL_59;
LABEL_26:
    v4 = *(__int64 **)(a1 + 8);
  }
  sub_1A38A0((unsigned __int64 **)(a1 + 8), v17);
  ++v15;
  v19 = v56;
  v14 = v55;
  v16 = (int)v15;
  if ( (int)v15 < (unsigned __int64)v56 )
    goto LABEL_26;
LABEL_59:
  LOBYTE(v15) = v19 != 0;
LABEL_60:
  if ( v14 )
    qfree();
  return v15;
}

