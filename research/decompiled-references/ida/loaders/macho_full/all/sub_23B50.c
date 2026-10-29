unsigned __int64 __fastcall sub_23B50(_QWORD *a1, void **a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 *v4; // r12
  unsigned __int64 v5; // rbx
  const char *v6; // rsi
  size_t v7; // r15
  unsigned __int64 v8; // rdx
  size_t v9; // r9
  __int64 v10; // r8
  size_t v11; // r10
  char *v12; // rsi
  __int64 v13; // rax
  unsigned __int64 *v15; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v16; // [rsp+10h] [rbp-B8h]
  size_t v17; // [rsp+18h] [rbp-B0h]
  size_t v18; // [rsp+20h] [rbp-A8h]
  __int64 v19; // [rsp+28h] [rbp-A0h]
  void *v20; // [rsp+30h] [rbp-98h] BYREF
  size_t n[3]; // [rsp+38h] [rbp-90h]
  char *v22; // [rsp+50h] [rbp-78h]
  __int128 v23; // [rsp+58h] [rbp-70h]
  void *src; // [rsp+70h] [rbp-58h]
  __int128 v25; // [rsp+78h] [rbp-50h]
  unsigned __int64 v26; // [rsp+88h] [rbp-40h]

  v3 = a1[1701];
  v26 = __readfsqword(0x28u);
  v4 = (unsigned __int64 *)a1[1700];
  v15 = &v4[2 * v3];
  if ( v15 != v4 )
  {
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 < v4[1] )
        break;
LABEL_30:
      v4 += 2;
      if ( v15 == v4 )
        return v26 - __readfsqword(0x28u);
    }
    while ( 1 )
    {
      if ( (unsigned __int8)callui(27, a2, a3) )
        return v26 - __readfsqword(0x28u);
      v13 = a1[1710] + 1LL;
      a1[1710] = v13;
      if ( v13 == 10000 )
      {
        sub_19440((__int64)"Symbolicating global offset tables (%a)");
        a1[1710] = 0;
      }
      v20 = nullptr;
      *(_OWORD *)n = 0;
      get_64bit();
      a2 = &v20;
      if ( netnode_qsupstr() > 0 )
        break;
      if ( v20 )
      {
        n[0] = 0;
        v5 += 8LL;
        qfree();
        if ( v5 >= v4[1] )
          goto LABEL_30;
      }
      else
      {
LABEL_23:
        v5 += 8LL;
        if ( v5 >= v4[1] )
          goto LABEL_30;
      }
    }
    v6 = s1;
    if ( n[0] )
      v6 = (const char *)v20;
    sub_12040(v5, (__int64)v6, 1);
    v25 = 0;
    src = nullptr;
    src = (void *)qvector_reserve();
    *(_QWORD *)&v25 = 5;
    strcpy((char *)src, "_ptr");
    v7 = n[0];
    v22 = nullptr;
    v23 = 0;
    if ( n[0] )
    {
      v22 = (char *)qalloc_or_throw();
      *((_QWORD *)&v23 + 1) = v7;
      memcpy(v22, v20, v7);
      *(_QWORD *)&v23 = v7;
    }
    v8 = v25;
    if ( (_QWORD)v25 )
    {
      v9 = v25 - 1;
      if ( (_QWORD)v25 != 1 )
      {
        v10 = v23;
        v11 = v25 - 1;
        if ( (_QWORD)v23 )
        {
          v10 = v23 - 1;
          v11 = v9 + v23 - 1;
          v8 = v25 + v23 - 1;
        }
        v12 = v22;
        if ( *((_QWORD *)&v23 + 1) < v8 )
        {
          v19 = v10;
          v18 = v25 - 1;
          v17 = v11;
          v16 = v8;
          v22 = (char *)qvector_reserve();
          v10 = v19;
          v12 = v22;
          v9 = v18;
          v11 = v17;
          v8 = v16;
        }
        *(_QWORD *)&v23 = v8;
        v12[v11] = 0;
        memcpy(&v22[v10], src, v9);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
    a2 = (void **)s1;
    if ( (_QWORD)v23 )
      a2 = (void **)v22;
    set_name();
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree();
    }
    if ( v20 )
    {
      n[0] = 0;
      qfree();
    }
    goto LABEL_23;
  }
  return v26 - __readfsqword(0x28u);
}

