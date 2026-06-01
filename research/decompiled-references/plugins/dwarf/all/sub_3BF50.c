__int64 __fastcall sub_3BF50(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v3; // rbp
  __int64 v4; // r12
  int v5; // eax
  int v6; // eax
  __int16 v7; // ax
  __int64 v8; // rsi
  __int64 v9; // rdi
  char v10; // al
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // ebp
  __int64 *v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  const char *v23; // rsi
  __int64 v24; // rax
  bool v25; // cc
  __int64 v26; // rdi
  __int64 v27; // rax
  bool v28; // zf
  char *v29; // rsi
  size_t v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  size_t v33; // rdx
  int v34; // eax
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  char *v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // [rsp+8h] [rbp-A0h]
  const char *v41; // [rsp+8h] [rbp-A0h]
  const char *v42; // [rsp+8h] [rbp-A0h]
  size_t na; // [rsp+10h] [rbp-98h]
  char *n; // [rsp+10h] [rbp-98h]
  size_t v45; // [rsp+18h] [rbp-90h]
  size_t v46; // [rsp+18h] [rbp-90h]
  const char *srca; // [rsp+20h] [rbp-88h]
  char *src; // [rsp+20h] [rbp-88h]
  __int64 v49; // [rsp+28h] [rbp-80h]
  bool v50; // [rsp+37h] [rbp-71h] BYREF
  __int64 v51; // [rsp+38h] [rbp-70h] BYREF
  __int64 v52; // [rsp+40h] [rbp-68h] BYREF
  _BYTE *v53; // [rsp+48h] [rbp-60h] BYREF
  char *s2; // [rsp+50h] [rbp-58h] BYREF
  __int128 v55; // [rsp+58h] [rbp-50h]
  unsigned __int64 v56; // [rsp+68h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 143) & 2) != 0 )
    return 0;
  v1 = *(_QWORD *)(a1 + 80);
  v51 = 0;
  v3 = *(_QWORD **)(v1 + 144);
  v4 = v3[11];
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 *))(v4 + 32))(*(_QWORD *)(a1 + 104), &v52, &v51);
  if ( v5 )
  {
    if ( v5 != -1 )
      goto LABEL_23;
    if ( *(_QWORD *)(a1 + 64) )
    {
      v26 = *(_QWORD *)(a1 + 104);
      v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 144LL) + 88LL);
      LODWORD(v53) = 0;
      if ( (*(unsigned int (__fastcall **)(__int64, __int64, _BYTE **, char **))(v27 + 112))(v26, 11, &v53, &s2)
        || !(_DWORD)v53 )
      {
        *(_BYTE *)(a1 + 143) |= 2u;
      }
    }
    return 0;
  }
  do
  {
    v7 = sub_290B0((__int64)v3, *(_QWORD *)(a1 + 80), v52);
    v8 = v52;
    v9 = *(_QWORD *)(a1 + 80);
    if ( v7 == 28 )
      goto LABEL_11;
    if ( v7 != 46 )
    {
      if ( v7 != 13 )
        goto LABEL_5;
LABEL_11:
      LOBYTE(v53) = 0;
      v10 = sub_2C350(v9, v52, 0x3Cu, (bool *)&v53);
      v9 = *(_QWORD *)(a1 + 80);
      if ( v10 && (_BYTE)v53 )
        goto LABEL_10;
      v11 = sub_28270(v9, v52, 0);
      s2 = (char *)v11;
      *(_QWORD *)&v55 = v12;
      if ( (v11 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
        goto LABEL_15;
      if ( v11 == -1 )
        goto LABEL_15;
      v14 = sub_39BA0(v3[18] + 72LL, (__int64)&s2);
      if ( v14 == v3[18] + 80LL )
        goto LABEL_15;
      v15 = *(_QWORD *)(v14 + 48);
      v16 = *(_QWORD *)(a1 + 152);
      v17 = *(_QWORD *)(a1 + 144);
      if ( *(_QWORD *)(a1 + 160) < (unsigned __int64)(v16 + 1) )
      {
        v40 = v15;
        v24 = qvector_reserve(a1 + 144, v17, v16 + 1, 8);
        v15 = v40;
        *(_QWORD *)(a1 + 144) = v24;
        v17 = v24;
        v16 = *(_QWORD *)(a1 + 152);
      }
      *(_QWORD *)(v17 + 8 * v16) = v15;
      v9 = *(_QWORD *)(a1 + 80);
      ++*(_QWORD *)(a1 + 152);
      v8 = v52;
      goto LABEL_5;
    }
    if ( (*(_BYTE *)(a1 + 143) & 4) != 0 )
      goto LABEL_5;
    v50 = 0;
    sub_2C350(v9, v52, 0x34u, &v50);
    v9 = *(_QWORD *)(a1 + 80);
    if ( v50 )
    {
LABEL_10:
      v8 = v52;
      goto LABEL_5;
    }
    s2 = nullptr;
    sub_2C6A0(v9, v52, 0x4Cu, &s2);
    if ( (_BYTE)s2 )
    {
      *(_BYTE *)(a1 + 143) |= 4u;
      v9 = *(_QWORD *)(a1 + 80);
      v8 = v52;
    }
    else
    {
      v25 = *(_QWORD *)(a1 + 48) <= 1u;
      v8 = v52;
      v53 = nullptr;
      if ( !v25 )
      {
        if ( (unsigned int)sub_28770(&v53, (__int64)v3, v52, (__int64)&v51) )
          goto LABEL_15;
        v28 = *v53 == 126;
        v55 = 0;
        s2 = nullptr;
        if ( &v53[v28] )
        {
          srca = &v53[v28];
          na = strlen(srca);
          s2 = (char *)qvector_reserve(&s2, 0, na + 1, 1);
          *(_QWORD *)&v55 = na + 1;
          memmove(s2, srca, na);
          s2[na] = 0;
          v29 = s2;
          if ( (_QWORD)v55 )
          {
            v49 = v55;
            v30 = v55 - 1;
            if ( s2 )
            {
              if ( (_QWORD)v55 != 1 )
              {
                v31 = *(_QWORD *)(a1 + 48);
                if ( v31 )
                {
                  src = *(char **)(a1 + 48);
                  if ( v31 - 1 >= v30 )
                  {
                    v45 = v55 - 1;
                    n = s2;
                    v41 = *(const char **)(a1 + 40);
                    v32 = strncmp(v41, s2, v30);
                    v29 = n;
                    v33 = v45;
                    if ( v32 )
                    {
                      v46 = (size_t)v41;
                      v42 = &src[(_QWORD)v41 - v49];
                      v29 = n;
                      if ( !strncmp(v42, n, v33)
                        && v46 + 2 < (unsigned __int64)v42
                        && *(v42 - 1) == 58
                        && *(v42 - 2) == 58 )
                      {
                        goto LABEL_62;
                      }
                    }
                    else
                    {
                      v34 = (unsigned __int8)v41[v49 - 1];
                      if ( (_BYTE)v34 )
                        goto LABEL_46;
LABEL_62:
                      *(_BYTE *)(a1 + 143) |= 4u;
                    }
                  }
                }
LABEL_50:
                *(_QWORD *)&v55 = 0;
                qfree(v29);
LABEL_15:
                v9 = *(_QWORD *)(a1 + 80);
                v8 = v52;
                goto LABEL_5;
              }
LABEL_53:
              v37 = &byte_CB3E1;
              if ( *(_QWORD *)(a1 + 48) | v30 )
                v37 = (char *)(v30 + *(_QWORD *)(a1 + 40));
              v38 = (unsigned __int8)*v37;
              if ( (_BYTE)v38 )
              {
                v35 = (unsigned int)(v38 - 60);
                if ( (unsigned __int8)v35 > 0x23u )
                {
LABEL_49:
                  if ( v29 )
                    goto LABEL_50;
                  goto LABEL_15;
                }
LABEL_47:
                v36 = 0x880000001LL;
                if ( !_bittest64(&v36, v35) )
                  goto LABEL_49;
              }
              *(_BYTE *)(a1 + 143) |= 4u;
              goto LABEL_49;
            }
LABEL_52:
            v29 = nullptr;
            goto LABEL_53;
          }
          if ( s2 )
          {
            if ( !*(_QWORD *)(a1 + 48) )
            {
              if ( !byte_CB3E1 )
                goto LABEL_62;
              if ( (unsigned __int8)(byte_CB3E1 - 60) <= 0x23u )
              {
                v39 = 0x880000001LL;
                if ( _bittest64(&v39, (unsigned int)(unsigned __int8)byte_CB3E1 - 60) )
                  goto LABEL_62;
              }
              goto LABEL_50;
            }
            v34 = **(unsigned __int8 **)(a1 + 40);
            if ( !(_BYTE)v34 )
              goto LABEL_62;
LABEL_46:
            v35 = (unsigned int)(v34 - 60);
            if ( (unsigned __int8)v35 > 0x23u )
              goto LABEL_50;
            goto LABEL_47;
          }
        }
        v30 = 0;
        goto LABEL_52;
      }
      v9 = *(_QWORD *)(a1 + 80);
    }
LABEL_5:
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *, __int64 *))(v4 + 24))(
           v3[20],
           v8,
           *(_QWORD *)(v9 + 112) >> 63,
           &v52,
           &v51);
  }
  while ( !v6 );
  if ( v6 == -1 )
    return 0;
LABEL_23:
  if ( (debug & 0x400000) != 0 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64))(v4 + 464))(v51);
    v19 = sub_34340(a1);
    v23 = ::src;
    if ( v19[1] )
      v23 = (const char *)*v19;
    sub_88B80((unsigned int)"Error complex DIE %s child enumeration : %s\n", (_DWORD)v23, v18, v20, v21, v22);
  }
  return 5;
}
