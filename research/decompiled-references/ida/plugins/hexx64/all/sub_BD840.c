__int64 __fastcall sub_BD840(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rax
  _QWORD *v3; // rax
  _BYTE **v4; // rbx
  __int64 v5; // rbp
  _QWORD v7[5]; // [rsp+0h] [rbp-78h] BYREF
  char v8; // [rsp+28h] [rbp-50h]
  __int64 v9; // [rsp+30h] [rbp-48h]
  int v10; // [rsp+38h] [rbp-40h]
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 48) == 0;
  memset(&v7[1], 0, 32);
  v8 = 0;
  v7[0] = &off_4DC108;
  v9 = a1;
  v10 = 0;
  if ( v1 )
    return 1;
  v2 = 0;
  while ( 1 )
  {
    v3 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 24 * v2);
    v4 = (_BYTE **)*v3;
    v5 = *v3 + 8LL * v3[1];
    if ( v5 != *v3 )
      break;
LABEL_7:
    v2 = ++v10;
    if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 48) )
      return 1;
  }
  while ( !*v4 || !(unsigned int)sub_11E900(*v4, (__int64)v7) )
  {
    if ( (_BYTE **)v5 == ++v4 )
      goto LABEL_7;
  }
  return 0;
}

