unsigned __int64 __fastcall sub_1F6040(__int64 a1, double a2, __m128 a3)
{
  unsigned __int64 v3; // rsi
  int v5; // ebp
  int v6; // r13d
  __int64 v7; // rax
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v25; // [rsp+8h] [rbp-70h]
  int v26; // [rsp+14h] [rbp-64h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v28[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v3 = *(int *)(a1 + 792);
  v29 = __readfsqword(0x28u);
  sub_1F5AE0((__int64 *)(a1 + 432), v3);
  if ( *(_QWORD *)(a1 + 464) )
  {
    v5 = 0;
    v6 = -1;
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 4 * v7);
        if ( *(_DWORD *)(a1 + 792) <= v8 )
        {
          if ( !under_debugger )
            sub_383060(0xCC0Au, a2);
LABEL_41:
          BUG();
        }
        if ( !*(_BYTE *)(a1 + 320) )
        {
          v9 = *(_QWORD *)(a1 + 432);
          v10 = v9 + 104LL * v8;
          if ( *(_DWORD *)v10 == 1 )
            break;
        }
LABEL_3:
        v7 = ++v5;
        if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 464) )
          goto LABEL_25;
      }
      v11 = *(int *)(v10 + 88);
      v26 = *(_DWORD *)(v10 + 88);
      if ( *(_DWORD *)v10 == 1 )
        v12 = *(_QWORD *)(v10 + 8);
      else
        v12 = -1;
      v27 = v12;
      if ( v6 == -1
        || ((v13 = v9 + 104LL * v6, *(_DWORD *)v13 != 1)
          ? (v15 = -1, v14 = -1)
          : (v14 = *(_QWORD *)(v13 + 8), v15 = v14),
            (v16 = *(int *)(v13 + 88), !*(_DWORD *)(v13 + 88)) || !v11 || v16 + v15 - 1 < v12 || v11 + v12 - 1 < v15) )
      {
        v17 = *(_QWORD *)(a1 + 816);
        v28[0] = a1 + 816;
        v28[2] = v17;
        v28[1] = v17;
        if ( sub_227A10((__int64)v28, &v27, &v26, a1) )
        {
          if ( *(_DWORD *)v10 == 1 )
            v25 = *(_QWORD *)(v10 + 8);
          else
            v25 = -1;
          v18 = v27;
          cleanup_argloc();
          *(_DWORD *)v10 = 1;
          v19 = v26;
          *(_QWORD *)(v10 + 8) = v18;
          if ( !(unsigned __int8)sub_1EF7C0(a1, v10, v19, a2) )
          {
            cleanup_argloc();
            *(_DWORD *)v10 = 1;
            *(_QWORD *)(v10 + 8) = v25;
          }
          v6 = v8;
        }
        goto LABEL_3;
      }
      v20 = v12 + v11;
      if ( v14 + v16 < v20 && !(unsigned __int8)sub_1EF7C0(a1, v13, (int)v20 - (int)v14, a2) )
      {
        if ( !under_debugger )
          sub_383060(0xCD75u, a2);
        goto LABEL_41;
      }
      sub_1F5300(a1, v8, a2, a3);
      v7 = v5;
    }
    while ( (unsigned __int64)v5 < *(_QWORD *)(a1 + 464) );
  }
LABEL_25:
  v21 = *(_QWORD *)(a1 + 440);
  v22 = *(_QWORD *)(a1 + 432);
  v23 = v22 + 104 * v21;
  if ( v23 != v22 )
  {
    if ( ((104 * (_BYTE)v21) & 8) == 0 || (*(_DWORD *)(v22 + 24) &= ~8u, v22 += 104, v22 != v23) )
    {
      do
      {
        *(_DWORD *)(v22 + 24) &= ~8u;
        *(_DWORD *)(v22 + 128) &= ~8u;
        v22 += 208;
      }
      while ( v22 != v23 );
    }
    v21 = *(_QWORD *)(a1 + 440);
  }
  if ( *(_DWORD *)(a1 + 792) != v21 )
  {
    if ( !under_debugger )
      sub_383060(0xCBF0u, a2);
    goto LABEL_41;
  }
  return v29 - __readfsqword(0x28u);
}

