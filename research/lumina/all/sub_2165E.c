__int64 __fastcall sub_2165E(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rbp

  if ( *(_BYTE *)(a1 + 16) || *(_QWORD *)(a1 + 296) )
  {
    *a2 = 1;
    return 0;
  }
  else
  {
    result = 14;
    if ( !*(_BYTE *)(a1 + 17) )
    {
      if ( *(_BYTE *)(a1 + 8) || (v3 = **(_QWORD **)(a1 + 72), result = 14, *(int *)v3 > 1) && *(_QWORD *)(v3 + 104) )
      {
        v4 = *(_QWORD *)(a1 + 80);
        if ( *(_QWORD *)v4 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(a1 + 80));
          *(_QWORD *)v4 = 0;
        }
        result = sub_D2290(a1);
        if ( !(_DWORD)result )
        {
          *(_BYTE *)(a1 + 9) = 5;
          *(_BYTE *)(a1 + 21) = 0;
        }
      }
    }
  }
  return result;
}
