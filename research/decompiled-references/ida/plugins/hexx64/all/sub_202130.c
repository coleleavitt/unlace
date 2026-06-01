__int64 __fastcall sub_202130(__int64 a1, unsigned int a2, __int64 a3, double a4, __m128 a5)
{
  __int64 v6; // rdx
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rsi
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // rcx
  unsigned int *v15; // rdx
  unsigned int *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  __m128i *v19; // r13
  _QWORD *v20; // r8
  unsigned __int8 v21; // r10
  __int64 v22; // r12
  unsigned __int8 v23; // al
  __int64 *v24; // rbp
  __int64 v25; // rcx
  unsigned int *v26; // rdx
  unsigned int *v27; // rax
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // [rsp+10h] [rbp-A8h]
  _QWORD *v38; // [rsp+10h] [rbp-A8h]
  unsigned __int8 v39; // [rsp+1Fh] [rbp-99h]
  unsigned __int8 v40; // [rsp+1Fh] [rbp-99h]
  unsigned __int64 *v41[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v42; // [rsp+30h] [rbp-88h] BYREF
  __int128 v43; // [rsp+38h] [rbp-80h]
  __int64 v44[2]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 *v45[11]; // [rsp+60h] [rbp-58h] BYREF

  v45[3] = (unsigned __int64 *)__readfsqword(0x28u);
  if ( a2 && (*(_BYTE *)(a3 + 48) & 0x10) == 0 && *(_BYTE *)(a3 + 32) != 5 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( a2 >= *(_DWORD *)(v6 + 64) )
      sub_201380(a4);
    v8 = *(_QWORD *)(*(_QWORD *)(v6 + 528) + 8LL * a2);
    if ( *(_DWORD *)(v8 + 76) != 1 )
    {
      v9 = sub_201E10((_QWORD *)v8, a3, 1, a4, a5);
      if ( v9 )
      {
        v10 = *(_QWORD *)(a1 + 16);
        v43 = 0;
        v41[0] = nullptr;
        v41[1] = nullptr;
        v42 = 0;
        sub_103D60(a3, v10, (__int64 *)v41);
        sub_127A20((__int64)v44, v8, v9, 385, v11, v12, 0.0, a5);
        if ( !(unsigned __int8)sub_64780(v44, v41)
          && !(unsigned __int8)sub_318470(v45, (__int64)&v42)
          && !sub_A9AA0(v8, v41, *(_QWORD *)(v8 + 48), v9, 1u) )
        {
          *(_BYTE *)(a3 + 48) |= 0x10u;
          *(_BYTE *)(a1 + 40) = 1;
          v14 = *(_QWORD *)(a3 + 8);
          v15 = (unsigned int *)(*(_QWORD *)a3 + 4 * v14);
          if ( *(unsigned int **)a3 == v15 )
            goto LABEL_21;
          v16 = *(unsigned int **)a3;
          while ( *v16 != a2 )
          {
            if ( v15 == ++v16 )
              goto LABEL_21;
          }
          if ( v15 == v16 )
          {
LABEL_21:
            if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v14 + 1) )
            {
              v34 = qvector_reserve(a3, *(_QWORD *)a3, v14 + 1, 4);
              v35 = *(_QWORD *)(a3 + 8);
              *(_QWORD *)a3 = v34;
              v15 = (unsigned int *)(v34 + 4 * v35);
            }
            *v15 = a2;
            v17 = *(_QWORD *)(a3 + 24);
            ++*(_QWORD *)(a3 + 8);
            v18 = *(int *)(a3 + 40);
            v37 = v17;
            v39 = *(_BYTE *)(a3 + 32);
            v19 = (__m128i *)(**(_QWORD **)(a1 + 32) + 24LL * (int)a2);
            v20 = sub_1041A0((unsigned __int64 *)v19, a3);
            if ( (_QWORD *)v19->m128i_i64[0] == v20 )
            {
              v36 = sub_107A10(v19, (const __m128i *)(a3 + 24), *(_DWORD *)(a3 + 40), a2, (__m128i)0LL);
              if ( (*(_BYTE *)(a3 + 48) & 4) != 0 )
                *(_BYTE *)(v36 + 72) |= 4u;
            }
            else
            {
              v21 = v39;
              v22 = v37 + v18;
              do
              {
                v23 = *((_BYTE *)v20 + 56);
                v24 = v20 + 3;
                if ( v23 >= v21 && (v21 < v23 || v22 <= v20[6]) )
                  break;
                v25 = v20[4];
                v26 = (unsigned int *)(*v24 + 4 * v25);
                if ( (unsigned int *)*v24 == v26 )
                  goto LABEL_38;
                v27 = (unsigned int *)*v24;
                while ( *v27 != a2 )
                {
                  if ( v26 == ++v27 )
                    goto LABEL_38;
                }
                if ( v26 == v27 )
                {
LABEL_38:
                  if ( v20[5] < (unsigned __int64)(v25 + 1) )
                  {
                    v40 = v21;
                    v38 = v20;
                    v32 = qvector_reserve((__int64)(v20 + 3), *v24, v25 + 1, 4);
                    v33 = v24[1];
                    v21 = v40;
                    *v24 = v32;
                    v20 = v38;
                    v26 = (unsigned int *)(v32 + 4 * v33);
                  }
                  *v26 = a2;
                  ++v24[1];
                }
                if ( (*v20 & 2) == 0 )
                {
                  v28 = (_QWORD *)v20[2];
                  if ( (*(_BYTE *)v28 & 2) != 0 )
                  {
                    v29 = (_QWORD *)(*v20 & 0xFFFFFFFFFFFFFFFCLL);
                    v30 = *v29;
                    if ( (*v29 & 2) == 0 )
                    {
                      while ( (_QWORD *)v29[2] == v20 )
                      {
                        v20 = v29;
                        v31 = v30 & 0xFFFFFFFFFFFFFFFCLL;
                        v30 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v30 & 2) != 0 )
                        {
                          v20 = (_QWORD *)v31;
                          goto LABEL_36;
                        }
                        v29 = (_QWORD *)v31;
                      }
                    }
                    v20 = v29;
                  }
                  else
                  {
                    do
                    {
                      v20 = v28;
                      v28 = (_QWORD *)v28[1];
                    }
                    while ( (*(_BYTE *)v28 & 2) == 0 );
                  }
                }
LABEL_36:
                ;
              }
              while ( v20 != (_QWORD *)v19->m128i_i64[0] );
            }
          }
        }
        if ( v45[0] )
        {
          v45[1] = nullptr;
          qfree((__int64)v45[0]);
        }
        qfree(v44[0]);
        if ( v42 )
        {
          *(_QWORD *)&v43 = 0;
          qfree(v42);
        }
        qfree((__int64)v41[0]);
      }
    }
  }
  return 0;
}

