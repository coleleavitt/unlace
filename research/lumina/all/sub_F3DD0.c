unsigned __int64 __fastcall sub_F3DD0(__int64 a1, __int64 a2, double a3)
{
  unsigned __int8 *v4; // r12
  unsigned __int8 *v5; // r13
  __int64 v6; // [rsp+0h] [rbp-68h] BYREF
  __int64 (__fastcall *v7)(__int64, __int64); // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v8)(__int64); // [rsp+10h] [rbp-58h]
  __int16 v9; // [rsp+24h] [rbp-44h]
  int v10; // [rsp+28h] [rbp-40h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( a2 && (*(_BYTE *)(a2 + 4) & 1) == 0 )
  {
    if ( *(_BYTE *)a2 == 44 )
    {
      sub_F3DD0(a1, *(_QWORD *)(a2 + 24));
      sub_F3DD0(a1, *(_QWORD *)(a2 + 16));
    }
    else if ( *(_BYTE *)a2 == 53 )
    {
      v4 = *(unsigned __int8 **)(a2 + 24);
      v5 = *(unsigned __int8 **)(a2 + 16);
      if ( *v4 == 0xA7 )
      {
        v9 = 1;
        v10 = 0;
        v7 = sub_CE7B0;
        v8 = sub_C43E0;
        if ( !v5 || (sub_CDCD0((__int64)&v6, (__int64)v5), v9) )
          sub_F3CA0(a1, (__int64)v4, v5, a2, a3);
      }
      if ( *v5 == 0xA7 )
      {
        v10 = 0;
        v9 = 1;
        v7 = sub_CE7B0;
        v8 = sub_C43E0;
        if ( !v4 || (sub_CDCD0((__int64)&v6, (__int64)v4), v9) )
          sub_F3CA0(a1, (__int64)v5, v4, a2, a3);
      }
    }
  }
  return __readfsqword(0x28u) ^ v11;
}
