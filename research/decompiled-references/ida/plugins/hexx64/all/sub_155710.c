__int64 __fastcall sub_155710(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  _DWORD *v5; // rbx
  unsigned __int8 *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 v9[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( *a2 != 6 )
    return 0;
  if ( *(_QWORD *)(a1 + 32) != 1 )
    return 0;
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_BYTE *)v4 != 4 )
    return 0;
  v5 = *(_DWORD **)(v4 + 8);
  if ( *v5 != 19 || !v5 )
    return 0;
  v6 = (unsigned __int8 *)(v5 + 8);
  if ( (unsigned __int8)sub_1505D0((__int64)(v5 + 8)) )
  {
    v6 = (unsigned __int8 *)(v5 + 12);
  }
  else if ( !(unsigned __int8)sub_1505D0((__int64)(v5 + 12)) )
  {
    return 0;
  }
  v2 = sub_155660();
  if ( (_BYTE)v2 )
  {
    sub_123A40((__int64)v9, v6, v7, v8);
    sub_125180(*(unsigned __int8 **)(a1 + 24), v9);
    sub_11CDA0((__int64)v9);
    return v2;
  }
  return 0;
}

