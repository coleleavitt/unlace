__int64 __fastcall sub_11ADB0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( *(_BYTE *)a2 != 4 )
  {
    result = -1;
    if ( *(_BYTE *)a2 != 10 )
      return result;
    v3 = *(_QWORD *)(a2 + 8);
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)v4 == 12 )
  {
    if ( *(_BYTE *)(v4 + 48) == 10 )
    {
      v3 = *(_QWORD *)(v4 + 56);
LABEL_5:
      if ( v3 )
      {
        if ( *(_BYTE *)v3 == 5 )
          return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v3 + 8) + 1496LL) + 24LL) + 16LL)
               & (*(_QWORD *)(**(_QWORD **)(v3 + 8) + 1440LL) + *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8LL));
        if ( *(_BYTE *)v3 == 6 )
          return *(_QWORD *)(v3 + 8);
      }
      return -1;
    }
  }
  else if ( *(_DWORD *)v4 != 13 )
  {
    return -1;
  }
  result = -1;
  if ( *(_BYTE *)(v4 + 32) == 10 )
  {
    v3 = *(_QWORD *)(v4 + 40);
    goto LABEL_5;
  }
  return result;
}

