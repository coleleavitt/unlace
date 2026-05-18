__int64 __fastcall sub_10EB60(__int64 *a1, int a2)
{
  __int64 v2; // r14
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebx
  _BYTE *v9; // r13
  unsigned int v10; // eax
  unsigned int v11; // r15d
  __int64 v12; // rdx
  int v13; // r13d
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rsi
  __int64 v17; // rdi
  unsigned int v18; // eax
  bool v19; // cc
  __int64 v20; // r12
  __int64 v21; // rbp
  _BOOL8 v22; // rsi
  __int64 v23; // r12
  void *v24; // rax
  __int64 v25; // r13
  char *v26; // rsi
  _DWORD *v27; // rax
  __int64 v28; // rax
  const char *v29; // rbx
  __int64 v30; // r13
  char *v31; // r14
  unsigned int v32; // eax
  unsigned int v33; // ebp
  size_t v34; // rax
  __int64 (__fastcall *v35)(__int64, __int64, _QWORD); // rax
  char v36; // [rsp+0h] [rbp-A8h]
  __int64 v37; // [rsp+8h] [rbp-A0h]
  int s2; // [rsp+10h] [rbp-98h]
  char *s2a; // [rsp+10h] [rbp-98h]
  char *s; // [rsp+18h] [rbp-90h]
  __int64 v41; // [rsp+20h] [rbp-88h]
  __int64 v42; // [rsp+28h] [rbp-80h]
  __int64 v43; // [rsp+30h] [rbp-78h]
  char v44; // [rsp+38h] [rbp-70h]
  signed int v45; // [rsp+38h] [rbp-70h]
  unsigned int v46; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v47; // [rsp+44h] [rbp-64h] BYREF
  unsigned int v48; // [rsp+48h] [rbp-60h] BYREF
  int v49; // [rsp+4Ch] [rbp-5Ch] BYREF
  int v50; // [rsp+50h] [rbp-58h] BYREF
  int v51; // [rsp+54h] [rbp-54h] BYREF
  __int64 v52; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v53[9]; // [rsp+60h] [rbp-48h] BYREF

  v2 = (__int64)a1;
  v4 = *a1;
  v53[1] = __readfsqword(0x28u);
  v5 = a1[25];
  v6 = a1[10];
  v48 = 0;
  v49 = 1;
  v50 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, &v52);
  if ( v7
    || (v9 = *(_BYTE **)(v2 + 280), (v7 = sub_C80D0(*(_QWORD *)(v2 + 80), v9, *(_DWORD *)(*(_QWORD *)v2 + 8LL) + 1)) != 0) )
  {
    *(_BYTE *)(v2 + 23) = *(_BYTE *)(v2 + 16);
  }
  else if ( *v9 && (v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, int *))(v4 + 56))(v4, v9, 0, &v49)) != 0 )
  {
    v7 = v10;
    *(_BYTE *)(v2 + 23) = *(_BYTE *)(v2 + 16);
  }
  else
  {
    v11 = v49;
    if ( v49 )
    {
      v12 = v52;
      *(_QWORD *)(v2 + 96) = 0;
      v13 = a2;
      v44 = a2 & 1;
      while ( 1 )
      {
        v14 = sub_D3400(v2, a2, v12, &v47, &v48);
        if ( v14 )
          break;
        v15 = v47;
        v16 = *(unsigned int *)(v2 + 184);
        if ( v47 == -1 )
        {
          v15 = (v52 - v16) / (*(_QWORD *)(v2 + 200) + 8LL);
          v47 = v15;
        }
        v17 = *(_QWORD *)(v2 + 96);
        if ( !(a2 | v15) && v16 + *(_QWORD *)(v2 + 104) == v17 )
          v47 = (v52 - v17) / (*(_QWORD *)(v2 + 200) + 8LL);
        if ( v17 == v16 )
        {
          v14 = sub_C6390(v2, v48);
          if ( v14 )
          {
            v36 = v44 & (v7 != 0);
            goto LABEL_30;
          }
          v18 = v48;
          v19 = v48 <= *(_DWORD *)(v2 + 188);
          *(_DWORD *)(v2 + 32) = v48;
          if ( !v19 )
            *(_DWORD *)(v2 + 188) = v18;
        }
        if ( v47 )
        {
          if ( v13 )
            sub_CBBE0(v2);
          v11 = v7;
          while ( 1 )
          {
            v14 = sub_10E140(v2, (_QWORD *)(v2 + 96), nullptr, 1, 0);
            v13 = v14;
            if ( v14 )
              break;
            if ( v47 <= ++v11 - v7 )
              goto LABEL_23;
          }
          if ( v14 != 101 )
          {
            v36 = v44 & (v11 != 0);
            if ( v14 != 522 )
            {
              v7 = v11;
              goto LABEL_30;
            }
            goto LABEL_34;
          }
          v12 = v52;
          v13 = 0;
          v7 = v11;
          *(_QWORD *)(v2 + 96) = v52;
        }
        else
        {
          v11 = v7;
LABEL_23:
          v12 = v52;
          v7 = v11;
        }
      }
      v36 = v44 & (v7 != 0);
      if ( v14 != 101 )
      {
LABEL_30:
        v11 = v7;
        v7 = v14;
        *(_BYTE *)(v2 + 23) = *(_BYTE *)(v2 + 16);
        goto LABEL_31;
      }
      v11 = v7;
    }
    else
    {
      v36 = 0;
    }
LABEL_34:
    v7 = sub_D2EC0(v2, (__int64)&v50, -1);
    *(_BYTE *)(v2 + 23) = *(_BYTE *)(v2 + 16);
    if ( !v7 )
    {
      v20 = *(_QWORD *)(v2 + 280);
      v21 = v20 + 4;
      v7 = sub_C80D0(*(_QWORD *)(v2 + 80), (_BYTE *)(v20 + 4), *(_DWORD *)(*(_QWORD *)v2 + 8LL) + 1);
      if ( !v7 && ((unsigned __int8)(*(_BYTE *)(v2 + 21) - 1) <= 2u || (v7 = sub_CC330(v2, 0)) == 0) )
      {
        v22 = *(_BYTE *)(v20 + 4) != 0;
        v7 = sub_D66C0(v2, v22, 0);
        if ( !v7 )
        {
          if ( *(_BYTE *)(v20 + 4) )
          {
            v7 = v49;
            if ( v49 )
            {
              *(_DWORD *)v20 = 0;
              v23 = *(_QWORD *)v2;
              v24 = sub_D2260(2 * *(_DWORD *)(*(_QWORD *)v2 + 4LL), v22);
              v25 = (__int64)v24;
              if ( v24 )
              {
                v26 = (char *)v21;
                v7 = (*(__int64 (__fastcall **)(__int64, __int64, void *, __int64, _QWORD))(v23 + 40))(
                       v23,
                       v21,
                       v24,
                       16385,
                       0);
                s2 = *(_DWORD *)(v23 + 4);
                if ( v7 )
                {
                  sub_C91C0(0, v21);
                }
                else
                {
                  v26 = (char *)v53;
                  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v25 + 48LL))(v25, v53);
                  v37 = 0;
                  if ( !v7 )
                  {
                    v45 = *(_DWORD *)(v23 + 8) + 1;
                    v27 = (_DWORD *)sub_D1E10(v53[0] + v45 + 6LL, (__int64)v53);
                    v37 = (__int64)v27;
                    if ( v27 )
                    {
                      *v27 = 0;
                      s = (char *)(v27 + 1);
                      v26 = (char *)(v27 + 1);
                      v41 = v53[0];
                      v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v25 + 16LL))(
                             v25,
                             v27 + 1,
                             LODWORD(v53[0]),
                             0);
                      if ( !v7 )
                      {
                        *(_BYTE *)(v37 + v53[0] + 4) = 0;
                        s[v53[0] + 1] = 0;
                        if ( v53[0] <= 0LL )
                        {
LABEL_71:
                          if ( *(_QWORD *)v25 )
                          {
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
                            *(_QWORD *)v25 = 0;
                          }
                          v35 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v23 + 48);
                          if ( v35 )
                          {
                            v26 = (char *)v21;
                            v7 = v35(v23, v21, 0);
                          }
                        }
                        else
                        {
                          v28 = s2;
                          v42 = v25;
                          v46 = v7;
                          v43 = v2;
                          s2a = (char *)v21;
                          v29 = s;
                          v30 = v25 + v28;
                          v31 = &s[v41 + 2];
                          while ( 1 )
                          {
                            v26 = (char *)v29;
                            v32 = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD, int *))(v23 + 56))(
                                    v23,
                                    v29,
                                    0,
                                    &v51);
                            if ( v32 )
                            {
LABEL_67:
                              v25 = v42;
                              v7 = v32;
                              v2 = v43;
                              goto LABEL_43;
                            }
                            if ( v51 )
                            {
                              v26 = (char *)v29;
                              v32 = (*(__int64 (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD))(v23 + 40))(
                                      v23,
                                      v29,
                                      v30,
                                      16385,
                                      0);
                              if ( v32 )
                                goto LABEL_67;
                              v26 = &s[v41 + 2];
                              v33 = sub_C80D0(v30, v31, v45);
                              if ( *(_QWORD *)v30 )
                              {
                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
                                *(_QWORD *)v30 = 0;
                              }
                              if ( v33 )
                              {
                                v25 = v42;
                                v7 = v33;
                                v2 = v43;
                                goto LABEL_43;
                              }
                              if ( *v31 )
                              {
                                v26 = s2a;
                                if ( !strcmp(v31, s2a) )
                                  break;
                              }
                            }
                            v34 = 1;
                            if ( v29 )
                              v34 = (strlen(v29) & 0x3FFFFFFF) + 1;
                            v29 += v34;
                            if ( v29 - s >= v53[0] )
                            {
                              v21 = (__int64)s2a;
                              v25 = v42;
                              v7 = v46;
                              v2 = v43;
                              goto LABEL_71;
                            }
                          }
                          v25 = v42;
                          v7 = 0;
                          v2 = v43;
                        }
                      }
                    }
                    else
                    {
                      v7 = 7;
                    }
                  }
LABEL_43:
                  sub_C91C0(v37, (__int64)v26);
                }
                if ( *(_QWORD *)v25 )
                {
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
                  *(_QWORD *)v25 = 0;
                }
                sub_C91C0(v25, (__int64)v26);
              }
              else
              {
                v7 = 7;
                sub_C91C0(0, v22);
              }
            }
          }
        }
      }
    }
LABEL_31:
    if ( v36 )
      sub_E8BB0(0x21Bu, "recovered %d pages from %s", v11, *(const char **)(v2 + 224));
  }
  sub_CC1F0(v2);
  return v7;
}
