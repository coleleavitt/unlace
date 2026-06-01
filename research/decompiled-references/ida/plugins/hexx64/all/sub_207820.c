__int64 __fastcall sub_207820(__int64 a1, double a2, __m128 a3)
{
  __int64 v3; // rdi
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // r12
  char v12; // al
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rdi
  int v15; // eax
  unsigned int *v16; // r12
  unsigned int v17; // r13d
  __int64 v18; // rax
  int *v19; // rdi
  int *v20; // r13
  int *v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // r15
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rsi
  unsigned __int64 v30; // rcx
  signed __int64 v31; // [rsp+10h] [rbp-F0h]
  unsigned __int64 v32; // [rsp+18h] [rbp-E8h]
  _QWORD *v33; // [rsp+20h] [rbp-E0h]
  __m128i *v34; // [rsp+28h] [rbp-D8h]
  char v35; // [rsp+3Eh] [rbp-C2h]
  bool v36; // [rsp+3Fh] [rbp-C1h]
  unsigned int *v37; // [rsp+40h] [rbp-C0h]
  unsigned int v39; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h]
  _QWORD v42[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v43[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h] BYREF
  __int128 v45; // [rsp+98h] [rbp-68h]
  __int128 v46; // [rsp+A8h] [rbp-58h]
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  char v49; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v50; // [rsp+C8h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 56);
  v50 = __readfsqword(0x28u);
  v40 = -1;
  v41 = 0;
  v4 = sub_21E630(v3, (__int64)&v40);
  if ( !v4 || !(_BYTE)v41 )
    return 0;
  v8 = v4;
  v9 = 3LL * *(int *)(sub_1D5170(*(_QWORD *)(a1 + 56), (__int64)&v40, v5, v6, a2) + 72);
  v10 = **(_QWORD **)(a1 + 80);
  v44 = 0;
  v48 = -1;
  v49 = 1;
  v34 = (__m128i *)(v10 + 8 * v9);
  *(_QWORD *)&v46 = v40;
  v45 = 0;
  BYTE8(v46) = v41;
  v47 = HIDWORD(v41);
  v11 = sub_1041A0((unsigned __int64 *)v34, (__int64)&v44);
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44);
  }
  v33 = v11;
  if ( (_QWORD *)v34->m128i_i64[0] == v11 )
  {
    if ( (_BYTE)v41 != 5 )
    {
      if ( !under_debugger )
        sub_383060(0xC4ADu, 0.0);
      BUG();
    }
    return 0;
  }
  v32 = (unsigned __int64)(v11 + 3);
  v12 = *((_BYTE *)v11 + 56);
  if ( v12 == 1 )
  {
    v13 = *((int *)v11 + 12);
  }
  else
  {
    if ( v12 != 5 )
      sub_201340(0.0);
    v13 = v11[6];
  }
  if ( (_BYTE)v41 == v12
    && *((_DWORD *)v11 + 16)
    && v40 >= v13
    && *((int *)v11 + 16) + v13 - 1 >= v40 + SHIDWORD(v41) - 1 )
  {
    return 0;
  }
  v42[0] = 0;
  v42[1] = 0;
  sub_32F770((__int64 *)&v40, v42, v13);
  v36 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 440LL) == 0;
  v31 = v40 + SHIDWORD(v41);
  v35 = v41;
  if ( v11 != (_QWORD *)v34->m128i_i64[0] )
  {
    while ( *((_BYTE *)v33 + 56) == v35 && v31 > v33[6] )
    {
      v16 = (unsigned int *)v33[3];
      v37 = &v16[v33[4]];
      if ( v37 != v16 )
      {
        while ( 1 )
        {
          v17 = *v16;
          if ( !*v16 )
            break;
LABEL_36:
          v44 = 0;
          v45 = 0u;
          v22 = *(_QWORD *)(a1 + 56);
          v46 = 0;
          sub_103D60((__int64)(v33 + 3), v22, &v44);
          v23 = *(_QWORD *)(a1 + 56);
          if ( v17 >= *(_DWORD *)(v23 + 64) )
            sub_201380(0.0);
          v24 = *(_QWORD *)(*(_QWORD *)(v23 + 528) + 8LL * v17);
          v25 = sub_129150(v24, &v44, *(_QWORD *)(v24 + 56), 0, 0, 0, 0.0, a3, 0x101u);
          if ( v25 && sub_11E8C0((unsigned int *)v25) && *(_BYTE *)(v25 + 64) == 15 )
          {
            v43[0] = 0;
            v43[1] = 0;
            sub_32F770(v33 + 6, v43, (__int64)(v33 + 3));
            if ( (unsigned __int8)sub_1C4AE0(
                                    *(int **)(v25 + 72),
                                    *(int *)(v25 + 68),
                                    (int *)v43,
                                    *((int *)v33 + 16),
                                    0.0)
              && !(unsigned __int8)sub_1C3F00() )
            {
              cleanup_argloc();
              sub_93B40(&v44);
              goto LABEL_17;
            }
            cleanup_argloc();
          }
          if ( *((_QWORD *)&v45 + 1) )
          {
            *(_QWORD *)&v46 = 0;
            qfree(*((__int64 *)&v45 + 1));
          }
          ++v16;
          qfree(v44);
          if ( v37 == v16 )
            goto LABEL_43;
        }
        if ( !v36 )
        {
          v18 = *(_QWORD *)(a1 + 56);
          v19 = *(int **)(v18 + 432);
          v20 = &v19[26 * *(_QWORD *)(v18 + 440)];
          if ( v20 != v19 )
          {
            v21 = *(int **)(v18 + 432);
            do
            {
              while ( !(unsigned __int8)sub_1C4AE0(v21, v21[22], (int *)v42, SHIDWORD(v41), 0.0)
                   || (unsigned __int8)sub_1C3F00() )
              {
                v21 += 26;
                if ( v20 == v21 )
                  goto LABEL_33;
              }
              if ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + 320LL) || *v21 == 2 )
                goto LABEL_17;
              v21 += 26;
            }
            while ( v20 != v21 );
          }
        }
LABEL_33:
        while ( ++v16 != v37 )
        {
          v17 = *v16;
          if ( *v16 )
          {
            v36 = v8;
            goto LABEL_36;
          }
        }
        v36 = v8;
      }
LABEL_43:
      if ( (*v33 & 2) == 0 )
      {
        v26 = (_QWORD *)v33[2];
        if ( (*(_BYTE *)v26 & 2) != 0 )
        {
          v27 = (_QWORD *)(*v33 & 0xFFFFFFFFFFFFFFFCLL);
          v28 = *v27;
          if ( (*v27 & 2) == 0 )
          {
            v29 = v33;
            while ( (_QWORD *)v27[2] == v29 )
            {
              v29 = v27;
              v30 = v28 & 0xFFFFFFFFFFFFFFFCLL;
              v28 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v28 & 2) != 0 )
              {
                v33 = (_QWORD *)v30;
                goto LABEL_46;
              }
              v27 = (_QWORD *)v30;
            }
          }
          v33 = v27;
        }
        else
        {
          do
          {
            v33 = v26;
            v26 = (_QWORD *)v26[1];
          }
          while ( (*(_BYTE *)v26 & 2) == 0 );
        }
      }
LABEL_46:
      if ( (_QWORD *)v34->m128i_i64[0] == v33 )
        break;
    }
  }
  if ( (unsigned int)sub_202CA0(a1, *(_QWORD **)(a1 + 80), *(__int64 **)(a1 + 72), v34, v32, (__int64)&v40, 0.0, 0) )
  {
    v15 = -36;
  }
  else
  {
    v14 = *(_QWORD **)(a1 + 56);
    if ( (*(_BYTE *)(v14[187] + 604LL) & 0x10) != 0 )
    {
      sub_1F08B0(v14, 0xFFFFFFFFFFFFFFFFLL, 0x14u);
LABEL_17:
      v15 = 0;
    }
    else
    {
      v15 = -20;
    }
  }
  v39 = v15;
  cleanup_argloc();
  return v39;
}

