__int64 __fastcall sub_328550(__int128 *a1, __int64 a2, __int64 a3)
{
  unsigned int tinfo_udt_member; // ebx
  __int128 v5; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v6; // [rsp+10h] [rbp-98h]
  __int128 v7; // [rsp+18h] [rbp-90h]
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int128 v9; // [rsp+30h] [rbp-78h]
  __int128 v10; // [rsp+40h] [rbp-68h]
  __int64 v11; // [rsp+70h] [rbp-38h]
  int v12; // [rsp+78h] [rbp-30h]
  __int64 v13; // [rsp+80h] [rbp-28h]
  char v14; // [rsp+88h] [rbp-20h]
  unsigned __int64 v15; // [rsp+98h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  v12 = -1;
  if ( !a1 )
    a1 = &v5;
  v6 = 0;
  v5 = 0;
  v8 = 0;
  v11 = 1;
  v13 = 0;
  v14 = 0;
  v7 = 0;
  v9 = 0;
  v10 = 0;
  *(_QWORD *)a1 = a3;
  tinfo_udt_member = find_tinfo_udt_member();
  clear_tinfo_t();
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return tinfo_udt_member;
}

