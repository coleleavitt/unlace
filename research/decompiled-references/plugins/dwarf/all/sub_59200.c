__int64 __fastcall sub_59200(__int64 a1, unsigned __int8 a2, const char *a3, __int64 a4)
{
  __int64 v6; // rbx
  size_t v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rdi
  unsigned int v10; // r13d
  __int64 v11; // r12
  __int64 v12; // rbp
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  void *v17; // rax
  size_t v18; // [rsp+0h] [rbp-A8h]
  size_t n; // [rsp+8h] [rbp-A0h]
  __int64 v20; // [rsp+18h] [rbp-90h] BYREF
  __int64 v21; // [rsp+20h] [rbp-88h] BYREF
  int v22; // [rsp+28h] [rbp-80h]
  int v23; // [rsp+2Ch] [rbp-7Ch]
  __int64 v24; // [rsp+30h] [rbp-78h] BYREF
  __int128 v25; // [rsp+38h] [rbp-70h]
  __int64 v26; // [rsp+48h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  __int64 v28; // [rsp+58h] [rbp-50h]
  int v29; // [rsp+60h] [rbp-48h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  clear_tinfo_t(a1);
  v24 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 1;
  v26 = a4;
  v25 = 0;
  v24 = qvector_reserve(&v24, 0, 1, 144);
  v6 = v24 + 144 * v25;
  *(_OWORD *)v6 = 0;
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)&v25 = v25 + 1;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 112) = 1;
  *(_DWORD *)(v6 + 120) = -1;
  *(_QWORD *)(v6 + 128) = 0;
  *(_BYTE *)(v6 + 136) = 0;
  *(_QWORD *)v6 = 0;
  *(_QWORD *)(v6 + 8) = 8 * a4;
  *(_OWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  if ( a3 )
  {
    v7 = strlen(a3);
    if ( v7 )
    {
      n = v7;
      v18 = v7 + 1;
      v17 = (void *)qvector_reserve(v6 + 16, 0, v7 + 1, 1);
      *(_QWORD *)(v6 + 16) = v17;
      *(_QWORD *)(v6 + 24) = v18;
      memmove(v17, a3, n);
      *(_BYTE *)(*(_QWORD *)(v6 + 16) + n) = 0;
    }
  }
  v22 = 0;
  v23 = a4;
  v20 = 34;
  v21 = 0;
  copy_tinfo_t(&v21, &v20);
  create_tinfo(v6 + 64, 11, 11, &v21);
  clear_tinfo_t(&v21);
  clear_tinfo_t(&v20);
  v8 = create_tinfo(a1, a2, 13, &v24);
  v9 = v24;
  v10 = v8;
  if ( v24 )
  {
    v11 = v25;
    if ( (_QWORD)v25 )
    {
      v12 = 0;
      do
      {
        v13 = (_QWORD *)(v9 + 144 * v12);
        clear_tinfo_t(v13 + 8);
        v14 = v13[5];
        if ( v14 )
        {
          v13[6] = 0;
          qfree(v14);
        }
        v15 = v13[2];
        if ( v15 )
        {
          v13[3] = 0;
          qfree(v15);
        }
        ++v12;
        v9 = v24;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v25 = 0;
    qfree(v9);
  }
  return v10;
}
