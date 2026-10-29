unsigned __int64 __fastcall sub_1F17C0(__int64 a1)
{
  unsigned __int64 v1; // rsi
  int v3; // ebp
  int v4; // r13d
  __int64 v5; // rax
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  signed int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v23; // [rsp+8h] [rbp-70h]
  signed int v24; // [rsp+14h] [rbp-64h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v26[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v1 = *(int *)(a1 + 792);
  v27 = __readfsqword(0x28u);
  sub_1F1260((__int64 *)(a1 + 432), v1);
  if ( *(_QWORD *)(a1 + 464) )
  {
    v3 = 0;
    v4 = -1;
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v6 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 4 * v5);
        if ( *(_DWORD *)(a1 + 792) <= v6 )
        {
          if ( !under_debugger )
            sub_37E160(52234);
LABEL_41:
          BUG();
        }
        if ( !*(_BYTE *)(a1 + 320) )
        {
          v7 = *(_QWORD *)(a1 + 432);
          v8 = v7 + 104LL * v6;
          if ( *(_DWORD *)v8 == 1 )
            break;
        }
LABEL_3:
        v5 = ++v3;
        if ( (unsigned __int64)v3 >= *(_QWORD *)(a1 + 464) )
          goto LABEL_25;
      }
      v9 = *(int *)(v8 + 88);
      v24 = *(_DWORD *)(v8 + 88);
      if ( *(_DWORD *)v8 == 1 )
        v10 = *(_QWORD *)(v8 + 8);
      else
        v10 = -1;
      v25 = v10;
      if ( v4 == -1
        || ((v11 = v7 + 104LL * v4, *(_DWORD *)v11 != 1)
          ? (v13 = -1, v12 = -1)
          : (v12 = *(_QWORD *)(v11 + 8), v13 = v12),
            (v14 = *(int *)(v11 + 88), !*(_DWORD *)(v11 + 88)) || !v9 || v14 + v13 - 1 < v10 || v9 + v10 - 1 < v13) )
      {
        v15 = *(_QWORD *)(a1 + 816);
        v26[0] = a1 + 816;
        v26[2] = v15;
        v26[1] = v15;
        if ( (unsigned __int8)sub_223190(v26, &v25, &v24, a1) )
        {
          if ( *(_DWORD *)v8 == 1 )
            v23 = *(_QWORD *)(v8 + 8);
          else
            v23 = -1;
          v16 = v25;
          cleanup_argloc();
          *(_DWORD *)v8 = 1;
          v17 = v24;
          *(_QWORD *)(v8 + 8) = v16;
          if ( !(unsigned __int8)sub_1EAF40(a1, v8, v17) )
          {
            cleanup_argloc();
            *(_DWORD *)v8 = 1;
            *(_QWORD *)(v8 + 8) = v23;
          }
          v4 = v6;
        }
        goto LABEL_3;
      }
      v18 = v10 + v9;
      if ( v12 + v14 < v18 && !(unsigned __int8)sub_1EAF40(a1, v11, (int)v18 - (int)v12) )
      {
        if ( !under_debugger )
          sub_37E160(52597);
        goto LABEL_41;
      }
      sub_1F0A80(a1, v6);
      v5 = v3;
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(a1 + 464) );
  }
LABEL_25:
  v19 = *(_QWORD *)(a1 + 440);
  v20 = *(_QWORD *)(a1 + 432);
  v21 = v20 + 104 * v19;
  if ( v21 != v20 )
  {
    if ( ((104 * (_BYTE)v19) & 8) == 0 || (*(_DWORD *)(v20 + 24) &= ~8u, v20 += 104, v20 != v21) )
    {
      do
      {
        *(_DWORD *)(v20 + 24) &= ~8u;
        *(_DWORD *)(v20 + 128) &= ~8u;
        v20 += 208;
      }
      while ( v20 != v21 );
    }
    v19 = *(_QWORD *)(a1 + 440);
  }
  if ( *(_DWORD *)(a1 + 792) != v19 )
  {
    if ( !under_debugger )
      sub_37E160(52208);
    goto LABEL_41;
  }
  return v27 - __readfsqword(0x28u);
}

