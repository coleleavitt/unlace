__int64 __fastcall sub_BD280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rbp
  _QWORD v13[5]; // [rsp+0h] [rbp-78h] BYREF
  char v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  int v16; // [rsp+38h] [rbp-40h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 48) == 0;
  memset(&v13[1], 0, 32);
  v14 = 0;
  v13[0] = off_4D67C8;
  v15 = a1;
  v16 = 0;
  if ( v6 )
    return 1;
  v7 = 0;
  while ( 1 )
  {
    v8 = 3 * v7;
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 24 * v7);
    v10 = (_QWORD *)*v9;
    v11 = *v9 + 8LL * v9[1];
    if ( v11 != *v9 )
      break;
LABEL_7:
    v7 = ++v16;
    if ( (unsigned __int64)v16 >= *(_QWORD *)(a1 + 48) )
      return 1;
  }
  while ( !*v10 || !(unsigned int)sub_11E340(*v10, v13, v8, a4, a5, a6) )
  {
    if ( (_QWORD *)v11 == ++v10 )
      goto LABEL_7;
  }
  return 0;
}

