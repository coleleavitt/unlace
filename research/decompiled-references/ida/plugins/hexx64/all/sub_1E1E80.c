__int64 __fastcall sub_1E1E80(__int64 a1, int *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  _DWORD *v5; // rax
  int v6; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v7; // [rsp+10h] [rbp-48h] BYREF
  char v8; // [rsp+18h] [rbp-40h]
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 728LL) & 1) == 0 )
    return 0;
  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 728LL) & 1;
  v3 = *a2;
  v8 = 0;
  v7 = 0;
  if ( (unsigned int)(v3 - 42) > 0xA )
  {
    if ( v3 == 53 )
      return (unsigned int)sub_1DFF30((__int64)&v7, *(_QWORD *)(a1 + 1504), &v6, (__int64)(a2 + 8));
    return 0;
  }
  if ( (a2[1] & 0x10) != 0 )
    return 0;
  if ( !(unsigned __int8)sub_1DFF30((__int64)&v7, *(_QWORD *)(a1 + 1504), &v6, (__int64)(a2 + 8)) )
  {
    if ( *((_BYTE *)a2 + 32) != 4 )
      return 0;
    v5 = *((_DWORD **)a2 + 5);
    if ( *v5 != 20 && *v5 != 13 )
      return 0;
    if ( !(unsigned __int8)sub_1DFF30((__int64)&v7, *(_QWORD *)(a1 + 1504), &v6, (__int64)(v5 + 8))
      || *(_BYTE *)(*((_QWORD *)a2 + 5) + 48LL) != 2 )
    {
      return 0;
    }
  }
  if ( *a2 != 42 && *((_BYTE *)a2 + 48) != 2 )
    return (unsigned int)sub_1DFF30((__int64)&v7, *(_QWORD *)(a1 + 1504), &v6, (__int64)(a2 + 12));
  return v2;
}

