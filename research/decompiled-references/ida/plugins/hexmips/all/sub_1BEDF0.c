unsigned __int64 __fastcall sub_1BEDF0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v15[2]; // [rsp+0h] [rbp-A8h] BYREF
  int v16; // [rsp+10h] [rbp-98h]
  __int64 v17; // [rsp+18h] [rbp-90h]
  int v18; // [rsp+20h] [rbp-88h]
  __int64 (__fastcall **v19)(); // [rsp+30h] [rbp-78h]
  __int64 v20; // [rsp+38h] [rbp-70h]
  __int64 v21; // [rsp+40h] [rbp-68h]
  __int128 v22; // [rsp+48h] [rbp-60h]
  __int64 v23; // [rsp+58h] [rbp-50h]
  int v24; // [rsp+60h] [rbp-48h]
  __int64 v25; // [rsp+68h] [rbp-40h]
  unsigned __int64 v26; // [rsp+78h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v19 = off_4BEFC0;
  v20 = a2;
  v21 = 0;
  v23 = 0;
  v24 = -1;
  v25 = a4;
  v22 = 0;
  if ( a5 )
  {
    calc_tinfo_gaps();
    for_all_arglocs();
    if ( *(_DWORD *)a1 == 2 )
    {
      v7 = *(__int64 **)(a1 + 8);
      v8 = v7[1];
      if ( !v8 )
      {
        if ( !under_debugger )
          sub_37E160(51721);
        BUG();
      }
      v9 = 3 * v8;
      v10 = *v7;
      v16 = 0;
      v11 = v10 + 8 * v9 - 24;
      copy_argloc();
      v18 = *(_DWORD *)(v11 + 16);
      if ( (unsigned __int16)v18 + *(unsigned __int16 *)(v11 + 18) < a3 )
      {
        v15[0] = v25 + v17;
        v15[1] = a3 - (unsigned __int16)v18;
        sub_311E30(v20 + 16, v15, (unsigned __int16)v18, v12, v13, v14);
      }
      cleanup_argloc();
    }
  }
  else
  {
    for_all_arglocs();
  }
  v19 = off_4BEFC0;
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return v26 - __readfsqword(0x28u);
}

