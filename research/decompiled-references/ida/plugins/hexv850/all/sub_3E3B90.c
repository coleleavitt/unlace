__int64 __fastcall sub_3E3B90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // eax
  int v5; // ecx
  __int64 v6; // rdx

  if ( *(_BYTE *)a3 == 1 )
  {
    v5 = *(_DWORD *)(a3 + 8);
    v6 = *(_QWORD *)(a1 + 56);
    if ( v5 == **(_DWORD **)(v6 + 560) )
    {
      return (unsigned int)((*(_BYTE *)(a1 + 112) & 2) == 0) + 1;
    }
    else
    {
      result = 0;
      if ( v5 == *(_DWORD *)(v6 + 480) )
        return (unsigned int)((*(_BYTE *)(a1 + 112) & 8) == 0) + 1;
    }
  }
  else if ( *(_BYTE *)a3 == 5 )
  {
    v4 = *(_DWORD *)(a1 + 112);
    if ( (v4 & 1) != 0 && *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL) == *(_QWORD *)(a1 + 96) )
    {
      return 2;
    }
    else
    {
      result = v4 & 4;
      if ( (_DWORD)result )
        return 2 * (unsigned int)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL) == *(_QWORD *)(a1 + 104));
    }
  }
  else
  {
    return 0;
  }
  return result;
}

