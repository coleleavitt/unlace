__int64 __fastcall sub_9D10(__int64 a1, char **a2, __int16 *a3, char a4)
{
  unsigned int v5; // ebx
  char *v10; // r14
  _WORD *v11; // rax
  __int16 v12; // dx
  __int128 v13; // xmm0
  char *v14; // rbx
  signed __int64 v15; // r15
  size_t v16; // rax
  size_t v17; // r15
  size_t v18; // rbx
  const char *v19; // rdx
  size_t v20; // rbp
  size_t v21; // r13
  size_t v22; // r14
  size_t v23; // r8
  size_t v24; // r15
  char *v25; // rsi
  char *v26; // rdi
  char *v27; // rax
  void *v28; // rdi
  signed __int64 v29; // rdx
  size_t v30; // r8
  size_t v31; // [rsp+8h] [rbp-E0h]
  size_t v32; // [rsp+8h] [rbp-E0h]
  void *v33; // [rsp+10h] [rbp-D8h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-D0h]
  __int64 v35; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v36; // [rsp+38h] [rbp-B0h]
  void *src; // [rsp+50h] [rbp-98h] BYREF
  __int128 v38; // [rsp+58h] [rbp-90h]
  void *v39; // [rsp+70h] [rbp-78h] BYREF
  __int128 v40; // [rsp+78h] [rbp-70h]
  char *v41; // [rsp+90h] [rbp-58h] BYREF
  __int128 v42; // [rsp+98h] [rbp-50h]
  unsigned __int64 v43; // [rsp+A8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  if ( !*(_BYTE *)a3 )
    return 0;
  if ( *((_BYTE *)a3 + 1) != 91 )
    return 0;
  if ( *((_BYTE *)a3 + 2) != 95 )
    return 0;
  v10 = strchr((const char *)a3, 32);
  if ( !v10 )
    return 0;
  *(_OWORD *)n = 0;
  v33 = nullptr;
  v11 = (_WORD *)qvector_reserve(&v33, 0, 3, 1);
  v12 = *a3;
  v33 = v11;
  v13 = 0;
  v14 = (char *)(a3 + 1);
  n[0] = 3;
  *v11 = v12;
  *((_BYTE *)v33 + 2) = 0;
  v35 = 0;
  v36 = 0;
  v15 = v10 - v14;
  if ( v10 == v14 )
  {
    src = nullptr;
  }
  else
  {
    v28 = nullptr;
    v29 = v15 + 1;
    if ( v15 != -1 )
    {
      v35 = qvector_reserve(&v35, 0, v29, 1);
      v29 = v15 + 1;
      v28 = (void *)v35;
    }
    *(_QWORD *)&v36 = v29;
    memmove(v28, v14, v10 - v14);
    v13 = 0;
    *(_BYTE *)(v35 + v15) = 0;
    src = nullptr;
  }
  v38 = v13;
  v16 = strlen(v10);
  v17 = v16 + 1;
  v18 = v16;
  src = (void *)qvector_reserve(&src, 0, v16 + 1, 1);
  *(_QWORD *)&v38 = v17;
  memmove(src, v10, v18);
  v19 = s1;
  *((_BYTE *)src + v18) = 0;
  v39 = nullptr;
  v40 = 0;
  if ( (_QWORD)v36 )
    v19 = (const char *)v35;
  v5 = sub_9BF0(a1, (__int64 *)&v39, v19, a4);
  if ( (_BYTE)v5 )
  {
    v20 = n[0];
    v41 = nullptr;
    v42 = 0;
    if ( n[0] )
    {
      v41 = (char *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v42 + 1) = v20;
      memcpy(v41, v33, v20);
      *(_QWORD *)&v42 = v20;
      v22 = *((_QWORD *)&v42 + 1);
      v25 = v41;
      if ( !(_QWORD)v40 || (v24 = v40 - 1, (_QWORD)v40 == 1) )
      {
        if ( (_QWORD)v38 )
        {
          v23 = v38 - 1;
          if ( (_QWORD)v38 != 1 )
          {
            v24 = *((_QWORD *)&v42 + 1);
LABEL_44:
            v21 = v20 - 1;
            v22 = v20 - 1 + v23;
            v20 += v23;
            goto LABEL_26;
          }
        }
LABEL_29:
        v26 = *a2;
        v27 = a2[2];
        *a2 = v25;
        a2[1] = (char *)v20;
        a2[2] = (char *)v22;
        v41 = v26;
        *((_QWORD *)&v42 + 1) = v27;
        if ( v26 )
        {
          *(_QWORD *)&v42 = 0;
          qfree(v26);
        }
        goto LABEL_13;
      }
      --v20;
      v30 = v24 + v20;
      v21 = v40 + v20;
      if ( *((_QWORD *)&v42 + 1) >= (unsigned __int64)v40 + v20 )
      {
LABEL_41:
        *(_QWORD *)&v42 = v21;
        v25[v30] = 0;
        memcpy(&v41[v20], v39, v24);
        v22 = *((_QWORD *)&v42 + 1);
        v20 = v42;
        v25 = v41;
        if ( (_QWORD)v38 )
        {
          v23 = v38 - 1;
          if ( (_QWORD)v38 != 1 )
          {
            v24 = *((_QWORD *)&v42 + 1);
            if ( !(_QWORD)v42 )
            {
              v22 = v38 - 1;
              v21 = 0;
              v20 = v38;
              goto LABEL_26;
            }
            goto LABEL_44;
          }
        }
        goto LABEL_29;
      }
    }
    else
    {
      v21 = v40;
      if ( !(_QWORD)v40 )
      {
        v20 = v38;
        if ( (_QWORD)v38 )
        {
          v22 = v38 - 1;
          if ( (_QWORD)v38 != 1 )
          {
            v23 = v38 - 1;
            v24 = 0;
            v25 = nullptr;
LABEL_26:
            if ( v24 < v20 )
            {
              v32 = v23;
              v41 = (char *)qvector_reserve(&v41, v25, v20, 1);
              v23 = v32;
              v25 = v41;
            }
            *(_QWORD *)&v42 = v20;
            v25[v22] = 0;
            memcpy(&v41[v21], src, v23);
            v25 = v41;
            v22 = *((_QWORD *)&v42 + 1);
            v20 = v42;
            goto LABEL_29;
          }
LABEL_51:
          v20 = 0;
          v25 = nullptr;
          goto LABEL_29;
        }
        goto LABEL_45;
      }
      v24 = v40 - 1;
      if ( (_QWORD)v40 == 1 )
      {
        v20 = v38;
        if ( (_QWORD)v38 )
        {
          v22 = v38 - 1;
          if ( (_QWORD)v38 != 1 )
          {
            v23 = v38 - 1;
            v21 = 0;
            v25 = nullptr;
            goto LABEL_26;
          }
          goto LABEL_51;
        }
LABEL_45:
        v22 = 0;
        v25 = nullptr;
        goto LABEL_29;
      }
      v30 = v40 - 1;
      v25 = nullptr;
    }
    v31 = v30;
    v41 = (char *)qvector_reserve(&v41, v25, v21, 1);
    v30 = v31;
    v25 = v41;
    goto LABEL_41;
  }
LABEL_13:
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  if ( src )
  {
    *(_QWORD *)&v38 = 0;
    qfree(src);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  if ( v33 )
  {
    n[0] = 0;
    qfree(v33);
  }
  return v5;
}

