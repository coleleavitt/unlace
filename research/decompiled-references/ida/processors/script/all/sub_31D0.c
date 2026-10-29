__int64 __fastcall sub_31D0(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v5[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v5[0] = 2;
  v6 = 0;
  v7 = 0;
  v3 = sub_4D20(a1 + 792, a3, a1 + 824, 0, 0, v5);
  if ( (_BYTE)v3 )
  {
    if ( v5[0] == 8 )
      *a2 = v6;
    else
      v3 = 0;
  }
  free_idcv();
  return v3;
}

