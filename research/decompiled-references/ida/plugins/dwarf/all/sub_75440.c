unsigned __int64 __fastcall sub_75440(__int64 a1, __int64 a2, _QWORD *a3, const char *a4)
{
  __int64 v6; // rax
  __int64 v7; // r12
  size_t v8; // rax
  size_t v9; // rbx
  size_t v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // r12
  size_t v13; // r8
  void *v14; // r9
  void *v15; // rdi
  __int64 v17; // rax
  int tinfo_udt_member; // ebx
  __int64 tinfo_property4; // rax
  size_t v20; // r15
  __int64 *v21; // [rsp+0h] [rbp-138h]
  __int64 v22; // [rsp+8h] [rbp-130h]
  size_t v24; // [rsp+18h] [rbp-120h]
  size_t v25; // [rsp+18h] [rbp-120h]
  size_t v26; // [rsp+20h] [rbp-118h]
  void *v27; // [rsp+28h] [rbp-110h]
  __int64 v28; // [rsp+38h] [rbp-100h] BYREF
  void *src; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v30; // [rsp+48h] [rbp-F0h]
  __int128 v31; // [rsp+60h] [rbp-D8h] BYREF
  void *dest; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+78h] [rbp-C0h]
  __int64 v34; // [rsp+88h] [rbp-B0h]
  __int128 v35; // [rsp+90h] [rbp-A8h]
  _OWORD v36[3]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-68h]
  int v38; // [rsp+D8h] [rbp-60h]
  __int64 v39; // [rsp+E0h] [rbp-58h]
  char v40; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v41; // [rsp+F8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v21 = &v28;
  v28 = 0;
  get_func_frame(&v28, a1);
  v6 = *(int *)(a2 + 8);
  src = nullptr;
  v7 = *(_QWORD *)(a1 + 32);
  v30 = 0;
  v22 = v6;
  if ( (_BYTE)v28 )
  {
    dest = nullptr;
    v34 = 0;
    v37 = 1;
    v38 = -1;
    v39 = 0;
    v40 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v36[0] = 0;
    if ( a4 )
    {
      v8 = strlen(a4);
      v9 = v8;
      v10 = v8;
      if ( v8 )
      {
        v20 = v8 + 1;
        src = (void *)qvector_reserve(&src, 0, v8 + 1, 1);
        *(_QWORD *)&v30 = v20;
        memmove(src, a4, v9);
        *((_BYTE *)src + v9) = 0;
        v10 = v30;
      }
    }
    else
    {
      v10 = 0;
    }
    v11 = 0;
    v12 = v22 + v7;
    while ( 1 )
    {
      if ( !v10 || (v13 = v10 - 1, v10 == 1) )
      {
        *(_QWORD *)&v33 = 0;
      }
      else
      {
        v14 = src;
        v15 = dest;
        if ( *((_QWORD *)&v33 + 1) < v10 )
        {
          v27 = src;
          v26 = v10 - 1;
          v25 = v10;
          dest = (void *)qvector_reserve(&dest, dest, v10, 1);
          v14 = v27;
          v15 = dest;
          v13 = v26;
          v10 = v25;
        }
        *(_QWORD *)&v33 = v10;
        v24 = v13;
        memmove(v15, v14, v13);
        *((_BYTE *)dest + v24) = 0;
      }
      if ( (unsigned int)find_tinfo_udt_member(&v31, v28, 3) == -1 )
        break;
      if ( v12 == (unsigned __int64)v31 >> 3 )
      {
        clear_tinfo_t(v36);
        if ( v34 )
        {
          *(_QWORD *)&v35 = 0;
          qfree(v34);
        }
        if ( dest )
        {
          *(_QWORD *)&v33 = 0;
          qfree(dest);
        }
        goto LABEL_20;
      }
      sub_9EF10(&src, a4, v11);
      v10 = v30;
      ++v11;
    }
    a4 = (const char *)src;
    clear_tinfo_t(v36);
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    if ( dest )
    {
      *(_QWORD *)&v33 = 0;
      qfree(dest);
    }
  }
  if ( get_tinfo_size(0, *a3, 0) && (unsigned __int8)define_stkvar(a1, a4, v22, a3, 0) )
  {
    v17 = 8 * (*(_QWORD *)(a1 + 32) + v22);
    dest = nullptr;
    v34 = 0;
    v37 = 1;
    v38 = -1;
    v39 = 0;
    v40 = 0;
    v31 = (unsigned __int64)v17;
    v33 = 0;
    v35 = 0;
    v36[0] = 0;
    tinfo_udt_member = find_tinfo_udt_member(&v31, v28, 0);
    clear_tinfo_t(v36);
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    if ( dest )
    {
      *(_QWORD *)&v33 = 0;
      qfree(dest);
    }
    if ( tinfo_udt_member != -1 )
    {
      tinfo_property4 = get_tinfo_property4(v28, 297, tinfo_udt_member, 0, 0, 0, &v28);
      upd_abits(tinfo_property4, 3254779904LL, 0x2000000);
    }
  }
LABEL_20:
  if ( src )
  {
    *(_QWORD *)&v30 = 0;
    qfree(src);
  }
  clear_tinfo_t(v21);
  return v41 - __readfsqword(0x28u);
}

