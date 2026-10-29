unsigned __int64 __fastcall sub_30A00(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(char *, __int64),
        __int64 a5)
{
  __int64 v7; // r15
  int v8; // eax
  bool v9; // r14
  bool v10; // al
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbp
  bool v14; // al
  __int64 (__fastcall **v16)(); // [rsp+10h] [rbp-1B8h] BYREF
  __int64 (__fastcall *v17)(char *, __int64, double); // [rsp+18h] [rbp-1B0h]
  __int128 v18; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-198h]
  __int64 v20; // [rsp+38h] [rbp-190h]
  __int64 v21; // [rsp+40h] [rbp-188h]
  char v22; // [rsp+48h] [rbp-180h] BYREF
  unsigned __int64 v23; // [rsp+188h] [rbp-40h] BYREF

  v23 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a4("PSR", a5) + 8);
  v8 = a1[49];
  v9 = v8 == 77;
  if ( !v8 )
    v9 = (unsigned int)(a1[48] - 11) <= 2;
  v10 = 1;
  if ( a1[53] )
    v10 = (unsigned __int64)(get_sreg() - 1) <= 0xFFFFFFFFFFFFFFFDLL;
  if ( !v9 )
  {
    if ( ((v7 & 0x20) != 0) == v10 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( (BYTE3(v7) & 1) != v10 )
LABEL_7:
    split_sreg_range();
LABEL_8:
  v19 = -1;
  v11 = (unsigned __int64 *)&v22;
  v20 = 0;
  v21 = 0;
  v18 = -1;
  do
  {
    *(_WORD *)v11 = 0;
    v11 += 5;
    *((_WORD *)v11 - 19) = 0;
    *((_WORD *)v11 - 18) = 0;
    *((_DWORD *)v11 - 2) = 0;
    *((_WORD *)v11 - 17) = 0;
    *((_OWORD *)v11 - 2) = 0;
    *(v11 - 2) = 0;
  }
  while ( v11 != &v23 );
  v12 = -1;
  if ( (unsigned int)decode_insn() )
  {
    v17 = (__int64 (__fastcall *)(char *, __int64, double))a4;
    v16 = off_9FFA0;
    v12 = sub_23D10((__int64)a1, (__int64)&v18, a5, (__int64)&v16, v9);
    if ( v12 != -1 )
    {
      if ( dbg && *(_DWORD *)(dbg + 16LL) == 11 && (unsigned __int8)sub_55C30(a2) != 1 && v12 > 0xFFFEFFFF )
        v12 = *(_QWORD *)(v17("LR", a5, 0.0) + 8);
      if ( !(unsigned __int8)is_debugger_memory() )
      {
        invalidate_dbgmem_config();
        is_debugger_memory();
      }
      if ( (v12 & 1) != 0 )
      {
        v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
        if ( !a1[53] )
          return v13;
      }
      else
      {
        v13 = v12 & 0xFFFFFFFFFFFFFFFCLL;
        v14 = 1;
        if ( !a1[53] )
          goto LABEL_18;
      }
      v14 = (unsigned __int64)(get_sreg() - 1) <= 0xFFFFFFFFFFFFFFFDLL;
LABEL_18:
      if ( (v12 & 1) != v14 )
        split_sreg_range();
      return v13;
    }
  }
  return v12;
}

