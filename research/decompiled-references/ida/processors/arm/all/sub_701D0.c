__int64 __fastcall sub_701D0(_DWORD *a1, const void *a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD v5[2]; // [rsp+0h] [rbp-3A8h] BYREF
  _BYTE v6[360]; // [rsp+10h] [rbp-398h] BYREF
  _DWORD *v7; // [rsp+178h] [rbp-230h]
  __int64 v8; // [rsp+188h] [rbp-220h]
  __int64 v9; // [rsp+330h] [rbp-78h]
  __int64 v10; // [rsp+338h] [rbp-70h]
  __int64 v11; // [rsp+348h] [rbp-60h]
  __int64 v12; // [rsp+350h] [rbp-58h]
  __int64 v13; // [rsp+360h] [rbp-48h]
  __int64 v14; // [rsp+368h] [rbp-40h]
  unsigned __int64 v15; // [rsp+388h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  sub_6F900((__int64)v5, a3, (__int64)a1, (__int64)&unk_8E540, 1);
  v5[0] = off_A3F00;
  *v7 |= 0x40000u;
  qmemcpy(v6, a2, sizeof(v6));
  if ( (unsigned __int8)match_jpt((__int64)v5) )
  {
    if ( v8 == -1 )
      *a1 &= ~0x200u;
    mark_switch_insns_jpt((__int64)v5, 6, 1);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  v5[0] = off_A4B78;
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
  }
  if ( v11 )
  {
    v12 = 0;
    qfree(v11);
  }
  if ( v9 )
  {
    v10 = 0;
    qfree(v9);
  }
  return v3;
}
