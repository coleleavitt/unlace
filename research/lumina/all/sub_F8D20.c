__int64 __fastcall sub_F8D20(__int64 *a1, int *a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rdx
  char v7; // r14
  _BOOL4 v8; // eax
  int v9; // ebx
  __int64 v10; // rax
  _QWORD v12[3]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v13; // [rsp+18h] [rbp-50h]
  __int128 v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v5 = *a1;
  v6 = *a3;
  v15 = __readfsqword(0x28u);
  v12[0] = a1;
  v12[2] = a2;
  v7 = *(_BYTE *)(v5 + 107);
  *(_BYTE *)(v5 + 107) = 1;
  v13 = 0;
  v12[1] = v6;
  v14 = 0;
  LODWORD(v14) = (_DWORD)&loc_80081;
  v8 = sub_E45E0((__int64)v12, a4);
  *(_BYTE *)(v5 + 107) = v7;
  if ( v8 || *a2 <= 0 )
  {
    return 0;
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = 3LL * v9++;
      if ( (int)sub_F80F0(0, *(char **)&a2[2 * v10 + 2], a4, 0xFFFFFFFF, 0.0) <= 1 )
        break;
      if ( v9 >= *a2 )
        return 0;
    }
  }
  return (unsigned int)v9;
}
