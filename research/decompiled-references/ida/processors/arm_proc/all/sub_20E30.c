__int64 __fastcall sub_20E30(__int64 a1, __int64 a2, __int64 **a3)
{
  int v6; // ebp
  __int16 v7; // ax
  __int16 v8; // ax
  __int64 *v9; // r14
  __int64 *v10; // r15
  unsigned __int64 v11; // rdx
  int v12; // ecx
  int v13; // edx
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rdx
  int v18; // eax
  unsigned __int16 v19; // ax
  int v20; // eax
  int v21; // eax
  __int16 v22; // dx
  __int16 v23; // cx
  int v24; // ecx
  int v25; // edx
  __int64 *v26; // r14
  __int64 *v27; // r15
  unsigned __int64 v28; // rax
  __int64 sreg; // rax
  int v30; // eax
  int v31; // eax
  __int16 v32; // dx
  _DWORD *v33; // rdi
  _DWORD *v34; // rsi
  __int64 i; // rcx
  int v36; // eax
  int v37; // eax
  __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // rax
  int v41; // ecx
  int v42; // edx
  int v43; // esi
  __int64 v44; // rax

  if ( (*(_BYTE *)(a2 + 34) & 4) != 0 || (getinf() & 0x1006) == 0x1002 )
  {
    v6 = sub_54880(a1, a2, a3);
  }
  else
  {
    v18 = *(_DWORD *)(a1 + 212);
    if ( !*(_DWORD *)(a1 + 216) )
    {
      if ( !v18 )
        return 0;
      goto LABEL_41;
    }
    if ( v18 && (unsigned __int64)(get_sreg() - 1) > 0xFFFFFFFFFFFFFFFDLL && *(_DWORD *)(a1 + 212) )
    {
LABEL_41:
      v6 = sub_1F300(a1, a2, (__int64)a3);
      goto LABEL_3;
    }
    v6 = sub_76A90(a1, a2, a3);
  }
LABEL_3:
  if ( !v6 )
    return 0;
  v7 = *(_WORD *)(a2 + 24);
  if ( !v7 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  if ( *(_BYTE *)(a2 + 32) == 15 && v7 != 288 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 2) != 0
    || (*(_BYTE *)(a2 + 34) & 4) != 0
    || (getinf() & 0x1006) == 0x1002 )
  {
    goto LABEL_8;
  }
  v19 = *(_WORD *)(a2 + 24);
  if ( v19 == 33 )
  {
    if ( *(_BYTE *)(a2 + 41) != 1 )
      goto LABEL_8;
    v37 = *(unsigned __int16 *)(a2 + 46);
    if ( v37 != 13 && v37 != 161 )
      goto LABEL_8;
    v31 = *(_DWORD *)(a2 + 28);
    if ( (v31 & 0xD0) != 0xC0 )
      goto LABEL_8;
    v32 = 42;
LABEL_79:
    LOBYTE(v31) = v31 & 0x2F;
    *(_WORD *)(a2 + 24) = v32;
    v33 = (_DWORD *)(a2 + 40);
    v34 = (_DWORD *)(a2 + 80);
    *(_DWORD *)(a2 + 28) = v31;
    for ( i = 9; i; --i )
      *v33++ = *v34++;
    *(_BYTE *)(a2 + 81) = 0;
    goto LABEL_8;
  }
  if ( v19 > 0x21u )
  {
    if ( v19 != 34 )
      goto LABEL_8;
    if ( *(_BYTE *)(a2 + 41) != 1 )
      goto LABEL_8;
    v30 = *(unsigned __int16 *)(a2 + 46);
    if ( v30 != 13 && v30 != 161 )
      goto LABEL_8;
    v31 = *(_DWORD *)(a2 + 28);
    if ( (v31 & 0xD0) != 0x50 )
      goto LABEL_8;
    v32 = 43;
    goto LABEL_79;
  }
  if ( v19 == 32 )
  {
    if ( *(_BYTE *)(a2 + 81) == 4 )
    {
      v20 = *(unsigned __int16 *)(a2 + 86);
      if ( v20 == 13 || v20 == 161 )
      {
        v21 = *(_DWORD *)(a2 + 28);
        if ( (v21 & 0xB0) == 0x30 && *(_QWORD *)(a2 + 96) == -4 )
        {
          v22 = 43;
LABEL_53:
          LOBYTE(v21) = v21 & 0x4F;
          v23 = *(_WORD *)(a2 + 46);
          *(_WORD *)(a2 + 24) = v22;
          *(_DWORD *)(a2 + 28) = v21;
          *(_BYTE *)(a2 + 41) = 9;
          *(_QWORD *)(a2 + 64) = 1LL << v23;
          *(_BYTE *)(a2 + 81) = 0;
        }
      }
    }
  }
  else if ( v19 > 0x1Du && *(_BYTE *)(a2 + 81) == 4 )
  {
    v36 = *(unsigned __int16 *)(a2 + 86);
    if ( v36 == 13 || v36 == 161 )
    {
      v21 = *(_DWORD *)(a2 + 28);
      if ( (v21 & 0xB0) == 0x80 )
      {
        v22 = 42;
        if ( *(_QWORD *)(a2 + 96) == 4 )
          goto LABEL_53;
      }
    }
  }
LABEL_8:
  getinf_flag();
  if ( (unsigned __int8)construct_macro() )
  {
    v6 = *(unsigned __int16 *)(a2 + 26);
    if ( a3 )
    {
      v8 = *(_WORD *)(a2 + 24);
      if ( v8 != 80 )
      {
        if ( v8 != 81 )
          goto LABEL_20;
        v9 = *a3;
        if ( *a3 )
        {
          v10 = a3[1];
          v11 = v9[1];
          if ( v11 < (unsigned __int64)v10 )
          {
            v38 = *v9;
            if ( v9[2] < (unsigned __int64)v10 )
            {
              v40 = qvector_reserve();
              v11 = v9[1];
              *v9 = v40;
              v38 = v40;
            }
            memset((void *)(v38 + v11), 0, (size_t)v10 - v11);
            v9[1] = (__int64)v10;
          }
          else if ( v10 != (__int64 *)v11 )
          {
            v9[1] = (__int64)v10;
          }
        }
        if ( *(_DWORD *)(a1 + 212) && (unsigned __int64)(get_sreg() - 1) > 0xFFFFFFFFFFFFFFFDLL )
        {
          if ( (*(_BYTE *)(a2 + 34) & 4) != 0 || (getinf() & 0x1006) == 0x1002 )
          {
            sub_1DB20((__int64)a3, 24, 24, 5);
            sub_1DB20((__int64)a3, 31, 31, 29);
            sub_1DB20((__int64)a3, 54, 54, 42);
            goto LABEL_20;
          }
          v41 = 0;
          v42 = 12;
          v43 = 12;
          goto LABEL_103;
        }
        if ( (*(_BYTE *)(a2 + 30) & 4) != 0 )
        {
          sub_1DB20((__int64)a3, 11, 11, 10);
          sub_1DB20((__int64)a3, 24, 24, 16);
          v12 = 28;
          v13 = 31;
          v14 = 31;
LABEL_19:
          sub_1DB20((__int64)a3, v14, v13, v12);
          sub_1DB20((__int64)a3, 43, 43, 42);
          sub_1DB20((__int64)a3, 56, 56, 48);
          sub_1DB20((__int64)a3, 63, 63, 60);
          goto LABEL_20;
        }
        goto LABEL_72;
      }
      v24 = *(unsigned __int16 *)(a2 + 26);
      if ( !*(_DWORD *)(a1 + 212)
        || (sreg = get_sreg(),
            v24 = *(unsigned __int16 *)(a2 + 26),
            v25 = 4,
            (unsigned __int64)(sreg - 1) <= 0xFFFFFFFFFFFFFFFDLL) )
      {
        v25 = (*(_DWORD *)(a2 + 28) & 0x40000) == 0 ? 2 : 4;
      }
      if ( v25 != v24 )
      {
        v26 = *a3;
        if ( *a3 )
        {
          v27 = a3[1];
          v28 = v26[1];
          if ( v28 < (unsigned __int64)v27 )
          {
            v39 = *v26;
            if ( v26[2] < (unsigned __int64)v27 )
            {
              v44 = qvector_reserve();
              *v26 = v44;
              v39 = v44;
              v28 = v26[1];
            }
            memset((void *)(v39 + v28), 0, (size_t)v27 - v28);
            v26[1] = (__int64)v27;
          }
          else if ( v27 != (__int64 *)v28 )
          {
            v26[1] = (__int64)v27;
          }
        }
        if ( (get_flags_ex() & 0xF000000) == 0x5000000 )
        {
          if ( !*(_DWORD *)(a1 + 212) || (unsigned __int64)(get_sreg() - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            if ( (*(_BYTE *)(a2 + 30) & 4) != 0 )
            {
              sub_1DB20((__int64)a3, 4, 4, 0);
              sub_1DB20((__int64)a3, 11, 11, 10);
              sub_1DB20((__int64)a3, 24, 24, 16);
              sub_1DB20((__int64)a3, 31, 31, 28);
              v12 = 32;
              v13 = 36;
              v14 = 36;
              goto LABEL_19;
            }
LABEL_72:
            sub_1DB20((__int64)a3, 8, 8, 0);
            sub_1DB20((__int64)a3, 24, 24, 16);
            goto LABEL_20;
          }
          if ( (*(_BYTE *)(a2 + 34) & 4) == 0 && (getinf() & 0x1006) != 0x1002 )
          {
            sub_1DB20((__int64)a3, 12, 12, 0);
            v41 = 16;
            v42 = 20;
            v43 = 20;
LABEL_103:
            sub_1DB20((__int64)a3, v43, v42, v41);
            sub_1DB20((__int64)a3, 44, 44, 32);
            goto LABEL_20;
          }
          sub_1DB20((__int64)a3, 23, 23, 5);
          sub_1DB20((__int64)a3, 55, 55, 37);
        }
      }
    }
  }
LABEL_20:
  if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
    sub_1F040(a1, a2);
  if ( (unsigned __int8)sub_20D80(a1, *(_QWORD *)(a2 + 16), v6) )
    return 0;
  if ( (unsigned __int8)getinf_flag()
    && !*(_BYTE *)(a1 + 288)
    && (*(_BYTE *)(a2 + 34) & 4) == 0
    && (getinf() & 0x1006) != 0x1002
    && a3
    && v6 > 0 )
  {
    if ( !*(_DWORD *)(a1 + 212) || (v15 = get_sreg(), v16 = 4, (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDLL) )
      v16 = 2;
    a3[2] = (__int64 *)v16;
  }
  return (unsigned int)v6;
}

