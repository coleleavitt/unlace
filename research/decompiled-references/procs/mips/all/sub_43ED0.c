__int64 __fastcall sub_43ED0(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax

  if ( a2 > 0x3Fu || (result = *(_QWORD *)(a1 + 120) & (1LL << a2)) == 0 )
  {
    result = *(_QWORD *)(a1 + 72);
    v10 = result + 16LL * *(_QWORD *)(a1 + 80);
    if ( result == v10 )
      goto LABEL_17;
    while ( *(_WORD *)(result + 8) != 29 )
    {
      result += 16;
      if ( v10 == result )
        goto LABEL_17;
    }
    if ( !result )
    {
LABEL_17:
      sub_43050();
      return sub_44000();
    }
    else if ( *(_QWORD *)result <= a3 && a3 < 0 )
    {
      if ( a2 == ((*(_BYTE *)(a5 + 33) & 4) == 0 ? 30 : 17) && !*(_DWORD *)(a1 + 144) )
        *(_DWORD *)(a1 + 144) = 1;
      v11 = *(_QWORD *)(a1 + 32);
      v12 = *(_QWORD *)(a1 + 24);
      v13 = v11 + 1;
      if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v11 + 1) )
      {
        v15 = qvector_reserve(a1 + 24, v12, v13, 32);
        *(_QWORD *)(a1 + 24) = v15;
        v12 = v15;
        v11 = *(_QWORD *)(a1 + 32);
        v13 = v11 + 1;
      }
      *(_QWORD *)(a1 + 32) = v13;
      v14 = 32 * v11 + v12;
      result = *(_QWORD *)(a5 + 16);
      *(_QWORD *)(v14 + 8) = a3;
      *(_QWORD *)v14 = result;
      *(_QWORD *)(v14 + 16) = a4;
      *(_WORD *)(v14 + 24) = a2;
    }
  }
  return result;
}
