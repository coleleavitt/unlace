__int64 __fastcall sub_CD70(__int64 a1, const void *a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-3A8h] BYREF
  _BYTE v7[360]; // [rsp+10h] [rbp-398h] BYREF
  int v8; // [rsp+210h] [rbp-198h]
  __int64 v9; // [rsp+330h] [rbp-78h]
  __int64 v10; // [rsp+338h] [rbp-70h]
  __int64 v11; // [rsp+348h] [rbp-60h]
  __int64 v12; // [rsp+350h] [rbp-58h]
  __int64 v13; // [rsp+360h] [rbp-48h]
  __int64 v14; // [rsp+368h] [rbp-40h]
  __int64 v15; // [rsp+378h] [rbp-30h]
  __int64 v16; // [rsp+380h] [rbp-28h]
  unsigned __int64 v17; // [rsp+388h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  sub_C6C0((__int64)&v6, a1, (__int64)qword_10340, 0);
  v6 = off_139E0;
  qmemcpy(v7, a2, sizeof(v7));
  v16 = -1;
  v8 = 0;
  v15 = a3;
  v4 = 0;
  if ( (unsigned __int8)match_jpt() )
  {
    if ( v16 != -1 )
      op_offset();
    mark_switch_insns_jpt();
    v4 = 1;
  }
  v6 = off_13BB8;
  if ( v13 )
  {
    v14 = 0;
    qfree();
  }
  if ( v11 )
  {
    v12 = 0;
    qfree();
  }
  if ( v9 )
  {
    v10 = 0;
    qfree();
  }
  return v4;
}

