__int64 __fastcall sub_17A3C0(_QWORD *a1, unsigned __int8 **a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  unsigned __int8 *v5; // rax
  unsigned __int8 *v6; // rbx
  unsigned int v7; // ebx
  __int64 v9; // rax
  void *v10; // r13
  unsigned __int8 *v11; // r14
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  const char *v18; // rbp
  size_t v19; // r13
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  void *ptr; // [rsp+8h] [rbp-A8h] BYREF
  int v27[4]; // [rsp+10h] [rbp-A0h]
  void *v28[2]; // [rsp+28h] [rbp-88h] BYREF
  int v29[4]; // [rsp+38h] [rbp-78h]
  __int64 v30; // [rsp+48h] [rbp-68h] BYREF
  void *v31; // [rsp+50h] [rbp-60h] BYREF
  __int128 v32; // [rsp+58h] [rbp-58h]
  unsigned __int64 v33; // [rsp+70h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  *(_OWORD *)v27 = 0;
  ptr = nullptr;
  v3 = sub_178260((__int64)a1, (__int64)&ptr);
  v4 = v3;
  if ( v3 )
  {
    v5 = (unsigned __int8 *)sub_1726E0(v3, (__int64)&ptr);
    if ( v5 == (unsigned __int8 *)(v4 + 8) )
    {
      v7 = sub_1796D0(a1, v4, (__int64)&ptr, a2);
    }
    else
    {
      v6 = v5 + 56;
      sub_176730(*a2, v5 + 56);
      *a2 = v6;
      v7 = 1;
    }
  }
  else
  {
    v9 = a1[3] + 32LL * a1[4] - 32;
    if ( *(_BYTE *)v9 == 2 && SLODWORD(qword_241EE0[11]) > 0 )
    {
      v10 = *(void **)(v9 + 8);
      v11 = *a2;
      *a2 = nullptr;
      v12 = a1[10];
      v13 = a1[4];
      v14 = a1[9];
      if ( a1[11] < (unsigned __int64)(v12 + 1) )
      {
        v24 = sub_1987B0(a1 + 9, v14, v12 + 1, 4);
        a1[9] = v24;
        v14 = v24;
        v12 = a1[10];
      }
      *(_DWORD *)(v14 + 4 * v12) = v13;
      v15 = a1[4];
      ++a1[10];
      v16 = a1[3];
      LOBYTE(v28[0]) = 2;
      v28[1] = v10;
      *(_OWORD *)v29 = 0;
      if ( a1[5] < (unsigned __int64)(v15 + 1) )
      {
        v23 = sub_1987B0(a1 + 3, v16, v15 + 1, 32);
        a1[3] = v23;
        v16 = v23;
        v15 = a1[4];
      }
      v17 = v16 + 32 * v15;
      *(_BYTE *)v17 = 2;
      *(_QWORD *)(v17 + 24) = 0;
      *(_OWORD *)(v17 + 8) = 0;
      ++a1[4];
      sub_1770A0((unsigned __int8 *)v17, (unsigned __int8 *)v28);
      v18 = s1;
      if ( *(_QWORD *)v27 )
        v18 = (const char *)ptr;
      v30 = 7;
      v31 = nullptr;
      v32 = 0;
      if ( v18 )
      {
        v19 = strlen(v18);
        v31 = (void *)sub_1987B0(&v31, 0, v19 + 1, 1);
        *(_QWORD *)&v32 = v19 + 1;
        memmove(v31, v18, v19);
        *((_BYTE *)v31 + v19) = 0;
      }
      v20 = a1[4];
      v21 = a1[3];
      if ( a1[5] < (unsigned __int64)(v20 + 1) )
      {
        v25 = sub_1987B0(a1 + 3, v21, v20 + 1, 32);
        a1[3] = v25;
        v21 = v25;
        v20 = a1[4];
      }
      v22 = v21 + 32 * v20;
      *(_BYTE *)v22 = 2;
      *(_QWORD *)(v22 + 24) = 0;
      *(_OWORD *)(v22 + 8) = 0;
      ++a1[4];
      sub_1770A0((unsigned __int8 *)v22, (unsigned __int8 *)&v30);
      v7 = sub_1761C0(a1, (__int64)v11, nullptr, -LODWORD(qword_241EE0[11]));
      sub_176520((__int64)&v30);
      sub_176520((__int64)v28);
    }
    else
    {
      sub_179510(a1, (__int64)&ptr);
      v7 = 0;
    }
  }
  if ( ptr )
  {
    *(_QWORD *)v27 = 0;
    j__free(ptr);
  }
  return v7;
}
