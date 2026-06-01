__int64 __fastcall sub_27800(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // rax
  __int64 v4; // rbx
  int i; // ebp
  __int64 v6; // rax
  __int128 v7; // [rsp+0h] [rbp-198h] BYREF
  __int64 v8; // [rsp+10h] [rbp-188h]
  __int64 v9; // [rsp+18h] [rbp-180h]
  __int64 v10; // [rsp+20h] [rbp-178h]
  char v11; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+168h] [rbp-30h] BYREF

  v12 = __readfsqword(0x28u);
  result = -1;
  if ( a2 != -1 )
  {
    v3 = (unsigned __int64 *)&v11;
    v4 = a2;
    v7 = -1;
    v8 = -1;
    v9 = 0;
    v10 = 0;
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
    while ( &v12 != v3 );
    for ( i = 0; (unsigned int)decode_insn(); ++i )
    {
      if ( (_WORD)v9 != 86 )
        break;
      if ( i == 10 )
        break;
      v6 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD))sub_74080)(a1, &v7, 0);
      if ( v6 == -1 )
        break;
      v4 = v6;
    }
    return v4;
  }
  return result;
}

