__int64 __fastcall sub_3BA6E0(__int64 a1, __int64 a2, double a3, double a4, __m128i a5, double a6)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v9; // rsi
  const char *v10; // rbp
  __int64 v11; // rax
  unsigned int v12; // [rsp+Ch] [rbp-3Ch]
  const char *v13; // [rsp+10h] [rbp-38h] BYREF
  __int128 v14; // [rsp+18h] [rbp-30h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(a2 + 80) != 1 )
    return 0;
  v7 = *(_QWORD *)(a2 + 88);
  if ( *(int *)(v7 + 8) <= 69 )
  {
    v9 = *(_QWORD *)(a2 + 32);
    v13 = nullptr;
    v14 = 0;
    if ( (unsigned __int8)sub_211A70((__int64 *)&v13, v9, v7) )
    {
      v10 = v13;
      v11 = sub_38D720(a2 + 80);
      LOBYTE(result) = sub_3976F0(a2, v11, v10, 1u, 0.0, a4, a5, a6);
    }
    else
    {
      LOBYTE(result) = sub_211890(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 88));
    }
    result = (unsigned __int8)result;
    if ( v13 )
    {
      v12 = (unsigned __int8)result;
      *(_QWORD *)&v14 = 0;
      qfree((__int64)v13);
      return v12;
    }
  }
  return result;
}

