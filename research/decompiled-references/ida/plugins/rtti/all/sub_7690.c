__int64 __fastcall sub_7690(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  bool v14; // zf
  char *v15; // rsi
  const char *v16; // rsi
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r12
  int flags; // eax
  const char *v21; // [rsp+0h] [rbp-48h] BYREF
  __int128 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v7 = getseg();
  if ( !v7
    || (v8 = 2LL * *(_QWORD *)(a1[5] + 368LL), v8 + 2 >= *(_QWORD *)(v7 + 8) - a3)
    || (v9 = a3 + v8, (unsigned __int8)get_byte() != 46)
    || (v11 = (unsigned int)get_byte() - 63, (unsigned __int8)v11 > 0x20u)
    || (v12 = 0x10FFFFFFDLL, !_bittest64(&v12, v11))
    || !(unsigned __int8)sub_FF50(a1[5], a1 + 8, v9)
    || !(unsigned __int8)sub_4AA0(a1, a3, v9, 0)
    || !(unsigned __int8)sub_4D90(a1, 0, a1 + 6, 0, 0)
    || !(unsigned __int8)sub_4D90(a1, *(_DWORD *)(a1[5] + 368LL), a1 + 7, 0, 0)
    || !a1[6]
    || !(unsigned __int8)is_mapped()
    || a1[7] && (!(unsigned __int8)is_debugger_on() || !(unsigned __int8)is_mapped()) )
  {
LABEL_4:
    a1[3] = 0;
    LODWORD(a3) = 0;
    *(_OWORD *)a1 = -1;
    return (unsigned int)a3;
  }
  v13 = sub_4F60(a1, 0, a2);
  if ( v13 )
  {
    LOBYTE(a3) = v13 == 1;
    return (unsigned int)a3;
  }
  v14 = a1[9] == 0;
  v21 = 0;
  v15 = (char *)&haystack;
  v22 = 0;
  if ( !v14 )
    v15 = (char *)a1[8];
  LODWORD(a3) = sub_4600((__int64)&v21, v15, 0, "??_R0", "@8");
  if ( !(_BYTE)a3 )
  {
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
    goto LABEL_4;
  }
  sub_7620(a1[5], a2, a1, a4);
  if ( (a4 & 0x10) != 0 )
  {
    v17 = *a1;
    v18 = sub_10380(a1[5], *a1, 4, "reference to RTTI's vftable", 0) + v17;
    v19 = sub_10380(a1[5], v18, 4, "internal runtime reference", 0) + v18;
    flags = get_flags_ex();
    if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x50000000 )
      create_strlit();
    sub_102C0(v19, "type descriptor name", 1);
  }
  if ( (a4 & 0x20) != 0 )
  {
    v16 = &haystack;
    if ( (_QWORD)v22 )
      v16 = v21;
    sub_10260(*a1, v16);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return (unsigned int)a3;
}
