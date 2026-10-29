__int64 __fastcall sub_A7130(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rsi
  _QWORD *v6; // r15
  unsigned __int64 v7; // r12
  __int16 flags; // ax
  __int64 not_tail; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // r12d
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v17; // [rsp+0h] [rbp-98h] BYREF
  __int128 v18; // [rsp+8h] [rbp-90h]
  __int64 v19[6]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-48h]
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]

  v1 = a1[157];
  v21 = __readfsqword(0x28u);
  v2 = a1[158];
  v17 = 0;
  v18 = 0;
  v3 = v1 + 96 * v2;
  if ( v1 == v3 )
    return 0;
  v4 = 0;
  do
  {
    if ( (*(_BYTE *)(v1 + 88) & 0x20) != 0 && (unsigned int)(*(_DWORD *)v1 - 1) <= 3 )
    {
      v5 = v17;
      if ( *((_QWORD *)&v18 + 1) < (unsigned __int64)(v4 + 1) )
      {
        v17 = qvector_reserve((__int64)&v17, v17, v4 + 1, 24);
        v4 = v18;
        v5 = v17;
      }
      v6 = (_QWORD *)(v5 + 24 * v4);
      *v6 = 0xFFFFFFFF00000000LL;
      v6[1] = 0;
      v6[2] = -1;
      *(_QWORD *)&v18 = v18 + 1;
      if ( *(_DWORD *)v1 == 2 )
      {
        v19[0] = 0;
        sub_11D150((__int64)v6, (__int64)a1, nullptr, v19, (_DWORD *)v1);
        clear_tinfo_t();
      }
      else
      {
        sub_126420((__int64)v6, (__int64)a1, v1, *(_DWORD *)(v1 + 80));
      }
      v7 = sub_330F80(a1, *(_QWORD *)(v1 + 16));
      flags = get_flags_ex();
      not_tail = v7;
      if ( (flags & 0x600) == 0x200 )
        not_tail = prev_not_tail();
      v10 = not_tail + *(_QWORD *)(v1 + 16) - v7;
      v4 = v18;
      v6[2] = v10;
    }
    v1 += 96;
  }
  while ( v3 != v1 );
  if ( !v4 )
  {
    v11 = v17;
    if ( v17 )
    {
      v12 = 0;
LABEL_18:
      *(_QWORD *)&v18 = 0;
      qfree(v11);
      return v12;
    }
    return 0;
  }
  memset(&v19[1], 0, 32);
  v19[0] = (__int64)&off_4DBF28;
  v19[5] = (__int64)&v17;
  v20 = 0;
  sub_11F9E0((__int64)a1, v19);
  v11 = v17;
  v12 = v20;
  if ( v17 )
  {
    v13 = v18;
    if ( (_QWORD)v18 )
    {
      v14 = 0;
      do
      {
        v15 = 3 * v14++;
        sub_11CDA0(v11 + 8 * v15);
        v11 = v17;
      }
      while ( v13 != v14 );
    }
    goto LABEL_18;
  }
  return v12;
}

