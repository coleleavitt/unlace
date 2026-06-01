__int64 __fastcall sub_BB70(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  unsigned __int8 v8; // [rsp+Fh] [rbp-59h]
  __int128 v9; // [rsp+10h] [rbp-58h] BYREF
  __int64 v10; // [rsp+20h] [rbp-48h]
  __int128 v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+38h] [rbp-30h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v4 = getseg();
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(a1 + 368);
  result = 0;
  if ( v5 - a3 >= v6 )
  {
    v12 = a1;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    result = sub_4AA0((unsigned __int64 *)&v9, a3, a3 + v6, 0);
    if ( (_BYTE)result )
      result = sub_4D90(&v9, 0, a2, 0, 0);
    if ( v10 )
    {
      v8 = result;
      *(_QWORD *)&v11 = 0;
      qfree();
      return v8;
    }
  }
  return result;
}
