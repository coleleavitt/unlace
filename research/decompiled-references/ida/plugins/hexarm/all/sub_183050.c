unsigned __int64 __fastcall sub_183050(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // r12
  unsigned __int8 *v6; // [rsp+8h] [rbp-50h] BYREF
  char v7[8]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v8; // [rsp+18h] [rbp-40h]
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 4 )
  {
    v4 = *(_DWORD **)(a2 + 8);
    if ( *v4 == 12 )
    {
      v5 = sub_11C2E0((__int64)v4, &v6);
      if ( v5 )
      {
        if ( *v6 == 10 && **((_BYTE **)v6 + 1) == 6 && !(unsigned __int8)is_spec_ea() )
        {
          sub_123480((__int64)v7, v6);
          *(_QWORD *)(v8 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL)
                              & (*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + *(_QWORD *)(v8 + 8));
          sub_11C450((char *)a2, v7);
          sub_11C7E0((__int64)v7);
        }
      }
    }
  }
  return v9 - __readfsqword(0x28u);
}

