unsigned __int64 __fastcall sub_70B30(__int64 a1, __int64 *a2)
{
  size_t v2; // rax
  int i; // ebp
  size_t v4; // rax
  size_t v5; // rax
  unsigned __int64 v7; // [rsp+0h] [rbp-68h]
  _BYTE v8[5]; // [rsp+1Eh] [rbp-4Ah] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 16);
  v2 = pack_dd() - (_QWORD)v8;
  if ( v2 )
    sub_6A700(a2, v8, v2);
  if ( v7 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v4 = pack_dq() - (_QWORD)v8;
      if ( v4 )
        sub_6A700(a2, v8, v4);
      v5 = pack_dq() - (_QWORD)v8;
      if ( v5 )
        sub_6A700(a2, v8, v5);
    }
  }
  return v9 - __readfsqword(0x28u);
}

