__int64 __fastcall sub_11240(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  void *v5; // rdx
  int v7; // edx
  void *v8; // rcx
  void *v9; // rdx
  int v10[2]; // [rsp+8h] [rbp-40h] BYREF
  void *v11; // [rsp+10h] [rbp-38h] BYREF
  __int64 v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v3 = a3[8];
  v13 = __readfsqword(0x28u);
  if ( (_BYTE)v3 == 17 )
  {
LABEL_2:
    v5 = &unk_1DA78;
    if ( a3[3] )
      v5 = (void *)a3[2];
    return sub_10640(a2, (__int64)&unk_1D89D, v5);
  }
  if ( (_BYTE)v3 == 32 )
  {
    v7 = -2;
  }
  else if ( (unsigned __int8)v3 > 0x20u )
  {
    v7 = -1;
    if ( (_BYTE)v3 != 33 )
      goto LABEL_2;
  }
  else if ( (_BYTE)v3 == 9 )
  {
    v7 = -3;
  }
  else
  {
    v7 = -4;
    if ( (_BYTE)v3 != 25 )
      goto LABEL_2;
  }
  v10[1] = -1;
  v10[0] = v7;
  sub_10B60((__int64)&v11, v10);
  v8 = &unk_1DA78;
  if ( v12 )
    v8 = v11;
  v9 = &unk_1DA78;
  if ( a3[3] )
    v9 = (void *)a3[2];
  sub_10640(a2, (__int64)&unk_1D885, v9, v8);
  if ( v11 )
  {
    v12 = 0;
    qfree(v11);
  }
  return v13 - __readfsqword(0x28u);
}

