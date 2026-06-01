__int64 __fastcall sub_14ED80(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rcx
  int v8; // ebp
  _DWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 *v14; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 *v15; // [rsp+8h] [rbp-50h] BYREF
  char v16[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 4 )
    return 0;
  v4 = *(_DWORD **)(a2 + 8);
  if ( *v4 != 20 )
    return 0;
  v5 = sub_11C8A0((__int64)v4, &v14);
  if ( !v5 )
    return 0;
  v6 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(_DWORD *)(v5 + 4), 0);
  if ( (sub_32ABC0(-16, *(_DWORD *)(a1 + 84), 0) & ~v6) != 0 || *v14 != 4 || **((_DWORD **)v14 + 1) != 12 )
    return 0;
  sub_123A40((__int64)v16, v14, ~v6, v7);
  sub_11CDA0(a2);
  sub_11CA10((char *)a2, v16);
  sub_11CDA0((__int64)v16);
  v8 = sub_32ABC0(~v6, *(_DWORD *)(a1 + 84), 0);
  if ( *(_BYTE *)a2 == 4 )
  {
    v9 = *(_DWORD **)(a2 + 8);
    if ( *v9 == 12 )
    {
      v10 = sub_11C8A0((__int64)v9, &v15);
      v11 = v10;
      if ( v10 )
      {
        v12 = sub_14E8B0(*(_DWORD *)(v10 + 4), *(_QWORD *)(v10 + 8));
        if ( v8 == v12 )
        {
          sub_123A40((__int64)v16, v15, v12, v13);
          sub_11CDA0(a2);
          sub_11CA10((char *)a2, v16);
          sub_11CDA0((__int64)v16);
        }
        else if ( v8 < v12 )
        {
          sub_14E870(*(_DWORD *)(v11 + 4), *(__m128i **)(v11 + 8), *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL) - v8);
        }
      }
    }
  }
  return 1;
}

