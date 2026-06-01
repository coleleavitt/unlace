unsigned __int64 __fastcall sub_70700(__int64 a1, double a2, double a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 *v8; // rbx
  __int64 func; // r15
  unsigned __int64 *v11; // rax
  __int64 v12; // rbp
  __int64 v13; // [rsp+30h] [rbp-1F8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-1F0h] BYREF
  __int128 v15; // [rsp+40h] [rbp-1E8h]
  __int64 v16; // [rsp+50h] [rbp-1D8h]
  int v17; // [rsp+58h] [rbp-1D0h]
  __int64 v18; // [rsp+60h] [rbp-1C8h]
  __int64 v19; // [rsp+68h] [rbp-1C0h]
  int v20; // [rsp+70h] [rbp-1B8h]
  __int128 v21; // [rsp+80h] [rbp-1A8h]
  __int64 v22; // [rsp+90h] [rbp-198h]
  __int64 v23; // [rsp+98h] [rbp-190h]
  __int64 v24; // [rsp+A0h] [rbp-188h]
  char v25; // [rsp+A8h] [rbp-180h] BYREF
  unsigned __int64 v26; // [rsp+1E8h] [rbp-40h] BYREF

  v26 = __readfsqword(0x28u);
  if ( (getinf() & 0x100) == 0 )
    return v26 - __readfsqword(0x28u);
  if ( a6 != -1 )
    goto LABEL_3;
  if ( !netnode_altval() )
  {
    func = get_func();
    while ( 1 )
    {
      a3 = NAN;
      v11 = (unsigned __int64 *)&v25;
      v22 = -1;
      v23 = 0;
      v24 = 0;
      v21 = -1;
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
      while ( &v26 != v11 );
      v12 = (get_flags_ex() & 0x10000) != 0 ? decode_prev_insn() : decode_preceding_insn();
      if ( v12 == -1 )
        break;
      if ( func )
      {
        if ( (int)get_func_chunknum() < 0 )
          break;
      }
      else if ( get_func() )
      {
        break;
      }
      if ( netnode_altval() )
      {
        a6 = v12;
        goto LABEL_10;
      }
    }
LABEL_3:
    v8 = (__int64 *)get_func();
    if ( !v8 )
      return v26 - __readfsqword(0x28u);
    goto LABEL_4;
  }
  a6 = a5;
LABEL_10:
  v8 = (__int64 *)get_func();
  if ( v8 )
  {
LABEL_4:
    v13 = a1;
    v14 = 0;
    v16 = 0;
    v17 = -1;
    v18 = a6;
    v19 = -1;
    v20 = 0;
    v15 = 0;
    if ( (unsigned __int8)sub_6FFD0((__int64)&v13) && sub_69000(a5, a6) )
    {
      if ( (int)get_func_chunknum() < 0 )
      {
        sub_69520(a5, v8);
        set_abits();
      }
      func_tail_iterator_set();
      sub_70580(a1, v8, (__int64)&v14, 0.0, a3);
    }
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree();
    }
  }
  return v26 - __readfsqword(0x28u);
}
