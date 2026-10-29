__int64 __fastcall sub_215490(__int64 *a1, __int64 a2, double a3, __int64 a4, char a5)
{
  __int64 v7; // rbp
  __int64 v8; // rax
  int *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  int v12; // eax
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  _QWORD *v17; // r8
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 i; // r15
  int v21; // eax
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int *v28; // r13
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  int v35; // [rsp+Ch] [rbp-9Ch]
  _QWORD *v36; // [rsp+10h] [rbp-98h]
  __int64 v37; // [rsp+10h] [rbp-98h]
  __int64 v38; // [rsp+18h] [rbp-90h]
  _QWORD v39[5]; // [rsp+20h] [rbp-88h] BYREF
  char v40; // [rsp+48h] [rbp-60h]
  __int64 v41; // [rsp+50h] [rbp-58h]
  int v42; // [rsp+58h] [rbp-50h]
  unsigned __int64 v43; // [rsp+68h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 9 )
  {
    v7 = a1[12] + 32LL * *(int *)(*(_QWORD *)(a2 + 8) + 16LL);
    v8 = *(_QWORD *)(v7 + 8);
    if ( a5 )
    {
      *(_QWORD *)(v7 + 8) = v8 + 1;
    }
    else
    {
      ++*(_QWORD *)(v7 + 16);
      if ( v8 )
        goto LABEL_5;
      v9 = *(int **)(a2 + 8);
      v10 = v9[4];
      if ( *(_QWORD *)(*(_QWORD *)v9 + 440LL) < v10 )
      {
        if ( !under_debugger )
          sub_383060(0xC83Au, a3);
        goto LABEL_44;
      }
      v11 = *(_QWORD *)(*(_QWORD *)v9 + 432LL) + 104 * v10;
      v12 = *(_DWORD *)(v11 + 24);
      if ( (v12 & 0x100) != 0 && !*((_QWORD *)v9 + 1) )
      {
        v13 = *(_DWORD *)(v11 + 88);
        if ( v13 == *(_DWORD *)(a2 + 4) && (v12 & 0x2080) == 0 )
        {
          v14 = a1[4];
          if ( (*(_DWORD *)v14 == 4 || *(_DWORD *)v14 == 67 && *(_DWORD *)(v14 + 36) == *(_DWORD *)(v14 + 68))
            && a2 == v14 + 32
            && *(_BYTE *)(v14 + 64) == 9 )
          {
            v15 = *(_QWORD *)(v14 + 72);
            if ( !*(_QWORD *)(v15 + 8) )
            {
              if ( (*(_BYTE *)(a2 + 1) & 0x10) != 0 )
                goto LABEL_6;
              v16 = *(int *)(v15 + 16);
              v17 = (_QWORD *)a1[1];
              v35 = *(_DWORD *)(v15 + 16);
              v18 = v17[54] + 104 * v16;
              if ( v13 != *(_DWORD *)(v18 + 88) )
                return 0;
              v19 = v17[157];
              for ( i = v19; ; i += 96 )
              {
                if ( i == 96LL * v17[158] + v19 )
                  goto LABEL_28;
                v38 = v16;
                v36 = v17;
                v21 = sub_3307E0((int *)i, (int *)v18);
                v16 = v38;
                if ( !v21 )
                  break;
                v17 = v36;
                v19 = v36[157];
              }
              if ( !i || (*(_BYTE *)(i + 88) & 8) == 0 )
              {
LABEL_28:
                if ( (*(_WORD *)(v18 + 24) & 0x180) == 0 )
                {
                  v22 = 32 * v16;
                  if ( !*(_QWORD *)(a1[12] + 32 * v16 + 8)
                    && !(unsigned __int8)sub_1C27D0(v11, a1[1], *(_DWORD *)(v11 + 88), a3) )
                  {
                    v23 = a1[1];
                    if ( !(unsigned __int8)sub_1C27D0(v18, v23, *(_DWORD *)(v18 + 88), a3) )
                    {
                      if ( !a1[7] )
                      {
                        v34 = sub_670E0((_QWORD *)a1[1], v23, v24, v25);
                        sub_3105C0(v34, (__int64)(a1 + 6), (__int64)(a1 + 9));
                      }
                      v26 = *(int *)(a1[6] + 4LL * *(int *)(a1[2] + 72));
                      if ( (_DWORD)v26 != -1 )
                      {
                        v27 = a1[9] + 24 * v26;
                        v28 = *(unsigned int **)v27;
                        v29 = *(_QWORD *)v27 + 4LL * *(_QWORD *)(v27 + 8);
                        while ( 1 )
                        {
                          if ( v28 == (unsigned int *)v29 )
                            goto LABEL_39;
                          v30 = *v28;
                          v31 = a1[4];
                          v40 = 0;
                          memset(&v39[1], 0, 32);
                          v32 = a1[1];
                          v39[0] = &off_4DF748;
                          v41 = v31;
                          v42 = v35;
                          if ( (unsigned int)v30 >= *(_DWORD *)(v32 + 64) )
                            break;
                          v37 = v29;
                          ++v28;
                          v33 = sub_11F5B0(*(const __m128i **)(*(_QWORD *)(v32 + 528) + 8 * v30), (__int64)v39);
                          v29 = v37;
                          if ( v33 )
                            goto LABEL_5;
                        }
                        if ( !under_debugger )
                          sub_383060(0xCDEFu, a3);
LABEL_44:
                        BUG();
                      }
LABEL_39:
                      *(_QWORD *)(a1[12] + v22) = a1[4];
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_5:
    if ( (*(_BYTE *)(a2 + 1) & 0x10) == 0 )
      return 0;
LABEL_6:
    *(_BYTE *)(v7 + 24) = 1;
  }
  return 0;
}

