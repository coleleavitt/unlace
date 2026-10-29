__int64 __fastcall sub_B5360(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rbp
  __int128 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  _QWORD v9[5]; // [rsp+0h] [rbp-68h] BYREF
  char v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+38h] [rbp-30h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 48);
  v13 = __readfsqword(0x28u);
  if ( v2 )
  {
    do
    {
      while ( 1 )
      {
        *((_QWORD *)&v4 + 1) = v2;
        *(_QWORD *)&v4 = a1;
        if ( !(unsigned __int8)sub_B36D0(v4) )
          break;
        ++v1;
      }
      v2 = *(_QWORD *)(v2 + 8);
    }
    while ( v2 );
    v5 = *(_QWORD *)(a1 + 480);
    v6 = *(_QWORD *)(a1 + 48);
    v10 = 0;
    *(_DWORD *)(a1 + 24) &= ~0x40u;
    v11 = v5;
    v7 = *(_QWORD *)(a1 + 64);
    v9[4] = 0;
    v9[0] = &off_4DBF50;
    v12 = 0;
    v9[1] = v7;
    v9[2] = a1;
    if ( v6 )
    {
      do
      {
        v9[3] = v6;
        while ( (unsigned int)sub_11E900((_BYTE *)v6, (__int64)v9) )
          ;
        v6 = *(_QWORD *)(v6 + 8);
      }
      while ( v6 );
      v1 += v12;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 24) &= ~0x40u;
  }
  return v1;
}

