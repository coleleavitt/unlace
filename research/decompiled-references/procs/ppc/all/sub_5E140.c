unsigned __int64 __fastcall sub_5E140(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int16 v4; // ax
  _QWORD *v5; // rax
  bool v6; // zf
  char *v7; // rbp
  unsigned int v8; // ecx
  bool v9; // al
  __int64 *v10; // r14
  const char *v11; // rsi
  __int64 *v12; // [rsp+0h] [rbp-1B8h] BYREF
  __int128 v13; // [rsp+8h] [rbp-1B0h]
  char v14; // [rsp+18h] [rbp-1A0h]
  __int128 v15; // [rsp+20h] [rbp-198h] BYREF
  __int64 v16; // [rsp+30h] [rbp-188h]
  __int64 v17; // [rsp+38h] [rbp-180h]
  __int64 v18; // [rsp+40h] [rbp-178h]
  _BYTE v19[40]; // [rsp+48h] [rbp-170h] BYREF
  char v20; // [rsp+70h] [rbp-148h] BYREF
  _QWORD v21[6]; // [rsp+188h] [rbp-30h] BYREF

  v21[0] = __readfsqword(0x28u);
  if ( a2[1] == 1 )
  {
    v3 = *a2;
    v4 = sub_35600(*(unsigned __int16 *)(*a2 + 16LL));
    if ( v4 != -1 && (v4 & 0x400) != 0 && (v4 & 0xF) == 1 && (v4 & 0x800) == 0 )
    {
      v16 = -1;
      v17 = 0;
      v5 = v19;
      v18 = 0;
      v15 = -1;
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
      while ( v5 != v21 );
      if ( (int)decode_insn(&v15, *(_QWORD *)(v3 + 8), v21, 0.0) > 0 )
      {
        v6 = (*(_BYTE *)(v3 + 18) & 1) == 0;
        v7 = v19;
        if ( v6 )
          v7 = &v20;
        v14 = 0;
        v8 = *((unsigned __int16 *)v7 + 3);
        v12 = nullptr;
        v13 = 0;
        v9 = sub_5B9B0(a1, (__int64 *)&v12, v16, v8, 0, 0);
        v10 = v12;
        if ( v9 )
        {
          v11 = (const char *)&v12;
          if ( (unsigned __int8)sub_5DEA0(a1, (__int64)&v12, 0) )
          {
            v11 = (const char *)(unsigned __int8)v7[40];
            sub_5DA70((__int64)&v15, (unsigned int)v11, *((_QWORD *)v7 + 6), &v12);
          }
          if ( v10 )
            qfree(v10, v11);
        }
        else if ( v12 )
        {
          qfree(v12, (const char *)&v12);
        }
      }
    }
  }
  return v21[0] - __readfsqword(0x28u);
}
