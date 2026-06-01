__int64 __fastcall sub_B740(__int64 a1, __int16 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 result; // rax
  __int64 v5; // rdx
  __int128 v6; // [rsp+0h] [rbp-188h] BYREF
  __int64 v7; // [rsp+10h] [rbp-178h]
  __int64 v8; // [rsp+18h] [rbp-170h]
  __int64 v9; // [rsp+20h] [rbp-168h]
  _BYTE v10[16]; // [rsp+28h] [rbp-160h] BYREF
  __int64 v11; // [rsp+38h] [rbp-150h]
  char v12; // [rsp+51h] [rbp-137h]
  __int16 v13; // [rsp+56h] [rbp-132h]
  _QWORD v14[4]; // [rsp+168h] [rbp-20h] BYREF

  v14[0] = __readfsqword(0x28u);
  v3 = v10;
  v6 = -1;
  v7 = -1;
  v8 = 0;
  v9 = 0;
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
  while ( v14 != v3 );
  result = decode_prev_insn(&v6, a3, 0, v14, 0.0);
  if ( result != -1 )
  {
    result = -1;
    if ( v10[1] == 2 )
    {
      if ( (_WORD)v8 == 118 )
      {
        if ( v12 != 1 || v13 != a2 )
          return result;
      }
      else if ( (_WORD)v8 != 145 || a2 != 95 )
      {
        return -1;
      }
      result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      v5 = v11 + 16 * v6;
      if ( v5 != result )
      {
        result &= v5;
        if ( v5 == -1 )
          return -1;
      }
    }
  }
  return result;
}
