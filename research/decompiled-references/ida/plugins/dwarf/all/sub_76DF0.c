unsigned __int64 __fastcall sub_76DF0(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v4; // rbp
  const char *v5; // rbx
  int v6; // ebp
  int v7; // eax
  __int64 v8; // rdi
  __int64 v10; // rax
  _QWORD *v11; // r12
  char tinfo_property; // al
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // [rsp+8h] [rbp-90h]
  __int64 v19; // [rsp+18h] [rbp-80h] BYREF
  const char *v20; // [rsp+20h] [rbp-78h] BYREF
  __int128 v21; // [rsp+28h] [rbp-70h]
  _QWORD v22[2]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v23; // [rsp+50h] [rbp-48h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 8);
  if ( (int)v4 > 1 )
    goto LABEL_2;
  v11 = *(_QWORD **)a2;
  tinfo_property = get_tinfo_property(*(_QWORD *)(*(_QWORD *)a2 + 64LL), 2);
  v13 = v11[8];
  if ( (tinfo_property & 0xF) != 0xB || (v13 & 0x100) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v13;
    v11[8] = v15;
    return v24 - __readfsqword(0x28u);
  }
  if ( (_DWORD)v4 == 1 )
  {
    v14 = v11[2];
    if ( v11[4] <= 3u )
    {
      v16 = qvector_reserve(v11 + 2, v14, 4, 1);
      v11[2] = v16;
      v14 = v16;
    }
    v11[3] = 4;
    *(_WORD *)v14 = 29281;
    *(_BYTE *)(v14 + 2) = 114;
    *(_BYTE *)(v11[2] + 3LL) = 0;
  }
  else
  {
LABEL_2:
    *(_DWORD *)(a2 + 44) |= 0x800u;
  }
  v18 = a1 + 32;
  if ( !(unsigned __int8)create_tinfo(a1 + 32, 13, 13, a2) )
    goto LABEL_27;
  v5 = a3;
  v6 = 0;
  v20 = nullptr;
  v21 = 0;
  while ( 1 )
  {
    v7 = save_tinfo(v18, 0, 0, v5, 1);
    if ( !v7 )
    {
      v8 = (__int64)v20;
      if ( v20 )
        goto LABEL_14;
      return v24 - __readfsqword(0x28u);
    }
    if ( v7 != -1 )
    {
      if ( under_debugger )
        goto LABEL_29;
      interr(30626);
LABEL_27:
      if ( !under_debugger )
        interr(30625);
LABEL_29:
      BUG();
    }
    v19 = 0;
    if ( v5 )
    {
      v23 = 256;
      v22[1] = v5;
      v22[0] = get_idati(v18, nullptr);
      if ( (unsigned __int8)create_tinfo(&v19, 61, 61, v22) )
      {
        if ( (unsigned __int8)compare_tinfo(v19, *(_QWORD *)(a1 + 32), 256) )
          break;
      }
    }
    sub_20160((__int64 *)&v20, (__int64)"%s_%d", a3, v6);
    v5 = src;
    if ( (_QWORD)v21 )
      v5 = v20;
    ++v6;
    clear_tinfo_t(&v19);
  }
  v10 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v19;
  v19 = v10;
  clear_tinfo_t(&v19);
  v8 = (__int64)v20;
  if ( !v20 )
    return v24 - __readfsqword(0x28u);
LABEL_14:
  *(_QWORD *)&v21 = 0;
  qfree(v8);
  return v24 - __readfsqword(0x28u);
}

