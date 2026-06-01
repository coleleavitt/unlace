__int64 __fastcall sub_1EE200(__int64 a1, unsigned __int8 *a2, __int64 a3, char a4, double a5, __m128 a6)
{
  __int64 v6; // rax
  unsigned __int64 v8; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r13d
  __int64 v12; // rdi
  __m128i *v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  int *v17; // rsi
  __int64 v18; // rcx
  unsigned int v19; // r15d
  __int64 v20; // rax
  __m128i *v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r12
  __int64 v25; // rax
  unsigned int v26; // r13d
  __int64 v27; // r12
  __int64 (*v28)(); // rax
  __int64 *v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  _DWORD *v32; // rax
  __int64 *v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // eax
  signed int v38; // eax
  __m128i v39; // xmm0
  unsigned int v40; // [rsp+Ch] [rbp-FCh]
  unsigned int v41; // [rsp+Ch] [rbp-FCh]
  int v42; // [rsp+18h] [rbp-F0h] BYREF
  int v43; // [rsp+1Ch] [rbp-ECh] BYREF
  _DWORD v44[4]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+30h] [rbp-D8h]
  __int64 v46; // [rsp+38h] [rbp-D0h]
  __int64 v47[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v49; // [rsp+58h] [rbp-B0h]
  __int64 v50; // [rsp+70h] [rbp-98h] BYREF
  __int128 v51; // [rsp+78h] [rbp-90h]
  __int64 v52; // [rsp+88h] [rbp-80h]
  int v53; // [rsp+90h] [rbp-78h]
  __m128i v54; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v56; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v57; // [rsp+C8h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( !a4 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( *(_DWORD *)v6 == 62 )
    {
      *(_BYTE *)(a1 + 40) = 1;
      return 0;
    }
    v8 = *a2;
    if ( (unsigned __int8)v8 <= 0xFu )
    {
      v10 = -33315;
      if ( !_bittest64(&v10, v8) )
      {
        if ( *(_BYTE *)(v6 + 64) != 8
          || (v23 = *(_DWORD *)(*(_QWORD *)(v6 + 72) + 284LL), (unsigned int)(v23 - 25) > 1) && v23 != 23 )
        {
          if ( !sub_11ED30((__int64)a2, a5) )
          {
            if ( *a2 == 1 )
            {
              v26 = *((_DWORD *)a2 + 2);
              v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1504LL);
            }
            else
            {
              if ( *a2 != 9 )
                goto LABEL_9;
              v29 = *((__int64 **)a2 + 1);
              v30 = *v29;
              v31 = *((int *)v29 + 4);
              if ( *(_QWORD *)(v30 + 440) < v31 )
                sub_1ECB80(a5);
              v32 = (_DWORD *)(*(_QWORD *)(v30 + 432) + 104 * v31);
              if ( *v32 != 3 )
                goto LABEL_9;
              v26 = v32[2];
              v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1504LL);
            }
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 264LL))(v27, v26) )
              return 0;
            v28 = *(__int64 (**)())(*(_QWORD *)v27 + 192LL);
            if ( v28 != sub_1342E0 )
            {
              if ( ((unsigned __int8 (__fastcall *)(__int64, _QWORD))v28)(v27, v26) )
                return 0;
            }
LABEL_9:
            v11 = -65536;
            if ( (unsigned __int8)sub_11E2C0(*(int ***)(a1 + 32), &v42, &v43, 0) )
            {
              v11 = (v43 << 19) | (unsigned __int16)(8 * v42);
            }
            else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 32) + 4LL) & 0x10) != 0 && *((_DWORD *)a2 + 1) == 16 )
            {
              v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 8LL);
              v25 = (unsigned __int8)getinf() ? (unsigned __int8)getinf() : *(_QWORD *)(v24 + 120);
              if ( v25 == 16 )
                v11 = 5242880;
            }
            v12 = *(_QWORD *)(a1 + 16);
            v49 = 0;
            v47[0] = 0;
            v47[1] = 0;
            v48 = 0;
            sub_123EA0(v12, v47, (__int64)a2, 0, v11, 0.0);
            if ( (unsigned __int8)sub_64880(v47) && !(_QWORD)v49 )
              goto LABEL_13;
            if ( *a2 != 15 )
            {
              if ( *a2 != 9 )
              {
LABEL_13:
                sub_1ECF20((__int64)v47, *(_QWORD **)(*(_QWORD *)(a1 + 16) + 64LL), v13, v14);
                v15 = *(_QWORD **)(a1 + 48);
                if ( !(unsigned __int8)sub_64820(v47, v15) || !(unsigned __int8)sub_317F40(v15 + 2, (__int64)&v48) )
                  a2[1] |= 0x10u;
                if ( v48 )
                {
                  *(_QWORD *)&v49 = 0;
                  qfree(v48);
                }
                qfree(v47[0]);
                return 0;
              }
              if ( *(_QWORD *)(**((_QWORD **)a2 + 1) + 440LL) < (unsigned __int64)*(int *)(*((_QWORD *)a2 + 1) + 16LL) )
                sub_1ECB80(0.0);
            }
            v50 = 0;
            v52 = 0;
            v53 = -1;
            v51 = 0;
            if ( (unsigned __int8)calc_tinfo_gaps() && (_QWORD)v51 )
            {
              v17 = *((int **)a2 + 1);
              if ( *a2 == 9 && *(_QWORD *)(*(_QWORD *)v17 + 440LL) < (unsigned __int64)v17[4] )
                sub_1ECB80(0.0);
              v44[0] = 0;
              copy_argloc();
              v19 = *((_DWORD *)a2 + 1);
              if ( *a2 == 9 )
              {
                v33 = *((__int64 **)a2 + 1);
                v34 = *v33;
                v35 = *((int *)v33 + 4);
                if ( *(_QWORD *)(*v33 + 440) < v35 )
                  sub_1ECB80(0.0);
                v36 = v33[1];
                v18 = *(unsigned int *)(*(_QWORD *)(v34 + 432) + 104 * v35 + 88);
                v37 = v36;
                if ( (int)v36 > 0 )
                {
                  v40 = v18;
                  v45 = 0;
                  v46 = (int)v36;
                  rangeset_t_add();
                  v19 = *((_DWORD *)a2 + 1);
                  v18 = v40;
                  v37 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 8LL);
                }
                v38 = v19 + v37;
                if ( (int)v18 > v38 )
                {
                  v39 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v38), _mm_cvtsi32_si128(v18));
                  v41 = v18;
                  a6 = (__m128)_mm_cmpgt_epi32((__m128i)0LL, v39);
                  v54 = _mm_unpacklo_epi32(v39, (__m128i)a6);
                  rangeset_t_add();
                  v18 = v41;
                }
                v19 = v18;
              }
              if ( (unsigned int)sub_1C2C50((__int64)v44, (__int64)&v50, v19, v18) )
              {
                v20 = *(_QWORD *)(a1 + 16);
                v54 = 0u;
                v55 = 0;
                v56 = 0;
                sub_1C31B0((__int64)v44, (__int64)&v54, v19, *(_QWORD *)(*(_QWORD *)(v20 + 64) + 1440LL), 0, 0.0, a6);
                sub_64700(v47, v54.m128i_i64);
                sub_3180C0(&v48, (__int64)&v55, v21, v22);
                if ( v55 )
                {
                  *(_QWORD *)&v56 = 0;
                  qfree(v55);
                }
                qfree(v54.m128i_i64[0]);
              }
              cleanup_argloc();
            }
            if ( v50 )
            {
              *(_QWORD *)&v51 = 0;
              qfree(v50);
            }
            goto LABEL_13;
          }
        }
      }
    }
  }
  return 0;
}

