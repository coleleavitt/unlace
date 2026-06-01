__int64 __fastcall sub_3D5100(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // eax
  unsigned int v7; // r13d
  void *i; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r15
  bool v14; // dl
  char *v15; // rax
  _BYTE *v16; // r10
  _BYTE *v17; // rbx
  __int64 *v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rbx
  _QWORD *v21; // rbp
  __int64 v23; // r9
  size_t v24; // rbx
  size_t v25; // r11
  __int64 v26; // rsi
  size_t v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // r9
  __int64 *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v40; // rax
  unsigned __int8 v41; // dl
  _BYTE *v42; // rbp
  char *v43; // rdx
  __int64 v44; // rdx
  _QWORD *v45; // rbx
  char *v46; // rax
  signed __int64 v47; // rbx
  size_t v48; // r15
  __m128i v49; // xmm1
  __int64 *v50; // rax
  __m128i v51; // xmm0
  int v52; // [rsp+Ch] [rbp-12Ch]
  __int64 v54; // [rsp+20h] [rbp-118h]
  __int64 v55; // [rsp+20h] [rbp-118h]
  size_t v56; // [rsp+20h] [rbp-118h]
  size_t v57; // [rsp+28h] [rbp-110h]
  _BYTE *v58; // [rsp+30h] [rbp-108h]
  __int64 v59; // [rsp+38h] [rbp-100h]
  void *src[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 *v61; // [rsp+60h] [rbp-D8h]
  __m128i v62; // [rsp+68h] [rbp-D0h] BYREF
  char *v63; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v64; // [rsp+88h] [rbp-B0h]
  __int64 v65; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v66; // [rsp+A8h] [rbp-90h]
  unsigned __int64 v67; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v68; // [rsp+C8h] [rbp-70h]
  void *dest; // [rsp+E0h] [rbp-58h]
  __int128 v70; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v71; // [rsp+F8h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  v62 = 0;
  v61 = nullptr;
  v64 = 0;
  v63 = (char *)qvector_reserve();
  *(_QWORD *)&v64 = 16;
  strcpy(v63, "$ mbui.comments");
  sub_F5F10((__int64 *)&v63);
  netnode_check();
  if ( dest == (void *)-1LL )
  {
    v7 = 1;
  }
  else
  {
    netnode_check();
    v65 = 0;
    v66 = 0;
    if ( netnode_qsupstr() <= 0 )
    {
      v7 = 0;
    }
    else
    {
      v67 = 0;
      v68 = 0;
      LOBYTE(v6) = sub_3CB7F0((__int64 *)&v67, &v65);
      v7 = v6;
      if ( (_BYTE)v6 )
      {
        *(__m128i *)src = _mm_unpacklo_epi64((__m128i)v67, (__m128i)(v67 + (unsigned __int64)v68));
        v52 = unpack_dd();
        if ( (unsigned int)(v52 - 1) <= 1 )
        {
LABEL_5:
          for ( i = src[1]; ; i = src[1] )
          {
LABEL_6:
            if ( src[0] >= i )
            {
              v49 = _mm_loadu_si128(&v62);
              v50 = *(__int64 **)a1;
              v51 = _mm_loadu_si128((const __m128i *)(a1 + 8));
              *(_QWORD *)a1 = v61;
              *(__m128i *)(a1 + 8) = v49;
              v61 = v50;
              v62 = v51;
              goto LABEL_18;
            }
            v9 = operator new(0x38u);
            v10 = v62.m128i_u64[1];
            *(_QWORD *)v9 = 0;
            *(_QWORD *)(v9 + 24) = -1;
            *(_DWORD *)(v9 + 32) = 0;
            *(_OWORD *)(v9 + 8) = 0;
            *(_BYTE *)(v9 + 48) = 0;
            *(_QWORD *)(v9 + 36) = 0xFFFFFFFF00000000LL;
            v11 = v62.m128i_i64[0];
            if ( v10 < v62.m128i_i64[0] + 1 )
            {
              v54 = v10;
              v12 = qvector_reserve();
              v34 = v62.m128i_i64[1];
              v35 = v61;
              v62.m128i_i64[1] = v54;
              v36 = v62.m128i_i64[0] - 1;
              if ( v62.m128i_i64[0] - 1 >= 0 )
              {
                v37 = v12;
                do
                {
                  v38 = *v35;
                  v37 += 8;
                  ++v35;
                  *(_QWORD *)(v37 - 8) = v38;
                }
                while ( v36-- != 0 );
              }
              v55 = v34;
              qfree();
              v11 = v62.m128i_i64[0];
              v61 = (__int64 *)v12;
              v62.m128i_i64[1] = v55;
            }
            else
            {
              v12 = (__int64)v61;
            }
            *(_QWORD *)(v12 + 8 * v11) = v9;
            v13 = v61[v62.m128i_i64[0]++];
            v14 = 0;
            v15 = (char *)src[0];
            if ( src[0] < src[1] )
            {
              v14 = *(_BYTE *)src[0] == 1;
              v15 = (char *)src[0] + 1;
            }
            src[0] = v15;
            *(_BYTE *)(v13 + 48) = v14;
            if ( v52 == 2 )
              break;
            v28 = unpack_dq();
            v29 = unpack_dq();
            *(_QWORD *)(v13 + 24) = v29;
            v30 = v29;
            *(_DWORD *)(v13 + 40) = -1;
            v31 = *(unsigned int *)(a4 + 64);
            if ( (int)v31 <= 0 )
              goto LABEL_17;
            v32 = 0;
            while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 528) + 8 * v32) + 32LL) != v28 )
            {
              if ( (_DWORD)v31 - 1 == v32 )
                goto LABEL_17;
              if ( v31 == ++v32 )
                sub_3C8F80(0.0);
            }
            *(_DWORD *)(v13 + 40) = v32;
            if ( v30 != -1 )
            {
              if ( src[0] < src[1] )
              {
                v41 = *(_BYTE *)src[0]++;
                *(_DWORD *)(v13 + 32) = v41;
                if ( v41 > 0x48u )
                  goto LABEL_17;
              }
              else
              {
                *(_DWORD *)(v13 + 32) = 0;
              }
              v33 = unpack_dd();
              if ( v33 <= 0 )
                goto LABEL_17;
              *(_DWORD *)(v13 + 36) = v33 - 1;
              goto LABEL_14;
            }
            unpack_dd();
            unpack_dd();
            v42 = src[0];
            i = src[1];
            dest = nullptr;
            v70 = 0;
            v43 = (char *)src[0];
            do
            {
              if ( v43 >= src[1] )
                goto LABEL_62;
              ++v43;
            }
            while ( *(v43 - 1) );
            src[0] = v43;
            if ( !v42 )
            {
LABEL_62:
              v44 = v62.m128i_i64[0];
              if ( !v62.m128i_i64[0] )
                goto LABEL_6;
LABEL_63:
              v62.m128i_i64[0] = v44 - 1;
              v45 = (_QWORD *)v61[v44 - 1];
              if ( v45 )
              {
                if ( *v45 )
                {
                  v45[1] = 0;
                  qfree();
                }
                operator delete(v45, 0x38u);
              }
              goto LABEL_67;
            }
            v46 = nullptr;
            v47 = v43 - v42;
            v48 = v43 - v42 - 1;
            if ( v43 != v42 )
            {
              v46 = (char *)qvector_reserve();
              dest = v46;
            }
            *(_QWORD *)&v70 = v47;
            v46[v47 - 1] = 0;
            memmove(dest, v42, v48);
            v44 = v62.m128i_i64[0];
            if ( v62.m128i_i64[0] )
              goto LABEL_63;
LABEL_67:
            if ( !dest )
              goto LABEL_5;
            *(_QWORD *)&v70 = 0;
            qfree();
          }
          sub_79ED0(v13 + 24, (__int64)src, a2);
          if ( *(_QWORD *)(v13 + 24) == -1 || *(int *)(v13 + 32) > 72 )
            goto LABEL_17;
LABEL_14:
          v16 = src[0];
          v17 = src[0];
          while ( v17 < src[1] )
          {
            if ( !*v17++ )
            {
              src[0] = v17;
              if ( v16 )
              {
                v23 = *(_QWORD *)(v13 + 8);
                v24 = v17 - v16 - 1;
                v25 = v24;
                if ( v23 )
                {
                  --v23;
                  v25 = v24 + v23;
                }
                v26 = *(_QWORD *)v13;
                v27 = v25 + 1;
                if ( *(_QWORD *)(v13 + 16) < v25 + 1 )
                {
                  v59 = v23;
                  v58 = v16;
                  v57 = v25;
                  v56 = v25 + 1;
                  v40 = qvector_reserve();
                  v23 = v59;
                  v16 = v58;
                  *(_QWORD *)v13 = v40;
                  v26 = v40;
                  v25 = v57;
                  v27 = v56;
                }
                *(_QWORD *)(v13 + 8) = v27;
                *(_BYTE *)(v26 + v25) = 0;
                memmove((void *)(v23 + *(_QWORD *)v13), v16, v24);
                if ( *(_QWORD *)(v13 + 8) > 1u )
                  goto LABEL_5;
              }
              break;
            }
          }
        }
      }
LABEL_17:
      v7 = 0;
LABEL_18:
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
    }
    if ( v65 )
    {
      *(_QWORD *)&v66 = 0;
      qfree();
    }
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree();
  }
  v18 = v61;
  if ( v61 )
  {
    v19 = v62.m128i_i64[0];
    if ( v62.m128i_i64[0] )
    {
      v20 = 0;
      do
      {
        v21 = (_QWORD *)v18[v20];
        if ( v21 )
        {
          if ( *v21 )
          {
            v21[1] = 0;
            qfree();
          }
          operator delete(v21, 0x38u);
          v18 = v61;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    v62.m128i_i64[0] = 0;
    qfree();
  }
  return v7;
}

