__int64 __fastcall sub_AFD10(__int128 a1, __int64 a2, char a3, unsigned __int8 a4, unsigned int a5, __m128i a6)
{
  unsigned __int8 v6; // r12
  unsigned int v7; // eax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  __int64 v13; // r13
  int v14; // eax
  __int64 v15; // rcx
  bool v16; // al
  char v17; // al
  bool v18; // al
  int v19; // ebx
  bool v20; // al
  __int64 v21; // rcx
  char v22; // al
  __int64 v24; // r13
  __int64 v25; // rdx
  char v26; // al
  int v27; // r9d
  __int64 v28; // rbp
  __int64 v29; // r12
  char v30; // al
  int v31; // r13d
  char v32; // al
  __int64 v33; // rcx
  char v34; // al
  char v35; // al
  char v36; // al
  char v37; // al
  char v38; // al
  __int64 v39; // rdx
  char v40; // al
  unsigned __int8 v41; // r9
  char v42; // al
  char v43; // al
  unsigned __int8 v44; // [rsp+0h] [rbp-98h]
  __int64 v45; // [rsp+10h] [rbp-88h]
  unsigned __int8 v46; // [rsp+1Fh] [rbp-79h]
  unsigned __int64 v47; // [rsp+20h] [rbp-78h] BYREF
  __int64 v48; // [rsp+28h] [rbp-70h]
  _BYTE v49[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v6 = a5;
  LOBYTE(a5) = *((_QWORD *)&a1 + 1) == 0 || a2 == 0;
  if ( (_BYTE)a5 )
    return 0;
  v7 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 7 )
    return sub_AF430(a1, a2, a3, a4, v6);
  if ( v7 > 7 )
  {
    if ( v7 - 19 > 2 )
      return 0;
    return sub_AF430(a1, a2, a3, a4, v6);
  }
  if ( v7 != 4 )
    return 0;
  v10 = *(_QWORD *)(a1 + 480);
  v11 = *(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL);
  v12 = *(_DWORD *)(a2 + 68);
  v13 = *(_QWORD *)(v10 + 112);
  if ( v11 != v12 )
  {
    v14 = v12 + v11;
    v15 = *(unsigned __int8 *)(v10 + 137);
    if ( (_DWORD)v15 == v14 || v14 == *(_QWORD *)(*(_QWORD *)(v10 + 8) + 120LL) )
    {
      if ( **((_DWORD **)&a1 + 1) != 4 )
        return a5;
      v28 = *(_QWORD *)(a1 + 64);
      v29 = *(_QWORD *)(v28 + 1504);
      v30 = sub_A0BA0(v29, (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 64LL), a2 + 64, v15);
      a5 = 0;
      if ( !v30 )
        return a5;
      v31 = *(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL) + *(_DWORD *)(a2 + 68);
      v32 = sub_A8BA0(v28, (char *)(*((_QWORD *)&a1 + 1) + 64LL), v31, *(double *)a6.m128i_i64);
      a5 = 0;
      if ( !v32 )
        return a5;
      v34 = *(_BYTE *)(a2 + 32);
      if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) == 2 )
      {
        if ( v34 != 2 )
          return a5;
        v38 = sub_11FD80((char *)(*((_QWORD *)&a1 + 1) + 32LL), &v47, 0);
        LOBYTE(a5) = 0;
        if ( v38 )
        {
          if ( !v47 )
          {
            v43 = sub_11FD80((char *)(a2 + 32), &v47, 0);
            a5 = 0;
            if ( v43 )
            {
              if ( !v47 )
                return a5;
            }
          }
        }
        v46 = a5;
        v48 = 0;
        v39 = *(int *)(*((_QWORD *)&a1 + 1) + 36LL);
        v47 = 0xFFFFFFFF00000000LL;
        v45 = v39;
        __memcpy_chk();
        memcpy(&v49[v45], (const void *)(*(_QWORD *)(a2 + 40) + 16LL), *(int *)(a2 + 36));
        v40 = sub_11D360((__int64)&v47, v29, v49, v31);
        v41 = v46;
        if ( !v40 || (v42 = sub_12AB50((unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 64LL), v29, v31, 1), v41 = v46, !v42) )
        {
          v44 = v41;
          sub_11CDA0((__int64)&v47);
          return v44;
        }
        sub_11CA10((char *)(*((_QWORD *)&a1 + 1) + 32LL), (char *)&v47);
        sub_11CDA0((__int64)&v47);
      }
      else
      {
        if ( v34 == 2 )
          return a5;
        v35 = sub_A0BA0(v29, (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 32LL), a2 + 32, v33);
        a5 = 0;
        if ( !v35 )
          return a5;
        v36 = sub_A8BA0(v28, (char *)(*((_QWORD *)&a1 + 1) + 32LL), v31, *(double *)a6.m128i_i64);
        a5 = 0;
        if ( !v36 )
          return a5;
        if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) == 1 )
          return a5;
        v37 = sub_1221A0(*((__int64 *)&a1 + 1), v29, v31, 257, 1);
        a5 = 0;
        if ( !v37 )
          return a5;
      }
      *(_DWORD *)(*((_QWORD *)&a1 + 1) + 4LL) |= 0x10u;
      **((_DWORD **)&a1 + 1) = 67;
      sub_A1280(v29, *((__int64 *)&a1 + 1), *(_DWORD *)(a2 + 4));
      sub_11D5A0(a2);
    }
    else
    {
      v16 = sub_122240(a2, *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL), 0);
      a5 = 0;
      if ( !v16 )
        return a5;
      v17 = sub_11FD80((char *)(a2 + 32), &v47, 0);
      a5 = 0;
      if ( !v17 )
        return a5;
      if ( v47 )
        return a5;
      if ( !v6 )
        return a5;
      v18 = sub_32ED70((unsigned int)**((_DWORD **)&a1 + 1));
      a5 = 0;
      if ( !v18 )
        return a5;
      v19 = *(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL) - *(_DWORD *)(a2 + 68);
      v20 = sub_11CA80(v19);
      a5 = 0;
      if ( !v20 )
        return a5;
      v22 = sub_127420(a2 + 64, v13, (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 64LL), v21);
      a5 = 0;
      if ( !v22 )
        return a5;
      v47 = 0xFFFFFFFF00000000LL;
      v48 = 0;
      sub_1262E0((__int64)&v47, *((unsigned __int8 **)&a1 + 1));
      sub_12B320((__int64)&v47, v13, *(_QWORD *)(*((_QWORD *)&a1 + 1) + 24LL), v19);
      *(_DWORD *)(*((_QWORD *)&a1 + 1) + 4LL) &= ~0x10u;
      **((_DWORD **)&a1 + 1) = 9;
      sub_125180(*((_QWORD *)&a1 + 1) + 32LL, (unsigned __int8 *)&v47);
      sub_11CDA0(*((_QWORD *)&a1 + 1) + 48LL);
      sub_A1280(v13, *((__int64 *)&a1 + 1), *(_DWORD *)(a2 + 4));
      sub_11D5A0(a2);
      sub_11CDA0((__int64)&v47);
    }
    return 1;
  }
  if ( v11 >= *(_DWORD *)(v13 + 88) )
    return 0;
  v24 = *((_QWORD *)&a1 + 1) + 64LL;
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 64LL) == 8 )
  {
    v25 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 72LL);
    if ( !*(_QWORD *)(v25 + 56) )
      return 0;
    v24 = *(_QWORD *)(v25 + 48);
    if ( v11 != *(_DWORD *)(v24 + 4) )
      return 0;
  }
  v26 = sub_12CF30(*(_QWORD *)(a1 + 64), v24, (unsigned __int8 *)(a2 + 64), 0, 0, a5);
  if ( !v6 || !v26 )
    return 0;
  return sub_AC9E0(a1, a2, a3, (unsigned __int8 *)v24, v27, a6);
}

