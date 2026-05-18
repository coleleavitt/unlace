__int64 __fastcall sub_156CB0(__int64 a1, __int64 a2, int a3, char a4, __int64 a5, _QWORD *a6, _QWORD *a7)
{
  bool v8; // zf
  __int64 v9; // rax
  int v10; // r12d
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // r15
  unsigned __int8 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int8 *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // edx
  _QWORD *j; // rsi
  __int64 v27; // r15
  unsigned int i; // r12d
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdi
  int v40; // [rsp+14h] [rbp-204h]
  char *v41; // [rsp+18h] [rbp-200h]
  unsigned int v43; // [rsp+3Ch] [rbp-1DCh] BYREF
  _QWORD v44[59]; // [rsp+40h] [rbp-1D8h] BYREF

  v41 = (char *)a2;
  v44[0] = a1;
  v44[51] = __readfsqword(0x28u);
  v8 = *(_BYTE *)(a1 + 103) == 0;
  memset(&v44[1], 0, 0xD0u);
  memset(&v44[34], 0, 0x88u);
  v9 = *(_QWORD *)(a1 + 344);
  v44[40] = a5;
  *(_QWORD *)(a1 + 344) = v44;
  v44[31] = v9;
  if ( !v8 )
    sub_DBD10((__int64)v44, "out of memory");
  if ( (a4 & 1) != 0 )
  {
    ++BYTE4(v44[4]);
    ++*(_DWORD *)(a1 + 408);
    *(_WORD *)(a1 + 412) = 0;
  }
  v8 = *(_BYTE *)(a1 + 111) == 0;
  BYTE5(v44[4]) = (a4 & 4) != 0;
  if ( !v8 || *(int *)(a1 + 40) <= 0 )
  {
LABEL_16:
    sub_D04F0(a1);
    if ( a3 >= 0 && (!a3 || *(_BYTE *)(a2 + a3 - 1)) )
    {
      if ( a3 > *(_DWORD *)(a1 + 140) )
      {
        sub_F63C0(a1, 18, "statement too long");
        v12 = sub_D42C0(a1, 0x12u, v33, v34, v35, v36);
        goto LABEL_39;
      }
      v17 = sub_DCB40(a1, (const void *)a2, a3);
      v21 = v17;
      if ( v17 )
      {
        sub_1565D0((__int64)v44, v17);
        a2 = (__int64)v21;
        v44[41] = &v41[v44[41] - (_QWORD)v21];
        sub_C9250(a1, v21);
      }
      else
      {
        v44[41] = a2 + a3;
      }
    }
    else
    {
      sub_1565D0((__int64)v44, (unsigned __int8 *)a2);
    }
    v22 = (__int64)a7;
    if ( a7 )
      *a7 = v44[41];
    if ( !*(_BYTE *)(a1 + 197) )
    {
      v23 = v44[2];
      if ( v44[2] )
      {
        v24 = v44[41];
        *(_BYTE *)(v44[2] + 196LL) = a4;
        if ( a4 >= 0 )
          *(_DWORD *)(v23 + 284) = 0;
        a2 = (__int64)v41;
        *(_QWORD *)(v23 + 248) = sub_DCB40(*(_QWORD *)v23, v41, v24 - (int)v41);
      }
    }
    if ( *(_BYTE *)(a1 + 103) )
    {
      LODWORD(v44[3]) = 7;
      BYTE5(v44[3]) = 0;
    }
    else
    {
      if ( !LODWORD(v44[3]) || LODWORD(v44[3]) == 101 )
      {
        v12 = 0;
        *a6 = v44[2];
        v37 = *(_QWORD *)(a1 + 392);
        *(_QWORD *)(a1 + 80) = 0xFFFFFFFF00000000LL;
        if ( v37 )
        {
          if ( (*(_WORD *)(v37 + 20) & 0x9000) != 0 )
            sub_C93F0(v37, a2, (__int64)a6, v22, v19, v20);
          else
            *(_WORD *)(v37 + 20) = 1;
        }
        goto LABEL_37;
      }
      if ( BYTE5(v44[3]) )
      {
        if ( !*(_BYTE *)(a1 + 197) )
        {
          v27 = v44[0];
          v18 = *(unsigned int *)(v44[0] + 40LL);
          if ( (int)v18 > 0 )
          {
            for ( i = 0; (signed int)i < *(_DWORD *)(v27 + 40); ++i )
            {
              v30 = *(_QWORD *)(v27 + 32);
              v31 = 32LL * (int)i;
              v32 = *(_QWORD *)(v30 + v31 + 8);
              if ( v32 )
              {
                if ( *(_BYTE *)(v32 + 16) )
                {
                  a2 = 1;
                  sub_D5B70(*(_QWORD *)(v30 + v31 + 8), 1, &v43);
                  v22 = v43;
                  if ( **(_DWORD **)(*(_QWORD *)(v27 + 32) + v31 + 24) != v43 )
                  {
                    a2 = i;
                    sub_D8CC0(v27, i);
                    LODWORD(v44[3]) = 17;
                  }
                }
                else
                {
                  a2 = 0;
                  v29 = sub_110580(*(_QWORD *)(v30 + v31 + 8), 0, 0);
                  if ( v29 == 7 || v29 == 3082 )
                  {
                    if ( !*(_BYTE *)(v27 + 103) && !*(_BYTE *)(v27 + 104) )
                    {
                      v40 = v29;
                      sub_DBE60(v27);
                      v29 = v40;
                    }
                    LODWORD(v44[3]) = 7;
                  }
                  if ( v29 )
                    break;
                  a2 = 1;
                  sub_D5B70(v32, 1, &v43);
                  if ( **(_DWORD **)(*(_QWORD *)(v27 + 32) + v31 + 24) != v43 )
                  {
                    a2 = i;
                    sub_D8CC0(v27, i);
                    LODWORD(v44[3]) = 17;
                  }
                  sub_119A70(v32, a2);
                }
              }
            }
          }
        }
      }
    }
    if ( v44[2] )
      sub_11E630(v44[2], a2, v18, v22, v19, v20);
    v12 = v44[3];
    if ( v44[1] )
    {
      sub_F63C0(a1, LODWORD(v44[3]), "%s", (const char *)v44[1]);
      if ( v44[1] )
        sub_C9250(a1, (_QWORD *)v44[1]);
    }
    else
    {
      *(_DWORD *)(a1 + 80) = v44[3];
      if ( v12 || *(_QWORD *)(a1 + 392) )
        sub_CA220((__int64 *)a1, v12, v18, 0, v19, v20);
      else
        *(_DWORD *)(a1 + 84) = -1;
    }
LABEL_37:
    for ( j = (_QWORD *)v44[22]; v44[22]; j = (_QWORD *)v44[22] )
    {
      v44[22] = j[1];
      sub_C9250(a1, j);
    }
    goto LABEL_39;
  }
  v10 = 0;
  while ( 1 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    v14 = 32LL * v10;
    v15 = v14;
    v16 = *(_QWORD *)(v13 + v14 + 8);
    if ( v16 )
    {
      if ( *(_BYTE *)(v16 + 17) )
        sub_CC740(*(_QWORD *)(v13 + v14 + 8));
      v12 = sub_C3900(v16, 1, 1);
      if ( *(_BYTE *)(v16 + 17) )
      {
        v8 = (*(_DWORD *)(v16 + 20))-- == 1;
        if ( v8 )
          sub_CC7D0(v16, 1, v11);
      }
      if ( v12 )
        break;
    }
    if ( *(_DWORD *)(a1 + 40) <= ++v10 )
      goto LABEL_16;
  }
  sub_F63C0(a1, v12, "database schema is locked: %s", *(const char **)(*(_QWORD *)(a1 + 32) + v15));
LABEL_39:
  sub_D7990((__int64)v44);
  return v12;
}
