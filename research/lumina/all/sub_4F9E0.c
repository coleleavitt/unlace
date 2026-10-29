__int64 __fastcall sub_4F9E0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  char *v4; // r14
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r13
  const char *v8; // r8
  const char *v9; // rcx
  char v10; // bl
  unsigned int v11; // ebx
  void *v13; // [rsp+10h] [rbp-1F0h] BYREF
  __int128 v14; // [rsp+18h] [rbp-1E8h]
  void *v15; // [rsp+30h] [rbp-1D0h] BYREF
  __int128 v16; // [rsp+38h] [rbp-1C8h]
  void *ptr; // [rsp+50h] [rbp-1B0h] BYREF
  __int128 v18; // [rsp+58h] [rbp-1A8h]
  __int64 v19; // [rsp+70h] [rbp-190h] BYREF
  void *v20; // [rsp+78h] [rbp-188h] BYREF
  __int128 v21; // [rsp+80h] [rbp-180h]
  void *v22; // [rsp+90h] [rbp-170h] BYREF
  __int128 v23; // [rsp+98h] [rbp-168h]
  void *v24; // [rsp+A8h] [rbp-158h]
  __int128 v25; // [rsp+B0h] [rbp-150h]
  __int64 v26; // [rsp+C0h] [rbp-140h]
  void *v27; // [rsp+C8h] [rbp-138h]
  __int128 v28; // [rsp+D0h] [rbp-130h]
  _BYTE v29[232]; // [rsp+E0h] [rbp-120h] BYREF
  unsigned __int64 v30; // [rsp+1C8h] [rbp-38h]

  v3 = *(int *)(a3 + 8);
  v30 = __readfsqword(0x28u);
  v14 = 0;
  v13 = nullptr;
  if ( (int)v3 >= 7 )
    v3 = 0;
  v4 = off_23E8C0[v3];
  if ( v4 )
  {
    v5 = strlen(off_23E8C0[v3]);
    v6 = v5 + 1;
    v7 = v5;
    v13 = (void *)sub_1987B0(&v13, 0, v5 + 1, 1);
    *(_QWORD *)&v14 = v6;
    memmove(v13, v4, v7);
    *((_BYTE *)v13 + v7) = 0;
  }
  v19 = 112;
  v20 = nullptr;
  v22 = nullptr;
  v24 = nullptr;
  v26 = 0;
  v27 = nullptr;
  v15 = nullptr;
  ptr = nullptr;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  v28 = 0;
  v16 = 0;
  v18 = 0;
  sub_299F0((char **)&ptr);
  v8 = s1;
  if ( (_QWORD)v18 )
    v8 = (const char *)ptr;
  v9 = s1;
  if ( (_QWORD)v14 )
    v9 = (const char *)v13;
  v10 = sub_59BE0(v29, &v19, &v15, v9, v8);
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    j__free(ptr);
  }
  if ( v10
    && (unsigned __int8)sub_4F890((__int64)&v19, "machine id", (__int64)&v22, a1 + 512)
    && (unsigned __int8)sub_4F890((__int64)&v19, "product", (__int64)&v20, (__int64)&v13) )
  {
    if ( a2 )
      *a2 = v26;
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    j__free(v15);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    j__free(v27);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    j__free(v24);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    j__free(v22);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    j__free(v20);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    j__free(v13);
  }
  return v11;
}
