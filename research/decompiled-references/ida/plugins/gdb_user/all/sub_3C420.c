__int64 __fastcall sub_3C420(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  unsigned int v6; // ebp
  int v8; // eax
  unsigned __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v10 = 0;
  v11 = 0;
  sub_F710(&v10);
  if ( (unsigned int)sub_39C70(a1, &v10) != 1 )
    goto LABEL_2;
  v8 = sub_39BC0(a1);
  *(_BYTE *)(a1 + 16) = 0;
  if ( v8 != 1 )
    goto LABEL_2;
  a3[1] = 0;
  a4[1] = 0;
  v9 = *(_QWORD *)(a1 + 32);
  if ( !v9 )
  {
LABEL_8:
    *(_DWORD *)(a1 + 180) = 2;
LABEL_2:
    v6 = 0;
    goto LABEL_3;
  }
  v6 = sub_37CA0(a3, *(_QWORD *)(a1 + 24), v9, a4);
  if ( !(_BYTE)v6 )
  {
    if ( *(_QWORD *)(a1 + 32) )
      goto LABEL_2;
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 180) = 1;
LABEL_3:
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v6;
}

