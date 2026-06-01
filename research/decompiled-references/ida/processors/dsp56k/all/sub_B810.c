__int64 __fastcall sub_B810(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int16 v4; // ax

  result = 0;
  if ( *(_DWORD *)(a1 + 600) != 1 )
  {
    if ( a3 == 3 )
      return result;
    v4 = (unsigned __int8)byte_17A20[a3];
    goto LABEL_4;
  }
  if ( a3 > 0 )
  {
    v4 = (unsigned __int8)byte_17A23[a3];
LABEL_4:
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v4;
    return 1;
  }
  return result;
}

