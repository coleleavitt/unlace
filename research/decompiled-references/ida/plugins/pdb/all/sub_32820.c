unsigned __int64 __fastcall sub_32820(__int64 *a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v6; // rax
  size_t v7; // r8
  _QWORD *v8; // rdx
  void *v10; // rdi
  size_t v11; // rdx
  __int64 tinfo_size; // [rsp+8h] [rbp-108h]
  size_t v13; // [rsp+8h] [rbp-108h]
  size_t v14; // [rsp+8h] [rbp-108h]
  size_t v16; // [rsp+10h] [rbp-100h]
  __int64 v17; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v18; // [rsp+28h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-E0h] BYREF
  __int128 v20; // [rsp+38h] [rbp-D8h] BYREF
  void *dest; // [rsp+48h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+50h] [rbp-C0h]
  __int64 v23; // [rsp+60h] [rbp-B0h]
  __int128 v24; // [rsp+68h] [rbp-A8h]
  _OWORD v25[3]; // [rsp+78h] [rbp-98h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-68h]
  int v27; // [rsp+B0h] [rbp-60h]
  __int64 v28; // [rsp+B8h] [rbp-58h]
  char v29; // [rsp+C0h] [rbp-50h]
  unsigned __int64 v30; // [rsp+D0h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v20 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  copy_tinfo_t((char *)&v20 + 8, &v19);
  dest = nullptr;
  copy_tinfo_t(&dest, &v18);
  LODWORD(v22) = 0;
  WORD2(v22) = 0;
  clear_tinfo_t(&v19);
  clear_tinfo_t(&v18);
  copy_tinfo_t(&v20, a2);
  create_tinfo(&v17, 10, 10, &v20);
  clear_tinfo_t(&dest);
  clear_tinfo_t((char *)&v20 + 8);
  clear_tinfo_t(&v20);
  tinfo_size = get_tinfo_size(0, v17, 0);
  dest = nullptr;
  v22 = 0;
  *(_QWORD *)&v20 = 8LL * a4;
  *((_QWORD *)&v20 + 1) = 8 * tinfo_size;
  v23 = 0;
  v26 = 1;
  v27 = -1;
  v28 = 0;
  v29 = 0;
  v24 = 0;
  v25[0] = 0;
  copy_tinfo_t(v25, &v17);
  LODWORD(v28) = tinfo_size;
  if ( a3 && (v6 = strlen((const char *)a3), (v7 = v6) != 0) )
  {
    v10 = dest;
    v11 = v6 + 1;
    if ( *((_QWORD *)&v22 + 1) < v6 + 1 )
    {
      v16 = v6;
      v14 = v6 + 1;
      dest = (void *)qvector_reserve(&dest, dest, v11, 1);
      v7 = v16;
      v10 = dest;
      v11 = v14;
    }
    *(_QWORD *)&v22 = v11;
    v13 = v7;
    memmove(v10, a3, v7);
    *((_BYTE *)dest + v13) = 0;
  }
  else
  {
    *(_QWORD *)&v22 = 0;
  }
  LODWORD(v19) = 0;
  sub_32370((int *)&v19, a1, (__int64 *)&v20, 1);
  v8 = (_QWORD *)(*a1 + 144 * a1[1] - 144);
  a1[3] = (unsigned __int64)(*v8 + v8[1] + 7LL) >> 3;
  clear_tinfo_t(v25);
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  if ( dest )
  {
    *(_QWORD *)&v22 = 0;
    qfree(dest);
  }
  clear_tinfo_t(&v17);
  return v30 - __readfsqword(0x28u);
}

