__int64 __fastcall sub_167A70(__int64 a1, __int64 *a2, char a3, const char *a4, __int16 a5)
{
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r14
  size_t v10; // r13
  unsigned int v11; // ebp
  bool v12; // zf
  __int64 v13; // rax
  const char *v15; // rax
  const char *v16; // rbx
  size_t v17; // rax
  size_t v18; // r13
  void *v19; // rdi
  size_t v20; // r14
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-130h] BYREF
  void *ptr; // [rsp+10h] [rbp-128h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-120h]
  __int64 v25; // [rsp+30h] [rbp-108h]
  void *v26; // [rsp+38h] [rbp-100h]
  __int128 v27; // [rsp+40h] [rbp-F8h]
  __int16 v28; // [rsp+50h] [rbp-E8h]
  void *v29; // [rsp+58h] [rbp-E0h]
  __int128 v30; // [rsp+60h] [rbp-D8h]
  void *v31; // [rsp+70h] [rbp-C8h]
  __int128 v32; // [rsp+78h] [rbp-C0h]
  void *v33; // [rsp+88h] [rbp-B0h]
  __int128 v34; // [rsp+90h] [rbp-A8h]
  __int16 v35; // [rsp+A0h] [rbp-98h]
  void *v36; // [rsp+A8h] [rbp-90h]
  __int128 v37; // [rsp+B0h] [rbp-88h]
  void *v38; // [rsp+C0h] [rbp-78h]
  __int128 v39; // [rsp+C8h] [rbp-70h]
  __int64 v40; // [rsp+D8h] [rbp-60h]
  __int64 v41; // [rsp+E0h] [rbp-58h]
  int v42; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v43; // [rsp+F8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  ptr = nullptr;
  v22 = sub_1671B0(a3);
  *(_OWORD *)n = 0;
  if ( a4 )
  {
    v7 = strlen(a4);
    v8 = v7 + 1;
    v9 = v7;
    ptr = (void *)sub_1987B0(&ptr, 0, v7 + 1, 1);
    n[0] = v8;
    memmove(ptr, a4, v9);
    *((_BYTE *)ptr + v9) = 0;
    v10 = n[0];
    v25 = 192;
    v26 = nullptr;
    v27 = 0;
    if ( n[0] )
    {
      v26 = (void *)sub_198760(n[0]);
      *((_QWORD *)&v27 + 1) = v10;
      memcpy(v26, ptr, v10);
      *(_QWORD *)&v27 = v10;
    }
  }
  else
  {
    v25 = 192;
    v26 = nullptr;
    v27 = 0;
  }
  v28 = a5;
  v29 = nullptr;
  v31 = nullptr;
  v33 = nullptr;
  v35 = 0;
  v36 = nullptr;
  v38 = nullptr;
  v40 = 0;
  v41 = 0;
  v42 = -1;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v37 = 0;
  v39 = 0;
  v11 = sub_167220(v22);
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    j__free(v38);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    j__free(v36);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    j__free(v33);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    j__free(v31);
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    j__free(v29);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    j__free(v26);
  }
  if ( ptr )
  {
    n[0] = 0;
    j__free(ptr);
  }
  if ( (_BYTE)v11 )
  {
    v12 = *(_BYTE *)(a1 + 104) == 0;
    *(_BYTE *)(a1 + 69) = 0;
    *(_BYTE *)(a1 + 8) = 0;
    if ( !v12 )
      sub_1672A0((_QWORD *)(a1 + 96));
    v13 = v22;
    *(_BYTE *)(a1 + 104) = 1;
    *(_QWORD *)(a1 + 96) = v13;
  }
  else
  {
    v15 = (const char *)sub_167200(v22);
    v16 = v15;
    if ( v15 && (v17 = strlen(v15), (v18 = v17) != 0) )
    {
      v19 = (void *)*a2;
      v20 = v17 + 1;
      if ( a2[2] < v17 + 1 )
      {
        v21 = sub_1987B0(a2, *a2, v17 + 1, 1);
        *a2 = v21;
        v19 = (void *)v21;
      }
      a2[1] = v20;
      memmove(v19, v16, v18);
      *(_BYTE *)(*a2 + v18) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    sub_1672A0(&v22);
  }
  return v11;
}
