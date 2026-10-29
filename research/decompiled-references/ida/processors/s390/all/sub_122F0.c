_BOOL8 __fastcall sub_122F0(__int64 a1, const void *a2, __int64 a3)
{
  _BOOL4 v4; // ebx
  _QWORD v6[2]; // [rsp+0h] [rbp-3A8h] BYREF
  _BYTE v7[360]; // [rsp+10h] [rbp-398h] BYREF
  __int64 v8; // [rsp+178h] [rbp-230h]
  int v9; // [rsp+210h] [rbp-198h]
  __int64 v10; // [rsp+330h] [rbp-78h]
  __int64 v11; // [rsp+338h] [rbp-70h]
  __int64 v12; // [rsp+348h] [rbp-60h]
  __int64 v13; // [rsp+350h] [rbp-58h]
  __int64 v14; // [rsp+360h] [rbp-48h]
  __int64 v15; // [rsp+368h] [rbp-40h]
  __int64 v16; // [rsp+378h] [rbp-30h]
  unsigned __int64 v17; // [rsp+388h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  sub_11C80((__int64)v6, a1, (__int64)&unk_23DB0, 0);
  v6[0] = off_2D4E8;
  qmemcpy(v7, a2, sizeof(v7));
  v9 = 0;
  v16 = a3;
  v4 = 0;
  if ( (unsigned __int8)match_jpt(v6) && *(_QWORD *)(v8 + 8) != -1 && *(_QWORD *)(v8 + 24) != -1 )
    v4 = *(_WORD *)(v8 + 4) != 0;
  v6[0] = off_2DB88;
  if ( v14 )
  {
    v15 = 0;
    qfree(v14);
  }
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
  return v4;
}

