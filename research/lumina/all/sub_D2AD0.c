__int64 __fastcall sub_D2AD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx

  result = sub_D2AA0(a1, a2, (_QWORD *)(a3 + 8));
  v5 = *(_QWORD *)(a3 + 8);
  if ( v5 )
  {
    *(_QWORD *)a3 = v5 + 0x4000;
    if ( (_DWORD)a2 )
    {
      *(_DWORD *)(a3 + 16) = ((_DWORD)a2 << 12) - 34;
    }
    else
    {
      *(_DWORD *)(a3 + 16) = 0;
      *(_QWORD *)(a3 + 8) = v5 + 136;
    }
  }
  else if ( !(_DWORD)result )
  {
    return 1;
  }
  return result;
}
