__int64 __fastcall sub_D59B0(__int64 *a1, double a2, __int64 a3, __int64 *a4)
{
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // [rsp+8h] [rbp-10h]

  v5 = byte_1BAD40[*(_WORD *)(*a4 + 20) & 0x3F];
  if ( v5 == 3 )
  {
    v13 = a4;
    v5 = sub_D5960(*a4);
    a4 = v13;
  }
  result = (unsigned int)(v5 - 1);
  if ( (unsigned int)result <= 1 )
  {
    sub_CD1F0(*a4);
    v11 = -1;
    if ( a2 >= 0.0 )
      v11 = a2 > 0.0;
    v12 = *a1;
    if ( (*(_WORD *)(*a1 + 20) & 0x9000) != 0 )
    {
      return sub_C9430(v12, v11, v7, v8, v9, v10);
    }
    else
    {
      *(_QWORD *)v12 = v11;
      *(_WORD *)(v12 + 20) = 4;
      return 4;
    }
  }
  return result;
}
