__int64 __fastcall sub_20E30(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v6; // rdx
  __int64 i; // rcx
  int v8; // ebp
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 v11; // ax
  unsigned __int8 v12; // al
  __int16 v13; // ax
  __int64 *v14; // r14
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  int v27; // eax
  unsigned __int16 v28; // ax
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  __int64 *v33; // r14
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // rax
  __int64 sreg; // rax
  int v37; // eax
  int v38; // eax
  _DWORD *v39; // rdi
  _DWORD *v40; // rsi
  int v41; // eax
  int v42; // eax
  __int64 v43; // rsi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rax
  _QWORD v50[11]; // [rsp+0h] [rbp-58h] BYREF

  v50[3] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 34) & 4) != 0 || (getinf(3) & 0x1006) == 0x1002 )
  {
    v8 = sub_54880(a1, a2, a3);
  }
  else
  {
    v27 = *(_DWORD *)(a1 + 212);
    if ( !*(_DWORD *)(a1 + 216) )
    {
      if ( !v27 )
        return 0;
      goto LABEL_41;
    }
    if ( v27
      && (unsigned __int64)(get_sreg(*(_QWORD *)(a2 + 16), 20) - 1) > 0xFFFFFFFFFFFFFFFDLL
      && *(_DWORD *)(a1 + 212) )
    {
LABEL_41:
      v8 = sub_1F300(a1, a2, a3);
      goto LABEL_3;
    }
    v8 = sub_76A90(a1, a2, a3);
  }
LABEL_3:
  if ( !v8 )
    return 0;
  v11 = *(_WORD *)(a2 + 24);
  if ( !v11 )
  {
    if ( !under_debugger )
      interr(10270);
    BUG();
  }
  if ( *(_BYTE *)(a2 + 32) == 15 && v11 != 288 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 2) != 0
    || (*(_BYTE *)(a2 + 34) & 4) != 0
    || (getinf(3) & 0x1006) == 0x1002 )
  {
    goto LABEL_8;
  }
  v28 = *(_WORD *)(a2 + 24);
  if ( v28 == 33 )
  {
    if ( *(_BYTE *)(a2 + 41) != 1 )
      goto LABEL_8;
    v42 = *(unsigned __int16 *)(a2 + 46);
    if ( v42 != 13 && v42 != 161 )
      goto LABEL_8;
    v38 = *(_DWORD *)(a2 + 28);
    v6 = (unsigned __int8)v38 & 0xD0;
    if ( (_DWORD)v6 != 192 )
      goto LABEL_8;
    v6 = 42;
LABEL_79:
    LOBYTE(v38) = v38 & 0x2F;
    *(_WORD *)(a2 + 24) = v6;
    v39 = (_DWORD *)(a2 + 40);
    v40 = (_DWORD *)(a2 + 80);
    *(_DWORD *)(a2 + 28) = v38;
    for ( i = 9; i; --i )
      *v39++ = *v40++;
    *(_BYTE *)(a2 + 81) = 0;
    goto LABEL_8;
  }
  if ( v28 > 0x21u )
  {
    if ( v28 != 34 )
      goto LABEL_8;
    if ( *(_BYTE *)(a2 + 41) != 1 )
      goto LABEL_8;
    v37 = *(unsigned __int16 *)(a2 + 46);
    if ( v37 != 13 && v37 != 161 )
      goto LABEL_8;
    v38 = *(_DWORD *)(a2 + 28);
    v6 = (unsigned __int8)v38 & 0xD0;
    if ( (_DWORD)v6 != 80 )
      goto LABEL_8;
    v6 = 43;
    goto LABEL_79;
  }
  if ( v28 == 32 )
  {
    if ( *(_BYTE *)(a2 + 81) == 4 )
    {
      v29 = *(unsigned __int16 *)(a2 + 86);
      if ( v29 == 13 || v29 == 161 )
      {
        v30 = *(_DWORD *)(a2 + 28);
        v6 = (unsigned __int8)v30 & 0xB0;
        if ( (_DWORD)v6 == 48 && *(_QWORD *)(a2 + 96) == -4 )
        {
          v6 = 43;
LABEL_53:
          LOBYTE(v30) = v30 & 0x4F;
          i = *(unsigned __int16 *)(a2 + 46);
          *(_WORD *)(a2 + 24) = v6;
          *(_DWORD *)(a2 + 28) = v30;
          *(_BYTE *)(a2 + 41) = 9;
          *(_QWORD *)(a2 + 64) = 1LL << i;
          *(_BYTE *)(a2 + 81) = 0;
        }
      }
    }
  }
  else if ( v28 > 0x1Du && *(_BYTE *)(a2 + 81) == 4 )
  {
    v41 = *(unsigned __int16 *)(a2 + 86);
    if ( v41 == 13 || v41 == 161 )
    {
      v30 = *(_DWORD *)(a2 + 28);
      v6 = (unsigned __int8)v30 & 0xB0;
      if ( (_DWORD)v6 == 128 )
      {
        v6 = 42;
        if ( *(_QWORD *)(a2 + 96) == 4 )
          goto LABEL_53;
      }
    }
  }
LABEL_8:
  v12 = getinf_flag(11, 4, v6, i, v9, v10, off_9FF78, 0, a1);
  if ( (unsigned __int8)construct_macro(v50, a2, v12) )
  {
    v8 = *(unsigned __int16 *)(a2 + 26);
    if ( a3 )
    {
      v13 = *(_WORD *)(a2 + 24);
      if ( v13 != 80 )
      {
        if ( v13 != 81 )
          goto LABEL_20;
        v14 = *a3;
        if ( *a3 )
        {
          v15 = (unsigned __int64)a3[1];
          v16 = v14[1];
          if ( v16 < v15 )
          {
            v43 = *v14;
            if ( v14[2] < v15 )
            {
              v45 = qvector_reserve(*a3, v43, a3[1], 1);
              v16 = v14[1];
              *v14 = v45;
              v43 = v45;
            }
            memset((void *)(v43 + v16), 0, v15 - v16);
            v14[1] = v15;
          }
          else if ( v15 != v16 )
          {
            v14[1] = v15;
          }
        }
        if ( *(_DWORD *)(a1 + 212) && (unsigned __int64)(get_sreg(*(_QWORD *)(a2 + 16), 20) - 1) > 0xFFFFFFFFFFFFFFFDLL )
        {
          if ( (*(_BYTE *)(a2 + 34) & 4) != 0 || (getinf(3) & 0x1006) == 0x1002 )
          {
            sub_1DB20(a3, 24, 24, 5);
            sub_1DB20(a3, 31, 31, 29);
            sub_1DB20(a3, 54, 54, 42);
            goto LABEL_20;
          }
          v46 = 0;
          v47 = 12;
          v48 = 12;
          goto LABEL_103;
        }
        if ( (*(_BYTE *)(a2 + 30) & 4) != 0 )
        {
          sub_1DB20(a3, 11, 11, 10);
          sub_1DB20(a3, 24, 24, 16);
          v17 = 28;
          v18 = 31;
          v19 = 31;
LABEL_19:
          sub_1DB20(a3, v19, v18, v17);
          sub_1DB20(a3, 43, 43, 42);
          sub_1DB20(a3, 56, 56, 48);
          sub_1DB20(a3, 63, 63, 60);
          goto LABEL_20;
        }
        goto LABEL_72;
      }
      v31 = *(unsigned __int16 *)(a2 + 26);
      if ( !*(_DWORD *)(a1 + 212)
        || (sreg = get_sreg(*(_QWORD *)(a2 + 16), 20),
            v31 = *(unsigned __int16 *)(a2 + 26),
            v32 = 4,
            (unsigned __int64)(sreg - 1) <= 0xFFFFFFFFFFFFFFFDLL) )
      {
        v32 = (*(_DWORD *)(a2 + 28) & 0x40000) == 0 ? 2 : 4;
      }
      if ( v32 != v31 )
      {
        v33 = *a3;
        if ( *a3 )
        {
          v34 = (unsigned __int64)a3[1];
          v35 = v33[1];
          if ( v35 < v34 )
          {
            v44 = *v33;
            if ( v33[2] < v34 )
            {
              v49 = qvector_reserve(*a3, v44, a3[1], 1);
              *v33 = v49;
              v44 = v49;
              v35 = v33[1];
            }
            memset((void *)(v44 + v35), 0, v34 - v35);
            v33[1] = v34;
          }
          else if ( v34 != v35 )
          {
            v33[1] = v34;
          }
        }
        if ( (get_flags_ex(*(_QWORD *)(a2 + 16), 4) & 0xF000000) == 0x5000000 )
        {
          if ( !*(_DWORD *)(a1 + 212)
            || (unsigned __int64)(get_sreg(*(_QWORD *)(a2 + 16), 20) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            if ( (*(_BYTE *)(a2 + 30) & 4) != 0 )
            {
              sub_1DB20(a3, 4, 4, 0);
              sub_1DB20(a3, 11, 11, 10);
              sub_1DB20(a3, 24, 24, 16);
              sub_1DB20(a3, 31, 31, 28);
              v17 = 32;
              v18 = 36;
              v19 = 36;
              goto LABEL_19;
            }
LABEL_72:
            sub_1DB20(a3, 8, 8, 0);
            sub_1DB20(a3, 24, 24, 16);
            goto LABEL_20;
          }
          if ( (*(_BYTE *)(a2 + 34) & 4) == 0 && (getinf(3) & 0x1006) != 0x1002 )
          {
            sub_1DB20(a3, 12, 12, 0);
            v46 = 16;
            v47 = 20;
            v48 = 20;
LABEL_103:
            sub_1DB20(a3, v48, v47, v46);
            sub_1DB20(a3, 44, 44, 32);
            goto LABEL_20;
          }
          sub_1DB20(a3, 23, 23, 5);
          sub_1DB20(a3, 55, 55, 37);
        }
      }
    }
  }
LABEL_20:
  if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
    sub_1F040(a1, a2);
  if ( (unsigned __int8)sub_20D80(a1, *(_QWORD *)(a2 + 16), v8) )
    return 0;
  if ( (unsigned __int8)getinf_flag(3, 32, v20, v21, v22, v23, v50[0], v50[1], v50[2])
    && !*(_BYTE *)(a1 + 288)
    && (*(_BYTE *)(a2 + 34) & 4) == 0
    && (getinf(3) & 0x1006) != 0x1002
    && a3
    && v8 > 0 )
  {
    if ( !*(_DWORD *)(a1 + 212)
      || (v24 = get_sreg(*(_QWORD *)(a2 + 16), 20), v25 = 4, (unsigned __int64)(v24 - 1) <= 0xFFFFFFFFFFFFFFFDLL) )
    {
      v25 = 2;
    }
    a3[2] = (__int64 *)v25;
  }
  return (unsigned int)v8;
}
