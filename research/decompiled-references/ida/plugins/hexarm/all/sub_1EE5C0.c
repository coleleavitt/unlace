__int64 __fastcall sub_1EE5C0(__int64 a1, unsigned __int8 *a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r13d
  __int128 v10; // rdi
  _QWORD *v11; // rbx
  unsigned int v13; // r15d
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned int v18; // r13d
  __int64 v19; // r12
  __int64 (*v20)(); // rax
  __int64 *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  _DWORD *v24; // rax
  __int64 *v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  signed int v29; // ecx
  int v30; // eax
  signed int v31; // eax
  __m128i v32; // xmm0
  signed int v33; // [rsp+Ch] [rbp-FCh]
  signed int v34; // [rsp+Ch] [rbp-FCh]
  int v35; // [rsp+18h] [rbp-F0h] BYREF
  int v36; // [rsp+1Ch] [rbp-ECh] BYREF
  _DWORD v37[4]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v38; // [rsp+30h] [rbp-D8h]
  __int64 v39; // [rsp+38h] [rbp-D0h]
  __int64 v40[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v42; // [rsp+58h] [rbp-B0h]
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  __int128 v44; // [rsp+78h] [rbp-90h]
  __int64 v45; // [rsp+88h] [rbp-80h]
  int v46; // [rsp+90h] [rbp-78h]
  __m128i v47; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v50; // [rsp+C8h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  if ( !a4 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( *(_DWORD *)v4 == 62 )
    {
      *(_BYTE *)(a1 + 40) = 1;
      return 0;
    }
    v6 = *a2;
    if ( (unsigned __int8)v6 <= 0xFu )
    {
      v8 = -33315;
      if ( !_bittest64(&v8, v6) )
      {
        if ( *(_BYTE *)(v4 + 64) != 8
          || (v15 = *(_DWORD *)(*(_QWORD *)(v4 + 72) + 284LL), (unsigned int)(v15 - 25) > 1) && v15 != 23 )
        {
          if ( !sub_11E770((__int64)a2) )
          {
            if ( *a2 == 1 )
            {
              v18 = *((_DWORD *)a2 + 2);
              v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1504LL);
            }
            else
            {
              if ( *a2 != 9 )
                goto LABEL_9;
              v21 = *((__int64 **)a2 + 1);
              v22 = *v21;
              v23 = *((int *)v21 + 4);
              if ( *(_QWORD *)(v22 + 440) < v23 )
                sub_1ECF40(a2);
              v24 = (_DWORD *)(*(_QWORD *)(v22 + 432) + 104 * v23);
              if ( *v24 != 3 )
                goto LABEL_9;
              v18 = v24[2];
              v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1504LL);
            }
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 264LL))(v19, v18) )
              return 0;
            v20 = *(__int64 (**)())(*(_QWORD *)v19 + 192LL);
            if ( v20 != sub_133D20 )
            {
              if ( ((unsigned __int8 (__fastcall *)(__int64, _QWORD))v20)(v19, v18) )
                return 0;
            }
LABEL_9:
            v9 = -65536;
            if ( (unsigned __int8)sub_11DD00(*(int ***)(a1 + 32), &v35, &v36, 0) )
            {
              v9 = (v36 << 19) | (unsigned __int16)(8 * v35);
            }
            else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 32) + 4LL) & 0x10) != 0 && *((_DWORD *)a2 + 1) == 16 )
            {
              v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 8LL);
              v17 = (unsigned __int8)getinf() ? (unsigned __int8)getinf() : *(_QWORD *)(v16 + 120);
              if ( v17 == 16 )
                v9 = 5242880;
            }
            *(_QWORD *)&v10 = *(_QWORD *)(a1 + 16);
            *((_QWORD *)&v10 + 1) = v40;
            v42 = 0;
            v40[0] = 0;
            v40[1] = 0;
            v41 = 0;
            sub_1238E0(v10, (__int64)a2, 0, v9);
            if ( (unsigned __int8)sub_64280(v40) && !(_QWORD)v42 )
              goto LABEL_13;
            if ( *a2 != 15 )
            {
              if ( *a2 != 9 )
              {
LABEL_13:
                sub_1ED2E0((__int64)v40, *(_QWORD **)(*(_QWORD *)(a1 + 16) + 64LL));
                v11 = *(_QWORD **)(a1 + 48);
                if ( !(unsigned __int8)sub_64220(v40, v11) || !(unsigned __int8)sub_318300(v11 + 2, &v41) )
                  a2[1] |= 0x10u;
                if ( v41 )
                {
                  *(_QWORD *)&v42 = 0;
                  qfree();
                }
                qfree();
                return 0;
              }
              if ( *(_QWORD *)(**((_QWORD **)a2 + 1) + 440LL) < (unsigned __int64)*(int *)(*((_QWORD *)a2 + 1) + 16LL) )
                sub_1ECF40(v40);
            }
            v43 = 0;
            v45 = 0;
            v46 = -1;
            v44 = 0;
            if ( (unsigned __int8)calc_tinfo_gaps() && (_QWORD)v44 )
            {
              if ( *a2 == 9
                && *(_QWORD *)(**((_QWORD **)a2 + 1) + 440LL) < (unsigned __int64)*(int *)(*((_QWORD *)a2 + 1) + 16LL) )
              {
                sub_1ECF40(&v43);
              }
              v37[0] = 0;
              copy_argloc();
              v13 = *((_DWORD *)a2 + 1);
              if ( *a2 == 9 )
              {
                v25 = *((__int64 **)a2 + 1);
                v26 = *v25;
                v27 = *((int *)v25 + 4);
                if ( *(_QWORD *)(*v25 + 440) < v27 )
                  sub_1ECF40(v37);
                v28 = v25[1];
                v29 = *(_DWORD *)(*(_QWORD *)(v26 + 432) + 104 * v27 + 88);
                v30 = v28;
                if ( (int)v28 > 0 )
                {
                  v33 = v29;
                  v38 = 0;
                  v39 = (int)v28;
                  rangeset_t_add();
                  v13 = *((_DWORD *)a2 + 1);
                  v29 = v33;
                  v30 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 8LL);
                }
                v31 = v13 + v30;
                if ( v29 > v31 )
                {
                  v32 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v31), _mm_cvtsi32_si128(v29));
                  v34 = v29;
                  v47 = _mm_unpacklo_epi32(v32, _mm_cmpgt_epi32((__m128i)0LL, v32));
                  rangeset_t_add();
                  v29 = v34;
                }
                v13 = v29;
              }
              if ( (unsigned int)sub_1C2690(v37, &v43, v13) )
              {
                v14 = *(_QWORD *)(a1 + 16);
                v47 = 0u;
                v48 = 0;
                v49 = 0;
                sub_1C2BF0((__int64)v37, (__int64)&v47, v13, *(_QWORD *)(*(_QWORD *)(v14 + 64) + 1440LL), 0);
                sub_64100(v40, v47.m128i_i64);
                sub_318480(&v41, &v48);
                if ( v48 )
                {
                  *(_QWORD *)&v49 = 0;
                  qfree();
                }
                qfree();
              }
              cleanup_argloc();
            }
            if ( v43 )
            {
              *(_QWORD *)&v44 = 0;
              qfree();
            }
            goto LABEL_13;
          }
        }
      }
    }
  }
  return 0;
}

