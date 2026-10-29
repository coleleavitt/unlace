__int64 __fastcall sub_14E360(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, int a4, char a5, __m128i a6)
{
  unsigned int v6; // r14d
  int v7; // ebx
  __int64 v8; // rax
  int v10; // [rsp+Ch] [rbp-2Ch]

  v6 = 0;
  if ( a4 < (int)a3 )
  {
    v7 = a3;
    if ( 8 * *(_DWORD *)(a2 + 36) > (int)a3 && (int)a3 <= 32 )
    {
      v8 = 0x100010100LL;
      LOBYTE(v6) = _bittest64(&v8, a3);
      if ( (_BYTE)v6 )
      {
        if ( a5 )
        {
          v10 = a4;
          sub_11CA10((char *)(*(_QWORD *)(a2 + 40) + 32LL), (char *)(*(_QWORD *)(a2 + 40) + 48LL));
          a4 = v10;
        }
        **(_DWORD **)(a2 + 40) = 24;
        sub_120A10(*(_QWORD *)(a2 + 40) + 48LL, a1, v7 - a4, 1, *(_QWORD *)(a2 + 24), 0);
        sub_1273B0(a2 + 32, a1, *(_QWORD *)(a2 + 24), v7 >> 3, a6);
        *(_DWORD *)a2 = 8;
        sub_11CDA0(a2 + 48);
      }
    }
  }
  return v6;
}

