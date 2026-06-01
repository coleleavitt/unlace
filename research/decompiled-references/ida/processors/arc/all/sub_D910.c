unsigned __int64 __fastcall sub_D910(__int64 a1, __int64 a2, __int64 a3)
{
  int flags; // eax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  int v9; // [rsp+8h] [rbp-40h]
  int v10; // [rsp+Ch] [rbp-3Ch]
  int v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( (getinf(49) & 0x10) == 0
    || (flags = get_flags_ex(a3, 4), (flags & 0x600) != 0x400)
    || (flags & 0xF0000000) != 0x50000000 )
  {
    if ( get_cmt(0, a3, 1) <= 0 )
    {
      v8 = 24;
      v11 = 0;
      v9 = getinf(36);
      v10 = 0;
      if ( ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64 *))get_ea_name)(0, a3, 141, &v8) <= 0 )
      {
        v6 = *(_QWORD *)(a2 + 16);
        v7 = *(_QWORD *)(a1 + 120);
        v8 = a3;
        netnode_supset(v7, v6, &v8, 8, 868);
      }
    }
  }
  return v12 - __readfsqword(0x28u);
}

