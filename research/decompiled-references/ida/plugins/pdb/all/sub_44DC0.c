__int64 __fastcall sub_44DC0(__int64 a1, const char *a2, double a3, double a4, double a5)
{
  __int64 v6; // rbx
  const char *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebp
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rcx
  const char *v16; // rsi
  int v17; // eax
  const char *v18; // rdi
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // ebx
  const void *v25; // r15
  size_t v26; // rax
  size_t v27; // r12
  void *v28; // rdi
  size_t v29; // r13
  char v30; // [rsp+8h] [rbp-C0h]
  __int64 v31; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+18h] [rbp-B0h]
  void *dest; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+30h] [rbp-98h]
  __int128 v35; // [rsp+40h] [rbp-88h]
  __int64 v36; // [rsp+50h] [rbp-78h]
  __int64 v37; // [rsp+58h] [rbp-70h]
  __int128 v38; // [rsp+60h] [rbp-68h]
  __int64 v39; // [rsp+70h] [rbp-58h]
  __int64 v40; // [rsp+78h] [rbp-50h]
  int v41; // [rsp+80h] [rbp-48h]
  unsigned __int64 v42; // [rsp+88h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( (debug & 0x40000) != 0 )
    sub_29350();
  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 == a1 + 56 )
  {
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v7 = src;
      if ( *(_QWORD *)(v6 + 104) )
        v7 = *(const char **)(v6 + 96);
      if ( !strcmp(v7, a2) )
        break;
      v6 = std::_Rb_tree_increment(v6, a2, v8, v9, v10, v11, a3, a4, a5);
      if ( v6 == a1 + 56 )
        return 0;
    }
    v31 = 0;
    dest = nullptr;
    v36 = 0;
    v37 = 0;
    v39 = -1;
    v40 = 0;
    v41 = 1;
    v32 = 0;
    v34 = 0;
    v35 = 0;
    v38 = 0;
    if ( (unsigned int)getinf(5) == 11 || (unsigned __int8)is_miniidb() )
      v12 = v41 | 0x10;
    else
      v12 = v41 | 2;
    v13 = *(_QWORD *)(v6 + 120);
    v41 = v12;
    v14 = *(_QWORD *)(v6 + 104) == 0;
    v39 = v13;
    if ( !v14
      && (v25 = *(const void **)(v6 + 96)) != nullptr
      && (v26 = strlen(*(const char **)(v6 + 96)), (v27 = v26) != 0) )
    {
      v28 = dest;
      v29 = v26 + 1;
      if ( *((_QWORD *)&v34 + 1) < v26 + 1 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v29, 1);
        v28 = dest;
      }
      *(_QWORD *)&v34 = v29;
      memmove(v28, v25, v27);
      *((_BYTE *)dest + v27) = 0;
      v12 = v41;
      v15 = v34;
    }
    else
    {
      *(_QWORD *)&v34 = 0;
      v15 = 0;
    }
    v16 = src;
    v17 = (v12 >> 1) & 1;
    if ( (v12 & 0x10) != 0 )
      v17 = (v12 >> 1) & 1 | 2;
    v30 = v17;
    if ( v15 )
      v16 = (const char *)dest;
    if ( (unsigned int)sub_29A80() )
    {
      v18 = src;
      v19 = v41 & 0xFFFFFFFD;
      if ( (v30 & 1) != 0 )
        v19 = v41 | 2;
      v20 = v19;
      v21 = v19 & 0xFFFFFFEF;
      v22 = v20 | 0x10;
      if ( (v30 & 2) != 0 )
        v21 = v22;
      v41 = v21;
      if ( *(_QWORD *)(v6 + 104) )
        v18 = *(const char **)(v6 + 96);
      qbasename(v18, v16, v30 & 2);
      sub_29760();
      v23 = sub_44010(*(_QWORD *)(a1 + 40), (__int64)&v31, 0.0, 0.0, a5);
      callui(24);
    }
    else
    {
      v23 = 0;
    }
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37);
    }
    if ( dest )
    {
      *(_QWORD *)&v34 = 0;
      qfree(dest);
    }
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
  }
  return v23;
}

