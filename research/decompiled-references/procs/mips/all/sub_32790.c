__int64 __fastcall sub_32790(__int64 a1, const void *a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD v6[2]; // [rsp+0h] [rbp-3C8h] BYREF
  _BYTE v7[360]; // [rsp+10h] [rbp-3B8h] BYREF
  __int64 v8; // [rsp+330h] [rbp-98h]
  __int64 v9; // [rsp+338h] [rbp-90h]
  __int64 v10; // [rsp+348h] [rbp-80h]
  __int64 v11; // [rsp+350h] [rbp-78h]
  __int64 v12; // [rsp+360h] [rbp-68h]
  __int64 v13; // [rsp+368h] [rbp-60h]
  __int64 v14; // [rsp+378h] [rbp-50h]
  unsigned __int64 v15; // [rsp+380h] [rbp-48h]
  char v16; // [rsp+388h] [rbp-40h]
  __int128 v17; // [rsp+390h] [rbp-38h]
  __int64 v18; // [rsp+3A0h] [rbp-28h]
  unsigned __int64 v19; // [rsp+3A8h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  sub_2A040((__int64)v6, a1, (__int64)&unk_597A0, 8);
  v16 = 0;
  qmemcpy(v7, a2, sizeof(v7));
  v15 = 0xFFFFFFFF00000003LL;
  v6[0] = off_69EB8;
  v18 = -1;
  v14 = a3;
  v17 = -1;
  v4 = 0;
  if ( (unsigned __int8)match_jpt(v6) )
    v4 = (unsigned __int8)sub_324A0((__int64)v6, 8u);
  v6[0] = off_74B80;
  if ( v12 )
  {
    v13 = 0;
    qfree(v12);
  }
  if ( v10 )
  {
    v11 = 0;
    qfree(v10);
  }
  if ( v8 )
  {
    v9 = 0;
    qfree(v8);
  }
  return v4;
}
