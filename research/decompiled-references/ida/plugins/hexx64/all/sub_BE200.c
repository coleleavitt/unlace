__int64 __fastcall sub_BE200(__int64 a1, int a2, double a3)
{
  __int64 v3; // r15
  int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // ebp
  int v10; // esi
  _QWORD v12[5]; // [rsp+0h] [rbp-78h] BYREF
  char v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 320);
  if ( *(_QWORD *)(v3 + 1840) )
  {
    v5 = 0;
    v12[0] = &off_4DC1A8;
    v6 = 0;
    memset(&v12[1], 0, 32);
    v13 = 0;
    v14 = a2;
    do
    {
      v7 = 88 * v6;
      v8 = 88 * v6 + *(_QWORD *)(v3 + 1832);
      v9 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 )
      {
        v10 = -v9;
        if ( v9 > 0 )
          v10 = *(_DWORD *)v8;
        if ( (sub_BDFF0(a1, v10, a3) == 0) == v9 < 0
          && (unsigned int)sub_11E900((_BYTE *)(*(_QWORD *)(v3 + 1832) + v7 + 8), (__int64)v12) )
        {
          return 1;
        }
      }
      else if ( (unsigned int)sub_11E900((_BYTE *)(v8 + 8), (__int64)v12) )
      {
        return 1;
      }
      v6 = ++v5;
    }
    while ( (unsigned __int64)v5 < *(_QWORD *)(v3 + 1840) );
  }
  return 0;
}

