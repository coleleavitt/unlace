__int64 __fastcall sub_70DD0(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD v5[2]; // [rsp+0h] [rbp-3A8h] BYREF
  _BYTE v6[360]; // [rsp+10h] [rbp-398h] BYREF
  _DWORD *v7; // [rsp+178h] [rbp-230h]
  __int64 v8; // [rsp+330h] [rbp-78h]
  __int64 v9; // [rsp+338h] [rbp-70h]
  __int64 v10; // [rsp+348h] [rbp-60h]
  __int64 v11; // [rsp+350h] [rbp-58h]
  __int64 v12; // [rsp+360h] [rbp-48h]
  __int64 v13; // [rsp+368h] [rbp-40h]
  unsigned __int64 v14; // [rsp+388h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  sub_6F900((__int64)v5, a3, a1, (__int64)&unk_8E520, 1);
  v5[0] = off_A3FD0;
  *v7 |= 0x40000u;
  qmemcpy(v6, a2, sizeof(v6));
  if ( (unsigned __int8)match_jpt((__int64)v5) && (trim_jtable(a1, a2[2], 0), *(_WORD *)(a1 + 4)) )
  {
    mark_switch_insns_jpt((__int64)v5, 0, 4);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  v5[0] = off_A4B78;
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
  return v3;
}
