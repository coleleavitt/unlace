__int64 __fastcall sub_21780(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  _QWORD v9[2]; // [rsp+0h] [rbp-1A8h] BYREF
  __int128 v10; // [rsp+10h] [rbp-198h] BYREF
  __int64 v11; // [rsp+20h] [rbp-188h]
  __int64 v12; // [rsp+28h] [rbp-180h]
  __int64 v13; // [rsp+30h] [rbp-178h]
  char v14; // [rsp+38h] [rbp-170h] BYREF
  _QWORD v15[6]; // [rsp+178h] [rbp-30h] BYREF

  v15[2] = __readfsqword(0x28u);
  v9[1] = a2;
  v11 = -1;
  v12 = 0;
  v13 = 0;
  v9[0] = a1;
  v5 = &v14;
  v10 = -1;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 40;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *((_QWORD *)v5 - 2) = 0;
  }
  while ( v15 != (_QWORD *)v5 );
  v15[0] = a3;
  v6 = getseg(a3);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 8);
  else
    v7 = v15[0];
  v15[1] = v7;
  decode_insn(&v10, v15[0], 0.0);
  result = 0;
  if ( WORD1(v12) )
  {
    if ( a4 )
    {
      if ( !(unsigned __int8)sub_212C0((__int64)v9) )
        return sub_20FC0((__int64)v9);
    }
    else if ( !(unsigned __int8)sub_20160((__int64)v9)
           && !(unsigned __int8)sub_20340((__int64)v9)
           && !(unsigned __int8)sub_20680((__int64)v9) )
    {
      return sub_20B80((__int64)v9);
    }
    return 1;
  }
  return result;
}

