char __fastcall sub_9BF90(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  char v4; // al
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 1344) + 8LL) )
    return 0;
  v3 = *(_QWORD *)(a2 + 24);
  v10 = 0;
  v9 = v3;
  v4 = sub_130FB0(a1, &v9);
  v5 = v4 & 7;
  if ( v5 == 3 )
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 8) <= 1 || *(_DWORD *)a2 == 2 )
      v8 = *(_DWORD *)(a2 + 68);
    else
      v8 = *(_DWORD *)(a2 + 36);
    return v8 > 3;
  }
  else
  {
    if ( (v4 & 4) != 0 )
    {
      if ( v5 == 4 )
      {
        if ( (unsigned int)(*(_DWORD *)a2 - 8) <= 1 || *(_DWORD *)a2 == 2 )
          v7 = *(_DWORD *)(a2 + 68);
        else
          v7 = *(_DWORD *)(a2 + 36);
        return v7 > 7;
      }
    }
    else
    {
      if ( v5 == 1 )
        return 1;
      if ( v5 == 2 )
      {
        if ( (unsigned int)(*(_DWORD *)a2 - 8) <= 1 || *(_DWORD *)a2 == 2 )
          v6 = *(_DWORD *)(a2 + 68);
        else
          v6 = *(_DWORD *)(a2 + 36);
        return v6 > 1;
      }
    }
    if ( *(_BYTE *)(a2 + 32) == 4 && (unsigned __int8)sub_9BF90(a1, *(_QWORD *)(a2 + 40)) )
      return 1;
    if ( *(_BYTE *)(a2 + 48) != 4 )
      return 0;
    return sub_9BF90(a1, *(_QWORD *)(a2 + 56));
  }
}

