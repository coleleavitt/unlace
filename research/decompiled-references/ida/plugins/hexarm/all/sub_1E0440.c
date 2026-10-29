__int64 __fastcall sub_1E0440(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 result; // rax
  __int64 v4; // rax
  _DWORD v5[2]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v6; // [rsp+8h] [rbp-50h]
  __int64 v7; // [rsp+18h] [rbp-40h]
  unsigned __int64 v8; // [rsp+28h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v2 = *(_DWORD *)a1 - 43;
  if ( v2 > 9 || (*(_BYTE *)(a1 + 4) & 0x10) != 0 || *(_BYTE *)(a1 + 48) != 2 )
    return 0;
  result = 0;
  if ( *(int *)(a1 + 52) <= 8 )
  {
    v5[1] = *(_DWORD *)(a1 + 52);
    v5[0] = 0;
    v7 = 0;
    v6 = 0;
    sub_313150(a2, v5);
    sub_312F40(v5);
    v4 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL), *(unsigned int *)(a1 + 52), 0);
    sub_3135C0(a2, v2, v4);
    return 1;
  }
  return result;
}

