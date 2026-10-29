__int64 __fastcall sub_EB5B0(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // edi
  int v5; // edi
  int v7; // edi
  unsigned int v8; // eax
  int v9; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+8h] [rbp-60h]
  __int64 v11; // [rsp+10h] [rbp-58h]
  int v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  unsigned __int64 v15; // [rsp+48h] [rbp-20h]

  v3 = 3850;
  v4 = *(_DWORD *)(a2 + 24);
  v15 = __readfsqword(0x28u);
  v10 = 128;
  v11 = 1;
  v9 = 1;
  if ( off_241210(v4, 5, &v9) )
    return v3;
  v3 = 0;
  if ( (_WORD)v9 == 2 )
  {
    if ( *(_BYTE *)(a2 + 34) )
    {
      *(_BYTE *)(a2 + 35) = 1;
      return 1288;
    }
    v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 24LL);
    if ( v7 < 0 || (v12 = 1, v13 = 128, v14 = 1, off_241210(v7, 6, &v12) != -1) )
    {
      if ( (unsigned int)sub_C77F0(*(_DWORD *)(a2 + 24), 3) )
      {
        v8 = sub_EABB0(0x120Au, (__int64)"ftruncate", *(char **)(a2 + 16), 0x9BB4u);
        if ( v8 )
          return v8;
      }
      goto LABEL_4;
    }
    return 5;
  }
  if ( (_WORD)v9 == 1 )
    return 5;
LABEL_4:
  v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 24LL);
  if ( v5 >= 0 )
  {
    v12 = 0;
    v13 = 128;
    v14 = 1;
    if ( off_241210(v5, 6, &v12) == -1 )
      return 5;
  }
  return v3;
}
