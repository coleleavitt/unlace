__int64 __fastcall sub_10A750(__int64 a1, char *a2, unsigned int *a3, __int64 *a4, char **a5, __int64 **a6)
{
  char *v6; // rbx
  unsigned int v7; // r15d
  int v8; // r13d
  size_t v9; // r12
  __int64 v10; // rbp
  _DWORD *v11; // rax
  char *v12; // rax
  __int64 v13; // rdx
  __int64 result; // rax
  char *v15; // rdx
  __int64 v16; // rax
  _DWORD *v17; // rax
  int v18; // eax
  int v19; // ecx
  int v20; // r12d
  int v21; // ebp
  __int64 v22; // r8
  char *v23; // rdi
  int v24; // edx
  char *v25; // rsi
  __int64 v26; // r11
  char v27; // si
  int v28; // ecx
  __int64 v29; // rsi
  char *v30; // rcx
  size_t v31; // rbx
  __int64 v32; // rbx
  size_t v33; // r12
  size_t v34; // rbp
  const char *v35; // r14
  int v36; // eax
  bool v37; // zf
  char *v38; // rax
  __int64 v39; // rcx
  const void **v40; // r13
  char *v41; // r15
  int v42; // ebp
  const void **v43; // rbx
  int v44; // edx
  int v45; // eax
  int i; // esi
  char v47; // dl
  __int64 *v48; // rax
  char *s; // [rsp+8h] [rbp-90h]
  char *v50; // [rsp+10h] [rbp-88h]
  unsigned int v51; // [rsp+10h] [rbp-88h]
  void *s1; // [rsp+18h] [rbp-80h]
  unsigned int v53; // [rsp+24h] [rbp-74h]
  int v58; // [rsp+50h] [rbp-48h]
  int v59; // [rsp+54h] [rbp-44h]
  const char *v60; // [rsp+58h] [rbp-40h]

  v6 = a2;
  v7 = *a3;
  v50 = (char *)a1;
  v8 = *a3 & 0x40;
  if ( !a2 )
  {
    LODWORD(v9) = 0;
    v10 = 8;
    if ( (unsigned int)sub_FEBD0(a1, 0) )
      return 7;
LABEL_6:
    v11 = (_DWORD *)sub_D1E10(v10, (__int64)a2);
    if ( v11 )
    {
      *v11 = 0;
      v12 = (char *)(v11 + 1);
      s = v12;
      if ( (_DWORD)v9 )
        memcpy(v12, a2, (int)v9);
      v53 = v7 & 0xFFFFFFBF;
      *(_DWORD *)&s[(int)v9] = 0;
LABEL_10:
      v13 = sub_FF150(v50, a2);
      *a4 = v13;
      result = 0;
      if ( !v13 )
      {
        v29 = (__int64)a6;
        *a6 = sub_105970("no such vfs: %s", v50);
        result = 1;
        goto LABEL_39;
      }
      goto LABEL_11;
    }
    return 7;
  }
  v9 = strlen(a2) & 0x3FFFFFFF;
  v10 = (int)v9 + 8;
  if ( v8 )
  {
    if ( (int)v9 <= 4 )
      goto LABEL_5;
  }
  else if ( !byte_241486 || (int)v9 <= 4 )
  {
LABEL_5:
    if ( (unsigned int)sub_FEBD0((__int64)a2, (__int64)a2) )
      return 7;
    goto LABEL_6;
  }
  if ( *(_DWORD *)a2 != 1701603686 || a2[4] != 58 )
    goto LABEL_5;
  v15 = a2;
  do
  {
    v16 = *v15++ == 38;
    v10 += v16;
  }
  while ( &a2[(unsigned int)(v9 - 1) + 1] != v15 );
  if ( (unsigned int)sub_FEBD0((__int64)a2, (__int64)a2) )
    return 7;
  v17 = (_DWORD *)sub_D1E10(v10, (__int64)a2);
  if ( !v17 )
    return 7;
  *v17 = 0;
  v53 = v7 | 0x40;
  s = (char *)(v17 + 1);
  if ( a2[5] == 47 )
  {
    if ( a2[6] == 47 )
    {
      LOBYTE(v18) = a2[7];
      if ( (_BYTE)v18 == 47 || !(_BYTE)v18 )
      {
        v19 = 7;
      }
      else
      {
        for ( i = 7; ; ++i )
        {
          v19 = i + 1;
          v47 = v6[i + 1];
          if ( !v47 || v47 == 47 )
            break;
        }
        if ( i != 6 )
        {
          if ( i != 15 || *(_QWORD *)(v6 + 7) != 0x736F686C61636F6CLL || v6[15] != 116 )
          {
            v48 = sub_105970("invalid uri authority: %.*s", i - 6, v6 + 7);
            v29 = (__int64)a6;
            *a6 = v48;
            result = 1;
            goto LABEL_39;
          }
          LOBYTE(v18) = v6[16];
        }
      }
    }
    else
    {
      LOBYTE(v18) = 47;
      v19 = 5;
    }
  }
  else
  {
    LOBYTE(v18) = a2[5];
    v19 = 5;
  }
  v20 = 0;
  v21 = 0;
  v22 = 0;
LABEL_31:
  while ( 1 )
  {
    a2 = s;
    v23 = &s[v22];
    if ( !(_BYTE)v18 || (_BYTE)v18 == 35 )
      break;
    v24 = v19 + 1;
    v25 = &v6[v19 + 1];
    if ( (_BYTE)v18 == 37 )
    {
      v26 = (unsigned __int8)*v25;
      if ( (byte_1BEF00[v26] & 8) == 0 )
      {
        if ( v21 != 1 )
        {
LABEL_37:
          ++v20;
          goto LABEL_30;
        }
LABEL_48:
        ++v20;
        v21 = 1;
        goto LABEL_30;
      }
      if ( (byte_1BEF00[(unsigned __int8)v6[v24 + 1]] & 8) == 0 )
      {
        if ( v21 == 1 )
          goto LABEL_48;
        ++v20;
        goto LABEL_88;
      }
      v24 = v19 + 3;
      v27 = v6[v19 + 2];
      v28 = (v27 + 8 * ((v27 >> 6) & 1) + ((v27 >> 6) & 1)) & 0xF;
      v25 = &v6[v24];
      v18 = v28 + 16 * (((_BYTE)v26 + 8 * (((char)v26 >> 6) & 1) + (((char)v26 >> 6) & 1)) & 0xF);
      if ( v18 )
        goto LABEL_37;
      LOBYTE(v18) = *v25;
      if ( *v25 == 35 || !(_BYTE)v18 )
      {
LABEL_132:
        v19 = v24;
      }
      else if ( (_BYTE)v18 == 63 && !v21 )
      {
        v19 = v24;
        v21 = 0;
        LOBYTE(v18) = 63;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v19 = v24;
            if ( v21 == 1 )
              break;
            if ( v21 == 2 && (_BYTE)v18 == 38 )
            {
              LOBYTE(v18) = v6[v24];
              goto LABEL_31;
            }
            v19 = ++v24;
            LOBYTE(v18) = v6[v24];
            if ( !(_BYTE)v18 || (_BYTE)v18 == 35 )
              goto LABEL_31;
            if ( (_BYTE)v18 == 63 && !v21 )
            {
              v21 = 0;
              LOBYTE(v18) = 63;
              goto LABEL_31;
            }
          }
          if ( (_BYTE)v18 == 61 || (_BYTE)v18 == 38 )
            break;
          v19 = ++v24;
          LOBYTE(v18) = v6[v24];
          if ( !(_BYTE)v18 || (_BYTE)v18 == 35 )
            goto LABEL_31;
        }
        LOBYTE(v18) = v6[v24];
      }
    }
    else
    {
      if ( v21 != 1 )
      {
        ++v20;
        if ( !v21 && (_BYTE)v18 == 63 )
        {
          v21 = 1;
          LOBYTE(v18) = 0;
          goto LABEL_30;
        }
LABEL_88:
        if ( v21 == 2 && (_BYTE)v18 == 38 )
        {
          v21 = 1;
          LOBYTE(v18) = 0;
        }
        goto LABEL_30;
      }
      if ( (_BYTE)v18 != 38 && (_BYTE)v18 != 61 )
        goto LABEL_48;
      if ( s[v22 - 1] )
      {
        v30 = &s[v20 + 1];
        if ( (_BYTE)v18 == 38 )
        {
          *v23 = 0;
          v20 += 2;
          v23 = v30;
        }
        else
        {
          ++v20;
          v21 = 2;
        }
        LOBYTE(v18) = 0;
LABEL_30:
        *v23 = v18;
        LOBYTE(v18) = *v25;
        v19 = v24;
        v22 = v20;
      }
      else
      {
        LOBYTE(v18) = *v25;
        if ( !*v25 || (_BYTE)v18 == 35 )
          goto LABEL_132;
        ++v19;
        if ( v6[v24 - 1] != 38 )
        {
          do
            LOBYTE(v18) = v6[++v19];
          while ( (_BYTE)v18 && (_BYTE)v18 != 35 && v6[v19 - 1] != 38 );
        }
      }
    }
  }
  if ( v21 == 1 )
  {
    *v23 = 0;
    v23 = &s[v20 + 1];
  }
  *(_DWORD *)v23 = 0;
  v31 = 1;
  if ( s )
    v31 = (strlen(s) & 0x3FFFFFFF) + 1;
  v32 = (__int64)&s[v31];
  if ( !*(_BYTE *)v32 )
    goto LABEL_10;
  while ( 2 )
  {
    if ( !v32 )
    {
      v35 = (_BYTE *)(&dword_0 + 1);
      v33 = strlen((const char *)&dword_0 + 1) & 0x3FFFFFFF;
      goto LABEL_66;
    }
    LODWORD(v33) = 0;
    v34 = strlen((const char *)v32) & 0x3FFFFFFF;
    v35 = (const char *)(v32 + (int)v34 + 1);
    if ( v32 + (int)v34 != -1 )
      v33 = strlen((const char *)(v32 + (int)v34 + 1)) & 0x3FFFFFFF;
    if ( (_DWORD)v34 == 3 )
    {
      if ( *(_WORD *)v32 != 26230 || (v36 = 0, *(_BYTE *)(v32 + 2) != 115) )
        v36 = 1;
      v37 = v36 == 0;
      v38 = v50;
      v39 = (int)v33;
      if ( v37 )
        v38 = (char *)(v32 + 4);
      v50 = v38;
LABEL_63:
      v32 = (__int64)&v35[v39 + 1];
      if ( !*(_BYTE *)v32 )
        goto LABEL_10;
      continue;
    }
    break;
  }
  if ( (_DWORD)v34 == 5 )
  {
    if ( *(_DWORD *)v32 == 1751343459 && *(_BYTE *)(v32 + 4) == 101 )
    {
      v40 = (const void **)&off_240C00;
      v58 = (int)sub_60000;
      v59 = (int)sub_60000;
      v60 = "cache";
      goto LABEL_71;
    }
    goto LABEL_66;
  }
  if ( (_DWORD)v34 != 4 || *(_DWORD *)v32 != 1701080941 )
  {
LABEL_66:
    v39 = (int)v33;
    goto LABEL_63;
  }
  v59 = 135;
  v40 = (const void **)&off_240BA0;
  v58 = v53 & 0x87;
  v60 = "access";
LABEL_71:
  v41 = (char *)*v40;
  if ( *v40 )
  {
    s1 = (void *)(v32 + (int)v34 + 1);
    v42 = 0;
    v43 = v40;
    while ( 1 )
    {
      if ( (_DWORD)v33 == (strlen(v41) & 0x3FFFFFFF) )
      {
        a2 = v41;
        if ( !memcmp(s1, v41, (int)v33) )
          break;
      }
      v43 = &v40[2 * ++v42];
      v41 = (char *)*v43;
      if ( !*v43 )
      {
        v35 = (const char *)s1;
        goto LABEL_80;
      }
    }
    v44 = *((_DWORD *)v43 + 2);
    v35 = (const char *)s1;
    v39 = (int)v33;
    if ( !v44 )
      goto LABEL_80;
    v45 = *((_DWORD *)v43 + 2);
    LOBYTE(v45) = v44 & 0x7F;
    if ( v45 <= v58 )
    {
      v53 = v53 & ~v59 | v44;
      goto LABEL_63;
    }
    v29 = (__int64)a6;
    *a6 = sub_105970("%s mode not allowed: %s", v60, (const char *)s1);
    result = 3;
  }
  else
  {
LABEL_80:
    v29 = (__int64)a6;
    *a6 = sub_105970("no such %s mode: %s", v60, v35);
    result = 1;
  }
LABEL_39:
  if ( s )
  {
    v51 = result;
    sub_D1DA0((__int64)s, v29);
    s = nullptr;
    result = v51;
  }
LABEL_11:
  *a3 = v53;
  *a5 = s;
  return result;
}
