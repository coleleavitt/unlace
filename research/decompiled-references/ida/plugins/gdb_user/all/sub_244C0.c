__int64 __fastcall sub_244C0(__int64 a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 i; // rsi

  result = sub_243C0(a1, a2, a3, a4, a5, a6);
  if ( (_BYTE)result )
  {
    v7 = *(_QWORD *)(a1 + 1216);
    v8 = *(_QWORD *)(a2 + 104);
    for ( i = v7 + 48LL * *(_QWORD *)(a1 + 1224); i != v7; v7 += 48 )
    {
      if ( v8 >= *(_DWORD *)v7 + *(_DWORD *)(v7 + 4) )
        *(_BYTE *)(v7 + 40) = 1;
    }
  }
  return result;
}

