__int64 __fastcall sub_2400(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  void *v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD v10[3]; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v4 = qlread(a3, v10, 12);
  result = 0;
  if ( v4 == 12 && (v10[0] == -976827453 || v10[0] == -1010055483) )
  {
    result = 0;
    if ( v10[1] >= v10[2] )
    {
      v6 = (void *)*a1;
      if ( (unsigned __int64)a1[2] <= 0xF )
      {
        v8 = qvector_reserve(a1, v6, 16, 1);
        *a1 = v8;
        v6 = (void *)v8;
      }
      a1[1] = 16;
      qmemcpy(v6, "ARM Object File", 15);
      *(_BYTE *)(*a1 + 15) = 0;
      v7 = *a2;
      if ( (unsigned __int64)a2[2] <= 3 )
      {
        v9 = qvector_reserve(a2, v7, 4, 1);
        *a2 = v9;
        v7 = v9;
      }
      a2[1] = 4;
      *(_WORD *)v7 = 29281;
      *(_BYTE *)(v7 + 2) = 109;
      *(_BYTE *)(*a2 + 3) = 0;
      return 1;
    }
  }
  return result;
}
