__int64 __fastcall sub_1C560(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rsi
  unsigned int v7; // ecx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  bool v10; // bp
  int v11; // eax
  __int64 v12; // rdx
  int v14; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v15[5]; // [rsp+10h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v15[1] = __readfsqword(0x28u);
  v7 = 0;
  v8 = (a3 + 2LL * *(unsigned int *)(a3 + 12) + 19) & 0xFFFFFFFFFFFFFFFCLL;
  if ( v8 >= v5 )
  {
    v9 = v8 + 8LL * *(unsigned __int16 *)(a3 + 6);
    if ( v9 >= v8 )
    {
      v10 = v9 == 0 || *(unsigned int *)(*(_QWORD *)(a1 + 40) + 32LL) + v5 < v9;
      if ( !v10 )
      {
        v15[0] = a4 + v9;
        v7 = unpack_xleb128(&v14, 32, 1, v15);
        if ( (_BYTE)v7 )
        {
          v11 = v14;
          if ( v14 <= 0 )
          {
            v11 = -v14;
            v10 = v7;
          }
          v12 = v15[0];
          *(_BYTE *)(a2 + 8) = v10;
          *(_DWORD *)(a2 + 12) = v11;
          *(_QWORD *)a2 = v12;
        }
      }
    }
  }
  return v7;
}
