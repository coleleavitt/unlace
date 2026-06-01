__int64 __fastcall sub_20260(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  _UNKNOWN **v10; // [rsp+0h] [rbp-38h] BYREF
  int v11; // [rsp+8h] [rbp-30h]
  __int64 v12; // [rsp+10h] [rbp-28h]
  __int64 v13; // [rsp+18h] [rbp-20h]
  unsigned __int64 v14; // [rsp+28h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  v12 = a2;
  v11 = 1;
  v10 = &off_97308;
  v13 = -1;
  sub_1F810(a1, (__int64)&v10);
  if ( v13 == -1 )
    return v14 - __readfsqword(0x28u);
  v4 = sub_1D1B0((int *)a1, v13);
  if ( v4 == -1 )
    return v14 - __readfsqword(0x28u);
  v5 = *(_QWORD **)(a1 + 1416);
  v6 = a1 + 1408;
  if ( !v5 )
    return v14 - __readfsqword(0x28u);
  v7 = (_QWORD *)(a1 + 1408);
  do
  {
    while ( 1 )
    {
      v8 = v5[2];
      v9 = v5[3];
      if ( v5[4] >= v4 )
        break;
      v5 = (_QWORD *)v5[3];
      if ( !v9 )
        goto LABEL_9;
    }
    v7 = v5;
    v5 = (_QWORD *)v5[2];
  }
  while ( v8 );
LABEL_9:
  if ( (_QWORD *)v6 == v7 || v4 < v7[4] )
    return v14 - __readfsqword(0x28u);
  else
    return sub_598E0(a1, v7 + 5);
}

