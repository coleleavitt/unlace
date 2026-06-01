__int64 __fastcall sub_15C80(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int128 v5; // [rsp+0h] [rbp-178h] BYREF
  __int64 v6; // [rsp+10h] [rbp-168h]
  __int64 v7; // [rsp+18h] [rbp-160h]
  __int64 v8; // [rsp+20h] [rbp-158h]
  _BYTE v9[16]; // [rsp+28h] [rbp-150h] BYREF
  __int64 v10; // [rsp+38h] [rbp-140h]
  _QWORD v11[2]; // [rsp+168h] [rbp-10h] BYREF

  v11[0] = __readfsqword(0x28u);
  if ( (~((unsigned __int16)get_flags_ex(a1, 4, a3) >> 8) & 6) != 0 )
    return -1;
  v6 = -1;
  v4 = v9;
  v7 = 0;
  v8 = 0;
  v5 = -1;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( v11 != v4 );
  if ( (int)decode_insn(&v5, a1, v11, 0.0) > 0 && (_WORD)v7 == 86 && v9[1] == 7 )
    return v10;
  else
    return -1;
}

