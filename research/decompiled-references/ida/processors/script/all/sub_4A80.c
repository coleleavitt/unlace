__int64 __fastcall sub_4A80(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char v4[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+18h] [rbp-30h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( !qword_8198 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v4[0] = 2;
  v6 = 0;
  v5 = 0;
  v2 = (*(__int64 (__fastcall **)(char *, __int64, __int64))(qword_8198 + 88))(v4, a2, a1);
  if ( (_BYTE)v2 )
    LOBYTE(v2) = v4[0] == 6;
  free_idcv();
  return v2;
}

