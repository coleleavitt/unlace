__int64 __fastcall sub_4C550(__int64 a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // r12
  size_t v4; // rbp
  __int64 v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  _BYTE *v8; // r14
  char *v9; // rax
  unsigned __int64 v10; // rbp
  size_t v11; // rbx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  void *v14; // rdi
  _QWORD v16[2]; // [rsp+0h] [rbp-98h] BYREF
  char v17; // [rsp+10h] [rbp-88h]
  void *v18; // [rsp+20h] [rbp-78h] BYREF
  __int128 v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+48h] [rbp-50h]
  unsigned __int64 v22; // [rsp+58h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v16[1] = a1;
  v17 = 0;
  v18 = nullptr;
  v19 = 0;
  v16[0] = &off_92B80;
  if ( a2 )
  {
    v2 = strlen(a2);
    v3 = v2 + 1;
    v4 = v2;
    v18 = (void *)qvector_reserve(&v18, 0, v2 + 1, 1);
    *(_QWORD *)&v19 = v3;
    memmove(v18, a2, v4);
    *((_BYTE *)v18 + v4) = 0;
    v5 = v19;
  }
  else
  {
    v5 = 0;
  }
  v6 = 0;
  while ( 1 )
  {
    if ( !v5 )
    {
      v10 = -1;
      v20 = 0;
      v21 = 0;
      goto LABEL_11;
    }
    v7 = v5 - 1;
    v8 = v18;
    if ( v7 < v6 || (v9 = strchr((const char *)v18 + v6, 59)) == nullptr )
    {
      v10 = -1;
LABEL_22:
      if ( v6 > v7 )
        v6 = v7;
      v11 = v7 - v6;
      goto LABEL_10;
    }
    v10 = v9 - v8;
    if ( v7 < v9 - v8 )
      goto LABEL_22;
    if ( v6 > v10 )
      v6 = v9 - v8;
    v11 = v10 - v6;
LABEL_10:
    v20 = 0;
    v21 = 0;
    if ( v11 )
    {
      v14 = nullptr;
      if ( v11 != -1 )
      {
        v20 = qvector_reserve(&v20, 0, v11 + 1, 1);
        v14 = (void *)v20;
      }
      *(_QWORD *)&v21 = v11 + 1;
      memmove(v14, &v8[v6], v11);
      *(_BYTE *)(v20 + v11) = 0;
    }
LABEL_11:
    v13 = sub_4AA40((__int64)v16, (__int64)&v20);
    if ( !(_BYTE)v13 )
      break;
    v6 = v10 + 1;
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20, &v20, v12, 0.0);
    }
    if ( v10 == -1 )
      goto LABEL_27;
    v5 = v19;
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20, &v20, v12, 0.0);
  }
LABEL_27:
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18, &v20, v12, 0.0);
  }
  return v13;
}

