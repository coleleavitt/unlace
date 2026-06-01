__int64 __fastcall sub_21FF0(
        const char *src,
        __int64 a2,
        __int64 (__fastcall *a3)(__m128i *, __int64, __int64, __int64),
        __int64 a4)
{
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  size_t v7; // rax
  __int64 v8; // rbx
  size_t v9; // r12
  size_t v10; // r13
  _BYTE *v11; // rsi
  unsigned int v12; // eax
  char *v13; // r13
  unsigned int v14; // ebx
  char *v15; // r14
  size_t v17; // rax
  size_t v18; // rbx
  size_t v19; // r12
  unsigned __int64 v20; // r12
  char *v21; // rax
  unsigned __int64 v22; // r15
  char *v23; // rax
  unsigned __int64 v24; // r13
  size_t v25; // rax
  unsigned __int64 v26; // r12
  size_t v27; // rbx
  size_t v28; // rdx
  size_t v29; // r15
  unsigned int v30; // eax
  _BYTE *v31; // r13
  char *v32; // rax
  signed __int64 v33; // r15
  unsigned __int64 v34; // rbx
  size_t v35; // rax
  __int64 v36; // rdi
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // r13
  size_t v39; // rax
  size_t v40; // [rsp+10h] [rbp-1090h]
  unsigned __int64 v44; // [rsp+30h] [rbp-1070h]
  void *dest; // [rsp+40h] [rbp-1060h] BYREF
  __int128 v46; // [rsp+48h] [rbp-1058h]
  char s[4104]; // [rsp+60h] [rbp-1040h] BYREF
  unsigned __int64 v48; // [rsp+1068h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  dest = nullptr;
  qbasename();
  v46 = 0;
  if ( src )
  {
    v4 = strlen(src);
    v5 = v4 + 1;
    v6 = v4;
    dest = (void *)qvector_reserve(&dest, 0, v4 + 1, 1);
    *(_QWORD *)&v46 = v5;
    memmove(dest, src, v6);
    *((_BYTE *)dest + v6) = 0;
  }
  qmakepath(s, 4096, ".dSYM", "Contents", "Resources", "DWARF");
  v7 = strlen(s);
  v8 = v46;
  v9 = v7;
  v10 = v7;
  if ( (_QWORD)v46 )
  {
    v8 = v46 - 1;
    v10 = v7 + v46 - 1;
  }
  v11 = dest;
  if ( *((_QWORD *)&v46 + 1) < v10 + 1 )
  {
    dest = (void *)qvector_reserve(&dest, dest, v10 + 1, 1);
    v11 = dest;
  }
  *(_QWORD *)&v46 = v10 + 1;
  v11[v10] = 0;
  memmove((char *)dest + v8, s, v9);
  v12 = sub_21580((__int64)dest, a2, a3, a4);
  v13 = (char *)dest;
  v14 = v12;
  v15 = (char *)dest;
  if ( v12 == -1 )
  {
    if ( !src )
      goto LABEL_13;
    v17 = strlen(src);
    v18 = v17;
    if ( !v17 )
      goto LABEL_13;
    v19 = v17 + 1;
    if ( *((_QWORD *)&v46 + 1) < v17 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, v13, v17 + 1, 1);
      v15 = (char *)dest;
    }
    *(_QWORD *)&v46 = v19;
    memmove(v15, src, v18);
    *((_BYTE *)dest + v18) = 0;
    v15 = (char *)dest;
    v20 = v46;
    v13 = (char *)dest;
    if ( !(_QWORD)v46 || (v21 = strrchr((const char *)dest, 46)) == nullptr )
    {
LABEL_13:
      v15 = v13;
      v14 = -1;
      goto LABEL_8;
    }
    v44 = v21 - v15;
    if ( v21 - v15 == -1 )
    {
LABEL_57:
      v14 = -1;
      goto LABEL_8;
    }
    while ( 1 )
    {
      v22 = v20 - 1;
      if ( v20 - 1 < v44 )
        goto LABEL_57;
      v23 = strchr(&v15[v44], 47);
      if ( !v23 )
        goto LABEL_57;
      v24 = v23 - v15;
      if ( v23 - v15 == -1 )
        goto LABEL_57;
      if ( v24 )
        break;
      if ( !v15 )
      {
        v39 = strlen(s);
        v24 = *((_QWORD *)&v46 + 1);
        v27 = v39;
LABEL_55:
        v26 = v22;
        v29 = v22 + v27;
        goto LABEL_44;
      }
      *(_QWORD *)&v46 = 0;
      qfree(v15);
      v15 = nullptr;
      dest = nullptr;
      *((_QWORD *)&v46 + 1) = 0;
      v25 = strlen(s);
      v26 = v46;
      v27 = v25;
      if ( (_QWORD)v46 )
        goto LABEL_54;
      v28 = v25 + 1;
      v29 = v25;
      v15 = nullptr;
LABEL_26:
      v40 = v28;
      dest = (void *)qvector_reserve(&dest, v15, v28, 1);
      v28 = v40;
      v15 = (char *)dest;
LABEL_27:
      *(_QWORD *)&v46 = v28;
      v15[v29] = 0;
      memmove((char *)dest + v26, s, v27);
      v30 = sub_21580((__int64)dest, a2, a3, a4);
      v31 = dest;
      v14 = v30;
      v15 = (char *)dest;
      if ( v30 != -1 )
        goto LABEL_8;
      if ( v44 )
      {
        v36 = v46;
        v37 = v44 + 1;
        if ( (unsigned __int64)v46 < v44 + 1 )
        {
          if ( *((_QWORD *)&v46 + 1) < v37 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v44 + 1, 1);
            v36 = v46;
            v15 = (char *)dest;
          }
          memset(&v15[v36], 0, v37 - v36);
          *(_QWORD *)&v46 = v44 + 1;
          v31 = dest;
        }
        else if ( v37 != (_QWORD)v46 )
        {
          *(_QWORD *)&v46 = v44 + 1;
        }
        v31[v44] = 0;
        v15 = (char *)dest;
      }
      else
      {
        if ( dest )
        {
          *(_QWORD *)&v46 = 0;
          qfree(dest);
          dest = nullptr;
          *((_QWORD *)&v46 + 1) = 0;
        }
        v15 = nullptr;
      }
      v20 = v46;
      if ( !(_QWORD)v46 )
        goto LABEL_8;
      v32 = strrchr(v15, 47);
      if ( !v32 )
        goto LABEL_8;
      v33 = v32 - v15;
      if ( v32 - v15 == -1 )
        goto LABEL_8;
      if ( v33 )
      {
        v38 = v33 + 1;
        if ( v20 < v33 + 1 )
        {
          if ( *((_QWORD *)&v46 + 1) < v38 )
          {
            dest = (void *)qvector_reserve(&dest, v15, v33 + 1, 1);
            v20 = v46;
            v15 = (char *)dest;
          }
          memset(&v15[v20], 0, v38 - v20);
          *(_QWORD *)&v46 = v33 + 1;
          v32 = (char *)dest + v33;
        }
        else if ( v20 != v33 + 1 )
        {
          *(_QWORD *)&v46 = v33 + 1;
        }
        *v32 = 0;
        v20 = v46;
        v15 = (char *)dest;
        goto LABEL_38;
      }
      if ( v15 )
      {
        *(_QWORD *)&v46 = 0;
        qfree(v15);
        dest = nullptr;
        v20 = v46;
        v15 = nullptr;
        *((_QWORD *)&v46 + 1) = 0;
LABEL_38:
        if ( !v20 )
          goto LABEL_8;
      }
    }
    v34 = v24 + 1;
    if ( v20 < v24 + 1 )
    {
      if ( *((_QWORD *)&v46 + 1) < v34 )
      {
        dest = (void *)qvector_reserve(&dest, v15, v24 + 1, 1);
        v20 = v46;
        v15 = (char *)dest;
      }
      memset(&v15[v20], 0, v34 - v20);
      *(_QWORD *)&v46 = v24 + 1;
      v23 = (char *)dest + v24;
    }
    else if ( v34 != v20 )
    {
      *(_QWORD *)&v46 = v24 + 1;
    }
    *v23 = 0;
    v26 = v46;
    v15 = (char *)dest;
    v35 = strlen(s);
    v24 = *((_QWORD *)&v46 + 1);
    v27 = v35;
    v29 = v35;
    if ( v26 )
    {
LABEL_54:
      v22 = v26 - 1;
      goto LABEL_55;
    }
LABEL_44:
    v28 = v29 + 1;
    if ( v24 >= v29 + 1 )
      goto LABEL_27;
    goto LABEL_26;
  }
LABEL_8:
  if ( v15 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v15);
  }
  return v14;
}
