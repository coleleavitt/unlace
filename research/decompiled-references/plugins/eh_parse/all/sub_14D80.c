__int64 __fastcall sub_14D80(__int64 a1, unsigned __int64 a2, int a3)
{
  _QWORD *v5; // rax
  _BOOL8 v6; // rax
  char *v7; // rsi
  __int64 v8; // rax
  char v9; // dl
  __int64 v10; // rdx
  __int64 result; // rax
  __int128 v12; // [rsp+0h] [rbp-198h] BYREF
  __int64 v13; // [rsp+10h] [rbp-188h]
  __int64 v14; // [rsp+18h] [rbp-180h]
  __int64 v15; // [rsp+20h] [rbp-178h]
  _BYTE v16[320]; // [rsp+28h] [rbp-170h] BYREF
  _QWORD v17[6]; // [rsp+168h] [rbp-30h] BYREF

  v17[0] = __readfsqword(0x28u);
  v5 = v16;
  v12 = -1;
  v13 = -1;
  v14 = 0;
  v15 = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( v17 != v5 );
  if ( (int)decode_insn(&v12, a2, v17, 0.0) > 0 && ((_WORD)v14 == 122 || (_WORD)v14 == 92) )
  {
    v6 = a3 != 1;
    v7 = (char *)&v12 + 40 * (int)v6 + 40;
    if ( (_WORD)v14 == 92 )
    {
      result = sub_14940(a1, (__int64)&v12, (_QWORD *)&v12 + 5 * (int)v6 + 5);
      if ( (unsigned __int64)(result - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        return result;
    }
    else
    {
      v8 = 40 * v6;
      v9 = v16[v8 + 1];
      if ( v9 == 1 )
        return sub_14A40(a1, (__int64)v7, a2, -1);
      if ( v9 == 5 )
      {
        v10 = *(_QWORD *)&v16[v8 + 8] + 16 * v12;
        result = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        if ( v10 == result )
          return result;
        if ( v10 != -1 )
          return v10 & result;
      }
    }
  }
  return -1;
}
