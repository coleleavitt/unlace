__int64 __fastcall sub_26BEA0(__int64 a1, __int64 a2, double a3)
{
  unsigned int v4; // eax
  _BOOL8 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 *v8; // r12
  __int64 *v9; // r14
  int v10; // eax
  __int64 v11; // r15
  char v12; // r12
  char v13; // r14
  int v14; // eax
  int tinfo_size; // eax
  __int64 *v16; // rsi
  char v17; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rdx
  bool v24; // r14
  __int64 v25; // [rsp+8h] [rbp-F0h]
  __int64 tinfo_property; // [rsp+18h] [rbp-E0h] BYREF
  __int128 v27; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-C8h]
  __int128 v29; // [rsp+38h] [rbp-C0h]
  __int64 v30; // [rsp+48h] [rbp-B0h]
  __int128 v31; // [rsp+50h] [rbp-A8h]
  __int128 v32; // [rsp+60h] [rbp-98h]
  __int64 v33; // [rsp+90h] [rbp-68h]
  int v34; // [rsp+98h] [rbp-60h]
  __int64 v35; // [rsp+A0h] [rbp-58h]
  char v36; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+B8h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_2:
      if ( *(_QWORD *)(a1 + 128) == -1 )
        *(_QWORD *)(a1 + 128) = *(_QWORD *)a2;
      v4 = *(_DWORD *)(a2 + 8);
      if ( v4 != 48 )
        break;
      a2 = *(_QWORD *)(a2 + 24);
    }
    if ( v4 <= 0x30 )
      break;
    if ( v4 != 52 )
      return a2;
    v11 = *(_QWORD *)(a2 + 24);
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = *(_DWORD *)(v11 + 8);
        if ( v14 == 58 )
          break;
        if ( (unsigned int)(v14 - 59) > 1 )
          goto LABEL_18;
        if ( v13 )
          goto LABEL_20;
LABEL_38:
        v13 = 1;
        if ( v14 == 59 )
        {
          if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v11 + 24) + 8LL) - 59) > 1 )
            goto LABEL_55;
          v25 = *(_QWORD *)(v11 + 24);
          tinfo_property = 0;
          a3 = 0.0;
          tinfo_property = get_tinfo_property();
          v28 = 0;
          v30 = 0;
          v33 = 1;
          v34 = -1;
          v35 = 0;
          v36 = 0;
          v27 = 0;
          v29 = 0;
          v31 = 0;
          v32 = 0;
          v24 = 0;
          if ( (unsigned int)sub_32D810(&v27, (__int64)&tinfo_property, *(unsigned int *)(v25 + 32)) != -1 )
            v24 = (unsigned __int64)v29 <= 1;
          clear_tinfo_t();
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
          clear_tinfo_t();
          if ( v24 )
          {
            v13 = 0;
            goto LABEL_20;
          }
          if ( *(_DWORD *)(v11 + 8) == 60 )
          {
            v13 = 1;
          }
          else
          {
LABEL_55:
            v12 = 1;
            v13 = 0;
          }
        }
        *(_QWORD *)&v27 = 0;
        *(_QWORD *)&v27 = get_tinfo_property();
        if ( (get_tinfo_property() & 0x3F) == 0xD )
        {
          v19 = *(unsigned int *)(v11 + 32);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL) + 24LL) == 8 )
          {
            v20 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else
          {
            if ( *(unsigned int *)(v11 + 32) > 0x7FFFFFFFuLL )
              goto LABEL_50;
            v20 = 0x7FFFFFFF;
          }
          v21 = *(_QWORD *)(a1 + 88);
          if ( v21 > v20 - v19 )
          {
LABEL_50:
            clear_tinfo_t();
            return 0;
          }
          v22 = *(_QWORD *)(a1 + 104) == -1;
          v23 = *(_QWORD *)v11;
          *(_QWORD *)(a1 + 88) = v21 + v19;
          if ( v22 )
          {
            *(_QWORD *)(a1 + 104) = v23;
            *(_DWORD *)(a1 + 112) = 0;
          }
        }
        v11 = *(_QWORD *)(v11 + 24);
        clear_tinfo_t();
      }
      do
      {
        if ( (*(_BYTE *)(v11 + 56) & 1) == 0 )
        {
          if ( !under_debugger )
            sub_383060(0xC414u, a3);
LABEL_72:
          BUG();
        }
        tinfo_size = get_tinfo_size();
        if ( tinfo_size == -1 )
        {
          if ( !under_debugger )
            sub_383060(0xC415u, a3);
          goto LABEL_72;
        }
        if ( v13 )
          goto LABEL_20;
        v16 = *(__int64 **)(v11 + 32);
        v11 = *(_QWORD *)(v11 + 24);
        v17 = sub_26B8E0(a1, v16, *(_QWORD *)v11, tinfo_size, 0, a3);
        if ( !v17 )
          return 0;
        if ( (get_tinfo_property() & 0xF) == 0xA )
        {
          v13 = v17;
          goto LABEL_20;
        }
        v14 = *(_DWORD *)(v11 + 8);
      }
      while ( v14 == 58 );
      if ( (unsigned int)(v14 - 59) <= 1 )
        goto LABEL_38;
LABEL_18:
      if ( v14 != 52 || (get_tinfo_property() & 0xF) != 0xB )
        break;
      v11 = *(_QWORD *)(v11 + 24);
    }
LABEL_20:
    if ( *(_QWORD *)(a2 + 24) == v11 )
      return a2;
    if ( v13 )
      return v11;
    if ( !v12 )
      goto LABEL_25;
    if ( *(_DWORD *)(a1 + 440) )
    {
      if ( !under_debugger )
        sub_383060(0xC416u, a3);
      goto LABEL_72;
    }
    *(_DWORD *)(a1 + 440) = 1;
LABEL_25:
    a2 = v11;
  }
  if ( v4 - 35 > 1 )
    return a2;
  v5 = v4 != 36;
  v6 = sub_26BDF0(a2, 0);
  v7 = 2 * v5 - 1;
  v8 = (__int64 *)v6;
  if ( !v6 )
    return a2;
  v9 = *(__int64 **)(a2 + 24);
  if ( (__int64 *)v6 == v9 )
  {
    v9 = *(__int64 **)(a2 + 32);
    if ( (*(_BYTE *)(v6 + 56) & 1) == 0 )
      goto LABEL_12;
  }
  else if ( (*(_BYTE *)(v6 + 56) & 1) == 0 )
  {
    goto LABEL_12;
  }
  v10 = get_tinfo_property();
  if ( v10 <= 0 )
    return 0;
  v7 *= v10;
LABEL_12:
  if ( (unsigned __int8)sub_26B8E0(a1, v9, *v8, v7, 0, a3) )
  {
    a2 = (__int64)v8;
    goto LABEL_2;
  }
  return 0;
}

