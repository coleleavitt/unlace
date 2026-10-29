__int64 __fastcall sub_84C50(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // eax
  char **v6; // rdi
  unsigned __int8 *v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int8 v12; // bp
  __int64 v13; // rax
  __int64 v14; // rsi
  __m128i *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  __m128i *v20; // rbx
  __m128i *v21; // rbx
  const char *v22; // rdx
  unsigned int v23; // r15d
  int v24; // r12d
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  char v29; // r12
  char *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // eax
  _QWORD *v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // r15
  unsigned int v44; // eax
  unsigned int v45; // ebp
  int v46; // ebx
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // eax
  unsigned int v52; // r12d
  unsigned int v53; // ebp
  __int64 v54; // rax
  _QWORD *v55; // rsi
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rbp
  __int64 v60; // r12
  __int64 v61; // rax
  __int64 v62; // rdx
  _QWORD *v63; // rdx
  _QWORD *v64; // rdi
  __int64 v65; // rax
  __m128i *v66; // rax
  __int64 v67; // r14
  __m128i *v68; // rax
  unsigned __int64 v69; // r14
  __m128i *v70; // rbx
  int v71; // [rsp+4h] [rbp-D4h]
  int v72; // [rsp+4h] [rbp-D4h]
  unsigned int v73; // [rsp+10h] [rbp-C8h]
  unsigned int v75; // [rsp+18h] [rbp-C0h]
  __int64 v76; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v77; // [rsp+28h] [rbp-B0h]
  const char *v78; // [rsp+40h] [rbp-98h] BYREF
  __int64 v79; // [rsp+48h] [rbp-90h]
  _QWORD v80[4]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v81; // [rsp+80h] [rbp-58h] BYREF
  __int128 v82; // [rsp+88h] [rbp-50h]
  unsigned __int64 v83; // [rsp+98h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  v3 = a2;
  v4 = unpack_dd();
  if ( (unsigned int)(v4 - 70) <= 0xF )
  {
    *(_DWORD *)(a2 + 8) = v4;
    v6 = *(char ***)a1;
    if ( *(_DWORD *)(a1 + 16) > 3u
      && (v7 = (unsigned __int8 *)*v6, (unsigned __int64)*v6 < *(_QWORD *)(*(_QWORD *)a1 + 8LL)) )
    {
      v12 = *v7;
      v10 = -1;
      *v6 = (char *)(v7 + 1);
      if ( v12 > 1u || (v8 = unpack_dq(), v9 = *(_QWORD **)(a1 + 8), v10 = *v9 + ~v8, v12) )
      {
LABEL_7:
        *(_QWORD *)a2 = v10;
        v11 = unpack_dd();
        *(_DWORD *)(a2 + 12) = v11;
        if ( *(_DWORD *)(a1 + 16) > 2u )
          *(_DWORD *)(a2 + 12) = v11 - 1;
        switch ( *(_DWORD *)(a2 + 8) )
        {
          case 'F':
          case 'N':
          case 'O':
            return 1;
          case 'G':
            v15 = (__m128i *)qalloc_or_throw();
            v15[1].m128i_i64[0] = 0;
            *v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
            *(_QWORD *)(a2 + 24) = v15;
            return sub_86200(a1, v15, "cblock.size");
          case 'H':
          case 'P':
          case 'T':
            v13 = j__qalloc_or_throw();
            *(_QWORD *)v13 = -1;
            v14 = v13;
            *(_QWORD *)(v13 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v13 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v13 + 40) = 0;
            *(_QWORD *)(v13 + 48) = 0;
            *(_DWORD *)(v13 + 56) = 0;
            *(_OWORD *)(v13 + 24) = 0;
            *(_QWORD *)(v3 + 24) = v13;
            return sub_85AD0(a1, v14);
          case 'I':
            v29 = 0;
            v30 = **(char ***)a1;
            if ( (unsigned __int64)v30 < *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
              v29 = *v30++;
            **(_QWORD **)a1 = v30;
            v31 = j__qalloc_or_throw();
            *(_QWORD *)v31 = -1;
            *(_QWORD *)(v31 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v31 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v31 + 40) = 0;
            *(_QWORD *)(v31 + 48) = 0;
            *(_QWORD *)(v31 + 56) = 0;
            *(_OWORD *)(v31 + 24) = 0;
            *(_OWORD *)(v31 + 64) = 0;
            *(_QWORD *)(a2 + 24) = v31;
            v32 = (_QWORD *)j__qalloc_or_throw();
            *v32 = -1;
            v32[1] = -4294967226LL;
            v32[2] = 0xFFFFFFFFLL;
            v32[3] = 0;
            *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL) = v32;
            if ( (unsigned __int8)sub_84C50(a1, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL)) )
            {
              if ( v29 )
                goto LABEL_46;
              v33 = (_QWORD *)j__qalloc_or_throw();
              *v33 = -1;
              v33[1] = -4294967226LL;
              v33[2] = 0xFFFFFFFFLL;
              v33[3] = 0;
              *(_QWORD *)(*(_QWORD *)(a2 + 24) + 72LL) = v33;
              if ( (unsigned __int8)sub_84C50(a1, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 72LL)) )
                goto LABEL_46;
            }
            return 0;
          case 'J':
            v34 = j__qalloc_or_throw();
            *(_QWORD *)v34 = -1;
            *(_DWORD *)(v34 + 8) = 0;
            *(_QWORD *)(v34 + 12) = -1;
            *(_QWORD *)(v34 + 40) = 0;
            *(_QWORD *)(v34 + 48) = 0;
            *(_DWORD *)(v34 + 56) = 0;
            *(_QWORD *)(v34 + 64) = 0;
            *(_QWORD *)(v34 + 72) = -1;
            *(_DWORD *)(v34 + 80) = 0;
            *(_QWORD *)(v34 + 84) = -1;
            *(_QWORD *)(v34 + 112) = 0;
            *(_QWORD *)(v34 + 120) = 0;
            *(_DWORD *)(v34 + 128) = 0;
            *(_QWORD *)(v34 + 136) = -1;
            *(_QWORD *)(v34 + 144) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v34 + 152) = 0xFFFFFFFFLL;
            *(_QWORD *)(v34 + 176) = 0;
            *(_QWORD *)(v34 + 184) = 0;
            *(_DWORD *)(v34 + 192) = 0;
            *(_OWORD *)(v34 + 24) = 0;
            *(_OWORD *)(v34 + 96) = 0;
            *(_OWORD *)(v34 + 160) = 0;
            *(_QWORD *)(a2 + 24) = v34;
            if ( (unsigned __int8)sub_85AD0(a1, v34 + 72)
              && (unsigned __int8)sub_85AD0(a1, *(_QWORD *)(a2 + 24) + 136LL) )
            {
              goto LABEL_49;
            }
            return 0;
          case 'K':
            v36 = j__qalloc_or_throw();
            *(_QWORD *)v36 = -1;
            *(_QWORD *)(v36 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v36 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v36 + 40) = 0;
            *(_QWORD *)(v36 + 48) = 0;
            *(_QWORD *)(v36 + 56) = 0;
            *(_QWORD *)(v36 + 64) = 0;
            *(_OWORD *)(v36 + 24) = 0;
            *(_QWORD *)(a2 + 24) = v36;
LABEL_49:
            v35 = (_QWORD *)j__qalloc_or_throw();
            *v35 = -1;
            v35[1] = -4294967226LL;
            v35[2] = 0xFFFFFFFFLL;
            goto LABEL_50;
          case 'L':
            v37 = j__qalloc_or_throw();
            *(_QWORD *)(v37 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)v37 = -1;
            *(_QWORD *)(v37 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v37 + 40) = 0;
            *(_QWORD *)(v37 + 48) = 0;
            *(_QWORD *)(v37 + 56) = 0;
            *(_QWORD *)(v37 + 64) = 0;
            *(_OWORD *)(v37 + 24) = 0;
            *(_QWORD *)(a2 + 24) = v37;
            v35 = (_QWORD *)j__qalloc_or_throw();
            *v35 = -1;
            v35[1] = -4294967226LL;
            v35[2] = 0xFFFFFFFFLL;
LABEL_50:
            v35[3] = 0;
            *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL) = v35;
            if ( (unsigned __int8)sub_84C50(a1, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL)) )
              goto LABEL_46;
            return 0;
          case 'M':
            v38 = j__qalloc_or_throw();
            *(_QWORD *)(v38 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v38 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)v38 = -1;
            *(_QWORD *)(v38 + 40) = 0;
            *(_QWORD *)(v38 + 48) = 0;
            *(_DWORD *)(v38 + 56) = 0;
            *(_QWORD *)(v38 + 64) = 0;
            *(_QWORD *)(v38 + 72) = 0;
            *(_QWORD *)(v38 + 80) = 0;
            *(_QWORD *)(v38 + 104) = 0;
            *(_QWORD *)(v38 + 112) = 0;
            *(_OWORD *)(v38 + 24) = 0;
            *(_OWORD *)(v38 + 88) = 0;
            *(_OWORD *)(v38 + 120) = 0;
            *(_QWORD *)(a2 + 24) = v38;
            sub_81210((const void ***)a1, v38 + 64);
            v39 = unpack_dd();
            if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) - **(_QWORD **)a1 < (unsigned __int64)v39 )
              return 0;
            if ( !v39 )
              goto LABEL_46;
            v72 = 0;
            v75 = v39;
            while ( 2 )
            {
              v40 = *(_QWORD **)(a2 + 24);
              v41 = v40[15];
              v42 = v40[14];
              if ( v40[16] < (unsigned __int64)(v41 + 1) )
              {
                v58 = qvector_reserve();
                v41 = v40[15];
                v40[14] = v58;
                v42 = v58;
              }
              v43 = v42 + 56 * v41;
              *(_QWORD *)v43 = -1;
              *(_QWORD *)(v43 + 12) = -1;
              *(_DWORD *)(v43 + 8) = 70;
              *(_OWORD *)(v43 + 24) = 0;
              *(_OWORD *)(v43 + 40) = 0;
              ++v40[15];
              v44 = unpack_dd();
              v45 = v44;
              if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) - **(_QWORD **)a1 < (unsigned __int64)v44 )
                return 0;
              *(_QWORD *)(v43 + 40) = 0;
              if ( *(_QWORD *)(v43 + 48) < (unsigned __int64)v44 )
              {
                *(_QWORD *)(v43 + 32) = qvector_reserve();
              }
              else if ( !v44 )
              {
                goto LABEL_73;
              }
              v46 = 0;
              do
              {
                v47 = *(_QWORD *)(v43 + 40);
                v48 = *(_QWORD *)(v43 + 32);
                v49 = v47 + 1;
                if ( *(_QWORD *)(v43 + 48) < (unsigned __int64)(v47 + 1) )
                {
                  v50 = qvector_reserve();
                  v47 = *(_QWORD *)(v43 + 40);
                  *(_QWORD *)(v43 + 32) = v50;
                  v48 = v50;
                  v49 = v47 + 1;
                }
                *(_QWORD *)(v43 + 40) = v49;
                ++v46;
                *(_QWORD *)(v48 + 8 * v47) = unpack_dq();
              }
              while ( v45 != v46 );
LABEL_73:
              if ( !(unsigned __int8)sub_84C50(a1, v43) )
                return 0;
              if ( ++v72 == v75 )
              {
                v3 = a2;
LABEL_46:
                v14 = *(_QWORD *)(v3 + 24);
                return sub_85AD0(a1, v14);
              }
              continue;
            }
          case 'Q':
            *(_QWORD *)(a2 + 24) = j__qalloc_or_throw();
            **(_DWORD **)(a2 + 24) = unpack_dd();
            return 1;
          case 'R':
            v81 = nullptr;
            v82 = 0;
            v51 = unpack_dd();
            v52 = v51;
            if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) - **(_QWORD **)a1 < (unsigned __int64)v51 )
              goto LABEL_76;
            *(_QWORD *)&v82 = 0;
            if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)v51 )
            {
              v81 = (_QWORD *)qvector_reserve();
            }
            else if ( !v51 )
            {
              goto LABEL_76;
            }
            v53 = 0;
            do
            {
              v55 = v81;
              v56 = **(_QWORD **)(a1 + 8) + unpack_dq();
              v57 = v82;
              if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)(v82 + 1) )
              {
                v81 = (_QWORD *)qvector_reserve();
                v55 = v81;
                v57 = v82;
              }
              v55[v57] = v56;
              ++v53;
              v54 = v82 + 1;
              *(_QWORD *)&v82 = v82 + 1;
            }
            while ( v53 < v52 );
            if ( v54 )
            {
              v59 = qalloc_or_throw();
              v60 = *v81;
              *(_QWORD *)v59 = 0;
              *(_OWORD *)(v59 + 8) = 0;
              v61 = qvector_reserve();
              v62 = *(_QWORD *)(v59 + 8);
              *(_QWORD *)v59 = v61;
              *(_QWORD *)(v61 + 8 * v62) = v60;
              ++*(_QWORD *)(v59 + 8);
              v63 = v81;
              *(_QWORD *)(v3 + 24) = v59;
              v64 = *(_QWORD **)v59;
              *(_QWORD *)v59 = v63;
              v65 = *(_QWORD *)(v59 + 16);
              *(_OWORD *)(v59 + 8) = v82;
              v81 = v64;
              *((_QWORD *)&v82 + 1) = v65;
              if ( v64 )
              {
                *(_QWORD *)&v82 = 0;
                qfree();
              }
              return 1;
            }
LABEL_76:
            if ( v81 )
            {
              *(_QWORD *)&v82 = 0;
              qfree();
            }
            return 0;
          case 'S':
            v16 = qalloc_or_throw();
            *(_BYTE *)(v16 + 64) = 0;
            v17 = v16;
            *(_QWORD *)(v16 + 16) = 0;
            *(__m128i *)v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
            *(_QWORD *)(v16 + 24) = 0;
            *(_OWORD *)(v16 + 32) = 0;
            *(_OWORD *)(v16 + 48) = 0;
            *(_QWORD *)(a2 + 24) = v16;
            if ( !(unsigned __int8)sub_86200(a1, v16, "try.size") )
              return 1;
            *(_BYTE *)(v17 + 64) = (unsigned int)unpack_dd() != 0;
            *(_QWORD *)(v17 + 48) = (unsigned int)unpack_dd();
            *(_QWORD *)(v17 + 56) = (unsigned int)unpack_dd();
            v73 = unpack_dd();
            if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) - **(_QWORD **)a1 < (unsigned __int64)v73 )
              return 0;
            v18 = *(_QWORD *)(v17 + 40);
            if ( v18 < v73 )
            {
              v68 = (__m128i *)qvector_reserve();
              v69 = *(_QWORD *)(v17 + 40);
              *(_QWORD *)(v17 + 40) = v18;
              v70 = v68;
              v18 = v69;
              sub_84B50(v68, *(const __m128i **)(v17 + 24), *(_QWORD *)(v17 + 32));
              qfree();
              *(_QWORD *)(v17 + 24) = v70;
              *(_QWORD *)(v17 + 40) = v69;
            }
            else if ( !v73 )
            {
              return 1;
            }
            v71 = 0;
            while ( 2 )
            {
              v19 = *(_QWORD *)(v17 + 32);
              if ( v18 < v19 + 1 )
              {
                v66 = (__m128i *)qvector_reserve();
                v67 = *(_QWORD *)(v17 + 40);
                *(_QWORD *)(v17 + 40) = v18;
                v20 = v66;
                sub_84B50(v66, *(const __m128i **)(v17 + 24), *(_QWORD *)(v17 + 32));
                qfree();
                *(_QWORD *)(v17 + 24) = v20;
                v19 = *(_QWORD *)(v17 + 32);
                *(_QWORD *)(v17 + 40) = v67;
              }
              else
              {
                v20 = *(__m128i **)(v17 + 24);
              }
              v21 = &v20[3 * v19];
              v21[1].m128i_i64[0] = 0;
              v21[1].m128i_i64[1] = 0;
              *v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
              v21[2] = 0;
              ++*(_QWORD *)(v17 + 32);
              v76 = 0;
              v77 = 0;
              sub_6B2B0(&v76);
              sub_813C0((__int64)&v81, "block.size");
              sub_82C50((__int64)&v78, (__int64)&v76, (__int64)&v81);
              if ( v81 )
              {
                *(_QWORD *)&v82 = 0;
                qfree();
              }
              v22 = s1;
              if ( v79 )
                v22 = v78;
              if ( (unsigned __int8)sub_86200(a1, v21, v22) )
              {
                sub_813C0((__int64)v80, "catchexps.size");
                sub_82C50((__int64)&v81, (__int64)&v76, (__int64)v80);
                v23 = unpack_dd();
                if ( v81 )
                {
                  *(_QWORD *)&v82 = 0;
                  qfree();
                }
                if ( v80[0] )
                {
                  v80[1] = 0;
                  qfree();
                }
                if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) - **(_QWORD **)a1 >= (unsigned __int64)v23 )
                {
                  v24 = 0;
                  if ( !v23 )
                  {
LABEL_87:
                    if ( v78 )
                    {
                      v79 = 0;
                      qfree();
                    }
                    if ( v76 )
                    {
                      *(_QWORD *)&v77 = 0;
                      qfree();
                    }
                    if ( ++v71 == v73 )
                      return 1;
                    v18 = *(_QWORD *)(v17 + 40);
                    continue;
                  }
                  while ( 1 )
                  {
                    v26 = v21[2].m128i_i64[0];
                    v27 = v21[1].m128i_i64[1];
                    if ( v21[2].m128i_i64[1] < (unsigned __int64)(v26 + 1) )
                    {
                      v28 = qvector_reserve();
                      v21[1].m128i_i64[1] = v28;
                      v26 = v21[2].m128i_i64[0];
                      v27 = v28;
                    }
                    v25 = v27 + 88 * v26;
                    *(_QWORD *)(v25 + 8) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)v25 = -1;
                    *(_QWORD *)(v25 + 16) = 0xFFFFFFFFLL;
                    *(_QWORD *)(v25 + 40) = 0;
                    *(_QWORD *)(v25 + 48) = 0;
                    *(_DWORD *)(v25 + 56) = 0;
                    *(_QWORD *)(v25 + 64) = 0;
                    *(_OWORD *)(v25 + 24) = 0;
                    *(_OWORD *)(v25 + 72) = 0;
                    ++v21[2].m128i_i64[0];
                    sub_7B840((__int64 *)(v25 + 64), *(const void ***)a1, *(_QWORD *)(*(_QWORD *)a1 + 8LL));
                    if ( !(unsigned __int8)sub_85AD0(a1, v25) )
                      break;
                    if ( ++v24 == v23 )
                      goto LABEL_87;
                  }
                }
              }
              break;
            }
            if ( v78 )
            {
              v79 = 0;
              qfree();
            }
            if ( v76 )
            {
              *(_QWORD *)&v77 = 0;
              qfree();
            }
            return 0;
          default:
            *(_DWORD *)(a2 + 8) = 70;
            if ( !under_debugger )
              sub_3835A0(52348);
            BUG();
        }
      }
    }
    else
    {
      v8 = unpack_dq();
      v9 = *(_QWORD **)(a1 + 8);
    }
    v10 = *v9 + v8;
    goto LABEL_7;
  }
  return 0;
}

