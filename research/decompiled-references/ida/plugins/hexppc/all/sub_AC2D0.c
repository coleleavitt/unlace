__int64 __fastcall sub_AC2D0(__int64 a1, char *a2, __int64 a3, char a4, unsigned __int8 a5, unsigned int a6)
{
  unsigned __int8 v6; // r12
  unsigned int v7; // eax
  __int64 v10; // rdx
  signed int v11; // eax
  int v12; // ecx
  __int64 v13; // r13
  int v14; // eax
  char v15; // al
  char v16; // al
  char v17; // al
  unsigned int v18; // ebx
  char v19; // al
  char v20; // al
  unsigned int *v22; // r13
  __int64 v23; // rdx
  char v24; // al
  int v25; // r9d
  __int64 v26; // rbp
  __int64 v27; // r12
  char v28; // al
  unsigned int v29; // r13d
  char v30; // al
  char v31; // al
  char v32; // al
  char v33; // al
  char v34; // al
  char v35; // al
  __int64 v36; // rdx
  char v37; // al
  unsigned __int8 v38; // r9
  char v39; // al
  char v40; // al
  unsigned __int8 v41; // [rsp+0h] [rbp-98h]
  __int64 v42; // [rsp+10h] [rbp-88h]
  unsigned __int8 v43; // [rsp+1Fh] [rbp-79h]
  unsigned __int64 v44; // [rsp+20h] [rbp-78h] BYREF
  __int64 v45; // [rsp+28h] [rbp-70h]
  _BYTE v46[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v6 = a6;
  LOBYTE(a6) = a2 == nullptr || a3 == 0;
  if ( (_BYTE)a6 )
    return 0;
  v7 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 7 )
    return sub_AB9F0(a1, (__int64)a2, a3, a4, a5, v6);
  if ( v7 > 7 )
  {
    if ( v7 - 19 > 2 )
      return 0;
    return sub_AB9F0(a1, (__int64)a2, a3, a4, a5, v6);
  }
  if ( v7 != 4 )
    return 0;
  v10 = *(_QWORD *)(a1 + 480);
  v11 = *((_DWORD *)a2 + 17);
  v12 = *(_DWORD *)(a3 + 68);
  v13 = *(_QWORD *)(v10 + 112);
  if ( v11 != v12 )
  {
    v14 = v12 + v11;
    if ( *(unsigned __int8 *)(v10 + 137) == v14 || v14 == *(_QWORD *)(*(_QWORD *)(v10 + 8) + 120LL) )
    {
      if ( *(_DWORD *)a2 != 4 )
        return a6;
      v26 = *(_QWORD *)(a1 + 64);
      v27 = *(_QWORD *)(v26 + 1504);
      v28 = sub_9D160(v27, (__int64)(a2 + 64), a3 + 64);
      a6 = 0;
      if ( !v28 )
        return a6;
      v29 = *((_DWORD *)a2 + 17) + *(_DWORD *)(a3 + 68);
      v30 = sub_A5160(v26, a2 + 64, v29);
      a6 = 0;
      if ( !v30 )
        return a6;
      v31 = *(_BYTE *)(a3 + 32);
      if ( a2[32] == 2 )
      {
        if ( v31 != 2 )
          return a6;
        v35 = sub_11C340(a2 + 32, &v44, 0);
        LOBYTE(a6) = 0;
        if ( v35 )
        {
          if ( !v44 )
          {
            v40 = sub_11C340(a3 + 32, &v44, 0);
            a6 = 0;
            if ( v40 )
            {
              if ( !v44 )
                return a6;
            }
          }
        }
        v43 = a6;
        v45 = 0;
        v36 = *((int *)a2 + 9);
        v44 = 0xFFFFFFFF00000000LL;
        v42 = v36;
        __memcpy_chk();
        memcpy(&v46[v42], (const void *)(*(_QWORD *)(a3 + 40) + 16LL), *(int *)(a3 + 36));
        v37 = sub_119920(&v44, v27, v46, (int)v29);
        v38 = v43;
        if ( !v37 || (v39 = sub_127110(a2 + 64, v27, v29, 1), v38 = v43, !v39) )
        {
          v41 = v38;
          sub_119360(&v44);
          return v41;
        }
        sub_118FD0(a2 + 32, &v44);
        sub_119360(&v44);
      }
      else
      {
        if ( v31 == 2 )
          return a6;
        v32 = sub_9D160(v27, (__int64)(a2 + 32), a3 + 32);
        a6 = 0;
        if ( !v32 )
          return a6;
        v33 = sub_A5160(v26, a2 + 32, v29);
        a6 = 0;
        if ( !v33 )
          return a6;
        if ( a2[32] == 1 )
          return a6;
        v34 = sub_11E760(a2, v27, v29, 257, 1);
        a6 = 0;
        if ( !v34 )
          return a6;
      }
      *((_DWORD *)a2 + 1) |= 0x10u;
      *(_DWORD *)a2 = 67;
      sub_9D840(v27, (__int64)a2, *(_DWORD *)(a3 + 4));
      sub_119B60(a3);
    }
    else
    {
      v15 = sub_11E800(a3, *((_QWORD *)a2 + 1), 0);
      a6 = 0;
      if ( !v15 )
        return a6;
      v16 = sub_11C340(a3 + 32, &v44, 0);
      a6 = 0;
      if ( !v16 )
        return a6;
      if ( v44 )
        return a6;
      if ( !v6 )
        return a6;
      v17 = sub_32AA30(*(unsigned int *)a2);
      a6 = 0;
      if ( !v17 )
        return a6;
      v18 = *((_DWORD *)a2 + 17) - *(_DWORD *)(a3 + 68);
      v19 = sub_119040(v18);
      a6 = 0;
      if ( !v19 )
        return a6;
      v20 = sub_1239E0(a3 + 64, v13, a2 + 64);
      a6 = 0;
      if ( !v20 )
        return a6;
      v44 = 0xFFFFFFFF00000000LL;
      v45 = 0;
      sub_1228A0(&v44, a2);
      sub_1278E0(&v44, v13, *((_QWORD *)a2 + 3), v18);
      *((_DWORD *)a2 + 1) &= ~0x10u;
      *(_DWORD *)a2 = 9;
      sub_121740(a2 + 32);
      sub_119360(a2 + 48);
      sub_9D840(v13, (__int64)a2, *(_DWORD *)(a3 + 4));
      sub_119B60(a3);
      sub_119360(&v44);
    }
    return 1;
  }
  if ( v11 >= *(_DWORD *)(v13 + 88) )
    return 0;
  v22 = (unsigned int *)(a2 + 64);
  if ( a2[64] == 8 )
  {
    v23 = *((_QWORD *)a2 + 9);
    if ( !*(_QWORD *)(v23 + 56) )
      return 0;
    v22 = *(unsigned int **)(v23 + 48);
    if ( v11 != v22[1] )
      return 0;
  }
  v24 = sub_1294F0(*(_QWORD *)(a1 + 64), (_DWORD)v22, (int)a3 + 64, 0, 0, a6);
  if ( !v6 || !v24 )
    return 0;
  return sub_A8FA0(a1, a2, a3, a4, v22, v25);
}

