__int64 __fastcall sub_5E90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // ecx
  int v7; // eax
  bool v8; // zf
  __int64 (__fastcall *v9)(__int64, int, __int64); // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r12
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  const char *v16; // rsi
  __int64 v17; // rdx
  unsigned int v18; // ebp
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdi
  const void *v24; // r14
  void *v25; // rdi
  const void *v26; // r13
  __int64 v27; // [rsp+0h] [rbp-118h] BYREF
  char *v28; // [rsp+8h] [rbp-110h] BYREF
  __int128 v29; // [rsp+10h] [rbp-108h]
  __int64 v30; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v31; // [rsp+28h] [rbp-F0h]
  void *dest; // [rsp+38h] [rbp-E0h] BYREF
  __int128 v33; // [rsp+40h] [rbp-D8h]
  __int64 v34; // [rsp+50h] [rbp-C8h]
  __int128 v35; // [rsp+58h] [rbp-C0h]
  int v36; // [rsp+68h] [rbp-B0h]
  int v37; // [rsp+6Ch] [rbp-ACh]
  __int128 v38; // [rsp+70h] [rbp-A8h]
  __int128 v39; // [rsp+80h] [rbp-98h]
  __int64 v40; // [rsp+90h] [rbp-88h]
  __int64 (__fastcall *v41)(__int64, int, __int64); // [rsp+98h] [rbp-80h]
  __int64 v42; // [rsp+A0h] [rbp-78h]
  __int64 v43; // [rsp+A8h] [rbp-70h]
  __int128 v44; // [rsp+B0h] [rbp-68h]
  int v45; // [rsp+C0h] [rbp-58h]
  __int64 v46; // [rsp+C8h] [rbp-50h]
  __int128 v47; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v48; // [rsp+E8h] [rbp-30h]

  v4 = (a4 >> 6) & 1;
  v48 = __readfsqword(0x28u);
  v37 = 0;
  v28 = nullptr;
  v30 = 0;
  dest = nullptr;
  v34 = 0;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v45 = 1;
  v46 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v38 = 0;
  v39 = 0;
  v44 = 0;
  v47 = 0;
  v27 = a2;
  v7 = *(_DWORD *)(a1 + 176);
  v36 = v4;
  if ( (v7 & 2) != 0 )
    v36 = v4 | 0x20;
  v8 = (v7 & 1) == 0;
  v9 = sub_5A20;
  v10 = *(_QWORD *)(a1 + 160);
  if ( v8 )
    v9 = nullptr;
  v41 = v9;
  if ( v10 >= 2 )
  {
    v26 = *(const void **)(a1 + 152);
    v28 = (char *)qvector_reserve(&v28, 0, v10, 1);
    *(_QWORD *)&v29 = v10;
    memmove(v28, v26, v10 - 1);
    v28[v10 - 1] = 0;
  }
  v11 = *(_QWORD *)(a1 + 192);
  if ( v11 > 1 )
  {
    v24 = *(const void **)(a1 + 184);
    v25 = dest;
    if ( *((_QWORD *)&v33 + 1) < v11 )
    {
      dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(a1 + 192), 1);
      v25 = dest;
    }
    *(_QWORD *)&v33 = v11;
    memmove(v25, v24, v11 - 1);
    *((char *)dest + v11 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v33 = 0;
  }
  v37 = *(_DWORD *)(a1 + 180);
  getinf_str(&v30, 71);
  if ( !(unsigned __int8)sub_1A4C0(a3, &v27) )
  {
    v16 = s1;
    if ( (_QWORD)v35 )
      LODWORD(v16) = v34;
    sub_7470((unsigned int)"fatal: %s\n", (_DWORD)v16, v12, v13, v14, v15);
  }
  v17 = v46;
  v18 = DWORD2(v39);
  if ( v46 )
  {
    v19 = v47;
    if ( (_QWORD)v47 )
    {
      v20 = 0;
      do
      {
        v21 = (__int64 *)(v17 + 24 * v20);
        v22 = *v21;
        if ( *v21 )
        {
          v21[1] = 0;
          qfree(v22);
          v17 = v46;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v47 = 0;
    qfree(v17);
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
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
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  return v18;
}

