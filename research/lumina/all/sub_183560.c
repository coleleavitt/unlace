unsigned __int64 __fastcall sub_183560(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int16 v4; // ax
  unsigned __int64 v6; // rcx
  _BOOL8 v7; // rax
  unsigned __int64 v8; // rcx
  _BOOL8 v9; // rax
  unsigned __int64 v10; // rcx
  _BOOL8 v11; // rax
  unsigned __int64 v12; // rcx
  _BOOL8 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  sub_183490(a1, a2, a3);
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 560);
    v14 = 1;
    v15 = 0;
    v4 = *(_WORD *)(v3 + 24);
    if ( v4 != 15933 )
      break;
    sub_183490(a1, (__int64)&v14, 1);
    if ( *(_BYTE *)a2 )
    {
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 8) >= v15;
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 8);
      if ( (_BYTE)v14 )
        v7 = v6 >= v15;
      else
        v7 = (__int64)v6 >= (__int64)v15;
      *(_QWORD *)(a2 + 8) = v7;
    }
LABEL_9:
    *(_BYTE *)a2 = 0;
  }
  switch ( v4 )
  {
    case 15421:
      sub_183490(a1, (__int64)&v14, 1);
      if ( *(_BYTE *)a2 )
      {
        *(_QWORD *)(a2 + 8) = v15 >= *(_QWORD *)(a2 + 8);
      }
      else
      {
        v8 = *(_QWORD *)(a2 + 8);
        if ( (_BYTE)v14 )
          v9 = v15 >= v8;
        else
          v9 = (__int64)v8 <= (__int64)v15;
        *(_QWORD *)(a2 + 8) = v9;
      }
      goto LABEL_9;
    case 60:
      sub_183490(a1, (__int64)&v14, 1);
      if ( *(_BYTE *)a2 )
      {
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 8) < v15;
      }
      else
      {
        v10 = *(_QWORD *)(a2 + 8);
        if ( (_BYTE)v14 )
          v11 = v10 < v15;
        else
          v11 = (__int64)v10 < (__int64)v15;
        *(_QWORD *)(a2 + 8) = v11;
      }
      goto LABEL_9;
    case 62:
      sub_183490(a1, (__int64)&v14, 1);
      if ( *(_BYTE *)a2 )
      {
        *(_QWORD *)(a2 + 8) = v15 < *(_QWORD *)(a2 + 8);
      }
      else
      {
        v12 = *(_QWORD *)(a2 + 8);
        if ( (_BYTE)v14 )
          v13 = v15 < v12;
        else
          v13 = (__int64)v12 > (__int64)v15;
        *(_QWORD *)(a2 + 8) = v13;
      }
      goto LABEL_9;
  }
  return v16 - __readfsqword(0x28u);
}
