__int64 __fastcall sub_3E4CC0(__int64 a1, int a2)
{
  unsigned __int64 *v3; // rax
  __int64 *v4; // rbx
  int v5; // edx
  __int64 result; // rax
  int v7; // edi
  __int64 v8; // rdx
  int v9; // ecx
  _DWORD *v10; // rcx
  char v11; // dl
  __int128 v12; // [rsp+0h] [rbp-198h] BYREF
  __int64 v13; // [rsp+10h] [rbp-188h]
  __int64 v14; // [rsp+18h] [rbp-180h]
  __int64 v15; // [rsp+20h] [rbp-178h]
  char v16; // [rsp+28h] [rbp-170h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-F8h] BYREF
  unsigned __int64 v18; // [rsp+168h] [rbp-30h] BYREF

  v18 = __readfsqword(0x28u);
  v12 = -1;
  v3 = (unsigned __int64 *)&v16;
  v13 = -1;
  v4 = (__int64 *)&v12;
  v14 = 0;
  v15 = 0;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( v3 != &v18 );
  v5 = decode_insn();
  result = 0;
  if ( v5 )
  {
    v7 = 0;
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
    v9 = *(_DWORD *)(v8 + 104);
    if ( (unsigned __int16)v14 >= v9 && (unsigned __int16)v14 < *(int *)(v8 + 108) )
      v7 = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 16LL * ((unsigned __int16)v14 - v9) + 8);
    v10 = dword_40A6C0;
    result = 0;
    do
    {
      v11 = *((_BYTE *)v4 + 41);
      if ( v11 == 1 )
      {
        if ( *((unsigned __int16 *)v4 + 23) == a2 )
          result = (((v7 & *v10) == 0) + 1) | (unsigned int)result;
      }
      else if ( (unsigned __int8)(v11 - 3) <= 1u && *((unsigned __int16 *)v4 + 23) == a2 )
      {
        result = (unsigned int)result | 2;
      }
      v4 += 5;
      ++v10;
    }
    while ( &v17 != v4 );
  }
  return result;
}

